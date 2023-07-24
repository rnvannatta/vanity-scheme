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
static struct { VBlob sym; char bytes[23]; } _V10string_D1537 = { { VSTRING, 23 }, "_V0vanity_V0assert_V20" };
static struct { VBlob sym; char bytes[41]; } _V10string_D1536 = { { VSTRING, 41 }, "Assertion failed: ~A is not equal to ~A\n" };
static struct { VBlob sym; char bytes[13]; } _V0assert__equal = { { VSYMBOL, 13 }, "assert-equal" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1535 = { { VSTRING, 21 }, "_V0scheme_V0r7rs_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1534 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[1]; } _V10string_D1533 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1532 = { { VSTRING, 3 }, "#(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1531 = { { VSTRING, 2 }, "(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1530 = { { VSTRING, 2 }, ")" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1529 = { { VSTRING, 4 }, " . " };
static struct { VBlob sym; char bytes[3]; } _V0ok = { { VSYMBOL, 3 }, "ok" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1528 = { { VSTRING, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10string_D1527 = { { VSTRING, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[41]; } _V10string_D1526 = { { VSTRING, 41 }, "printf: format string has trailing tilde" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1525 = { { VSTRING, 8 }, "error: " };
static struct { VBlob sym; char bytes[2]; } _V10string_D1524 = { { VSTRING, 2 }, ":" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1523 = { { VSTRING, 2 }, " " };
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
static struct { VBlob sym; char bytes[18]; } _V10vcore_Dlibraries = { { VSYMBOL, 18 }, "##vcore.libraries" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1522 = { { VSTRING, 9 }, "library " };
static struct { VBlob sym; char bytes[21]; } _V10string_D1521 = { { VSTRING, 21 }, ": symbol not found: " };
static void VMakeImport_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to VMakeImport_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)VMakeImport_k1, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.4 1 0) (quote ()) (bruijn args 3 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VNULL,
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k7, runtime, upenv, 1, argc, _var0) {
  // (##sys.abort (bruijn ##k.6 6 0))
    V_CALL_FUNC(VAbort2, NULL, runtime,
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0loop_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.newline (close _V0loop_k7) (bruijn stdout 4 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k7, env)}),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0loop_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.display-word (close _V0loop_k6) (bruijn x 6 1) (bruijn stdout 3 0))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k6, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0loop_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.display-word (close _V0loop_k5) (##string ##string.1521) (bruijn stdout 2 0))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k5, env)}),
      VEncodePointer(&_V10string_D1521.sym, VPOINTER_OTHER),
      upenv->up->vars[0]
    );
 }
}
static void _V0loop_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.display-word (close _V0loop_k4) (bruijn lib 5 1) (bruijn stdout 1 0))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k4, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0]
    );
 }
}
static void _V0loop_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.display-word (close _V0loop_k3) (##string ##string.1522) (bruijn stdout 0 0))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k3, env)}),
      VEncodePointer(&_V10string_D1522.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k8, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.16 0 0) ((bruijn ##k.6 1 0) (##inline ##sys.cdr (##inline ##sys.car (bruijn args 1 1)))) ((bruijn loop 2 1) (bruijn ##k.6 1 0) (##inline ##sys.cdr (bruijn args 1 1)) (bruijn rest 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VInlineCdr(
VInlineCar(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )
,
      upenv->vars[2]
    );
}
 }
}
static void _V0loop_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn args 0 1)) (if (##inline ##sys.null? (bruijn rest 0 2)) (##sys.dup-stdout (close _V0loop_k2)) ((bruijn loop 1 1) (bruijn ##k.6 0 0) (##inline ##sys.car (bruijn rest 0 2)) (##inline ##sys.cdr (bruijn rest 0 2)))) (##sys.symbol=? (close _V0loop_k8) (bruijn x 2 1) (##inline ##sys.car (##inline ##sys.car (bruijn args 0 1)))))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
if(VDecodeBool(
VInlineNullP(
_var2
    )
)) {
    V_CALL_FUNC(VDupStdout2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k2, env)})
    );
} else {
V_CALL(upenv->vars[1], runtime,
      _var0,
      VInlineCar(
_var2
    )
,
      VInlineCdr(
_var2
    )

    );
}
} else {
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k8, env)}),
      upenv->up->vars[1],
      VInlineCar(
VInlineCar(
_var1
    )

    )

    );
}
 }
}
static void VMakeImport_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)VMakeImport_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close VMakeImport_k1) (bruijn loop 0 1) (close _V0loop_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VMakeImport_k1, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda4, env)})
    );
 }
}
static void VMakeImport_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to VMakeImport_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)VMakeImport_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close VMakeImport_lambda3) (bruijn ##k.3 0 0) #f)
V_CALL_FUNC(VMakeImport_lambda3, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void VMakeImport_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VError("Not enough arguments to VMakeImport_lambda1, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)VMakeImport_lambda1, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn ##k.2 0 0) (close VMakeImport_lambda2))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VMakeImport_lambda2, env)})
    );
 }
}
static void VLoadLibrary_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to VLoadLibrary_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)VLoadLibrary_k12, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.21 4 0) (##inline ##sys.cdr (##inline ##sys.car ##vcore.libraries)))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCdr(
VInlineCar(
VLookupGlobalVarFast("##vcore.libraries")
    )

    )

    );
 }
}
static void VLoadLibrary_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to VLoadLibrary_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)VLoadLibrary_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close VLoadLibrary_k12) ##vcore.libraries (##inline ##sys.cons (##inline ##sys.cons (bruijn lib 3 1) (bruijn ##x.26 0 0)) ##vcore.libraries))
    V_CALL_FUNC(VSetGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VLoadLibrary_k12, env)}),
      VEncodePointer(&_V10vcore_Dlibraries.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->up->up->vars[1],
      _var0
    )
,
      VLookupGlobalVarFast("##vcore.libraries")
    )

    );
 }
}
static void VLoadLibrary_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to VLoadLibrary_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)VLoadLibrary_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##x.27 0 0) (close VLoadLibrary_k11))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VLoadLibrary_k11, env)})
    );
 }
}
static void VLoadLibrary_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to VLoadLibrary_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)VLoadLibrary_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn lookup 0 0) ((bruijn ##k.21 1 0) (bruijn lookup 0 0)) (##vcore.function (close VLoadLibrary_k10) (bruijn lib 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0
    );
} else {
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VLoadLibrary_k10, env)}),
      upenv->vars[1]
    );
}
 }
}
static void VLoadLibrary_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to VLoadLibrary_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)VLoadLibrary_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.lookup-library (close VLoadLibrary_k9) (bruijn lib 0 1))
    V_CALL_FUNC(VLookupLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VLoadLibrary_k9, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.30 144 0) (##inline ##sys.cons (##inline ##sys.cons (quote null?) (bruijn null? 144 1)) (##inline ##sys.cons (##inline ##sys.cons (quote eof-object?) (bruijn eof-object? 144 3)) (##inline ##sys.cons (##inline ##sys.cons (quote boolean?) (bruijn boolean? 144 2)) (##inline ##sys.cons (##inline ##sys.cons (quote pair?) (bruijn pair? 144 4)) (##inline ##sys.cons (##inline ##sys.cons (quote vector?) (bruijn vector? 144 5)) (##inline ##sys.cons (##inline ##sys.cons (quote procedure?) (bruijn procedure? 144 6)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol?) (bruijn symbol? 144 7)) (##inline ##sys.cons (##inline ##sys.cons (quote string?) (bruijn string? 144 8)) (##inline ##sys.cons (##inline ##sys.cons (quote exact?) (bruijn exact? 144 10)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact?) (bruijn inexact? 144 12)) (##inline ##sys.cons (##inline ##sys.cons (quote real?) (bruijn real? 144 13)) (##inline ##sys.cons (##inline ##sys.cons (quote integer?) (bruijn integer? 144 11)) (##inline ##sys.cons (##inline ##sys.cons (quote char?) (bruijn char? 144 9)) (##inline ##sys.cons (##inline ##sys.cons (quote eq?) (bruijn eq? 144 14)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol=?) (bruijn symbol=? 144 15)) (##inline ##sys.cons (##inline ##sys.cons (quote eqv?) (bruijn eqv? 144 16)) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (bruijn equal? 144 17)) (##inline ##sys.cons (##inline ##sys.cons (quote not) (bruijn not 144 18)) (##inline ##sys.cons (##inline ##sys.cons (quote <) (bruijn < 144 19)) (##inline ##sys.cons (##inline ##sys.cons (quote =) (bruijn = 144 20)) (##inline ##sys.cons (##inline ##sys.cons (quote >) (bruijn > 144 21)) (##inline ##sys.cons (##inline ##sys.cons (quote <=) (bruijn <= 144 22)) (##inline ##sys.cons (##inline ##sys.cons (quote >=) (bruijn >= 144 23)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact) (bruijn inexact 144 24)) (##inline ##sys.cons (##inline ##sys.cons (quote exact->inexact) (bruijn exact->inexact 144 25)) (##inline ##sys.cons (##inline ##sys.cons (quote number?) (bruijn number? 144 26)) (##inline ##sys.cons (##inline ##sys.cons (quote complex?) (bruijn complex? 144 27)) (##inline ##sys.cons (##inline ##sys.cons (quote +) (bruijn + 144 28)) (##inline ##sys.cons (##inline ##sys.cons (quote -) (bruijn - 144 29)) (##inline ##sys.cons (##inline ##sys.cons (quote *) (bruijn * 144 30)) (##inline ##sys.cons (##inline ##sys.cons (quote /) (bruijn / 144 31)) (##inline ##sys.cons (##inline ##sys.cons (quote quotient) (bruijn quotient 144 32)) (##inline ##sys.cons (##inline ##sys.cons (quote remainder) (bruijn remainder 144 33)) (##inline ##sys.cons (##inline ##sys.cons (quote max) (bruijn max 144 34)) (##inline ##sys.cons (##inline ##sys.cons (quote min) (bruijn min 144 35)) (##inline ##sys.cons (##inline ##sys.cons (quote cons) (bruijn cons 144 36)) (##inline ##sys.cons (##inline ##sys.cons (quote car) (bruijn car 144 37)) (##inline ##sys.cons (##inline ##sys.cons (quote cdr) (bruijn cdr 144 38)) (##inline ##sys.cons (##inline ##sys.cons (quote set-car!) (bruijn set-car! 144 39)) (##inline ##sys.cons (##inline ##sys.cons (quote set-cdr!) (bruijn set-cdr! 144 40)) (##inline ##sys.cons (##inline ##sys.cons (quote caar) (bruijn caar 144 41)) (##inline ##sys.cons (##inline ##sys.cons (quote cadr) (bruijn cadr 144 42)) (##inline ##sys.cons (##inline ##sys.cons (quote cdar) (bruijn cdar 144 43)) (##inline ##sys.cons (##inline ##sys.cons (quote cddr) (bruijn cddr 144 44)) (##inline ##sys.cons (##inline ##sys.cons (quote caaar) (bruijn caaar 144 45)) (##inline ##sys.cons (##inline ##sys.cons (quote caadr) (bruijn caadr 144 46)) (##inline ##sys.cons (##inline ##sys.cons (quote cadar) (bruijn cadar 144 47)) (##inline ##sys.cons (##inline ##sys.cons (quote caddr) (bruijn caddr 144 48)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaar) (bruijn cdaar 144 49)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadr) (bruijn cdadr 144 50)) (##inline ##sys.cons (##inline ##sys.cons (quote cddar) (bruijn cddar 144 51)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddr) (bruijn cdddr 144 52)) (##inline ##sys.cons (##inline ##sys.cons (quote caaaar) (bruijn caaaar 144 53)) (##inline ##sys.cons (##inline ##sys.cons (quote caaadr) (bruijn caaadr 144 54)) (##inline ##sys.cons (##inline ##sys.cons (quote caadar) (bruijn caadar 144 55)) (##inline ##sys.cons (##inline ##sys.cons (quote caaddr) (bruijn caaddr 144 56)) (##inline ##sys.cons (##inline ##sys.cons (quote cadaar) (bruijn cadaar 144 57)) (##inline ##sys.cons (##inline ##sys.cons (quote cadadr) (bruijn cadadr 144 58)) (##inline ##sys.cons (##inline ##sys.cons (quote caddar) (bruijn caddar 144 59)) (##inline ##sys.cons (##inline ##sys.cons (quote cadddr) (bruijn cadddr 144 60)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaaar) (bruijn cdaaar 144 61)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaadr) (bruijn cdaadr 144 62)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadar) (bruijn cdadar 144 63)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaddr) (bruijn cdaddr 144 64)) (##inline ##sys.cons (##inline ##sys.cons (quote cddaar) (bruijn cddaar 144 65)) (##inline ##sys.cons (##inline ##sys.cons (quote cddadr) (bruijn cddadr 144 66)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddar) (bruijn cdddar 144 67)) (##inline ##sys.cons (##inline ##sys.cons (quote cddddr) (bruijn cddddr 144 68)) (##inline ##sys.cons (##inline ##sys.cons (quote list) (bruijn list 144 69)) (##inline ##sys.cons (##inline ##sys.cons (quote length) (bruijn length 144 70)) (##inline ##sys.cons (##inline ##sys.cons (quote list-ref) (bruijn list-ref 144 71)) (##inline ##sys.cons (##inline ##sys.cons (quote map) (bruijn map 144 72)) (##inline ##sys.cons (##inline ##sys.cons (quote for-each) (bruijn for-each 144 73)) (##inline ##sys.cons (##inline ##sys.cons (quote append) (bruijn append 144 77)) (##inline ##sys.cons (##inline ##sys.cons (quote reverse) (bruijn reverse 144 78)) (##inline ##sys.cons (##inline ##sys.cons (quote memq) (bruijn memq 144 79)) (##inline ##sys.cons (##inline ##sys.cons (quote memv) (bruijn memv 144 80)) (##inline ##sys.cons (##inline ##sys.cons (quote member) (bruijn member 144 81)) (##inline ##sys.cons (##inline ##sys.cons (quote assq) (bruijn assq 144 82)) (##inline ##sys.cons (##inline ##sys.cons (quote assv) (bruijn assv 144 83)) (##inline ##sys.cons (##inline ##sys.cons (quote assoc) (bruijn assoc 144 84)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 144 96)) (##inline ##sys.cons (##inline ##sys.cons (quote list->string) (bruijn list->string 144 95)) (##inline ##sys.cons (##inline ##sys.cons (quote make-string) (bruijn make-string 144 85)) (##inline ##sys.cons (##inline ##sys.cons (quote substring) (bruijn substring 144 86)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy) (bruijn string-copy 144 87)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy!) (bruijn string-copy! 144 88)) (##inline ##sys.cons (##inline ##sys.cons (quote string-ref) (bruijn string-ref 144 89)) (##inline ##sys.cons (##inline ##sys.cons (quote string-set!) (bruijn string-set! 144 90)) (##inline ##sys.cons (##inline ##sys.cons (quote string-length) (bruijn string-length 144 91)) (##inline ##sys.cons (##inline ##sys.cons (quote string->symbol) (bruijn string->symbol 144 92)) (##inline ##sys.cons (##inline ##sys.cons (quote string->number) (bruijn string->number 144 93)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 144 96)) (##inline ##sys.cons (##inline ##sys.cons (quote string-append) (bruijn string-append 144 97)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol->string) (bruijn symbol->string 144 94)) (##inline ##sys.cons (##inline ##sys.cons (quote list->vector) (bruijn list->vector 144 98)) (##inline ##sys.cons (##inline ##sys.cons (quote vector) (bruijn vector 144 99)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-ref) (bruijn vector-ref 144 100)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-set!) (bruijn vector-set! 144 101)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-length) (bruijn vector-length 144 102)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-for-each) (bruijn vector-for-each 144 103)) (##inline ##sys.cons (##inline ##sys.cons (quote char->integer) (bruijn char->integer 144 104)) (##inline ##sys.cons (##inline ##sys.cons (quote current-output-port) (bruijn current-output-port 144 105)) (##inline ##sys.cons (##inline ##sys.cons (quote current-error-port) (bruijn current-error-port 144 106)) (##inline ##sys.cons (##inline ##sys.cons (quote current-input-port) (bruijn current-input-port 144 107)) (##inline ##sys.cons (##inline ##sys.cons (quote open-input-file) (bruijn open-input-file 144 108)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-file) (bruijn open-output-file 144 109)) (##inline ##sys.cons (##inline ##sys.cons (quote close-port) (bruijn close-port 144 110)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-string) (bruijn open-output-string 144 111)) (##inline ##sys.cons (##inline ##sys.cons (quote get-output-string) (bruijn get-output-string 144 112)) (##inline ##sys.cons (##inline ##sys.cons (quote with-output-to-file) (bruijn with-output-to-file 144 113)) (##inline ##sys.cons (##inline ##sys.cons (quote with-input-from-file) (bruijn with-input-from-file 144 114)) (##inline ##sys.cons (##inline ##sys.cons (quote read-char) (bruijn read-char 144 115)) (##inline ##sys.cons (##inline ##sys.cons (quote read-line) (bruijn read-line 144 116)) (##inline ##sys.cons (##inline ##sys.cons (quote read) (bruijn read 144 117)) (##inline ##sys.cons (##inline ##sys.cons (quote newline) (bruijn newline 144 118)) (##inline ##sys.cons (##inline ##sys.cons (quote display) (bruijn display 144 120)) (##inline ##sys.cons (##inline ##sys.cons (quote write) (bruijn write 144 121)) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (bruijn call/cc 144 122)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-current-continuation) (bruijn call-with-current-continuation 144 123)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (bruijn call-with-values 144 124)) (##inline ##sys.cons (##inline ##sys.cons (quote apply) (bruijn apply 144 125)) (##inline ##sys.cons (##inline ##sys.cons (quote values) (bruijn values 144 126)) (##inline ##sys.cons (##inline ##sys.cons (quote command-line) (bruijn command-line 144 127)) (##inline ##sys.cons (##inline ##sys.cons (quote system) (bruijn system 144 128)) (##inline ##sys.cons (##inline ##sys.cons (quote open-input-process) (bruijn open-input-process 144 129)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-process) (bruijn open-output-process 144 130)) (##inline ##sys.cons (##inline ##sys.cons (quote make-temporary-file) (bruijn make-temporary-file 144 131)) (##inline ##sys.cons (##inline ##sys.cons (quote exit) (bruijn exit 144 132)) (##inline ##sys.cons (##inline ##sys.cons (quote atom?) (bruijn atom? 144 133)) (##inline ##sys.cons (##inline ##sys.cons (quote displayln) (bruijn displayln 144 134)) (##inline ##sys.cons (##inline ##sys.cons (quote writeln) (bruijn writeln 144 135)) (##inline ##sys.cons (##inline ##sys.cons (quote format) (bruijn format 144 140)) (##inline ##sys.cons (##inline ##sys.cons (quote printf) (bruijn printf 144 138)) (##inline ##sys.cons (##inline ##sys.cons (quote sprintf) (bruijn sprintf 144 139)) (##inline ##sys.cons (##inline ##sys.cons (quote error) (bruijn error 144 141)) (##inline ##sys.cons (##inline ##sys.cons (quote fold) (bruijn fold 144 75)) (##inline ##sys.cons (##inline ##sys.cons (quote fold-right) (bruijn fold-right 144 76)) (##inline ##sys.cons (##inline ##sys.cons (quote iota) (bruijn iota 144 74)) (quote ())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
V_CALL(VGetArg(upenv, 144-1, 0), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 1)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eof__object_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0boolean_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 2)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 4)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 5)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0procedure_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 6)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 7)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 8)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 10)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 12)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0real_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 13)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 11)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 9)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 14)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_E_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 15)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 16)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 17)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0not.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 18)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 19)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_E.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 20)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 21)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 22)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G_E.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 23)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 24)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact___Ginexact.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 25)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 26)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0complex_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 27)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 28)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0__.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 29)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_S.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 30)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_W.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 31)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quotient.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 32)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0remainder.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 33)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0max.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 34)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0min.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 35)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cons.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 36)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0car.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 37)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 38)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 39)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__cdr_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 40)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 41)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 42)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 43)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 44)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 45)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 46)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 47)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 48)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 49)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 50)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 51)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 52)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 53)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 54)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 55)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 56)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 57)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 58)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 59)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 60)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 61)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 62)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 63)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 64)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddaar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 65)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddadr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 66)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddar.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 67)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddddr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 68)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 69)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0length.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 70)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 71)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0map.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 72)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 73)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0append.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 77)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 78)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memq.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 79)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memv.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 80)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0member.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 81)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assq.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 82)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assv.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 83)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 84)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 96)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gstring.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 95)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0make__string.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 85)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0substring.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 86)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 87)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 88)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 89)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__set_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 90)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 91)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 92)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gnumber.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 93)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 96)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 97)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 94)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gvector.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 98)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 99)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__ref.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 100)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__set_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 101)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__length.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 102)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__for__each.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 103)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char___Ginteger.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 104)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__output__port.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 105)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__error__port.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 106)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__input__port.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 107)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__input__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 108)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 109)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 110)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 111)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 112)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__output__to__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 113)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__input__from__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 114)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__char.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 115)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__line.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 116)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 117)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0newline.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 118)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0display.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 120)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0write.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 121)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 122)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__current__continuation.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 123)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 124)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0apply.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 125)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0values.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 126)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0command__line.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 127)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0system.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 128)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__input__process.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 129)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__process.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 130)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0make__temporary__file.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 131)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exit.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 132)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 133)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0displayln.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 134)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0writeln.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 135)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0format.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 140)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0printf.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 138)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 139)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 141)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0fold.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 75)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0fold__right.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 76)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0iota.sym, VPOINTER_OTHER),
      VGetArg(upenv, 144-1, 74)
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
static void _V0error_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k165, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.457 1 0) (bruijn irritants 9 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0loop_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k171, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.459 6 0) (bruijn ##x.463 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 158 38) (close _V0loop_k171) (bruijn irritants 5 1))
V_CALL(VGetArg(upenv, 158-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k171, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0loop_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 157 120) (close _V0loop_k170) (bruijn ##x.464 0 0) (bruijn err 12 0))
V_CALL(VGetArg(upenv, 157-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k170, env)}),
      _var0,
      VGetArg(upenv, 12-1, 0)
    );
 }
}
static void _V0loop_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 156 37) (close _V0loop_k169) (bruijn irritants 3 1))
V_CALL(VGetArg(upenv, 156-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k169, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.460 0 0) ((bruijn display 155 120) (close _V0loop_k168) (##string ##string.1523) (bruijn err 10 0)) ((bruijn ##k.459 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 155-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k168, env)}),
      VEncodePointer(&_V10string_D1523.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 0)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 154 18) (close _V0loop_k167) (bruijn ##x.465 0 0))
V_CALL(VGetArg(upenv, 154-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k167, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 153 1) (close _V0loop_k166) (bruijn irritants 0 1))
V_CALL(VGetArg(upenv, 153-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k166, env)}),
      _var1
    );
 }
}
static void _V0error_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0error_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0error_k165) (bruijn loop 0 1) (close _V0loop_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k165, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda11, env)})
    );
 }
}
static void _V0error_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0error_lambda10) (bruijn ##k.455 1 0) #f)
V_CALL_FUNC(_V0error_lambda10, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0error_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.454 1 0) ((bruijn display 150 120) (close _V0error_k164) (##string ##string.1524) (bruijn err 5 0)) ((bruijn ##k.455 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 150-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k164, env)}),
      VEncodePointer(&_V10string_D1524.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0error_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k173, runtime, upenv, 1, argc, _var0) {
  // (##sys.abort (bruijn ##k.449 7 0))
    V_CALL_FUNC(VAbort2, NULL, runtime,
      VGetArg(upenv, 7-1, 0)
    );
 }
}
static void _V0error_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn newline 150 118) (close _V0error_k173) (bruijn err 5 0))
V_CALL(VGetArg(upenv, 150-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k173, env)}),
      VGetArg(upenv, 5-1, 0)
    );
 }
}
static void _V0error_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0error_k163) (close _V0error_k172))
V_CALL_FUNC(_V0error_k163, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k172, env)})
    );
 }
}
static void _V0error_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 148 18) (close _V0error_k162) (bruijn ##x.466 0 0))
V_CALL(VGetArg(upenv, 148-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k162, env)}),
      _var0
    );
 }
}
static void _V0error_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 147 1) (close _V0error_k161) (bruijn irritants 3 2))
V_CALL(VGetArg(upenv, 147-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k161, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0error_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 146 120) (close _V0error_k160) (bruijn msg 2 1) (bruijn err 1 0))
V_CALL(VGetArg(upenv, 146-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k160, env)}),
      upenv->up->vars[1],
      upenv->vars[0]
    );
 }
}
static void _V0error_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 145 120) (close _V0error_k159) (##string ##string.1525) (bruijn err 0 0))
V_CALL(VGetArg(upenv, 145-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k159, env)}),
      VEncodePointer(&_V10string_D1525.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0error_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VError("Not enough arguments to _V0error_lambda9, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0error_lambda9, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn current-error-port 144 106) (close _V0error_k158))
V_CALL(VGetArg(upenv, 144-1, 106), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k158, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k157) (bruijn error 143 141) (close _V0error_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k157, env)}),
      VEncodeInt(143l), VEncodeInt(141l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_lambda9, env)})
    );
 }
}
static void _V0format_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k175, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-sprintf 145 137) (bruijn ##k.468 2 0) (bruijn a 2 1) (bruijn ##x.470 0 0))
V_CALL(VGetArg(upenv, 145-1, 137), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0format_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k177, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 146 136) (bruijn ##k.468 3 0) (bruijn ##x.472 0 0) (bruijn b 3 2) (bruijn args 3 3))
V_CALL(VGetArg(upenv, 146-1, 136), runtime,
      upenv->up->up->vars[0],
      _var0,
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]
    );
 }
}
static void _V0format_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k178, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.473 0 0) ((bruijn format-sprintf 146 137) (bruijn ##k.468 3 0) (bruijn b 3 2) (bruijn args 3 3)) ((bruijn format-printf 146 136) (bruijn ##k.468 3 0) (bruijn a 3 1) (bruijn b 3 2) (bruijn args 3 3)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 146-1, 137), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 146-1, 136), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]
    );
}
 }
}
static void _V0format_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.471 0 0) ((bruijn current-output-port 145 105) (close _V0format_k177)) ((bruijn eq? 145 14) (close _V0format_k178) (bruijn a 2 1) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 145-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k177, env)})
    );
} else {
V_CALL(VGetArg(upenv, 145-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k178, env)}),
      upenv->up->vars[1],
      VEncodeBool(false)
    );
}
 }
}
static void _V0format_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.469 0 0) ((bruijn cons 144 36) (close _V0format_k175) (bruijn b 1 2) (bruijn args 1 3)) ((bruijn eq? 144 14) (close _V0format_k176) (bruijn a 1 1) #t))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 144-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k175, env)}),
      upenv->vars[2],
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 144-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k176, env)}),
      upenv->vars[1],
      VEncodeBool(true)
    );
}
 }
}
__attribute__((used)) static void _V20CaseError__V0format_lambda12(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0format_lambda12 #t (2 ((bruijn sprintf 143 139) (bruijn ##k.467 0 0) (bruijn fmt 0 1))) (3 + ((bruijn string? 143 8) (close _V0format_k174) (bruijn a 0 1))))
 VError("Not enough arguments to _V0format_lambda12, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0format_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0format_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 143 139) (bruijn ##k.467 0 0) (bruijn fmt 0 1))
V_CALL(VGetArg(upenv, 143-1, 139), runtime,
      _var0,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case1__V0format_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0format_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 143 8) (close _V0format_k174) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 143-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k174, env)}),
      _var1
    );
 }
}
void _V0format_lambda12(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0format_lambda12:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0format_lambda12\n"
"    cmp edx, 3\n"
"    jge _V20Case1__V0format_lambda12\n"
"    jmp _V20CaseError__V0format_lambda12\n"
);
static void _V0vanity_V0core_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k156) (bruijn format 142 140) (close _V0format_lambda12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k156, env)}),
      VEncodeInt(142l), VEncodeInt(140l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_lambda12, env)})
    );
 }
}
static void _V0sprintf_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k182, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.474 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]
    );
 }
}
static void _V0sprintf_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 145 110) (close _V0sprintf_k182) (bruijn strport 2 0))
V_CALL(VGetArg(upenv, 145-1, 110), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k182, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0sprintf_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn get-output-string 144 112) (close _V0sprintf_k181) (bruijn strport 1 0))
V_CALL(VGetArg(upenv, 144-1, 112), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k181, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0sprintf_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn format-printf 143 136) (close _V0sprintf_k180) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 143-1, 136), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k180, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]
    );
 }
}
static void _V0sprintf_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VError("Not enough arguments to _V0sprintf_lambda13, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_lambda13, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn open-output-string 142 111) (close _V0sprintf_k179))
V_CALL(VGetArg(upenv, 142-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k179, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k155) (bruijn sprintf 141 139) (close _V0sprintf_lambda13))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k155, env)}),
      VEncodeInt(141l), VEncodeInt(139l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_lambda13, env)})
    );
 }
}
static void _V0printf_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k183, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 142 136) (bruijn ##k.477 1 0) (bruijn ##x.478 0 0) (bruijn fmt 1 1) (quote ()))
V_CALL(VGetArg(upenv, 142-1, 136), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[1],
      VNULL
    );
 }
}
static void _V0printf_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k186, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 144 136) (bruijn ##k.479 3 0) (bruijn ##x.481 1 0) (bruijn a 3 1) (bruijn ##x.482 0 0))
V_CALL(VGetArg(upenv, 144-1, 136), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0printf_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 143 36) (close _V0printf_k186) (bruijn b 2 2) (bruijn args 2 3))
V_CALL(VGetArg(upenv, 143-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k186, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0printf_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.480 0 0) ((bruijn current-output-port 142 105) (close _V0printf_k185)) ((bruijn format-printf 142 136) (bruijn ##k.479 1 0) (bruijn a 1 1) (bruijn b 1 2) (bruijn args 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 142-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k185, env)})
    );
} else {
V_CALL(VGetArg(upenv, 142-1, 136), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]
    );
}
 }
}
__attribute__((used)) static void _V20CaseError__V0printf_lambda14(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0printf_lambda14 #t (2 ((bruijn current-output-port 141 105) (close _V0printf_k183))) (3 + ((bruijn string? 141 8) (close _V0printf_k184) (bruijn a 0 1))))
 VError("Not enough arguments to _V0printf_lambda14, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0printf_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0printf_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 141 105) (close _V0printf_k183))
V_CALL(VGetArg(upenv, 141-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k183, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0printf_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0printf_lambda14, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 141 8) (close _V0printf_k184) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 141-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k184, env)}),
      _var1
    );
 }
}
void _V0printf_lambda14(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0printf_lambda14:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0printf_lambda14\n"
"    cmp edx, 3\n"
"    jge _V20Case1__V0printf_lambda14\n"
"    jmp _V20CaseError__V0printf_lambda14\n"
);
static void _V0vanity_V0core_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k154) (bruijn printf 140 138) (close _V0printf_lambda14))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k154, env)}),
      VEncodeInt(140l), VEncodeInt(138l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_lambda14, env)})
    );
 }
}
static void _V0format__sprintf_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.483 4 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]
    );
 }
}
static void _V0format__sprintf_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 143 110) (close _V0format__sprintf_k190) (bruijn strport 2 0))
V_CALL(VGetArg(upenv, 143-1, 110), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k190, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0format__sprintf_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn get-output-string 142 112) (close _V0format__sprintf_k189) (bruijn strport 1 0))
V_CALL(VGetArg(upenv, 142-1, 112), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k189, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0format__sprintf_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn format-printf 141 136) (close _V0format__sprintf_k188) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 141-1, 136), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k188, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]
    );
 }
}
static void _V0format__sprintf_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0format__sprintf_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-string 140 111) (close _V0format__sprintf_k187))
V_CALL(VGetArg(upenv, 140-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k187, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k153) (bruijn format-sprintf 139 137) (close _V0format__sprintf_lambda15))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k153, env)}),
      VEncodeInt(139l), VEncodeInt(137l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_lambda15, env)})
    );
 }
}
static void _V0format__printf_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k192, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.487 1 0) 0 (bruijn args 3 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->up->up->vars[3]
    );
 }
}
static void _V0loop_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k198, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.524 1 0) ((bruijn error 148 141) (bruijn ##k.525 0 0) (##string ##string.1526) (bruijn fmt 9 2)) ((bruijn ##k.525 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 148-1, 141), runtime,
      _var0,
      VEncodePointer(&_V10string_D1526.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k204, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 12 1) (bruijn ##k.489 11 0) (bruijn ##x.495 0 0) (bruijn args 11 2))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2)
    );
 }
}
static void _V0loop_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 152 28) (close _V0loop_k204) (bruijn i 10 1) 2)
V_CALL(VGetArg(upenv, 152-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k204, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k206, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.521 1 0) ((bruijn ##k.522 0 0) (bruijn ##p.521 1 0)) ((bruijn eqv? 153 16) (bruijn ##k.522 0 0) (bruijn ##x.1 3 0) (quote #\N)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 153-1, 16), runtime,
      _var0,
      upenv->up->up->vars[0],
      VEncodeChar('N')
    );
}
 }
}
static void _V0loop_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 1) (bruijn ##k.489 13 0) (bruijn ##x.498 0 0) (bruijn args 13 2))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0,
      VGetArg(upenv, 13-1, 2)
    );
 }
}
static void _V0loop_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 154 28) (close _V0loop_k209) (bruijn i 12 1) 2)
V_CALL(VGetArg(upenv, 154-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k209, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k211, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.519 1 0) ((bruijn ##k.520 0 0) (bruijn ##p.519 1 0)) ((bruijn eqv? 155 16) (bruijn ##k.520 0 0) (bruijn ##x.1 5 0) (quote #\A)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 155-1, 16), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('A')
    );
}
 }
}
static void _V0loop_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k214, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.505 1 0) ((bruijn error 157 141) (bruijn ##k.506 0 0) (##string ##string.1527)) ((bruijn ##k.506 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 157-1, 141), runtime,
      _var0,
      VEncodePointer(&_V10string_D1527.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k219, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 20 1) (bruijn ##k.489 19 0) (bruijn ##x.502 1 0) (bruijn ##x.503 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 19-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cdr 160 38) (close _V0loop_k219) (bruijn args 18 2))
V_CALL(VGetArg(upenv, 160-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k219, env)}),
      VGetArg(upenv, 18-1, 2)
    );
 }
}
static void _V0loop_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 159 28) (close _V0loop_k218) (bruijn i 17 1) 2)
V_CALL(VGetArg(upenv, 159-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k218, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 158 120) (close _V0loop_k217) (bruijn ##x.504 0 0) (bruijn port 19 1))
V_CALL(VGetArg(upenv, 158-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k217, env)}),
      _var0,
      VGetArg(upenv, 19-1, 1)
    );
 }
}
static void _V0loop_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn car 157 37) (close _V0loop_k216) (bruijn args 15 2))
V_CALL(VGetArg(upenv, 157-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k216, env)}),
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0loop_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k214) (close _V0loop_k215))
V_CALL_FUNC(_V0loop_k214, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k215, env)})
    );
 }
}
static void _V0loop_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k221, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.517 1 0) ((bruijn ##k.518 0 0) (bruijn ##p.517 1 0)) ((bruijn eqv? 157 16) (bruijn ##k.518 0 0) (bruijn ##x.1 7 0) (quote #\S)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 157-1, 16), runtime,
      _var0,
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('S')
    );
}
 }
}
static void _V0loop_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k224, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.513 1 0) ((bruijn error 159 141) (bruijn ##k.514 0 0) (##string ##string.1527)) ((bruijn ##k.514 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 159-1, 141), runtime,
      _var0,
      VEncodePointer(&_V10string_D1527.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k229, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 22 1) (bruijn ##k.489 21 0) (bruijn ##x.510 1 0) (bruijn ##x.511 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 21-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 162 38) (close _V0loop_k229) (bruijn args 20 2))
V_CALL(VGetArg(upenv, 162-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k229, env)}),
      VGetArg(upenv, 20-1, 2)
    );
 }
}
static void _V0loop_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 161 28) (close _V0loop_k228) (bruijn i 19 1) 2)
V_CALL(VGetArg(upenv, 161-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k228, env)}),
      VGetArg(upenv, 19-1, 1),
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn write 160 121) (close _V0loop_k227) (bruijn ##x.512 0 0) (bruijn port 21 1))
V_CALL(VGetArg(upenv, 160-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k227, env)}),
      _var0,
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0loop_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 159 37) (close _V0loop_k226) (bruijn args 17 2))
V_CALL(VGetArg(upenv, 159-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k226, env)}),
      VGetArg(upenv, 17-1, 2)
    );
 }
}
static void _V0loop_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k224) (close _V0loop_k225))
V_CALL_FUNC(_V0loop_k224, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k225, env)})
    );
 }
}
static void _V0loop_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k231, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 159 141) (bruijn ##k.489 17 0) (##string ##string.1528) (bruijn ##x.515 0 0))
V_CALL(VGetArg(upenv, 159-1, 141), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodePointer(&_V10string_D1528.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0loop_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substring 158 86) (close _V0loop_k231) (bruijn fmt 19 2) (bruijn i 16 1) (bruijn ##x.516 0 0))
V_CALL(VGetArg(upenv, 158-1, 86), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k231, env)}),
      VGetArg(upenv, 19-1, 2),
      VGetArg(upenv, 16-1, 1),
      _var0
    );
 }
}
static void _V0loop_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.507 0 0) ((bruijn null? 157 1) (close _V0loop_k223) (bruijn args 15 2)) ((bruijn + 157 28) (close _V0loop_k230) (bruijn i 15 1) 2))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 157-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k223, env)}),
      VGetArg(upenv, 15-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 157-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k230, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodeInt(2l)
    );
}
 }
}
static void _V0loop_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0loop_k221) (close _V0loop_k222))
V_CALL_FUNC(_V0loop_k221, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k222, env)})
    );
 }
}
static void _V0loop_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.499 0 0) ((bruijn null? 155 1) (close _V0loop_k213) (bruijn args 13 2)) ((bruijn eqv? 155 16) (close _V0loop_k220) (bruijn ##x.1 5 0) (quote #\s)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 155-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k213, env)}),
      VGetArg(upenv, 13-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 155-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k220, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('s')
    );
}
 }
}
static void _V0loop_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0loop_k211) (close _V0loop_k212))
V_CALL_FUNC(_V0loop_k211, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k212, env)})
    );
 }
}
static void _V0loop_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.496 0 0) (##sys.display-word (close _V0loop_k208) #\newline (bruijn port 14 1)) ((bruijn eqv? 153 16) (close _V0loop_k210) (bruijn ##x.1 3 0) (quote #\a)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k208, env)}),
      VEncodeChar('\n'),
      VGetArg(upenv, 14-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 153-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k210, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('a')
    );
}
 }
}
static void _V0loop_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
static void _V0loop_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.493 0 0) (##sys.display-word (close _V0loop_k203) #\~ (bruijn port 12 1)) ((bruijn eqv? 151 16) (close _V0loop_k205) (bruijn ##x.1 1 0) (quote #\n)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k203, env)}),
      VEncodeChar('~'),
      VGetArg(upenv, 12-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 151-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k205, env)}),
      upenv->vars[0],
      VEncodeChar('n')
    );
}
 }
}
static void _V0loop_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 150 16) (close _V0loop_k202) (bruijn ##x.1 0 0) (quote #\~))
V_CALL(VGetArg(upenv, 150-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k202, env)}),
      _var0,
      VEncodeChar('~')
    );
 }
}
static void _V0loop_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn string-ref 149 89) (close _V0loop_k201) (bruijn fmt 10 2) (bruijn ##x.523 0 0))
V_CALL(VGetArg(upenv, 149-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k201, env)}),
      VGetArg(upenv, 10-1, 2),
      _var0
    );
 }
}
static void _V0loop_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 148 28) (close _V0loop_k200) (bruijn i 6 1) 1)
V_CALL(VGetArg(upenv, 148-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k200, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
static void _V0loop_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 146 20) (close _V0loop_k197) (bruijn ##x.526 0 0) (bruijn len 6 0))
V_CALL(VGetArg(upenv, 146-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k197, env)}),
      _var0,
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0loop_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k233, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.489 5 0) (bruijn ##x.528 0 0) (bruijn args 5 2))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 146 28) (close _V0loop_k233) (bruijn i 4 1) 1)
V_CALL(VGetArg(upenv, 146-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k233, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.491 0 0) ((bruijn + 145 28) (close _V0loop_k196) (bruijn i 3 1) 1) (##sys.display-word (close _V0loop_k232) (bruijn c 1 0) (bruijn port 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 145-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k196, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k232, env)}),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0loop_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn eq? 144 14) (close _V0loop_k195) (bruijn c 0 0) #\~)
V_CALL(VGetArg(upenv, 144-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k195, env)}),
      _var0,
      VEncodeChar('~')
    );
 }
}
static void _V0loop_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.490 0 0) ((bruijn string-ref 143 89) (close _V0loop_k194) (bruijn fmt 4 2) (bruijn i 1 1)) ((bruijn ##k.489 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 143-1, 89), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k194, env)}),
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
static void _V0loop_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda18, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda18, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 142 19) (close _V0loop_k193) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 142-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k193, env)}),
      _var1,
      upenv->up->vars[0]
    );
 }
}
static void _V0format__printf_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0format__printf_k192) (bruijn loop 0 1) (close _V0loop_lambda18))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k192, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda18, env)})
    );
 }
}
static void _V0format__printf_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0format__printf_lambda17) (bruijn ##k.486 1 0) #f)
V_CALL_FUNC(_V0format__printf_lambda17, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0format__printf_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0format__printf_lambda16, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_lambda16, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn string-length 139 91) (close _V0format__printf_k191) (bruijn fmt 0 2))
V_CALL(VGetArg(upenv, 139-1, 91), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k191, env)}),
      _var2
    );
 }
}
static void _V0vanity_V0core_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k152) (bruijn format-printf 138 136) (close _V0format__printf_lambda16))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k152, env)}),
      VEncodeInt(138l), VEncodeInt(136l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_lambda16, env)})
    );
 }
}
static void _V0writeln_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0writeln_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0writeln_k234, runtime, upenv, 1, argc, _var0) {
  // ((bruijn writeln 139 135) (bruijn ##k.529 1 0) (bruijn x 1 1) (bruijn ##x.530 0 0))
V_CALL(VGetArg(upenv, 139-1, 135), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0writeln_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0writeln_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0writeln_k235, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 139 118) (bruijn ##k.531 1 0) (bruijn port 1 2))
V_CALL(VGetArg(upenv, 139-1, 118), runtime,
      upenv->vars[0],
      upenv->vars[2]
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0writeln_lambda19(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0writeln_lambda19 #t (2 ((bruijn current-output-port 138 105) (close _V0writeln_k234))) (3 ((bruijn write 138 121) (close _V0writeln_k235) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0writeln_lambda19, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0writeln_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0writeln_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 138 105) (close _V0writeln_k234))
V_CALL(VGetArg(upenv, 138-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_k234, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0writeln_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0writeln_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn write 138 121) (close _V0writeln_k235) (bruijn x 0 1) (bruijn port 0 2))
V_CALL(VGetArg(upenv, 138-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_k235, env)}),
      _var1,
      _var2
    );
 }
}
void _V0writeln_lambda19(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0writeln_lambda19:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0writeln_lambda19\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0writeln_lambda19\n"
"    jmp _V20CaseError__V0writeln_lambda19\n"
);
static void _V0vanity_V0core_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k151) (bruijn writeln 137 135) (close _V0writeln_lambda19))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k151, env)}),
      VEncodeInt(137l), VEncodeInt(135l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_lambda19, env)})
    );
 }
}
static void _V0displayln_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0displayln_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0displayln_k236, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 138 134) (bruijn ##k.533 1 0) (bruijn x 1 1) (bruijn ##x.534 0 0))
V_CALL(VGetArg(upenv, 138-1, 134), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0displayln_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0displayln_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0displayln_k237, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 138 118) (bruijn ##k.535 1 0) (bruijn port 1 2))
V_CALL(VGetArg(upenv, 138-1, 118), runtime,
      upenv->vars[0],
      upenv->vars[2]
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0displayln_lambda20(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0displayln_lambda20 #t (2 ((bruijn current-output-port 137 105) (close _V0displayln_k236))) (3 ((bruijn display 137 120) (close _V0displayln_k237) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0displayln_lambda20, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0displayln_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0displayln_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 137 105) (close _V0displayln_k236))
V_CALL(VGetArg(upenv, 137-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_k236, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0displayln_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0displayln_lambda20, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn display 137 120) (close _V0displayln_k237) (bruijn x 0 1) (bruijn port 0 2))
V_CALL(VGetArg(upenv, 137-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_k237, env)}),
      _var1,
      _var2
    );
 }
}
void _V0displayln_lambda20(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0displayln_lambda20:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0displayln_lambda20\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0displayln_lambda20\n"
"    jmp _V20CaseError__V0displayln_lambda20\n"
);
static void _V0vanity_V0core_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k150) (bruijn displayln 136 134) (close _V0displayln_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k150, env)}),
      VEncodeInt(136l), VEncodeInt(134l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_lambda20, env)})
    );
 }
}
static void _V0atom_Q_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0atom_Q_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0atom_Q_k238, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 137 18) (bruijn ##k.537 1 0) (bruijn ##x.538 0 0))
V_CALL(VGetArg(upenv, 137-1, 18), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0atom_Q_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0atom_Q_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0atom_Q_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 136 4) (close _V0atom_Q_k238) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 136-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0atom_Q_k238, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k149) (bruijn atom? 135 133) (close _V0atom_Q_lambda21))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k149, env)}),
      VEncodeInt(135l), VEncodeInt(133l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0atom_Q_lambda21, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k148) (bruijn exit 134 132) ##sys.exit)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k148, env)}),
      VEncodeInt(134l), VEncodeInt(132l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VExit2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k147) (bruijn make-temporary-file 133 131) ##sys.make-temporary-file)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k147, env)}),
      VEncodeInt(133l), VEncodeInt(131l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VMakeTemporaryFile2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k146) (bruijn open-output-process 132 130) ##sys.open-output-process)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k146, env)}),
      VEncodeInt(132l), VEncodeInt(130l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VOpenOutputProcess2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k145) (bruijn open-input-process 131 129) ##sys.open-input-process)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k145, env)}),
      VEncodeInt(131l), VEncodeInt(129l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VOpenInputProcess2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k144) (bruijn system 130 128) ##sys.system)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k144, env)}),
      VEncodeInt(130l), VEncodeInt(128l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSystem2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k143) (bruijn command-line 129 127) ##sys.command-line)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k143, env)}),
      VEncodeInt(129l), VEncodeInt(127l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCommandLine2,NULL)})
    );
 }
}
static void _V0values_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0values_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0values_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn apply 130 125) (bruijn ##k.540 0 0) (bruijn k 0 1) (bruijn args 1 1))
V_CALL(VGetArg(upenv, 130-1, 125), runtime,
      _var0,
      _var1,
      upenv->vars[1]
    );
 }
}
static void _V0values_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VError("Not enough arguments to _V0values_lambda22, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0values_lambda22, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn call/cc 129 122) (bruijn ##k.539 0 0) (close _V0values_lambda23))
V_CALL(VGetArg(upenv, 129-1, 122), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0values_lambda23, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k142) (bruijn values 128 126) (close _V0values_lambda22))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k142, env)}),
      VEncodeInt(128l), VEncodeInt(126l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0values_lambda22, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k141) (bruijn apply 127 125) ##sys.apply)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k141, env)}),
      VEncodeInt(127l), VEncodeInt(125l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VApply2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k140) (bruijn call-with-values 126 124) ##sys.call-with-values)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k140, env)}),
      VEncodeInt(126l), VEncodeInt(124l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCallValues2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k139) (bruijn call-with-current-continuation 125 123) ##sys.call/cc)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k139, env)}),
      VEncodeInt(125l), VEncodeInt(123l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCallCC2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k138) (bruijn call/cc 124 122) ##sys.call/cc)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k138, env)}),
      VEncodeInt(124l), VEncodeInt(122l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCallCC2,NULL)})
    );
 }
}
static void _V0write_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0write_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0write_k239, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 125 119) (bruijn ##k.541 1 0) (bruijn x 1 1) #t (bruijn ##x.542 0 0))
V_CALL(VGetArg(upenv, 125-1, 119), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(true),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0write_lambda24(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0write_lambda24 #t (2 ((bruijn current-output-port 124 105) (close _V0write_k239))) (3 ((bruijn printout 124 119) (bruijn ##k.543 0 0) (bruijn x 0 1) #t (bruijn port 0 2))))
 VError("Not enough arguments to _V0write_lambda24, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0write_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0write_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 124 105) (close _V0write_k239))
V_CALL(VGetArg(upenv, 124-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0write_k239, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0write_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0write_lambda24, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 124 119) (bruijn ##k.543 0 0) (bruijn x 0 1) #t (bruijn port 0 2))
V_CALL(VGetArg(upenv, 124-1, 119), runtime,
      _var0,
      _var1,
      VEncodeBool(true),
      _var2
    );
 }
}
void _V0write_lambda24(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0write_lambda24:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0write_lambda24\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0write_lambda24\n"
"    jmp _V20CaseError__V0write_lambda24\n"
);
static void _V0vanity_V0core_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k137) (bruijn write 123 121) (close _V0write_lambda24))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k137, env)}),
      VEncodeInt(123l), VEncodeInt(121l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0write_lambda24, env)})
    );
 }
}
static void _V0display_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0display_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display_k240, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 124 119) (bruijn ##k.544 1 0) (bruijn x 1 1) #f (bruijn ##x.545 0 0))
V_CALL(VGetArg(upenv, 124-1, 119), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(false),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0display_lambda25(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0display_lambda25 #t (2 ((bruijn current-output-port 123 105) (close _V0display_k240))) (3 ((bruijn printout 123 119) (bruijn ##k.546 0 0) (bruijn x 0 1) #f (bruijn port 0 2))))
 VError("Not enough arguments to _V0display_lambda25, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0display_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0display_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 123 105) (close _V0display_k240))
V_CALL(VGetArg(upenv, 123-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display_k240, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0display_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0display_lambda25, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 123 119) (bruijn ##k.546 0 0) (bruijn x 0 1) #f (bruijn port 0 2))
V_CALL(VGetArg(upenv, 123-1, 119), runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      _var2
    );
 }
}
void _V0display_lambda25(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0display_lambda25:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0display_lambda25\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0display_lambda25\n"
"    jmp _V20CaseError__V0display_lambda25\n"
);
static void _V0vanity_V0core_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k136) (bruijn display 122 120) (close _V0display_lambda25))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k136, env)}),
      VEncodeInt(122l), VEncodeInt(120l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display_lambda25, env)})
    );
 }
}
static void _V0printout_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k246, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.552 2 0) (bruijn ##x.554 0 0))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0printout_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 128 38) (close _V0printout_k246) (bruijn x 6 1))
V_CALL(VGetArg(upenv, 128-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k246, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0loop_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k251, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.555 5 0) (bruijn ##x.559 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 132 38) (close _V0loop_k251) (bruijn xs 4 1))
V_CALL(VGetArg(upenv, 132-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k251, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printout 131 119) (close _V0loop_k250) (bruijn ##x.560 0 0) (bruijn write? 9 2) (bruijn port 9 3))
V_CALL(VGetArg(upenv, 131-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k250, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2),
      VGetArg(upenv, 9-1, 3)
    );
 }
}
static void _V0loop_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 130 37) (close _V0loop_k249) (bruijn xs 2 1))
V_CALL(VGetArg(upenv, 130-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k249, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k253, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 131 119) (bruijn ##k.555 3 0) (bruijn xs 3 1) (bruijn write? 9 2) (bruijn port 9 3))
V_CALL(VGetArg(upenv, 131-1, 119), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VGetArg(upenv, 9-1, 2),
      VGetArg(upenv, 9-1, 3)
    );
 }
}
static void _V0loop_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.561 0 0) ((bruijn ##k.555 2 0) (quote ok)) (##sys.display-word (close _V0loop_k253) (##string ##string.1529) (bruijn port 8 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k253, env)}),
      VEncodePointer(&_V10string_D1529.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 3)
    );
}
 }
}
static void _V0loop_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.556 0 0) (##sys.display-word (close _V0loop_k248) (##string ##string.1523) (bruijn port 7 3)) ((bruijn null? 129 1) (close _V0loop_k252) (bruijn xs 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k248, env)}),
      VEncodePointer(&_V10string_D1523.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 3)
    );
} else {
V_CALL(VGetArg(upenv, 129-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k252, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 128 4) (close _V0loop_k247) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 128-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k247, env)}),
      _var1
    );
 }
}
static void _V0printout_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0printout_k245) (bruijn loop 0 1) (close _V0loop_lambda28))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k245, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda28, env)})
    );
 }
}
static void _V0printout_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k254, runtime, upenv, 1, argc, _var0) {
  // (##sys.display-word (bruijn ##k.547 5 0) (##string ##string.1530) (bruijn port 5 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1530.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 3)
    );
 }
}
static void _V0printout_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout_lambda27) (close _V0printout_k254) #f)
V_CALL_FUNC(_V0printout_lambda27, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k254, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0printout_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printout 125 119) (close _V0printout_k244) (bruijn ##x.563 0 0) (bruijn write? 3 2) (bruijn port 3 3))
V_CALL(VGetArg(upenv, 125-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k244, env)}),
      _var0,
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]
    );
 }
}
static void _V0printout_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 124 37) (close _V0printout_k243) (bruijn x 2 1))
V_CALL(VGetArg(upenv, 124-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k243, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0printout_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k258, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.567 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k261, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.575 1 0) ((bruijn ##k.576 0 0) #f) (##sys.display-word (bruijn ##k.576 0 0) (##string ##string.1523) (bruijn port 9 3)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1523.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3)
    );
}
 }
}
static void _V0loop_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k265, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.569 6 0) (bruijn ##x.573 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 133 28) (close _V0loop_k265) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 133-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k265, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printout 132 119) (close _V0loop_k264) (bruijn ##x.574 0 0) (bruijn write? 10 2) (bruijn port 10 3))
V_CALL(VGetArg(upenv, 132-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k264, env)}),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3)
    );
 }
}
static void _V0loop_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector-ref 131 100) (close _V0loop_k263) (bruijn x 9 1) (bruijn i 3 1))
V_CALL(VGetArg(upenv, 131-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k263, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k261) (close _V0loop_k262))
V_CALL_FUNC(_V0loop_k261, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k262, env)})
    );
 }
}
static void _V0loop_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.570 0 0) ((bruijn ##k.569 1 0) #f) ((bruijn eq? 129 14) (close _V0loop_k260) (bruijn i 1 1) 0))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 129-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k260, env)}),
      upenv->vars[1],
      VEncodeInt(0l)
    );
}
 }
}
static void _V0loop_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 128 14) (close _V0loop_k259) (bruijn i 0 1) (bruijn len 3 0))
V_CALL(VGetArg(upenv, 128-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k259, env)}),
      _var1,
      upenv->up->up->vars[0]
    );
 }
}
static void _V0printout_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0printout_k258) (bruijn loop 0 1) (close _V0loop_lambda30))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k258, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda30, env)})
    );
 }
}
static void _V0printout_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k266, runtime, upenv, 1, argc, _var0) {
  // (##sys.display-word (bruijn ##k.547 5 0) (##string ##string.1530) (bruijn port 5 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1530.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 3)
    );
 }
}
static void _V0printout_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout_lambda29) (close _V0printout_k266) #f)
V_CALL_FUNC(_V0printout_lambda29, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k266, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0printout_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.display-word (close _V0printout_k257) (##string ##string.1532) (bruijn port 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k257, env)}),
      VEncodePointer(&_V10string_D1532.sym, VPOINTER_OTHER),
      upenv->up->up->vars[3]
    );
 }
}
static void _V0printout_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.564 0 0) ((bruijn vector-length 124 102) (close _V0printout_k256) (bruijn x 2 1)) (if (bruijn write? 2 2) (##sys.write (bruijn ##k.547 2 0) (bruijn x 2 1) (bruijn port 2 3)) (##sys.display-word (bruijn ##k.547 2 0) (bruijn x 2 1) (bruijn port 2 3))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 124-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k256, env)}),
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
static void _V0printout_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.548 0 0) (##sys.display-word (close _V0printout_k242) (##string ##string.1531) (bruijn port 1 3)) ((bruijn vector? 123 5) (close _V0printout_k255) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k242, env)}),
      VEncodePointer(&_V10string_D1531.sym, VPOINTER_OTHER),
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 123-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k255, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0printout_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0printout_lambda26, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_lambda26, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn pair? 122 4) (close _V0printout_k241) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 122-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k241, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k135) (bruijn printout 121 119) (close _V0printout_lambda26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k135, env)}),
      VEncodeInt(121l), VEncodeInt(119l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_lambda26, env)})
    );
 }
}
static void _V0newline_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0newline_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0newline_k267, runtime, upenv, 1, argc, _var0) {
  // (##sys.newline (bruijn ##k.577 1 0) (bruijn ##x.578 0 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0newline_lambda31(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0newline_lambda31 #t (1 ((bruijn current-output-port 121 105) (close _V0newline_k267))) (2 (##sys.newline (bruijn ##k.579 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0newline_lambda31, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0newline_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0newline_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-output-port 121 105) (close _V0newline_k267))
V_CALL(VGetArg(upenv, 121-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0newline_k267, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0newline_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0newline_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.newline (bruijn ##k.579 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      _var0,
      _var1
    );
 }
}
void _V0newline_lambda31(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0newline_lambda31:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0newline_lambda31\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0newline_lambda31\n"
"    jmp _V20CaseError__V0newline_lambda31\n"
);
static void _V0vanity_V0core_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k134) (bruijn newline 120 118) (close _V0newline_lambda31))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k134, env)}),
      VEncodeInt(120l), VEncodeInt(118l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0newline_lambda31, env)})
    );
 }
}
static void _V0read_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0read_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read_k268, runtime, upenv, 1, argc, _var0) {
  // (##sys.read (bruijn ##k.580 1 0) (bruijn ##x.581 0 0))
    V_CALL_FUNC(VRead2, NULL, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0read_lambda32(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read_lambda32 #t (1 ((bruijn current-input-port 120 107) (close _V0read_k268))) (2 (##sys.read (bruijn ##k.582 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read_lambda32, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 120 107) (close _V0read_k268))
V_CALL(VGetArg(upenv, 120-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read_k268, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0read_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.read (bruijn ##k.582 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VRead2, NULL, runtime,
      _var0,
      _var1
    );
 }
}
void _V0read_lambda32(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0read_lambda32:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0read_lambda32\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0read_lambda32\n"
"    jmp _V20CaseError__V0read_lambda32\n"
);
static void _V0vanity_V0core_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k133) (bruijn read 119 117) (close _V0read_lambda32))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k133, env)}),
      VEncodeInt(119l), VEncodeInt(117l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read_lambda32, env)})
    );
 }
}
static void _V0read__line_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0read__line_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__line_k269, runtime, upenv, 1, argc, _var0) {
  // (##sys.read-line (bruijn ##k.583 1 0) (bruijn ##x.584 0 0))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0read__line_lambda33(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read__line_lambda33 #t (1 ((bruijn current-input-port 119 107) (close _V0read__line_k269))) (2 (##sys.read-line (bruijn ##k.585 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read__line_lambda33, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read__line_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read__line_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 119 107) (close _V0read__line_k269))
V_CALL(VGetArg(upenv, 119-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__line_k269, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0read__line_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read__line_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.read-line (bruijn ##k.585 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      _var0,
      _var1
    );
 }
}
void _V0read__line_lambda33(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0read__line_lambda33:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0read__line_lambda33\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0read__line_lambda33\n"
"    jmp _V20CaseError__V0read__line_lambda33\n"
);
static void _V0vanity_V0core_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k132) (bruijn read-line 118 116) (close _V0read__line_lambda33))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k132, env)}),
      VEncodeInt(118l), VEncodeInt(116l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__line_lambda33, env)})
    );
 }
}
static void _V0read__char_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0read__char_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__char_k270, runtime, upenv, 1, argc, _var0) {
  // (##sys.read-char (bruijn ##k.586 1 0) (bruijn ##x.587 0 0))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0read__char_lambda34(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read__char_lambda34 #t (1 ((bruijn current-input-port 118 107) (close _V0read__char_k270))) (2 (##sys.read-char (bruijn ##k.588 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read__char_lambda34, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read__char_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read__char_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 118 107) (close _V0read__char_k270))
V_CALL(VGetArg(upenv, 118-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__char_k270, env)})
    );
 }
}
__attribute__((used)) static void _V20Case1__V0read__char_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read__char_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  // (##sys.read-char (bruijn ##k.588 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      _var0,
      _var1
    );
 }
}
void _V0read__char_lambda34(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0read__char_lambda34:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0read__char_lambda34\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0read__char_lambda34\n"
"    jmp _V20CaseError__V0read__char_lambda34\n"
);
static void _V0vanity_V0core_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k131) (bruijn read-char 117 115) (close _V0read__char_lambda34))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k131, env)}),
      VEncodeInt(117l), VEncodeInt(115l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__char_lambda34, env)})
    );
 }
}
static void _V0with__input__from__file_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k276, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.590 4 0) (bruijn ret 2 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->vars[0]
    );
 }
}
static void _V0with__input__from__file_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 123 110) (close _V0with__input__from__file_k276) (bruijn port 3 1))
V_CALL(VGetArg(upenv, 123-1, 110), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k276, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0with__input__from__file_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 122 107) (close _V0with__input__from__file_k275) (bruijn stdout 2 2))
V_CALL(VGetArg(upenv, 122-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k275, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0with__input__from__file_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0with__input__from__file_k274))
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k274, env)})
    );
 }
}
static void _V0with__input__from__file_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_lambda36, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn current-input-port 120 107) (close _V0with__input__from__file_k273) (bruijn port 0 1))
V_CALL(VGetArg(upenv, 120-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k273, env)}),
      _var1
    );
 }
}
static void _V0with__input__from__file_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0with__input__from__file_lambda36) (bruijn ##k.589 2 0) (bruijn ##x.594 1 0) (bruijn ##x.595 0 0))
V_CALL_FUNC(_V0with__input__from__file_lambda36, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0with__input__from__file_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-input-port 118 107) (close _V0with__input__from__file_k272))
V_CALL(VGetArg(upenv, 118-1, 107), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k272, env)})
    );
 }
}
static void _V0with__input__from__file_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0with__input__from__file_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_lambda35, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-input-file 117 108) (close _V0with__input__from__file_k271) (bruijn str 0 1))
V_CALL(VGetArg(upenv, 117-1, 108), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k271, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k130) (bruijn with-input-from-file 116 114) (close _V0with__input__from__file_lambda35))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k130, env)}),
      VEncodeInt(116l), VEncodeInt(114l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_lambda35, env)})
    );
 }
}
static void _V0with__output__to__file_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k282, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.597 4 0) (bruijn ret 2 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->vars[0]
    );
 }
}
static void _V0with__output__to__file_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 122 110) (close _V0with__output__to__file_k282) (bruijn port 3 1))
V_CALL(VGetArg(upenv, 122-1, 110), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k282, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0with__output__to__file_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-output-port 121 105) (close _V0with__output__to__file_k281) (bruijn stdout 2 2))
V_CALL(VGetArg(upenv, 121-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k281, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0with__output__to__file_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0with__output__to__file_k280))
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k280, env)})
    );
 }
}
static void _V0with__output__to__file_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_lambda38, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn current-output-port 119 105) (close _V0with__output__to__file_k279) (bruijn port 0 1))
V_CALL(VGetArg(upenv, 119-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k279, env)}),
      _var1
    );
 }
}
static void _V0with__output__to__file_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0with__output__to__file_lambda38) (bruijn ##k.596 2 0) (bruijn ##x.601 1 0) (bruijn ##x.602 0 0))
V_CALL_FUNC(_V0with__output__to__file_lambda38, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0with__output__to__file_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn current-output-port 117 105) (close _V0with__output__to__file_k278))
V_CALL(VGetArg(upenv, 117-1, 105), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k278, env)})
    );
 }
}
static void _V0with__output__to__file_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0with__output__to__file_lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_lambda37, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-file 116 109) (close _V0with__output__to__file_k277) (bruijn str 0 1))
V_CALL(VGetArg(upenv, 116-1, 109), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k277, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k129) (bruijn with-output-to-file 115 113) (close _V0with__output__to__file_lambda37))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k129, env)}),
      VEncodeInt(115l), VEncodeInt(113l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_lambda37, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k128) (bruijn get-output-string 114 112) ##sys.get-output-string)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k128, env)}),
      VEncodeInt(114l), VEncodeInt(112l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VGetOutputString2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k127) (bruijn open-output-string 113 111) ##sys.open-output-string)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k127, env)}),
      VEncodeInt(113l), VEncodeInt(111l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VOpenOutputString2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k126) (bruijn close-port 112 110) ##sys.close-stream)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k126, env)}),
      VEncodeInt(112l), VEncodeInt(110l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCloseStream2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k125) (bruijn open-output-file 111 109) ##sys.open-output-stream)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k125, env)}),
      VEncodeInt(111l), VEncodeInt(109l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VOpenOutputStream2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k124) (bruijn open-input-file 110 108) ##sys.open-input-stream)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k124, env)}),
      VEncodeInt(110l), VEncodeInt(108l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VOpenInputStream2,NULL)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0current__input__port_lambda39(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0current__input__port_lambda39 #t (1 ((bruijn ##k.604 0 0) (bruijn in 1 0))) (2 (set! (bruijn ##k.605 0 0) (bruijn in 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0current__input__port_lambda39, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0current__input__port_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0current__input__port_lambda39, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.604 0 0) (bruijn in 1 0))
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
 }
}
__attribute__((used)) static void _V20Case1__V0current__input__port_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0current__input__port_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.605 0 0) (bruijn in 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0current__input__port_lambda39(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0current__input__port_lambda39:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0current__input__port_lambda39\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0current__input__port_lambda39\n"
"    jmp _V20CaseError__V0current__input__port_lambda39\n"
);
static void _V0vanity_V0core_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k123) (bruijn current-input-port 109 107) (close _V0current__input__port_lambda39))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k123, env)}),
      VEncodeInt(109l), VEncodeInt(107l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0current__input__port_lambda39, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (##sys.dup-stdin (close _V0vanity_V0core_V20_k122))
    V_CALL_FUNC(VDupStdin2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k122, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0current__error__port_lambda40(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0current__error__port_lambda40 #t (1 ((bruijn ##k.607 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.608 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0current__error__port_lambda40, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0current__error__port_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0current__error__port_lambda40, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.607 0 0) (bruijn out 1 0))
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
 }
}
__attribute__((used)) static void _V20Case1__V0current__error__port_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0current__error__port_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.608 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0current__error__port_lambda40(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0current__error__port_lambda40:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0current__error__port_lambda40\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0current__error__port_lambda40\n"
"    jmp _V20CaseError__V0current__error__port_lambda40\n"
);
static void _V0vanity_V0core_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k121) (bruijn current-error-port 107 106) (close _V0current__error__port_lambda40))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k121, env)}),
      VEncodeInt(107l), VEncodeInt(106l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0current__error__port_lambda40, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (##sys.dup-stderr (close _V0vanity_V0core_V20_k120))
    V_CALL_FUNC(VDupStderr2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k120, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0current__output__port_lambda41(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0current__output__port_lambda41 #t (1 ((bruijn ##k.610 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.611 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0current__output__port_lambda41, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0current__output__port_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0current__output__port_lambda41, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.610 0 0) (bruijn out 1 0))
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
 }
}
__attribute__((used)) static void _V20Case1__V0current__output__port_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0current__output__port_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.611 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0current__output__port_lambda41(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0current__output__port_lambda41:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0current__output__port_lambda41\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0current__output__port_lambda41\n"
"    jmp _V20CaseError__V0current__output__port_lambda41\n"
);
static void _V0vanity_V0core_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k119) (bruijn current-output-port 105 105) (close _V0current__output__port_lambda41))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k119, env)}),
      VEncodeInt(105l), VEncodeInt(105l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0current__output__port_lambda41, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (##sys.dup-stdout (close _V0vanity_V0core_V20_k118))
    V_CALL_FUNC(VDupStdout2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k118, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k117) (bruijn char->integer 103 104) ##sys.char-integer)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k117, env)}),
      VEncodeInt(103l), VEncodeInt(104l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCharInt2,NULL)})
    );
 }
}
static void _V0vector__for__each_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k284, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.613 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k288, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.615 4 0) (bruijn ##x.618 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn f 5 1) (close _V0loop_k287) (bruijn ##x.619 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k287, env)}),
      _var0
    );
 }
}
static void _V0loop_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.616 0 0) ((bruijn vector-ref 107 100) (close _V0loop_k286) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.615 1 0) #f))
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
static void _V0loop_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0vector__for__each_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vector__for__each_k284) (bruijn loop 0 1) (close _V0loop_lambda44))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k284, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda44, env)})
    );
 }
}
static void _V0vector__for__each_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0vector__for__each_lambda43) (bruijn ##k.612 1 0) #f)
V_CALL_FUNC(_V0vector__for__each_lambda43, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k290, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.621 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k295, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.623 5 0) (bruijn ##x.626 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn f 6 1) (close _V0loop_k294) (bruijn ##x.627 1 0) (bruijn ##x.628 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k294, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.624 0 0) ((bruijn vector-ref 107 100) (close _V0loop_k292) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.623 1 0) #f))
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
static void _V0loop_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0vector__for__each_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vector__for__each_k290) (bruijn loop 0 1) (close _V0loop_lambda46))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k290, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda46, env)})
    );
 }
}
static void _V0vector__for__each_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0vector__for__each_lambda45) (bruijn ##k.620 1 0) #f)
V_CALL_FUNC(_V0vector__for__each_lambda45, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k297, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.630 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k303, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.632 6 0) (bruijn ##x.635 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn f 7 1) (close _V0loop_k302) (bruijn ##x.636 2 0) (bruijn ##x.637 1 0) (bruijn ##x.638 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k302, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.633 0 0) ((bruijn vector-ref 107 100) (close _V0loop_k299) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.632 1 0) #f))
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
static void _V0loop_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0vector__for__each_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vector__for__each_k297) (bruijn loop 0 1) (close _V0loop_lambda48))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k297, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda48, env)})
    );
 }
}
static void _V0vector__for__each_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0vector__for__each_lambda47) (bruijn ##k.629 1 0) #f)
V_CALL_FUNC(_V0vector__for__each_lambda47, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k306, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.640 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k310, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.642 4 0) (bruijn ##x.645 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn apply 109 125) (close _V0loop_k309) (bruijn f 6 1) (bruijn ##x.646 0 0))
V_CALL(VGetArg(upenv, 109-1, 125), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k309, env)}),
      VGetArg(upenv, 6-1, 1),
      _var0
    );
 }
}
static void _V0loop_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn vector-ref 109 100) (bruijn ##k.647 0 0) (bruijn vec 0 1) (bruijn i 2 1))
V_CALL(VGetArg(upenv, 109-1, 100), runtime,
      _var0,
      _var1,
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.643 0 0) ((bruijn map 108 72) (close _V0loop_k308) (close _V0loop_lambda51) (bruijn vecs 5 2)) ((bruijn ##k.642 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 108-1, 72), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k308, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda51, env)}),
      VGetArg(upenv, 5-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0vector__for__each_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vector__for__each_k306) (bruijn loop 0 1) (close _V0loop_lambda50))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k306, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda50, env)})
    );
 }
}
static void _V0vector__for__each_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0vector__for__each_lambda49) (bruijn ##k.639 2 0) #f)
V_CALL_FUNC(_V0vector__for__each_lambda49, env, runtime,
      upenv->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn vector-length 104 102) (close _V0vector__for__each_k305) (bruijn ##x.648 0 0))
V_CALL(VGetArg(upenv, 104-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k305, env)}),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vector__for__each_lambda42(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vector__for__each_lambda42 #t (3 ((bruijn vector-length 103 102) (close _V0vector__for__each_k283) (bruijn xs 0 2))) (4 ((bruijn vector-length 103 102) (close _V0vector__for__each_k289) (bruijn xs 0 2))) (5 ((bruijn vector-length 103 102) (close _V0vector__for__each_k296) (bruijn xs 0 2))) (2 + ((bruijn car 103 37) (close _V0vector__for__each_k304) (bruijn vecs 0 2))))
 VError("Not enough arguments to _V0vector__for__each_lambda42, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vector__for__each_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vector__for__each_lambda42, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
__attribute__((used)) static void _V20Case1__V0vector__for__each_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vector__for__each_lambda42, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
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
__attribute__((used)) static void _V20Case2__V0vector__for__each_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vector__for__each_lambda42, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
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
__attribute__((used)) static void _V20Case3__V0vector__for__each_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vector__for__each_lambda42, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
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
void _V0vector__for__each_lambda42(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0vector__for__each_lambda42:\n"
"    cmp edx, 3\n"
"    je _V20Case0__V0vector__for__each_lambda42\n"
"    cmp edx, 4\n"
"    je _V20Case1__V0vector__for__each_lambda42\n"
"    cmp edx, 5\n"
"    je _V20Case2__V0vector__for__each_lambda42\n"
"    cmp edx, 2\n"
"    jge _V20Case3__V0vector__for__each_lambda42\n"
"    jmp _V20CaseError__V0vector__for__each_lambda42\n"
);
static void _V0vanity_V0core_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k116) (bruijn vector-for-each 102 103) (close _V0vector__for__each_lambda42))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k116, env)}),
      VEncodeInt(102l), VEncodeInt(103l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_lambda42, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k115) (bruijn vector-length 101 102) ##sys.vector-length)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k115, env)}),
      VEncodeInt(101l), VEncodeInt(102l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VVectorLength2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k114) (bruijn vector-set! 100 101) ##sys.vector-set!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k114, env)}),
      VEncodeInt(100l), VEncodeInt(101l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VVectorSet2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k113) (bruijn vector-ref 99 100) ##sys.vector-ref)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k113, env)}),
      VEncodeInt(99l), VEncodeInt(100l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VVectorRef2,NULL)})
    );
 }
}
static void _V0vector_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VError("Not enough arguments to _V0vector_lambda52, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_lambda52, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn list->vector 99 98) (bruijn ##k.649 0 0) (bruijn args 0 1))
V_CALL(VGetArg(upenv, 99-1, 98), runtime,
      _var0,
      _varargs
    );
 }
}
static void _V0vanity_V0core_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k112) (bruijn vector 98 99) (close _V0vector_lambda52))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k112, env)}),
      VEncodeInt(98l), VEncodeInt(99l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_lambda52, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k111) (bruijn list->vector 97 98) ##sys.list->vector)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k111, env)}),
      VEncodeInt(97l), VEncodeInt(98l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VListVector2,NULL)})
    );
 }
}
static void _V0string__append_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k317, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.652 7 0) (bruijn str 3 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->up->vars[0]
    );
 }
}
static void _V0string__append_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn string-copy! 103 88) (close _V0string__append_k317) (bruijn str 2 0) (bruijn ##x.655 0 0) (bruijn b 6 2))
V_CALL(VGetArg(upenv, 103-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k317, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0string__append_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 99 28) (close _V0string__append_k313) (bruijn ##x.656 1 0) (bruijn ##x.657 0 0))
V_CALL(VGetArg(upenv, 99-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k313, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k329, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.658 12 0) (bruijn str 7 0))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 7-1, 0)
    );
 }
}
static void _V0string__append_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn string-copy! 108 88) (close _V0string__append_k329) (bruijn str 6 0) (bruijn ##x.662 0 0) (bruijn c 11 3))
V_CALL(VGetArg(upenv, 108-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k329, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 3)
    );
 }
}
static void _V0string__append_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 107 28) (close _V0string__append_k328) (bruijn ##x.663 1 0) (bruijn ##x.664 0 0))
V_CALL(VGetArg(upenv, 107-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k328, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn string-copy! 104 88) (close _V0string__append_k325) (bruijn str 2 0) (bruijn ##x.665 0 0) (bruijn b 7 2))
V_CALL(VGetArg(upenv, 104-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k325, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0string__append_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 100 28) (close _V0string__append_k321) (bruijn ##x.666 2 0) (bruijn ##x.667 1 0) (bruijn ##x.668 0 0))
V_CALL(VGetArg(upenv, 100-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k321, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k347, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.669 18 0) (bruijn str 12 0))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 12-1, 0)
    );
 }
}
static void _V0string__append_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn string-copy! 114 88) (close _V0string__append_k347) (bruijn str 11 0) (bruijn ##x.674 0 0) (bruijn d 17 4))
V_CALL(VGetArg(upenv, 114-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k347, env)}),
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 17-1, 4)
    );
 }
}
static void _V0string__append_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 113 28) (close _V0string__append_k346) (bruijn ##x.675 2 0) (bruijn ##x.676 1 0) (bruijn ##x.677 0 0))
V_CALL(VGetArg(upenv, 113-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k346, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn string-copy! 109 88) (close _V0string__append_k342) (bruijn str 6 0) (bruijn ##x.678 0 0) (bruijn c 12 3))
V_CALL(VGetArg(upenv, 109-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k342, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 3)
    );
 }
}
static void _V0string__append_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 108 28) (close _V0string__append_k341) (bruijn ##x.679 1 0) (bruijn ##x.680 0 0))
V_CALL(VGetArg(upenv, 108-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k341, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0string__append_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn string-copy! 105 88) (close _V0string__append_k338) (bruijn str 2 0) (bruijn ##x.681 0 0) (bruijn b 8 2))
V_CALL(VGetArg(upenv, 105-1, 88), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k338, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 8-1, 2)
    );
 }
}
static void _V0string__append_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 101 28) (close _V0string__append_k334) (bruijn ##x.682 3 0) (bruijn ##x.683 2 0) (bruijn ##x.684 1 0) (bruijn ##x.685 0 0))
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
__attribute__((used)) static void _V20CaseError__V0string__append_lambda53(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0string__append_lambda53 #t (1 ((bruijn string-copy 97 87) (bruijn ##k.650 0 0) (##string ##string.1533))) (2 ((bruijn string-copy 97 87) (bruijn ##k.651 0 0) (bruijn a 0 1))) (3 ((bruijn string-length 97 91) (close _V0string__append_k311) (bruijn a 0 1))) (4 ((bruijn string-length 97 91) (close _V0string__append_k318) (bruijn a 0 1))) (5 ((bruijn string-length 97 91) (close _V0string__append_k330) (bruijn a 0 1))) (1 + ((bruijn fold-right 97 76) (bruijn ##k.686 0 0) (bruijn string-append 97 97) (##string ##string.1533) (bruijn strs 0 1))))
 VError("Not enough arguments to _V0string__append_lambda53, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0string__append_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0string__append_lambda53, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string-copy 97 87) (bruijn ##k.650 0 0) (##string ##string.1533))
V_CALL(VGetArg(upenv, 97-1, 87), runtime,
      _var0,
      VEncodePointer(&_V10string_D1533.sym, VPOINTER_OTHER)
    );
 }
}
__attribute__((used)) static void _V20Case1__V0string__append_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0string__append_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn string-copy 97 87) (bruijn ##k.651 0 0) (bruijn a 0 1))
V_CALL(VGetArg(upenv, 97-1, 87), runtime,
      _var0,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case2__V0string__append_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0string__append_lambda53, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
__attribute__((used)) static void _V20Case3__V0string__append_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0string__append_lambda53, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
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
__attribute__((used)) static void _V20Case4__V0string__append_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0string__append_lambda53, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
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
__attribute__((used)) static void _V20Case5__V0string__append_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0string__append_lambda53, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 97 76) (bruijn ##k.686 0 0) (bruijn string-append 97 97) (##string ##string.1533) (bruijn strs 0 1))
V_CALL(VGetArg(upenv, 97-1, 76), runtime,
      _var0,
      VGetArg(upenv, 97-1, 97),
      VEncodePointer(&_V10string_D1533.sym, VPOINTER_OTHER),
      _varargs
    );
 }
}
void _V0string__append_lambda53(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0string__append_lambda53:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0string__append_lambda53\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0string__append_lambda53\n"
"    cmp edx, 3\n"
"    je _V20Case2__V0string__append_lambda53\n"
"    cmp edx, 4\n"
"    je _V20Case3__V0string__append_lambda53\n"
"    cmp edx, 5\n"
"    je _V20Case4__V0string__append_lambda53\n"
"    cmp edx, 1\n"
"    jge _V20Case5__V0string__append_lambda53\n"
"    jmp _V20CaseError__V0string__append_lambda53\n"
);
static void _V0vanity_V0core_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k110) (bruijn string-append 96 97) (close _V0string__append_lambda53))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k110, env)}),
      VEncodeInt(96l), VEncodeInt(97l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_lambda53, env)})
    );
 }
}
static void _V0string___Glist_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k350, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.688 3 0) (bruijn ##x.690 0 0) (quote ()))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0,
      VNULL
    );
 }
}
static void _V0string___Glist_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn - 99 29) (close _V0string___Glist_k350) (bruijn ##x.691 0 0) 1)
V_CALL(VGetArg(upenv, 99-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k350, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0string___Glist_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k354, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.692 4 0) (bruijn ##x.694 2 0) (bruijn ##x.695 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cons 101 36) (close _V0loop_k354) (bruijn ##x.696 0 0) (bruijn acc 3 2))
V_CALL(VGetArg(upenv, 101-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k354, env)}),
      _var0,
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.693 0 0) ((bruijn ##k.692 1 0) (bruijn acc 1 2)) ((bruijn - 99 29) (close _V0loop_k352) (bruijn i 1 1) 1))
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
static void _V0loop_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda56, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda56, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0string___Glist_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0string___Glist_k348) (bruijn loop 0 1) (close _V0loop_lambda56))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k348, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda56, env)})
    );
 }
}
static void _V0string___Glist_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0string___Glist_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0string___Glist_lambda55) (bruijn ##k.687 0 0) #f)
V_CALL_FUNC(_V0string___Glist_lambda55, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k109) (bruijn string->list 95 96) (close _V0string___Glist_lambda54))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k109, env)}),
      VEncodeInt(95l), VEncodeInt(96l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_lambda54, env)})
    );
 }
}
static void _V0list___Gstring_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k357, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.698 1 0) (bruijn lst 4 1) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k362, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.700 5 0) (bruijn ##x.703 1 0) (bruijn ##x.704 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn string-set! 101 90) (close _V0loop_k360) (bruijn str 4 0) (bruijn i 2 2) (bruijn ##x.705 0 0))
V_CALL(VGetArg(upenv, 101-1, 90), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k360, env)}),
      upenv->up->up->up->vars[0],
      upenv->up->vars[2],
      _var0
    );
 }
}
static void _V0loop_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.701 0 0) ((bruijn ##k.700 1 0) (bruijn str 3 0)) ((bruijn car 100 37) (close _V0loop_k359) (bruijn lst 1 1)))
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
static void _V0loop_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda59, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda59, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0list___Gstring_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0list___Gstring_k357) (bruijn loop 0 1) (close _V0loop_lambda59))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k357, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda59, env)})
    );
 }
}
static void _V0list___Gstring_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0list___Gstring_lambda58) (bruijn ##k.697 2 0) #f)
V_CALL_FUNC(_V0list___Gstring_lambda58, env, runtime,
      upenv->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0list___Gstring_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn make-string 96 85) (close _V0list___Gstring_k356) (bruijn ##x.706 0 0))
V_CALL(VGetArg(upenv, 96-1, 85), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k356, env)}),
      _var0
    );
 }
}
static void _V0list___Gstring_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0list___Gstring_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0vanity_V0core_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k108) (bruijn list->string 94 95) (close _V0list___Gstring_lambda57))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k108, env)}),
      VEncodeInt(94l), VEncodeInt(95l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_lambda57, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k107) (bruijn symbol->string 93 94) ##sys.symbol->string)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k107, env)}),
      VEncodeInt(93l), VEncodeInt(94l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSymbolString2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k106) (bruijn string->number 92 93) ##sys.string->number)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k106, env)}),
      VEncodeInt(92l), VEncodeInt(93l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringNumber2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k105) (bruijn string->symbol 91 92) ##sys.string->symbol)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k105, env)}),
      VEncodeInt(91l), VEncodeInt(92l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringSymbol2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k104) (bruijn string-length 90 91) ##sys.string-length)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k104, env)}),
      VEncodeInt(90l), VEncodeInt(91l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringLength2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k103) (bruijn string-set! 89 90) ##sys.string-set!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k103, env)}),
      VEncodeInt(89l), VEncodeInt(90l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringSet2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k102) (bruijn string-ref 88 89) ##sys.string-ref)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k102, env)}),
      VEncodeInt(88l), VEncodeInt(89l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringRef2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k101) (bruijn string-copy! 87 88) ##sys.string-copy!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k101, env)}),
      VEncodeInt(87l), VEncodeInt(88l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringCopy2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k100) (bruijn string-copy 86 87) ##sys.substring)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k100, env)}),
      VEncodeInt(86l), VEncodeInt(87l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSubstring2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k99) (bruijn substring 85 86) ##sys.substring)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k99, env)}),
      VEncodeInt(85l), VEncodeInt(86l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSubstring2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k98) (bruijn make-string 84 85) ##sys.make-string)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k98, env)}),
      VEncodeInt(84l), VEncodeInt(85l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VMakeString2,NULL)})
    );
 }
}
static void _V0assoc_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k366, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assoc 88 84) (bruijn ##k.707 4 0) (bruijn x 4 1) (bruijn ##x.710 0 0))
V_CALL(VGetArg(upenv, 88-1, 84), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0assoc_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.709 0 0) ((bruijn car 87 37) (bruijn ##k.707 3 0) (bruijn alst 3 2)) ((bruijn cdr 87 38) (close _V0assoc_k366) (bruijn alst 3 2)))
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
  // ((bruijn equal? 86 17) (close _V0assoc_k365) (bruijn x 2 1) (bruijn ##x.711 0 0))
V_CALL(VGetArg(upenv, 86-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k365, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0assoc_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.708 0 0) ((bruijn ##k.707 1 0) #f) ((bruijn caar 85 41) (close _V0assoc_k364) (bruijn alst 1 2)))
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
static void _V0assoc_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0assoc_lambda60, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_lambda60, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0vanity_V0core_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k97) (bruijn assoc 83 84) (close _V0assoc_lambda60))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k97, env)}),
      VEncodeInt(83l), VEncodeInt(84l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_lambda60, env)})
    );
 }
}
static void _V0assv_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k370, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assv 87 83) (bruijn ##k.712 4 0) (bruijn x 4 1) (bruijn ##x.715 0 0))
V_CALL(VGetArg(upenv, 87-1, 83), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0assv_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.714 0 0) ((bruijn car 86 37) (bruijn ##k.712 3 0) (bruijn alst 3 2)) ((bruijn cdr 86 38) (close _V0assv_k370) (bruijn alst 3 2)))
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
  // ((bruijn eqv? 85 16) (close _V0assv_k369) (bruijn x 2 1) (bruijn ##x.716 0 0))
V_CALL(VGetArg(upenv, 85-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k369, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0assv_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.713 0 0) ((bruijn ##k.712 1 0) #f) ((bruijn caar 84 41) (close _V0assv_k368) (bruijn alst 1 2)))
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
static void _V0assv_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0assv_lambda61, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_lambda61, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0vanity_V0core_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k96) (bruijn assv 82 83) (close _V0assv_lambda61))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k96, env)}),
      VEncodeInt(82l), VEncodeInt(83l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_lambda61, env)})
    );
 }
}
static void _V0assq_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k374, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assq 86 82) (bruijn ##k.717 4 0) (bruijn x 4 1) (bruijn ##x.720 0 0))
V_CALL(VGetArg(upenv, 86-1, 82), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0assq_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.719 0 0) ((bruijn car 85 37) (bruijn ##k.717 3 0) (bruijn alst 3 2)) ((bruijn cdr 85 38) (close _V0assq_k374) (bruijn alst 3 2)))
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
  // ((bruijn eq? 84 14) (close _V0assq_k373) (bruijn x 2 1) (bruijn ##x.721 0 0))
V_CALL(VGetArg(upenv, 84-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k373, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0assq_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.718 0 0) ((bruijn ##k.717 1 0) #f) ((bruijn caar 83 41) (close _V0assq_k372) (bruijn alst 1 2)))
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
static void _V0assq_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0assq_lambda62, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_lambda62, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0vanity_V0core_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k95) (bruijn assq 81 82) (close _V0assq_lambda62))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k95, env)}),
      VEncodeInt(81l), VEncodeInt(82l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_lambda62, env)})
    );
 }
}
static void _V0member_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k378, runtime, upenv, 1, argc, _var0) {
  // ((bruijn member 85 81) (bruijn ##k.722 4 0) (bruijn x 4 1) (bruijn ##x.725 0 0))
V_CALL(VGetArg(upenv, 85-1, 81), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0member_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.724 0 0) ((bruijn ##k.722 3 0) (bruijn lst 3 2)) ((bruijn cdr 84 38) (close _V0member_k378) (bruijn lst 3 2)))
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
  // ((bruijn equal? 83 17) (close _V0member_k377) (bruijn x 2 1) (bruijn ##x.726 0 0))
V_CALL(VGetArg(upenv, 83-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k377, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0member_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.723 0 0) ((bruijn ##k.722 1 0) #f) ((bruijn car 82 37) (close _V0member_k376) (bruijn lst 1 2)))
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
static void _V0member_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0member_lambda63, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_lambda63, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0vanity_V0core_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k94) (bruijn member 80 81) (close _V0member_lambda63))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k94, env)}),
      VEncodeInt(80l), VEncodeInt(81l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_lambda63, env)})
    );
 }
}
static void _V0memv_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k382, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memv 84 80) (bruijn ##k.727 4 0) (bruijn x 4 1) (bruijn ##x.730 0 0))
V_CALL(VGetArg(upenv, 84-1, 80), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0memv_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.729 0 0) ((bruijn ##k.727 3 0) (bruijn lst 3 2)) ((bruijn cdr 83 38) (close _V0memv_k382) (bruijn lst 3 2)))
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
  // ((bruijn eqv? 82 16) (close _V0memv_k381) (bruijn x 2 1) (bruijn ##x.731 0 0))
V_CALL(VGetArg(upenv, 82-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k381, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0memv_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.728 0 0) ((bruijn ##k.727 1 0) #f) ((bruijn car 81 37) (close _V0memv_k380) (bruijn lst 1 2)))
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
static void _V0memv_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0memv_lambda64, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_lambda64, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0vanity_V0core_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k93) (bruijn memv 79 80) (close _V0memv_lambda64))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k93, env)}),
      VEncodeInt(79l), VEncodeInt(80l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_lambda64, env)})
    );
 }
}
static void _V0memq_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k386, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memq 83 79) (bruijn ##k.732 4 0) (bruijn x 4 1) (bruijn ##x.735 0 0))
V_CALL(VGetArg(upenv, 83-1, 79), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0memq_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.734 0 0) ((bruijn ##k.732 3 0) (bruijn lst 3 2)) ((bruijn cdr 82 38) (close _V0memq_k386) (bruijn lst 3 2)))
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
  // ((bruijn eq? 81 14) (close _V0memq_k385) (bruijn x 2 1) (bruijn ##x.736 0 0))
V_CALL(VGetArg(upenv, 81-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k385, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0memq_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.733 0 0) ((bruijn ##k.732 1 0) #f) ((bruijn car 80 37) (close _V0memq_k384) (bruijn lst 1 2)))
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
static void _V0memq_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0memq_lambda65, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_lambda65, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0vanity_V0core_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k92) (bruijn memq 78 79) (close _V0memq_lambda65))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k92, env)}),
      VEncodeInt(78l), VEncodeInt(79l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_lambda65, env)})
    );
 }
}
static void _V0reverse_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0reverse_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 1 1) (bruijn ##k.738 1 0) (quote ()) (bruijn lst 2 1))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VNULL,
      upenv->up->vars[1]
    );
 }
}
static void _V0iter_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k391, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 5 1) (bruijn ##k.740 4 0) (bruijn ##x.742 1 0) (bruijn ##x.743 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cons 82 36) (close _V0iter_k390) (bruijn ##x.744 0 0) (bruijn acc 2 1))
V_CALL(VGetArg(upenv, 82-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k390, env)}),
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0iter_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.741 0 0) ((bruijn ##k.740 1 0) (bruijn acc 1 1)) ((bruijn car 81 37) (close _V0iter_k389) (bruijn rest 1 2)))
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
static void _V0iter_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda68, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda68, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0reverse_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0reverse_k387) (bruijn iter 0 1) (close _V0iter_lambda68))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_k387, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda68, env)})
    );
 }
}
static void _V0reverse_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0reverse_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0reverse_lambda67) (bruijn ##k.737 0 0) #f)
V_CALL_FUNC(_V0reverse_lambda67, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k91) (bruijn reverse 77 78) (close _V0reverse_lambda66))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k91, env)}),
      VEncodeInt(77l), VEncodeInt(78l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_lambda66, env)})
    );
 }
}
static void _V0append_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k392, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.748 1 0) (bruijn a 2 1))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k393, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.750 1 0) (##inline ##sys.cons (##inline ##sys.car (bruijn a 1 1)) (bruijn ##x.753 0 0)))
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
static void _V0loop_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (bruijn a 0 1)) ((bruijn ##k.750 0 0) (bruijn b 2 2)) ((bruijn loop 1 1) (close _V0loop_k393) (##inline ##sys.cdr (bruijn a 0 1))))
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
static void _V0append_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0append_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0append_k392) (bruijn loop 0 1) (close _V0loop_lambda71))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k392, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda71, env)})
    );
 }
}
static void _V0append_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k394, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 78 77) (bruijn ##k.755 1 0) (bruijn a 1 1) (bruijn ##x.756 0 0))
V_CALL(VGetArg(upenv, 78-1, 77), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0append_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 79 77) (bruijn ##k.757 2 0) (bruijn a 2 1) (bruijn ##x.758 0 0))
V_CALL(VGetArg(upenv, 79-1, 77), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0append_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn append 78 77) (close _V0append_k396) (bruijn b 1 2) (bruijn ##x.759 0 0))
V_CALL(VGetArg(upenv, 78-1, 77), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k396, env)}),
      upenv->vars[2],
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0append_lambda69(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0append_lambda69 #t (1 ((bruijn ##k.745 0 0) (quote ()))) (2 ((bruijn ##k.746 0 0) (bruijn a 0 1))) (3 ((close _V0append_lambda70) (bruijn ##k.747 0 0) #f)) (4 ((bruijn append 77 77) (close _V0append_k394) (bruijn b 0 2) (bruijn c 0 3))) (5 ((bruijn append 77 77) (close _V0append_k395) (bruijn c 0 3) (bruijn d 0 4))) (1 + ((bruijn fold-right 77 76) (bruijn ##k.760 0 0) (bruijn append 77 77) (quote ()) (bruijn lsts 0 1))))
 VError("Not enough arguments to _V0append_lambda69, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0append_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0append_lambda69, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.745 0 0) (quote ()))
V_CALL(_var0, runtime,
      VNULL
    );
 }
}
__attribute__((used)) static void _V20Case1__V0append_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0append_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.746 0 0) (bruijn a 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case2__V0append_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0append_lambda69, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0append_lambda70) (bruijn ##k.747 0 0) #f)
V_CALL_FUNC(_V0append_lambda70, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case3__V0append_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0append_lambda69, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
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
__attribute__((used)) static void _V20Case4__V0append_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0append_lambda69, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
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
__attribute__((used)) static void _V20Case5__V0append_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0append_lambda69, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 77 76) (bruijn ##k.760 0 0) (bruijn append 77 77) (quote ()) (bruijn lsts 0 1))
V_CALL(VGetArg(upenv, 77-1, 76), runtime,
      _var0,
      VGetArg(upenv, 77-1, 77),
      VNULL,
      _varargs
    );
 }
}
void _V0append_lambda69(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0append_lambda69:\n"
"    cmp edx, 1\n"
"    je _V20Case0__V0append_lambda69\n"
"    cmp edx, 2\n"
"    je _V20Case1__V0append_lambda69\n"
"    cmp edx, 3\n"
"    je _V20Case2__V0append_lambda69\n"
"    cmp edx, 4\n"
"    je _V20Case3__V0append_lambda69\n"
"    cmp edx, 5\n"
"    je _V20Case4__V0append_lambda69\n"
"    cmp edx, 1\n"
"    jge _V20Case5__V0append_lambda69\n"
"    jmp _V20CaseError__V0append_lambda69\n"
);
static void _V0vanity_V0core_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k90) (bruijn append 76 77) (close _V0append_lambda69))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k90, env)}),
      VEncodeInt(76l), VEncodeInt(77l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_lambda69, env)})
    );
 }
}
static void _V0fold__right_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.762 1 0) (bruijn ks 2 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k401, runtime, upenv, 1, argc, _var0) {
  // ((bruijn kons 6 1) (bruijn ##k.764 4 0) (bruijn ##x.766 2 0) (bruijn ##x.767 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn loop 4 1) (close _V0loop_k401) (bruijn ##x.768 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k401, env)}),
      _var0
    );
 }
}
static void _V0loop_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.765 0 0) ((bruijn ##k.764 1 0) (bruijn knil 3 2)) ((bruijn car 79 37) (close _V0loop_k399) (bruijn ks 1 1)))
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
static void _V0loop_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0fold__right_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0fold__right_k397) (bruijn loop 0 1) (close _V0loop_lambda74))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k397, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda74, env)})
    );
 }
}
static void _V0fold__right_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0fold__right_lambda72, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_lambda72, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0fold__right_lambda73) (bruijn ##k.761 0 0) #f)
V_CALL_FUNC(_V0fold__right_lambda73, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k89) (bruijn fold-right 75 76) (close _V0fold__right_lambda72))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k89, env)}),
      VEncodeInt(75l), VEncodeInt(76l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_lambda72, env)})
    );
 }
}
static void _V0fold_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0fold_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_k402, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.770 1 0) (bruijn knil 2 2) (bruijn ks 2 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k406, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.772 4 0) (bruijn ##x.774 1 0) (bruijn ##x.775 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn kons 4 1) (close _V0loop_k405) (bruijn ##x.776 0 0) (bruijn kur 2 1))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k405, env)}),
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.773 0 0) ((bruijn ##k.772 1 0) (bruijn kur 1 1)) ((bruijn car 78 37) (close _V0loop_k404) (bruijn ks 1 2)))
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
static void _V0loop_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda77, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda77, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0fold_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0fold_k402) (bruijn loop 0 1) (close _V0loop_lambda77))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold_k402, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda77, env)})
    );
 }
}
static void _V0fold_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0fold_lambda75, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_lambda75, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0fold_lambda76) (bruijn ##k.769 0 0) #f)
V_CALL_FUNC(_V0fold_lambda76, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k88) (bruijn fold 74 75) (close _V0fold_lambda75))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k88, env)}),
      VEncodeInt(74l), VEncodeInt(75l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold_lambda75, env)})
    );
 }
}
static void _V0iota_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iota_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_k407, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.778 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k410, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 79 36) (bruijn ##k.780 3 0) (bruijn i 3 1) (bruijn ##x.782 0 0))
V_CALL(VGetArg(upenv, 79-1, 36), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn loop 3 1) (close _V0loop_k410) (bruijn ##x.783 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k410, env)}),
      _var0
    );
 }
}
static void _V0loop_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.781 0 0) ((bruijn ##k.780 1 0) (quote ())) ((bruijn + 77 28) (close _V0loop_k409) (bruijn i 1 1) 1))
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
static void _V0loop_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0iota_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iota_k407) (bruijn loop 0 1) (close _V0loop_lambda80))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_k407, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda80, env)})
    );
 }
}
static void _V0iota_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iota_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_k411, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.785 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 80 36) (bruijn ##k.787 4 0) (bruijn ##x.789 2 0) (bruijn ##x.790 0 0))
V_CALL(VGetArg(upenv, 80-1, 36), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn loop 4 1) (close _V0loop_k415) (bruijn ##x.791 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k415, env)}),
      _var0
    );
 }
}
static void _V0loop_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.788 0 0) ((bruijn ##k.787 1 0) (quote ())) ((bruijn + 77 28) (close _V0loop_k413) (bruijn i 1 1) (bruijn b 3 2)))
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
static void _V0loop_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0iota_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iota_k411) (bruijn loop 0 1) (close _V0loop_lambda82))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_k411, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda82, env)})
    );
 }
}
static void _V0iota_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iota_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_k416, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.793 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k421, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 81 36) (bruijn ##k.795 5 0) (bruijn ##x.797 2 0) (bruijn ##x.798 0 0))
V_CALL(VGetArg(upenv, 81-1, 36), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn loop 5 1) (close _V0loop_k421) (bruijn ##x.799 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k421, env)}),
      _var0
    );
 }
}
static void _V0loop_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 78 28) (close _V0loop_k419) (bruijn ##x.800 0 0) (bruijn b 4 2))
V_CALL(VGetArg(upenv, 78-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k419, env)}),
      _var0,
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.796 0 0) ((bruijn ##k.795 1 0) (quote ())) ((bruijn * 77 30) (close _V0loop_k418) (bruijn i 1 1) (bruijn s 3 3)))
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
static void _V0loop_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0iota_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iota_k416) (bruijn loop 0 1) (close _V0loop_lambda84))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_k416, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda84, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0iota_lambda78(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0iota_lambda78 #t (2 ((close _V0iota_lambda79) (bruijn ##k.777 0 0) #f)) (3 ((close _V0iota_lambda81) (bruijn ##k.784 0 0) #f)) (4 ((close _V0iota_lambda83) (bruijn ##k.792 0 0) #f)))
 VError("Not enough arguments to _V0iota_lambda78, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0iota_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0iota_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iota_lambda79) (bruijn ##k.777 0 0) #f)
V_CALL_FUNC(_V0iota_lambda79, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case1__V0iota_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0iota_lambda78, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0iota_lambda81) (bruijn ##k.784 0 0) #f)
V_CALL_FUNC(_V0iota_lambda81, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case2__V0iota_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0iota_lambda78, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0iota_lambda83) (bruijn ##k.792 0 0) #f)
V_CALL_FUNC(_V0iota_lambda83, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0iota_lambda78(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0iota_lambda78:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0iota_lambda78\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0iota_lambda78\n"
"    cmp edx, 4\n"
"    je _V20Case2__V0iota_lambda78\n"
"    jmp _V20CaseError__V0iota_lambda78\n"
);
static void _V0vanity_V0core_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k87) (bruijn iota 73 74) (close _V0iota_lambda78))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k87, env)}),
      VEncodeInt(73l), VEncodeInt(74l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_lambda78, env)})
    );
 }
}
static void _V0for__each_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k422, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.802 1 0) (bruijn xs 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k423, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.804 1 0) (##inline ##sys.cdr (bruijn xs 1 1)))
V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k423) (##inline ##sys.car (bruijn xs 0 1))) ((bruijn ##k.804 0 0) #f))
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
static void _V0for__each_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0for__each_k422) (bruijn loop 0 1) (close _V0loop_lambda87))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k422, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda87, env)})
    );
 }
}
static void _V0for__each_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k424, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.811 1 0) (bruijn xs 2 2) (bruijn ys 2 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k425, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.813 1 0) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)))
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
static void _V0loop_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k425) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2))) ((bruijn ##k.813 0 0) #f))
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
static void _V0for__each_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0for__each_k424) (bruijn loop 0 1) (close _V0loop_lambda89))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k424, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda89, env)})
    );
 }
}
static void _V0for__each_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k426, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.822 1 0) (bruijn xs 2 2) (bruijn ys 2 3) (bruijn zs 2 4))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3],
      upenv->up->vars[4]
    );
 }
}
static void _V0loop_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k427, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.824 1 0) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)) (##inline ##sys.cdr (bruijn zs 1 3)))
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
static void _V0loop_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda91, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda91, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k427) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2)) (##inline ##sys.car (bruijn zs 0 3))) ((bruijn ##k.824 0 0) #f))
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
static void _V0for__each_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0for__each_k426) (bruijn loop 0 1) (close _V0loop_lambda91))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k426, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda91, env)})
    );
 }
}
static void _V0for__each_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0for__each_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_k428, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.835 1 0) (bruijn lsts 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k431, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 1) (bruijn ##k.837 3 0) (bruijn ##x.840 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn apply 76 125) (close _V0loop_k430) (bruijn f 3 1) (bruijn ##x.841 0 0))
V_CALL(VGetArg(upenv, 76-1, 125), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k430, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.not (##inline ##sys.null? (##inline ##sys.car (bruijn lsts 0 1)))) ((bruijn map 75 72) (close _V0loop_k429) ##sys.car (bruijn lsts 0 1)) ((bruijn ##k.837 0 0) #f))
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
static void _V0for__each_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0for__each_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0for__each_k428) (bruijn loop 0 1) (close _V0loop_lambda93))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_k428, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda93, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0for__each_lambda85(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0for__each_lambda85 #t (3 ((close _V0for__each_lambda86) (bruijn ##k.801 0 0) #f)) (4 ((close _V0for__each_lambda88) (bruijn ##k.810 0 0) #f)) (5 ((close _V0for__each_lambda90) (bruijn ##k.821 0 0) #f)) (2 + ((close _V0for__each_lambda92) (bruijn ##k.834 0 0) #f)))
 VError("Not enough arguments to _V0for__each_lambda85, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0for__each_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0for__each_lambda85, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0for__each_lambda86) (bruijn ##k.801 0 0) #f)
V_CALL_FUNC(_V0for__each_lambda86, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case1__V0for__each_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0for__each_lambda85, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0for__each_lambda88) (bruijn ##k.810 0 0) #f)
V_CALL_FUNC(_V0for__each_lambda88, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case2__V0for__each_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0for__each_lambda85, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V0for__each_lambda90) (bruijn ##k.821 0 0) #f)
V_CALL_FUNC(_V0for__each_lambda90, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case3__V0for__each_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0for__each_lambda85, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0for__each_lambda92) (bruijn ##k.834 0 0) #f)
V_CALL_FUNC(_V0for__each_lambda92, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0for__each_lambda85(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0for__each_lambda85:\n"
"    cmp edx, 3\n"
"    je _V20Case0__V0for__each_lambda85\n"
"    cmp edx, 4\n"
"    je _V20Case1__V0for__each_lambda85\n"
"    cmp edx, 5\n"
"    je _V20Case2__V0for__each_lambda85\n"
"    cmp edx, 2\n"
"    jge _V20Case3__V0for__each_lambda85\n"
"    jmp _V20CaseError__V0for__each_lambda85\n"
);
static void _V0vanity_V0core_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k86) (bruijn for-each 72 73) (close _V0for__each_lambda85))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k86, env)}),
      VEncodeInt(72l), VEncodeInt(73l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_lambda85, env)})
    );
 }
}
static void _V0map_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k432, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.845 1 0) (bruijn xs 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k434, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.847 2 0) (##inline ##sys.cons (bruijn ##x.849 1 0) (bruijn ##x.850 0 0)))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0loop_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
static void _V0loop_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
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
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.847 0 0) (quote ())) ((bruijn f 2 1) (close _V0loop_k433) (##inline ##sys.car (bruijn xs 0 1))))
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
static void _V0map_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0map_k432) (bruijn loop 0 1) (close _V0loop_lambda96))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k432, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda96, env)})
    );
 }
}
static void _V0map_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k435, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.854 1 0) (bruijn xs 2 2) (bruijn ys 2 3))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k437, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.856 2 0) (##inline ##sys.cons (bruijn ##x.858 1 0) (bruijn ##x.859 0 0)))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0loop_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
static void _V0loop_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda98, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda98, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.856 0 0) (quote ())) ((bruijn f 2 1) (close _V0loop_k436) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2))))
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
static void _V0map_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0map_k435) (bruijn loop 0 1) (close _V0loop_lambda98))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k435, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda98, env)})
    );
 }
}
static void _V0map_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k438, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.865 1 0) (bruijn xs 2 2) (bruijn ys 2 3) (bruijn zs 2 4))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      upenv->up->vars[3],
      upenv->up->vars[4]
    );
 }
}
static void _V0loop_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k440, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.867 2 0) (##inline ##sys.cons (bruijn ##x.869 1 0) (bruijn ##x.870 0 0)))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0loop_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
static void _V0loop_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda100, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda100, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.867 0 0) (quote ())) ((bruijn f 2 1) (close _V0loop_k439) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2)) (##inline ##sys.car (bruijn zs 0 3))))
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
static void _V0map_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0map_k438) (bruijn loop 0 1) (close _V0loop_lambda100))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k438, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda100, env)})
    );
 }
}
static void _V0map_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0map_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0map_k441, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.878 1 0) (bruijn lsts 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k445, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.880 4 0) (##inline ##sys.cons (bruijn ##x.882 2 0) (bruijn ##x.883 0 0)))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
upenv->up->vars[0],
      _var0
    )

    );
 }
}
static void _V0loop_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn loop 4 1) (close _V0loop_k445) (bruijn ##x.884 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k445, env)}),
      _var0
    );
 }
}
static void _V0loop_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn apply 75 125) (close _V0loop_k443) (bruijn f 3 1) (bruijn ##x.885 0 0))
V_CALL(VGetArg(upenv, 75-1, 125), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k443, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.car (bruijn lsts 0 1))) ((bruijn ##k.880 0 0) (quote ())) ((bruijn map 74 72) (close _V0loop_k442) ##sys.car (bruijn lsts 0 1)))
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
static void _V0map_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0map_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0map_k441) (bruijn loop 0 1) (close _V0loop_lambda102))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_k441, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda102, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0map_lambda94 #t (3 ((close _V0map_lambda95) (bruijn ##k.844 0 0) #f)) (4 ((close _V0map_lambda97) (bruijn ##k.853 0 0) #f)) (5 ((close _V0map_lambda99) (bruijn ##k.864 0 0) #f)) (2 + ((close _V0map_lambda101) (bruijn ##k.877 0 0) #f)))
 VError("Not enough arguments to _V0map_lambda94, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0map_lambda94, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0map_lambda95) (bruijn ##k.844 0 0) #f)
V_CALL_FUNC(_V0map_lambda95, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case1__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0map_lambda94, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0map_lambda97) (bruijn ##k.853 0 0) #f)
V_CALL_FUNC(_V0map_lambda97, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case2__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0map_lambda94, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V0map_lambda99) (bruijn ##k.864 0 0) #f)
V_CALL_FUNC(_V0map_lambda99, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
__attribute__((used)) static void _V20Case3__V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0map_lambda94, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0map_lambda101) (bruijn ##k.877 0 0) #f)
V_CALL_FUNC(_V0map_lambda101, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0map_lambda94(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0map_lambda94:\n"
"    cmp edx, 3\n"
"    je _V20Case0__V0map_lambda94\n"
"    cmp edx, 4\n"
"    je _V20Case1__V0map_lambda94\n"
"    cmp edx, 5\n"
"    je _V20Case2__V0map_lambda94\n"
"    cmp edx, 2\n"
"    jge _V20Case3__V0map_lambda94\n"
"    jmp _V20CaseError__V0map_lambda94\n"
);
static void _V0vanity_V0core_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k85) (bruijn map 71 72) (close _V0map_lambda94))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k85, env)}),
      VEncodeInt(71l), VEncodeInt(72l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_lambda94, env)})
    );
 }
}
static void _V0list__ref_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list__ref_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_k447, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-ref 73 71) (bruijn ##k.887 2 0) (##inline ##sys.cdr (bruijn lst 2 1)) (bruijn ##x.890 0 0))
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
  // (if (bruijn ##p.888 0 0) ((bruijn ##k.887 1 0) (##inline ##sys.car (bruijn lst 1 1))) ((bruijn - 72 29) (close _V0list__ref_k447) (bruijn x 1 2) 1))
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
static void _V0list__ref_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0list__ref_lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_lambda103, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0vanity_V0core_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k84) (bruijn list-ref 70 71) (close _V0list__ref_lambda103))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k84, env)}),
      VEncodeInt(70l), VEncodeInt(71l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_lambda103, env)})
    );
 }
}
static void _V0length_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0length_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0length_k448, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.892 1 0) (bruijn lst 2 1) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k449, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.894 1 0) (##inline ##sys.cdr (bruijn lst 1 1)) (bruijn ##x.897 0 0))
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
static void _V0loop_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda106, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda106, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn lst 0 1)) ((bruijn ##k.894 0 0) (bruijn i 0 2)) ((bruijn + 72 28) (close _V0loop_k449) (bruijn i 0 2) 1))
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
static void _V0length_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0length_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0length_k448) (bruijn loop 0 1) (close _V0loop_lambda106))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0length_k448, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda106, env)})
    );
 }
}
static void _V0length_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0length_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0length_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0length_lambda105) (bruijn ##k.891 0 0) #f)
V_CALL_FUNC(_V0length_lambda105, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k83) (bruijn length 69 70) (close _V0length_lambda104))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k83, env)}),
      VEncodeInt(69l), VEncodeInt(70l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0length_lambda104, env)})
    );
 }
}
static void _V0list_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VError("Not enough arguments to _V0list_lambda107, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0list_lambda107, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##k.898 0 0) (bruijn args 0 1))
V_CALL(_var0, runtime,
      _varargs
    );
 }
}
static void _V0vanity_V0core_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k82) (bruijn list 68 69) (close _V0list_lambda107))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k82, env)}),
      VEncodeInt(68l), VEncodeInt(69l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list_lambda107, env)})
    );
 }
}
static void _V0cddddr_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cddddr_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddddr_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.899 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k81) (bruijn cddddr 67 68) (close _V0cddddr_lambda108))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k81, env)}),
      VEncodeInt(67l), VEncodeInt(68l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddddr_lambda108, env)})
    );
 }
}
static void _V0cdddar_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cdddar_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdddar_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.903 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k80) (bruijn cdddar 66 67) (close _V0cdddar_lambda109))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k80, env)}),
      VEncodeInt(66l), VEncodeInt(67l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdddar_lambda109, env)})
    );
 }
}
static void _V0cddadr_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cddadr_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddadr_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.907 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k79) (bruijn cddadr 65 66) (close _V0cddadr_lambda110))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k79, env)}),
      VEncodeInt(65l), VEncodeInt(66l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddadr_lambda110, env)})
    );
 }
}
static void _V0cddaar_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cddaar_lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddaar_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.911 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k78) (bruijn cddaar 64 65) (close _V0cddaar_lambda111))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k78, env)}),
      VEncodeInt(64l), VEncodeInt(65l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddaar_lambda111, env)})
    );
 }
}
static void _V0cdaddr_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaddr_lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaddr_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.915 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k77) (bruijn cdaddr 63 64) (close _V0cdaddr_lambda112))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k77, env)}),
      VEncodeInt(63l), VEncodeInt(64l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaddr_lambda112, env)})
    );
 }
}
static void _V0cdadar_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cdadar_lambda113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdadar_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.919 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k76) (bruijn cdadar 62 63) (close _V0cdadar_lambda113))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k76, env)}),
      VEncodeInt(62l), VEncodeInt(63l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdadar_lambda113, env)})
    );
 }
}
static void _V0cdaadr_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaadr_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaadr_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.923 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k75) (bruijn cdaadr 61 62) (close _V0cdaadr_lambda114))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k75, env)}),
      VEncodeInt(61l), VEncodeInt(62l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaadr_lambda114, env)})
    );
 }
}
static void _V0cdaaar_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaaar_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaaar_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.927 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k74) (bruijn cdaaar 60 61) (close _V0cdaaar_lambda115))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k74, env)}),
      VEncodeInt(60l), VEncodeInt(61l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaaar_lambda115, env)})
    );
 }
}
static void _V0cadddr_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cadddr_lambda116, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadddr_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.931 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k73) (bruijn cadddr 59 60) (close _V0cadddr_lambda116))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k73, env)}),
      VEncodeInt(59l), VEncodeInt(60l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadddr_lambda116, env)})
    );
 }
}
static void _V0caddar_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0caddar_lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caddar_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.935 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k72) (bruijn caddar 58 59) (close _V0caddar_lambda117))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k72, env)}),
      VEncodeInt(58l), VEncodeInt(59l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caddar_lambda117, env)})
    );
 }
}
static void _V0cadadr_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cadadr_lambda118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadadr_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.939 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k71) (bruijn cadadr 57 58) (close _V0cadadr_lambda118))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k71, env)}),
      VEncodeInt(57l), VEncodeInt(58l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadadr_lambda118, env)})
    );
 }
}
static void _V0cadaar_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cadaar_lambda119, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadaar_lambda119, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.943 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k70) (bruijn cadaar 56 57) (close _V0cadaar_lambda119))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k70, env)}),
      VEncodeInt(56l), VEncodeInt(57l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadaar_lambda119, env)})
    );
 }
}
static void _V0caaddr_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0caaddr_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaddr_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.947 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k69) (bruijn caaddr 55 56) (close _V0caaddr_lambda120))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k69, env)}),
      VEncodeInt(55l), VEncodeInt(56l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaddr_lambda120, env)})
    );
 }
}
static void _V0caadar_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0caadar_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caadar_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.951 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k68) (bruijn caadar 54 55) (close _V0caadar_lambda121))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k68, env)}),
      VEncodeInt(54l), VEncodeInt(55l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caadar_lambda121, env)})
    );
 }
}
static void _V0caaadr_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0caaadr_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaadr_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.955 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k67) (bruijn caaadr 53 54) (close _V0caaadr_lambda122))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k67, env)}),
      VEncodeInt(53l), VEncodeInt(54l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaadr_lambda122, env)})
    );
 }
}
static void _V0caaaar_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0caaaar_lambda123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaaar_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.959 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
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
static void _V0vanity_V0core_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k66) (bruijn caaaar 52 53) (close _V0caaaar_lambda123))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k66, env)}),
      VEncodeInt(52l), VEncodeInt(53l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaaar_lambda123, env)})
    );
 }
}
static void _V0cdddr_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cdddr_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdddr_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.963 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1)))))
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
static void _V0vanity_V0core_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k65) (bruijn cdddr 51 52) (close _V0cdddr_lambda124))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k65, env)}),
      VEncodeInt(51l), VEncodeInt(52l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdddr_lambda124, env)})
    );
 }
}
static void _V0cddar_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cddar_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddar_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.966 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1)))))
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
static void _V0vanity_V0core_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k64) (bruijn cddar 50 51) (close _V0cddar_lambda125))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k64, env)}),
      VEncodeInt(50l), VEncodeInt(51l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddar_lambda125, env)})
    );
 }
}
static void _V0cdadr_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cdadr_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdadr_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.969 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1)))))
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
static void _V0vanity_V0core_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k63) (bruijn cdadr 49 50) (close _V0cdadr_lambda126))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k63, env)}),
      VEncodeInt(49l), VEncodeInt(50l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdadr_lambda126, env)})
    );
 }
}
static void _V0cdaar_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaar_lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaar_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.972 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1)))))
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
static void _V0vanity_V0core_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k62) (bruijn cdaar 48 49) (close _V0cdaar_lambda127))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k62, env)}),
      VEncodeInt(48l), VEncodeInt(49l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaar_lambda127, env)})
    );
 }
}
static void _V0caddr_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0caddr_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caddr_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.975 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1)))))
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
static void _V0vanity_V0core_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k61) (bruijn caddr 47 48) (close _V0caddr_lambda128))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k61, env)}),
      VEncodeInt(47l), VEncodeInt(48l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caddr_lambda128, env)})
    );
 }
}
static void _V0cadar_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cadar_lambda129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadar_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.978 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1)))))
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
static void _V0vanity_V0core_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k60) (bruijn cadar 46 47) (close _V0cadar_lambda129))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k60, env)}),
      VEncodeInt(46l), VEncodeInt(47l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadar_lambda129, env)})
    );
 }
}
static void _V0caadr_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0caadr_lambda130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caadr_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.981 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1)))))
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
static void _V0vanity_V0core_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k59) (bruijn caadr 45 46) (close _V0caadr_lambda130))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k59, env)}),
      VEncodeInt(45l), VEncodeInt(46l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caadr_lambda130, env)})
    );
 }
}
static void _V0caaar_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0caaar_lambda131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaar_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.984 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1)))))
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
static void _V0vanity_V0core_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k58) (bruijn caaar 44 45) (close _V0caaar_lambda131))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k58, env)}),
      VEncodeInt(44l), VEncodeInt(45l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaar_lambda131, env)})
    );
 }
}
static void _V0cddr_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cddr_lambda132, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddr_lambda132, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.987 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCdr(
_var1
    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k57) (bruijn cddr 43 44) (close _V0cddr_lambda132))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k57, env)}),
      VEncodeInt(43l), VEncodeInt(44l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddr_lambda132, env)})
    );
 }
}
static void _V0cdar_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cdar_lambda133, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdar_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.989 0 0) (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCdr(
VInlineCar(
_var1
    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k56) (bruijn cdar 42 43) (close _V0cdar_lambda133))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k56, env)}),
      VEncodeInt(42l), VEncodeInt(43l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdar_lambda133, env)})
    );
 }
}
static void _V0cadr_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0cadr_lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadr_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.991 0 0) (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCdr(
_var1
    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k55) (bruijn cadr 41 42) (close _V0cadr_lambda134))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k55, env)}),
      VEncodeInt(41l), VEncodeInt(42l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadr_lambda134, env)})
    );
 }
}
static void _V0caar_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0caar_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caar_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.993 0 0) (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))
V_CALL(_var0, runtime,
      VInlineCar(
VInlineCar(
_var1
    )

    )

    );
 }
}
static void _V0vanity_V0core_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k54) (bruijn caar 40 41) (close _V0caar_lambda135))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k54, env)}),
      VEncodeInt(40l), VEncodeInt(41l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caar_lambda135, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k53) (bruijn set-cdr! 39 40) ##sys.set-cdr!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k53, env)}),
      VEncodeInt(39l), VEncodeInt(40l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSetCdr2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k52) (bruijn set-car! 38 39) ##sys.set-car!)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k52, env)}),
      VEncodeInt(38l), VEncodeInt(39l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSetCar2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k51) (bruijn cdr 37 38) ##sys.cdr)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k51, env)}),
      VEncodeInt(37l), VEncodeInt(38l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCdr2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k50) (bruijn car 36 37) ##sys.car)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k50, env)}),
      VEncodeInt(36l), VEncodeInt(37l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCar2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k49) (bruijn cons 35 36) ##sys.cons)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k49, env)}),
      VEncodeInt(35l), VEncodeInt(36l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCons2,NULL)})
    );
 }
}
static void _V0min_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k450, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.997 0 0) ((bruijn ##k.996 1 0) (bruijn a 1 1)) ((bruijn ##k.996 1 0) (bruijn b 1 2)))
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
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k451, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 36 35) (bruijn ##k.998 1 0) (bruijn ##x.999 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 36-1, 35), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0min_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k453, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 37 35) (bruijn ##k.1000 2 0) (bruijn ##x.1001 0 0) (bruijn d 2 4))
V_CALL(VGetArg(upenv, 37-1, 35), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]
    );
 }
}
static void _V0min_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn min 36 35) (close _V0min_k453) (bruijn ##x.1002 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 36-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k453, env)}),
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0min_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k454, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1004 1 0) (bruijn a 2 1) (bruijn bs 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k458, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.1006 4 0) (bruijn ##x.1008 1 0) (bruijn ##x.1009 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn min 39 35) (close _V0loop_k457) (bruijn a 4 1) (bruijn ##x.1010 0 0))
V_CALL(VGetArg(upenv, 39-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k457, env)}),
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1007 0 0) ((bruijn ##k.1006 1 0) (bruijn ret 1 1)) ((bruijn car 38 37) (close _V0loop_k456) (bruijn bs 3 2)))
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
static void _V0loop_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda138, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda138, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0min_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0min_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0min_k454) (bruijn loop 0 1) (close _V0loop_lambda138))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k454, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda138, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0min_lambda136(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0min_lambda136 #t (2 ((bruijn ##k.995 0 0) (bruijn a 0 1))) (3 ((bruijn < 35 19) (close _V0min_k450) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn min 35 35) (close _V0min_k451) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn min 35 35) (close _V0min_k452) (bruijn a 0 1) (bruijn b 0 2))) (2 + ((close _V0min_lambda137) (bruijn ##k.1003 0 0) #f)))
 VError("Not enough arguments to _V0min_lambda136, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0min_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0min_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.995 0 0) (bruijn a 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case1__V0min_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0min_lambda136, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
__attribute__((used)) static void _V20Case2__V0min_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0min_lambda136, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
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
__attribute__((used)) static void _V20Case3__V0min_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0min_lambda136, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
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
__attribute__((used)) static void _V20Case4__V0min_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0min_lambda136, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0min_lambda137) (bruijn ##k.1003 0 0) #f)
V_CALL_FUNC(_V0min_lambda137, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0min_lambda136(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0min_lambda136:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0min_lambda136\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0min_lambda136\n"
"    cmp edx, 4\n"
"    je _V20Case2__V0min_lambda136\n"
"    cmp edx, 5\n"
"    je _V20Case3__V0min_lambda136\n"
"    cmp edx, 2\n"
"    jge _V20Case4__V0min_lambda136\n"
"    jmp _V20CaseError__V0min_lambda136\n"
);
static void _V0vanity_V0core_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k48) (bruijn min 34 35) (close _V0min_lambda136))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k48, env)}),
      VEncodeInt(34l), VEncodeInt(35l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_lambda136, env)})
    );
 }
}
static void _V0max_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k459, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1013 0 0) ((bruijn ##k.1012 1 0) (bruijn a 1 1)) ((bruijn ##k.1012 1 0) (bruijn b 1 2)))
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
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k460, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 35 34) (bruijn ##k.1014 1 0) (bruijn ##x.1015 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 35-1, 34), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0max_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k462, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 36 34) (bruijn ##k.1016 2 0) (bruijn ##x.1017 0 0) (bruijn d 2 4))
V_CALL(VGetArg(upenv, 36-1, 34), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]
    );
 }
}
static void _V0max_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn max 35 34) (close _V0max_k462) (bruijn ##x.1018 0 0) (bruijn c 1 3))
V_CALL(VGetArg(upenv, 35-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k462, env)}),
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0max_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k463, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1020 1 0) (bruijn a 2 1) (bruijn bs 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k467, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.1022 4 0) (bruijn ##x.1024 1 0) (bruijn ##x.1025 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn max 38 34) (close _V0loop_k466) (bruijn a 4 1) (bruijn ##x.1026 0 0))
V_CALL(VGetArg(upenv, 38-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k466, env)}),
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1023 0 0) ((bruijn ##k.1022 1 0) (bruijn ret 1 1)) ((bruijn car 37 37) (close _V0loop_k465) (bruijn bs 3 2)))
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
static void _V0loop_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda141, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda141, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0max_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0max_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0max_k463) (bruijn loop 0 1) (close _V0loop_lambda141))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k463, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda141, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0max_lambda139(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0max_lambda139 #t (2 ((bruijn ##k.1011 0 0) (bruijn a 0 1))) (3 ((bruijn > 34 21) (close _V0max_k459) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn max 34 34) (close _V0max_k460) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn max 34 34) (close _V0max_k461) (bruijn a 0 1) (bruijn b 0 2))) (2 + ((close _V0max_lambda140) (bruijn ##k.1019 0 0) #f)))
 VError("Not enough arguments to _V0max_lambda139, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0max_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0max_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1011 0 0) (bruijn a 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
__attribute__((used)) static void _V20Case1__V0max_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0max_lambda139, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
__attribute__((used)) static void _V20Case2__V0max_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0max_lambda139, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
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
__attribute__((used)) static void _V20Case3__V0max_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0max_lambda139, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
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
__attribute__((used)) static void _V20Case4__V0max_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0max_lambda139, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0max_lambda140) (bruijn ##k.1019 0 0) #f)
V_CALL_FUNC(_V0max_lambda140, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0max_lambda139(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0max_lambda139:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0max_lambda139\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0max_lambda139\n"
"    cmp edx, 4\n"
"    je _V20Case2__V0max_lambda139\n"
"    cmp edx, 5\n"
"    je _V20Case3__V0max_lambda139\n"
"    cmp edx, 2\n"
"    jge _V20Case4__V0max_lambda139\n"
"    jmp _V20CaseError__V0max_lambda139\n"
);
static void _V0vanity_V0core_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k47) (bruijn max 33 34) (close _V0max_lambda139))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k47, env)}),
      VEncodeInt(33l), VEncodeInt(34l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_lambda139, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k46) (bruijn remainder 32 33) ##sys.remainder)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k46, env)}),
      VEncodeInt(32l), VEncodeInt(33l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VRem2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k45) (bruijn quotient 31 32) ##sys.quotient)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k45, env)}),
      VEncodeInt(31l), VEncodeInt(32l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VQuot2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k44) (bruijn / 30 31) ##sys./)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k44, env)}),
      VEncodeInt(30l), VEncodeInt(31l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VDiv2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k43) (bruijn * 29 30) ##sys.*)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k43, env)}),
      VEncodeInt(29l), VEncodeInt(30l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VMul2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k42) (bruijn - 28 29) ##sys.-)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k42, env)}),
      VEncodeInt(28l), VEncodeInt(29l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSub2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k41) (bruijn + 27 28) ##sys.+)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k41, env)}),
      VEncodeInt(27l), VEncodeInt(28l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VAdd2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k40) (bruijn complex? 26 27) (bruijn number? 26 26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k40, env)}),
      VEncodeInt(26l), VEncodeInt(27l),
      VGetArg(upenv, 26-1, 26)
    );
 }
}
static void _V0number_Q_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0number_Q_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0number_Q_k468, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1028 0 0) ((bruijn ##k.1027 1 0) (bruijn ##p.1028 0 0)) (##sys.int? (bruijn ##k.1027 1 0) (bruijn x 1 1)))
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
static void _V0number_Q_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0number_Q_lambda142, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0number_Q_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0vanity_V0core_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k39) (bruijn number? 25 26) (close _V0number_Q_lambda142))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k39, env)}),
      VEncodeInt(25l), VEncodeInt(26l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0number_Q_lambda142, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k38) (bruijn exact->inexact 24 25) (bruijn inexact 24 24))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k38, env)}),
      VEncodeInt(24l), VEncodeInt(25l),
      VGetArg(upenv, 24-1, 24)
    );
 }
}
static void _V0inexact_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0inexact_lambda143, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inexact_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1029 0 0) (bruijn x 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
static void _V0vanity_V0core_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k37) (bruijn inexact 23 24) (close _V0inexact_lambda143))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k37, env)}),
      VEncodeInt(23l), VEncodeInt(24l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inexact_lambda143, env)})
    );
 }
}
static void _V0_G_E_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k471, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1031 3 0) (bruijn ##x.1033 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_G_E_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cons 26 36) (close _V0_G_E_k471) (bruijn x0 3 1) (bruijn ##x.1034 0 0))
V_CALL(VGetArg(upenv, 26-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k471, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_G_E_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k478, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1035 7 0) (bruijn ##x.1038 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1037 0 0) ((bruijn ##k.1035 6 0) #f) ((bruijn cdr 31 38) (close _V0loop_k478) (bruijn xs 6 1)))
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
  // ((bruijn eq? 30 14) (close _V0loop_k477) (bruijn ##x.1039 0 0) -1)
V_CALL(VGetArg(upenv, 30-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k477, env)}),
      _var0,
      VEncodeInt(-1l)
    );
 }
}
static void _V0loop_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (##sys.cmp (close _V0loop_k476) (bruijn ##x.1040 1 0) (bruijn ##x.1041 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k476, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1036 0 0) ((bruijn ##k.1035 2 0) #t) ((bruijn car 27 37) (close _V0loop_k474) (bruijn xs 2 1)))
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
  // ((bruijn null? 26 1) (close _V0loop_k473) (bruijn ##x.1042 0 0))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k473, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda146, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0_G_E_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_G_E_k469) (bruijn loop 0 1) (close _V0loop_lambda146))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k469, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda146, env)})
    );
 }
}
static void _V0_G_E_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VError("Not enough arguments to _V0_G_E_lambda144, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_lambda144, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_G_E_lambda145) (bruijn ##k.1030 0 0) #f)
V_CALL_FUNC(_V0_G_E_lambda145, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k36) (bruijn >= 22 23) (close _V0_G_E_lambda144))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k36, env)}),
      VEncodeInt(22l), VEncodeInt(23l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_lambda144, env)})
    );
 }
}
static void _V0_L_E_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k481, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1044 3 0) (bruijn ##x.1046 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_L_E_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cons 25 36) (close _V0_L_E_k481) (bruijn x0 3 1) (bruijn ##x.1047 0 0))
V_CALL(VGetArg(upenv, 25-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k481, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_L_E_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k488, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1048 7 0) (bruijn ##x.1051 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1050 0 0) ((bruijn ##k.1048 6 0) #f) ((bruijn cdr 30 38) (close _V0loop_k488) (bruijn xs 6 1)))
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
  // ((bruijn eq? 29 14) (close _V0loop_k487) (bruijn ##x.1052 0 0) 1)
V_CALL(VGetArg(upenv, 29-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k487, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (##sys.cmp (close _V0loop_k486) (bruijn ##x.1053 1 0) (bruijn ##x.1054 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k486, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1049 0 0) ((bruijn ##k.1048 2 0) #t) ((bruijn car 26 37) (close _V0loop_k484) (bruijn xs 2 1)))
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
  // ((bruijn null? 25 1) (close _V0loop_k483) (bruijn ##x.1055 0 0))
V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k483, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda149, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0_L_E_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_L_E_k479) (bruijn loop 0 1) (close _V0loop_lambda149))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k479, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda149, env)})
    );
 }
}
static void _V0_L_E_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VError("Not enough arguments to _V0_L_E_lambda147, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_lambda147, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_L_E_lambda148) (bruijn ##k.1043 0 0) #f)
V_CALL_FUNC(_V0_L_E_lambda148, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k35) (bruijn <= 21 22) (close _V0_L_E_lambda147))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k35, env)}),
      VEncodeInt(21l), VEncodeInt(22l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_lambda147, env)})
    );
 }
}
static void _V0_G_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k491, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1057 3 0) (bruijn ##x.1059 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_G_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cons 24 36) (close _V0_G_k491) (bruijn x0 3 1) (bruijn ##x.1060 0 0))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k491, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_G_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k498, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1061 7 0) (bruijn ##x.1064 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1063 0 0) ((bruijn cdr 29 38) (close _V0loop_k498) (bruijn xs 6 1)) ((bruijn ##k.1061 6 0) #f))
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
  // ((bruijn eq? 28 14) (close _V0loop_k497) (bruijn ##x.1065 0 0) 1)
V_CALL(VGetArg(upenv, 28-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k497, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (##sys.cmp (close _V0loop_k496) (bruijn ##x.1066 1 0) (bruijn ##x.1067 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k496, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1062 0 0) ((bruijn ##k.1061 2 0) #t) ((bruijn car 25 37) (close _V0loop_k494) (bruijn xs 2 1)))
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
  // ((bruijn null? 24 1) (close _V0loop_k493) (bruijn ##x.1068 0 0))
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k493, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda152, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0_G_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_G_k489) (bruijn loop 0 1) (close _V0loop_lambda152))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k489, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda152, env)})
    );
 }
}
static void _V0_G_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VError("Not enough arguments to _V0_G_lambda150, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_lambda150, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_G_lambda151) (bruijn ##k.1056 0 0) #f)
V_CALL_FUNC(_V0_G_lambda151, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k34) (bruijn > 20 21) (close _V0_G_lambda150))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k34, env)}),
      VEncodeInt(20l), VEncodeInt(21l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_lambda150, env)})
    );
 }
}
static void _V0_E_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k501, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1070 3 0) (bruijn ##x.1072 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_E_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cons 23 36) (close _V0_E_k501) (bruijn x0 3 1) (bruijn ##x.1073 0 0))
V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k501, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_E_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k508, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1074 7 0) (bruijn ##x.1077 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1076 0 0) ((bruijn cdr 28 38) (close _V0loop_k508) (bruijn xs 6 1)) ((bruijn ##k.1074 6 0) #f))
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
  // ((bruijn eq? 27 14) (close _V0loop_k507) (bruijn ##x.1078 0 0) 0)
V_CALL(VGetArg(upenv, 27-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k507, env)}),
      _var0,
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (##sys.cmp (close _V0loop_k506) (bruijn ##x.1079 1 0) (bruijn ##x.1080 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k506, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1075 0 0) ((bruijn ##k.1074 2 0) #t) ((bruijn car 24 37) (close _V0loop_k504) (bruijn xs 2 1)))
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
  // ((bruijn null? 23 1) (close _V0loop_k503) (bruijn ##x.1081 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k503, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda155, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0_E_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_E_k499) (bruijn loop 0 1) (close _V0loop_lambda155))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k499, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda155, env)})
    );
 }
}
static void _V0_E_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VError("Not enough arguments to _V0_E_lambda153, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_lambda153, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_E_lambda154) (bruijn ##k.1069 0 0) #f)
V_CALL_FUNC(_V0_E_lambda154, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k33) (bruijn = 19 20) (close _V0_E_lambda153))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k33, env)}),
      VEncodeInt(19l), VEncodeInt(20l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_lambda153, env)})
    );
 }
}
static void _V0_L_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k511, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 3 1) (bruijn ##k.1083 3 0) (bruijn ##x.1085 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0_L_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cons 22 36) (close _V0_L_k511) (bruijn x0 3 1) (bruijn ##x.1086 0 0))
V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k511, env)}),
      upenv->up->up->vars[1],
      _var0
    );
 }
}
static void _V0_L_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k518, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1087 7 0) (bruijn ##x.1090 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0loop_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1089 0 0) ((bruijn cdr 27 38) (close _V0loop_k518) (bruijn xs 6 1)) ((bruijn ##k.1087 6 0) #f))
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
  // ((bruijn eq? 26 14) (close _V0loop_k517) (bruijn ##x.1091 0 0) -1)
V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k517, env)}),
      _var0,
      VEncodeInt(-1l)
    );
 }
}
static void _V0loop_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (##sys.cmp (close _V0loop_k516) (bruijn ##x.1092 1 0) (bruijn ##x.1093 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k516, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1088 0 0) ((bruijn ##k.1087 2 0) #t) ((bruijn car 23 37) (close _V0loop_k514) (bruijn xs 2 1)))
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
  // ((bruijn null? 22 1) (close _V0loop_k513) (bruijn ##x.1094 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k513, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn cdr 21 38) (close _V0loop_k512) (bruijn xs 0 1))
V_CALL(VGetArg(upenv, 21-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k512, env)}),
      _var1
    );
 }
}
static void _V0_L_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0_L_k509) (bruijn loop 0 1) (close _V0loop_lambda158))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k509, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda158, env)})
    );
 }
}
static void _V0_L_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VError("Not enough arguments to _V0_L_lambda156, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_lambda156, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((close _V0_L_lambda157) (bruijn ##k.1082 0 0) #f)
V_CALL_FUNC(_V0_L_lambda157, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k32) (bruijn < 18 19) (close _V0_L_lambda156))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k32, env)}),
      VEncodeInt(18l), VEncodeInt(19l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_lambda156, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k31) (bruijn not 17 18) ##sys.not)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k31, env)}),
      VEncodeInt(17l), VEncodeInt(18l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNot2,NULL)})
    );
 }
}
static void _V0equal_Q_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k522, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1107 0 0) (##sys.blob=? (bruijn ##k.1106 1 0) (bruijn x 4 1) (bruijn y 4 2)) ((bruijn ##k.1106 1 0) #f))
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
  // (if (bruijn ##p.1105 1 0) (##sys.blob? (close _V0equal_Q_k522) (bruijn y 3 2)) ((bruijn ##k.1106 0 0) #f))
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
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k524, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1100 0 0) ((bruijn equal? 21 17) (bruijn ##k.1095 4 0) (##inline ##sys.cdr (bruijn x 4 1)) (##inline ##sys.cdr (bruijn y 4 2))) ((bruijn ##k.1095 4 0) #f))
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
  // (if (bruijn ##p.1097 0 0) ((bruijn ##k.1095 3 0) (bruijn ##p.1097 0 0)) (if (##inline ##sys.pair? (bruijn x 3 1)) (if (##inline ##sys.pair? (bruijn y 3 2)) ((bruijn equal? 20 17) (close _V0equal_Q_k524) (##inline ##sys.car (bruijn x 3 1)) (##inline ##sys.car (bruijn y 3 2))) ((bruijn ##k.1095 3 0) #f)) ((bruijn ##k.1095 3 0) #f)))
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
  // (if (bruijn ##p.1096 0 0) ((bruijn ##k.1095 1 0) (bruijn ##p.1096 0 0)) (##sys.blob? (close _V0equal_Q_k520) (bruijn x 1 1)))
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
static void _V0equal_Q_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0equal_Q_lambda159, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_lambda159, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0vanity_V0core_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k30) (bruijn equal? 16 17) (close _V0equal_Q_lambda159))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k30, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_lambda159, env)})
    );
 }
}
static void _V0eqv_Q_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0eqv_Q_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0eqv_Q_k527, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1111 0 0) (##sys.symbol=? (bruijn ##k.1108 3 0) (bruijn x 3 1) (bruijn y 3 2)) ((bruijn ##k.1108 3 0) #f))
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
  // (if (bruijn ##p.1110 0 0) (##sys.symbol? (close _V0eqv_Q_k527) (bruijn y 2 2)) ((bruijn ##k.1108 2 0) #f))
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
  // (if (bruijn ##p.1109 0 0) ((bruijn ##k.1108 1 0) (bruijn ##p.1109 0 0)) (##sys.symbol? (close _V0eqv_Q_k526) (bruijn x 1 1)))
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
static void _V0eqv_Q_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0eqv_Q_lambda160, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0eqv_Q_lambda160, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0vanity_V0core_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k29) (bruijn eqv? 15 16) (close _V0eqv_Q_lambda160))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k29, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0eqv_Q_lambda160, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k28) (bruijn symbol=? 14 15) ##sys.symbol=?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k28, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSymbolEqv2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k27) (bruijn eq? 13 14) ##sys.eq?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k27, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VEq2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k26) (bruijn real? 12 13) ##sys.double?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k26, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VDoubleP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k25) (bruijn inexact? 11 12) ##sys.double?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k25, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VDoubleP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k24) (bruijn integer? 10 11) ##sys.int?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k24, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VIntP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k23) (bruijn exact? 9 10) ##sys.int?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k23, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VIntP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k22) (bruijn char? 8 9) ##sys.char?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k22, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VCharP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k21) (bruijn string? 7 8) ##sys.string?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k21, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VStringP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k20) (bruijn symbol? 6 7) ##sys.symbol?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k20, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VSymbolP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k19) (bruijn procedure? 5 6) ##sys.procedure?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k19, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VProcedureP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k18) (bruijn vector? 4 5) ##sys.vector?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k18, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VVectorP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k17) (bruijn pair? 3 4) ##sys.pair?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k17, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VPairP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k16) (bruijn eof-object? 2 3) ##sys.eof-object?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k16, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VEofP2,NULL)})
    );
 }
}
static void _V0boolean_Q_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_Q_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_Q_k528, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1113 0 0) ((bruijn ##k.1112 1 0) (bruijn ##p.1113 0 0)) ((bruijn ##k.1112 1 0) (##inline ##sys.eq? (bruijn x 1 1) #f)))
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
static void _V0boolean_Q_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0boolean_Q_lambda161, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_Q_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
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
static void _V0vanity_V0core_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (set! (close _V0vanity_V0core_V20_k15) (bruijn boolean? 1 2) (close _V0boolean_Q_lambda161))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k15, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_Q_lambda161, env)})
    );
 }
}
static void _V0vanity_V0core_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57, VWORD _var58, VWORD _var59, VWORD _var60, VWORD _var61, VWORD _var62, VWORD _var63, VWORD _var64, VWORD _var65, VWORD _var66, VWORD _var67, VWORD _var68, VWORD _var69, VWORD _var70, VWORD _var71, VWORD _var72, VWORD _var73, VWORD _var74, VWORD _var75, VWORD _var76, VWORD _var77, VWORD _var78, VWORD _var79, VWORD _var80, VWORD _var81, VWORD _var82, VWORD _var83, VWORD _var84, VWORD _var85, VWORD _var86, VWORD _var87, VWORD _var88, VWORD _var89, VWORD _var90, VWORD _var91, VWORD _var92, VWORD _var93, VWORD _var94, VWORD _var95, VWORD _var96, VWORD _var97, VWORD _var98, VWORD _var99, VWORD _var100, VWORD _var101, VWORD _var102, VWORD _var103, VWORD _var104, VWORD _var105, VWORD _var106, VWORD _var107, VWORD _var108, VWORD _var109, VWORD _var110, VWORD _var111, VWORD _var112, VWORD _var113, VWORD _var114, VWORD _var115, VWORD _var116, VWORD _var117, VWORD _var118, VWORD _var119, VWORD _var120, VWORD _var121, VWORD _var122, VWORD _var123, VWORD _var124, VWORD _var125, VWORD _var126, VWORD _var127, VWORD _var128, VWORD _var129, VWORD _var130, VWORD _var131, VWORD _var132, VWORD _var133, VWORD _var134, VWORD _var135, VWORD _var136, VWORD _var137, VWORD _var138, VWORD _var139, VWORD _var140, VWORD _var141) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda8, runtime, upenv, 142, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45, _var46, _var47, _var48, _var49, _var50, _var51, _var52, _var53, _var54, _var55, _var56, _var57, _var58, _var59, _var60, _var61, _var62, _var63, _var64, _var65, _var66, _var67, _var68, _var69, _var70, _var71, _var72, _var73, _var74, _var75, _var76, _var77, _var78, _var79, _var80, _var81, _var82, _var83, _var84, _var85, _var86, _var87, _var88, _var89, _var90, _var91, _var92, _var93, _var94, _var95, _var96, _var97, _var98, _var99, _var100, _var101, _var102, _var103, _var104, _var105, _var106, _var107, _var108, _var109, _var110, _var111, _var112, _var113, _var114, _var115, _var116, _var117, _var118, _var119, _var120, _var121, _var122, _var123, _var124, _var125, _var126, _var127, _var128, _var129, _var130, _var131, _var132, _var133, _var134, _var135, _var136, _var137, _var138, _var139, _var140, _var141) {
  struct { VEnv env; VWORD argv[142]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 142; env->var_len = 142; env->up = upenv;
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
  // (set! (close _V0vanity_V0core_V20_k14) (bruijn null? 0 1) ##sys.null?)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k14, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNullP2,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_lambda8) (bruijn ##k.29 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0core_V20_lambda8, env, runtime,
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
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0core_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0vanity_V0core_V20_lambda7) (bruijn ##k.28 1 0))
V_CALL_FUNC(_V0vanity_V0core_V20_lambda7, env, runtime,
      upenv->vars[0]
    );
 }
}
static void _V0vanity_V0core_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0core_V20_k13) (##string ##string.1534))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k13, env)}),
      VEncodePointer(&_V10string_D1534.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57, VWORD _var58, VWORD _var59, VWORD _var60, VWORD _var61, VWORD _var62, VWORD _var63, VWORD _var64, VWORD _var65, VWORD _var66, VWORD _var67, VWORD _var68, VWORD _var69, VWORD _var70, VWORD _var71, VWORD _var72, VWORD _var73, VWORD _var74, VWORD _var75, VWORD _var76, VWORD _var77, VWORD _var78, VWORD _var79, VWORD _var80, VWORD _var81, VWORD _var82, VWORD _var83, VWORD _var84, VWORD _var85, VWORD _var86, VWORD _var87, VWORD _var88, VWORD _var89, VWORD _var90, VWORD _var91, VWORD _var92, VWORD _var93, VWORD _var94, VWORD _var95, VWORD _var96, VWORD _var97, VWORD _var98, VWORD _var99, VWORD _var100, VWORD _var101, VWORD _var102, VWORD _var103, VWORD _var104, VWORD _var105, VWORD _var106, VWORD _var107, VWORD _var108, VWORD _var109, VWORD _var110, VWORD _var111, VWORD _var112, VWORD _var113, VWORD _var114, VWORD _var115, VWORD _var116, VWORD _var117, VWORD _var118, VWORD _var119, VWORD _var120, VWORD _var121, VWORD _var122, VWORD _var123, VWORD _var124, VWORD _var125) {
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_lambda163, runtime, upenv, 126, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45, _var46, _var47, _var48, _var49, _var50, _var51, _var52, _var53, _var54, _var55, _var56, _var57, _var58, _var59, _var60, _var61, _var62, _var63, _var64, _var65, _var66, _var67, _var68, _var69, _var70, _var71, _var72, _var73, _var74, _var75, _var76, _var77, _var78, _var79, _var80, _var81, _var82, _var83, _var84, _var85, _var86, _var87, _var88, _var89, _var90, _var91, _var92, _var93, _var94, _var95, _var96, _var97, _var98, _var99, _var100, _var101, _var102, _var103, _var104, _var105, _var106, _var107, _var108, _var109, _var110, _var111, _var112, _var113, _var114, _var115, _var116, _var117, _var118, _var119, _var120, _var121, _var122, _var123, _var124, _var125) {
  // ((bruijn ##k.1115 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote null?) (bruijn null? 0 125)) (##inline ##sys.cons (##inline ##sys.cons (quote eof-object?) (bruijn eof-object? 0 1)) (##inline ##sys.cons (##inline ##sys.cons (quote boolean?) (bruijn boolean? 0 124)) (##inline ##sys.cons (##inline ##sys.cons (quote pair?) (bruijn pair? 0 2)) (##inline ##sys.cons (##inline ##sys.cons (quote vector?) (bruijn vector? 0 123)) (##inline ##sys.cons (##inline ##sys.cons (quote procedure?) (bruijn procedure? 0 3)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol?) (bruijn symbol? 0 122)) (##inline ##sys.cons (##inline ##sys.cons (quote string?) (bruijn string? 0 4)) (##inline ##sys.cons (##inline ##sys.cons (quote exact?) (bruijn exact? 0 121)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact?) (bruijn inexact? 0 5)) (##inline ##sys.cons (##inline ##sys.cons (quote real?) (bruijn real? 0 120)) (##inline ##sys.cons (##inline ##sys.cons (quote integer?) (bruijn integer? 0 6)) (##inline ##sys.cons (##inline ##sys.cons (quote char?) (bruijn char? 0 119)) (##inline ##sys.cons (##inline ##sys.cons (quote eq?) (bruijn eq? 0 7)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol=?) (bruijn symbol=? 0 118)) (##inline ##sys.cons (##inline ##sys.cons (quote eqv?) (bruijn eqv? 0 8)) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (bruijn equal? 0 117)) (##inline ##sys.cons (##inline ##sys.cons (quote not) (bruijn not 0 9)) (##inline ##sys.cons (##inline ##sys.cons (quote <) (bruijn < 0 116)) (##inline ##sys.cons (##inline ##sys.cons (quote =) (bruijn = 0 10)) (##inline ##sys.cons (##inline ##sys.cons (quote >) (bruijn > 0 115)) (##inline ##sys.cons (##inline ##sys.cons (quote <=) (bruijn <= 0 11)) (##inline ##sys.cons (##inline ##sys.cons (quote >=) (bruijn >= 0 114)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact) (bruijn inexact 0 12)) (##inline ##sys.cons (##inline ##sys.cons (quote exact->inexact) (bruijn exact->inexact 0 113)) (##inline ##sys.cons (##inline ##sys.cons (quote number?) (bruijn number? 0 13)) (##inline ##sys.cons (##inline ##sys.cons (quote complex?) (bruijn complex? 0 112)) (##inline ##sys.cons (##inline ##sys.cons (quote +) (bruijn + 0 14)) (##inline ##sys.cons (##inline ##sys.cons (quote -) (bruijn - 0 111)) (##inline ##sys.cons (##inline ##sys.cons (quote *) (bruijn * 0 15)) (##inline ##sys.cons (##inline ##sys.cons (quote /) (bruijn / 0 110)) (##inline ##sys.cons (##inline ##sys.cons (quote quotient) (bruijn quotient 0 16)) (##inline ##sys.cons (##inline ##sys.cons (quote remainder) (bruijn remainder 0 109)) (##inline ##sys.cons (##inline ##sys.cons (quote max) (bruijn max 0 17)) (##inline ##sys.cons (##inline ##sys.cons (quote min) (bruijn min 0 108)) (##inline ##sys.cons (##inline ##sys.cons (quote cons) (bruijn cons 0 18)) (##inline ##sys.cons (##inline ##sys.cons (quote car) (bruijn car 0 107)) (##inline ##sys.cons (##inline ##sys.cons (quote cdr) (bruijn cdr 0 19)) (##inline ##sys.cons (##inline ##sys.cons (quote set-car!) (bruijn set-car! 0 106)) (##inline ##sys.cons (##inline ##sys.cons (quote set-cdr!) (bruijn set-cdr! 0 20)) (##inline ##sys.cons (##inline ##sys.cons (quote caar) (bruijn caar 0 105)) (##inline ##sys.cons (##inline ##sys.cons (quote cadr) (bruijn cadr 0 21)) (##inline ##sys.cons (##inline ##sys.cons (quote cdar) (bruijn cdar 0 104)) (##inline ##sys.cons (##inline ##sys.cons (quote cddr) (bruijn cddr 0 22)) (##inline ##sys.cons (##inline ##sys.cons (quote caaar) (bruijn caaar 0 103)) (##inline ##sys.cons (##inline ##sys.cons (quote caadr) (bruijn caadr 0 23)) (##inline ##sys.cons (##inline ##sys.cons (quote cadar) (bruijn cadar 0 102)) (##inline ##sys.cons (##inline ##sys.cons (quote caddr) (bruijn caddr 0 24)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaar) (bruijn cdaar 0 101)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadr) (bruijn cdadr 0 25)) (##inline ##sys.cons (##inline ##sys.cons (quote cddar) (bruijn cddar 0 100)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddr) (bruijn cdddr 0 26)) (##inline ##sys.cons (##inline ##sys.cons (quote caaaar) (bruijn caaaar 0 99)) (##inline ##sys.cons (##inline ##sys.cons (quote caaadr) (bruijn caaadr 0 27)) (##inline ##sys.cons (##inline ##sys.cons (quote caadar) (bruijn caadar 0 98)) (##inline ##sys.cons (##inline ##sys.cons (quote caaddr) (bruijn caaddr 0 28)) (##inline ##sys.cons (##inline ##sys.cons (quote cadaar) (bruijn cadaar 0 97)) (##inline ##sys.cons (##inline ##sys.cons (quote cadadr) (bruijn cadadr 0 29)) (##inline ##sys.cons (##inline ##sys.cons (quote caddar) (bruijn caddar 0 96)) (##inline ##sys.cons (##inline ##sys.cons (quote cadddr) (bruijn cadddr 0 30)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaaar) (bruijn cdaaar 0 95)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaadr) (bruijn cdaadr 0 31)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadar) (bruijn cdadar 0 94)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaddr) (bruijn cdaddr 0 32)) (##inline ##sys.cons (##inline ##sys.cons (quote cddaar) (bruijn cddaar 0 93)) (##inline ##sys.cons (##inline ##sys.cons (quote cddadr) (bruijn cddadr 0 33)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddar) (bruijn cdddar 0 92)) (##inline ##sys.cons (##inline ##sys.cons (quote cddddr) (bruijn cddddr 0 34)) (##inline ##sys.cons (##inline ##sys.cons (quote list) (bruijn list 0 91)) (##inline ##sys.cons (##inline ##sys.cons (quote length) (bruijn length 0 35)) (##inline ##sys.cons (##inline ##sys.cons (quote list-ref) (bruijn list-ref 0 90)) (##inline ##sys.cons (##inline ##sys.cons (quote map) (bruijn map 0 36)) (##inline ##sys.cons (##inline ##sys.cons (quote for-each) (bruijn for-each 0 89)) (##inline ##sys.cons (##inline ##sys.cons (quote append) (bruijn append 0 37)) (##inline ##sys.cons (##inline ##sys.cons (quote reverse) (bruijn reverse 0 88)) (##inline ##sys.cons (##inline ##sys.cons (quote memq) (bruijn memq 0 38)) (##inline ##sys.cons (##inline ##sys.cons (quote memv) (bruijn memv 0 87)) (##inline ##sys.cons (##inline ##sys.cons (quote member) (bruijn member 0 39)) (##inline ##sys.cons (##inline ##sys.cons (quote assq) (bruijn assq 0 86)) (##inline ##sys.cons (##inline ##sys.cons (quote assv) (bruijn assv 0 40)) (##inline ##sys.cons (##inline ##sys.cons (quote assoc) (bruijn assoc 0 85)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 0 79)) (##inline ##sys.cons (##inline ##sys.cons (quote list->string) (bruijn list->string 0 84)) (##inline ##sys.cons (##inline ##sys.cons (quote make-string) (bruijn make-string 0 41)) (##inline ##sys.cons (##inline ##sys.cons (quote substring) (bruijn substring 0 83)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy) (bruijn string-copy 0 42)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy!) (bruijn string-copy! 0 82)) (##inline ##sys.cons (##inline ##sys.cons (quote string-ref) (bruijn string-ref 0 43)) (##inline ##sys.cons (##inline ##sys.cons (quote string-set!) (bruijn string-set! 0 81)) (##inline ##sys.cons (##inline ##sys.cons (quote string-length) (bruijn string-length 0 44)) (##inline ##sys.cons (##inline ##sys.cons (quote string->symbol) (bruijn string->symbol 0 80)) (##inline ##sys.cons (##inline ##sys.cons (quote string->number) (bruijn string->number 0 45)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 0 79)) (##inline ##sys.cons (##inline ##sys.cons (quote string-append) (bruijn string-append 0 46)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol->string) (bruijn symbol->string 0 78)) (##inline ##sys.cons (##inline ##sys.cons (quote list->vector) (bruijn list->vector 0 47)) (##inline ##sys.cons (##inline ##sys.cons (quote vector) (bruijn vector 0 77)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-ref) (bruijn vector-ref 0 48)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-set!) (bruijn vector-set! 0 76)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-length) (bruijn vector-length 0 49)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-for-each) (bruijn vector-for-each 0 75)) (##inline ##sys.cons (##inline ##sys.cons (quote char->integer) (bruijn char->integer 0 50)) (##inline ##sys.cons (##inline ##sys.cons (quote current-output-port) (bruijn current-output-port 0 74)) (##inline ##sys.cons (##inline ##sys.cons (quote current-error-port) (bruijn current-error-port 0 51)) (##inline ##sys.cons (##inline ##sys.cons (quote current-input-port) (bruijn current-input-port 0 73)) (##inline ##sys.cons (##inline ##sys.cons (quote open-input-file) (bruijn open-input-file 0 52)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-file) (bruijn open-output-file 0 72)) (##inline ##sys.cons (##inline ##sys.cons (quote close-port) (bruijn close-port 0 53)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-string) (bruijn open-output-string 0 71)) (##inline ##sys.cons (##inline ##sys.cons (quote get-output-string) (bruijn get-output-string 0 54)) (##inline ##sys.cons (##inline ##sys.cons (quote with-output-to-file) (bruijn with-output-to-file 0 70)) (##inline ##sys.cons (##inline ##sys.cons (quote with-input-from-file) (bruijn with-input-from-file 0 55)) (##inline ##sys.cons (##inline ##sys.cons (quote read-char) (bruijn read-char 0 69)) (##inline ##sys.cons (##inline ##sys.cons (quote read-line) (bruijn read-line 0 56)) (##inline ##sys.cons (##inline ##sys.cons (quote read) (bruijn read 0 68)) (##inline ##sys.cons (##inline ##sys.cons (quote newline) (bruijn newline 0 57)) (##inline ##sys.cons (##inline ##sys.cons (quote display) (bruijn display 0 67)) (##inline ##sys.cons (##inline ##sys.cons (quote write) (bruijn write 0 58)) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (bruijn call/cc 0 66)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-current-continuation) (bruijn call-with-current-continuation 0 59)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (bruijn call-with-values 0 65)) (##inline ##sys.cons (##inline ##sys.cons (quote apply) (bruijn apply 0 60)) (##inline ##sys.cons (##inline ##sys.cons (quote values) (bruijn values 0 64)) (##inline ##sys.cons (##inline ##sys.cons (quote command-line) (bruijn command-line 0 61)) (##inline ##sys.cons (##inline ##sys.cons (quote exit) (bruijn exit 0 63)) (##inline ##sys.cons (##inline ##sys.cons (quote error) (bruijn error 0 62)) (quote ()))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
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
static void _V0scheme_V0r7rs_V20_k655(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k655, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0scheme_V0r7rs_V20_lambda163) (bruijn ##k.1114 127 0) (bruijn ##x.1367 124 0) (bruijn ##x.1368 123 0) (bruijn ##x.1369 122 0) (bruijn ##x.1370 121 0) (bruijn ##x.1371 120 0) (bruijn ##x.1372 119 0) (bruijn ##x.1373 118 0) (bruijn ##x.1374 117 0) (bruijn ##x.1375 116 0) (bruijn ##x.1376 115 0) (bruijn ##x.1377 114 0) (bruijn ##x.1378 113 0) (bruijn ##x.1379 112 0) (bruijn ##x.1380 111 0) (bruijn ##x.1381 110 0) (bruijn ##x.1382 109 0) (bruijn ##x.1383 108 0) (bruijn ##x.1384 107 0) (bruijn ##x.1385 106 0) (bruijn ##x.1386 105 0) (bruijn ##x.1387 104 0) (bruijn ##x.1388 103 0) (bruijn ##x.1389 102 0) (bruijn ##x.1390 101 0) (bruijn ##x.1391 100 0) (bruijn ##x.1392 99 0) (bruijn ##x.1393 98 0) (bruijn ##x.1394 97 0) (bruijn ##x.1395 96 0) (bruijn ##x.1396 95 0) (bruijn ##x.1397 94 0) (bruijn ##x.1398 93 0) (bruijn ##x.1399 92 0) (bruijn ##x.1400 91 0) (bruijn ##x.1401 90 0) (bruijn ##x.1402 89 0) (bruijn ##x.1403 88 0) (bruijn ##x.1404 87 0) (bruijn ##x.1405 86 0) (bruijn ##x.1406 85 0) (bruijn ##x.1407 84 0) (bruijn ##x.1408 83 0) (bruijn ##x.1409 82 0) (bruijn ##x.1410 81 0) (bruijn ##x.1411 80 0) (bruijn ##x.1412 79 0) (bruijn ##x.1413 78 0) (bruijn ##x.1414 77 0) (bruijn ##x.1415 76 0) (bruijn ##x.1416 75 0) (bruijn ##x.1417 74 0) (bruijn ##x.1418 73 0) (bruijn ##x.1419 72 0) (bruijn ##x.1420 71 0) (bruijn ##x.1421 70 0) (bruijn ##x.1422 69 0) (bruijn ##x.1423 68 0) (bruijn ##x.1424 67 0) (bruijn ##x.1425 66 0) (bruijn ##x.1426 65 0) (bruijn ##x.1427 64 0) (bruijn ##x.1428 63 0) (bruijn ##x.1429 62 0) (bruijn ##x.1430 61 0) (bruijn ##x.1431 60 0) (bruijn ##x.1432 59 0) (bruijn ##x.1433 58 0) (bruijn ##x.1434 57 0) (bruijn ##x.1435 56 0) (bruijn ##x.1436 55 0) (bruijn ##x.1437 54 0) (bruijn ##x.1438 53 0) (bruijn ##x.1439 52 0) (bruijn ##x.1440 51 0) (bruijn ##x.1441 50 0) (bruijn ##x.1442 49 0) (bruijn ##x.1443 48 0) (bruijn ##x.1444 47 0) (bruijn ##x.1445 46 0) (bruijn ##x.1446 45 0) (bruijn ##x.1447 44 0) (bruijn ##x.1448 43 0) (bruijn ##x.1449 42 0) (bruijn ##x.1450 41 0) (bruijn ##x.1451 40 0) (bruijn ##x.1452 39 0) (bruijn ##x.1453 38 0) (bruijn ##x.1454 37 0) (bruijn ##x.1455 36 0) (bruijn ##x.1456 35 0) (bruijn ##x.1457 34 0) (bruijn ##x.1458 33 0) (bruijn ##x.1459 32 0) (bruijn ##x.1460 31 0) (bruijn ##x.1461 30 0) (bruijn ##x.1462 29 0) (bruijn ##x.1463 28 0) (bruijn ##x.1464 27 0) (bruijn ##x.1465 26 0) (bruijn ##x.1466 25 0) (bruijn ##x.1467 24 0) (bruijn ##x.1468 23 0) (bruijn ##x.1469 22 0) (bruijn ##x.1470 21 0) (bruijn ##x.1471 20 0) (bruijn ##x.1472 19 0) (bruijn ##x.1473 18 0) (bruijn ##x.1474 17 0) (bruijn ##x.1475 16 0) (bruijn ##x.1476 15 0) (bruijn ##x.1477 14 0) (bruijn ##x.1478 13 0) (bruijn ##x.1479 12 0) (bruijn ##x.1480 11 0) (bruijn ##x.1481 10 0) (bruijn ##x.1482 9 0) (bruijn ##x.1483 8 0) (bruijn ##x.1484 7 0) (bruijn ##x.1485 6 0) (bruijn ##x.1486 5 0) (bruijn ##x.1487 4 0) (bruijn ##x.1488 3 0) (bruijn ##x.1489 2 0) (bruijn ##x.1490 1 0) (bruijn ##x.1491 0 0))
V_CALL_FUNC(_V0scheme_V0r7rs_V20_lambda163, env, runtime,
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
static void _V0scheme_V0r7rs_V20_k654(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k654, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 124 0) (close _V0scheme_V0r7rs_V20_k655) (quote null?))
V_CALL(VGetArg(upenv, 124-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k655, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k653(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k653, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 123 0) (close _V0scheme_V0r7rs_V20_k654) (quote boolean?))
V_CALL(VGetArg(upenv, 123-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k654, env)}),
      VEncodePointer(&_V0boolean_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k652(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k652, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 122 0) (close _V0scheme_V0r7rs_V20_k653) (quote vector?))
V_CALL(VGetArg(upenv, 122-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k653, env)}),
      VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k651(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k651, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 121 0) (close _V0scheme_V0r7rs_V20_k652) (quote symbol?))
V_CALL(VGetArg(upenv, 121-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k652, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k650(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k650, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 120 0) (close _V0scheme_V0r7rs_V20_k651) (quote exact?))
V_CALL(VGetArg(upenv, 120-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k651, env)}),
      VEncodePointer(&_V0exact_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k649(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k649, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 119 0) (close _V0scheme_V0r7rs_V20_k650) (quote real?))
V_CALL(VGetArg(upenv, 119-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k650, env)}),
      VEncodePointer(&_V0real_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k648(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k648, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 118 0) (close _V0scheme_V0r7rs_V20_k649) (quote char?))
V_CALL(VGetArg(upenv, 118-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k649, env)}),
      VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k647(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k647, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 117 0) (close _V0scheme_V0r7rs_V20_k648) (quote symbol=?))
V_CALL(VGetArg(upenv, 117-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k648, env)}),
      VEncodePointer(&_V0symbol_E_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k646(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k646, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 116 0) (close _V0scheme_V0r7rs_V20_k647) (quote equal?))
V_CALL(VGetArg(upenv, 116-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k647, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k645(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k645, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 115 0) (close _V0scheme_V0r7rs_V20_k646) (quote <))
V_CALL(VGetArg(upenv, 115-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k646, env)}),
      VEncodePointer(&_V0_L.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k644(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k644, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 114 0) (close _V0scheme_V0r7rs_V20_k645) (quote >))
V_CALL(VGetArg(upenv, 114-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k645, env)}),
      VEncodePointer(&_V0_G.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k643(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k643, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 113 0) (close _V0scheme_V0r7rs_V20_k644) (quote >=))
V_CALL(VGetArg(upenv, 113-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k644, env)}),
      VEncodePointer(&_V0_G_E.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k642(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k642, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 112 0) (close _V0scheme_V0r7rs_V20_k643) (quote exact->inexact))
V_CALL(VGetArg(upenv, 112-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k643, env)}),
      VEncodePointer(&_V0exact___Ginexact.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k641(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k641, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 111 0) (close _V0scheme_V0r7rs_V20_k642) (quote complex?))
V_CALL(VGetArg(upenv, 111-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k642, env)}),
      VEncodePointer(&_V0complex_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k640(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k640, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 110 0) (close _V0scheme_V0r7rs_V20_k641) (quote -))
V_CALL(VGetArg(upenv, 110-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k641, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k639(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k639, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 109 0) (close _V0scheme_V0r7rs_V20_k640) (quote /))
V_CALL(VGetArg(upenv, 109-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k640, env)}),
      VEncodePointer(&_V0_W.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k638(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k638, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 108 0) (close _V0scheme_V0r7rs_V20_k639) (quote remainder))
V_CALL(VGetArg(upenv, 108-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k639, env)}),
      VEncodePointer(&_V0remainder.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k637(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k637, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 107 0) (close _V0scheme_V0r7rs_V20_k638) (quote min))
V_CALL(VGetArg(upenv, 107-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k638, env)}),
      VEncodePointer(&_V0min.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k636(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k636, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 106 0) (close _V0scheme_V0r7rs_V20_k637) (quote car))
V_CALL(VGetArg(upenv, 106-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k637, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k635(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k635, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 105 0) (close _V0scheme_V0r7rs_V20_k636) (quote set-car!))
V_CALL(VGetArg(upenv, 105-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k636, env)}),
      VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k634(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k634, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 104 0) (close _V0scheme_V0r7rs_V20_k635) (quote caar))
V_CALL(VGetArg(upenv, 104-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k635, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k633(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k633, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 103 0) (close _V0scheme_V0r7rs_V20_k634) (quote cdar))
V_CALL(VGetArg(upenv, 103-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k634, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k632(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k632, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 102 0) (close _V0scheme_V0r7rs_V20_k633) (quote caaar))
V_CALL(VGetArg(upenv, 102-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k633, env)}),
      VEncodePointer(&_V0caaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k631(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k631, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 101 0) (close _V0scheme_V0r7rs_V20_k632) (quote cadar))
V_CALL(VGetArg(upenv, 101-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k632, env)}),
      VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k630(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k630, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 100 0) (close _V0scheme_V0r7rs_V20_k631) (quote cdaar))
V_CALL(VGetArg(upenv, 100-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k631, env)}),
      VEncodePointer(&_V0cdaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k629(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k629, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 99 0) (close _V0scheme_V0r7rs_V20_k630) (quote cddar))
V_CALL(VGetArg(upenv, 99-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k630, env)}),
      VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k628(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k628, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 98 0) (close _V0scheme_V0r7rs_V20_k629) (quote caaaar))
V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k629, env)}),
      VEncodePointer(&_V0caaaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k627(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k627, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 97 0) (close _V0scheme_V0r7rs_V20_k628) (quote caadar))
V_CALL(VGetArg(upenv, 97-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k628, env)}),
      VEncodePointer(&_V0caadar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k626(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k626, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 96 0) (close _V0scheme_V0r7rs_V20_k627) (quote cadaar))
V_CALL(VGetArg(upenv, 96-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k627, env)}),
      VEncodePointer(&_V0cadaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k625(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k625, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 95 0) (close _V0scheme_V0r7rs_V20_k626) (quote caddar))
V_CALL(VGetArg(upenv, 95-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k626, env)}),
      VEncodePointer(&_V0caddar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k624, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 94 0) (close _V0scheme_V0r7rs_V20_k625) (quote cdaaar))
V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k625, env)}),
      VEncodePointer(&_V0cdaaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k623, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 93 0) (close _V0scheme_V0r7rs_V20_k624) (quote cdadar))
V_CALL(VGetArg(upenv, 93-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k624, env)}),
      VEncodePointer(&_V0cdadar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k622, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 92 0) (close _V0scheme_V0r7rs_V20_k623) (quote cddaar))
V_CALL(VGetArg(upenv, 92-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k623, env)}),
      VEncodePointer(&_V0cddaar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k621, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 91 0) (close _V0scheme_V0r7rs_V20_k622) (quote cdddar))
V_CALL(VGetArg(upenv, 91-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k622, env)}),
      VEncodePointer(&_V0cdddar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k620, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 90 0) (close _V0scheme_V0r7rs_V20_k621) (quote list))
V_CALL(VGetArg(upenv, 90-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k621, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k619, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 89 0) (close _V0scheme_V0r7rs_V20_k620) (quote list-ref))
V_CALL(VGetArg(upenv, 89-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k620, env)}),
      VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k618, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 88 0) (close _V0scheme_V0r7rs_V20_k619) (quote for-each))
V_CALL(VGetArg(upenv, 88-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k619, env)}),
      VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k617, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 87 0) (close _V0scheme_V0r7rs_V20_k618) (quote reverse))
V_CALL(VGetArg(upenv, 87-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k618, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k616, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 86 0) (close _V0scheme_V0r7rs_V20_k617) (quote memv))
V_CALL(VGetArg(upenv, 86-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k617, env)}),
      VEncodePointer(&_V0memv.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k615, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 85 0) (close _V0scheme_V0r7rs_V20_k616) (quote assq))
V_CALL(VGetArg(upenv, 85-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k616, env)}),
      VEncodePointer(&_V0assq.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k614, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 84 0) (close _V0scheme_V0r7rs_V20_k615) (quote assoc))
V_CALL(VGetArg(upenv, 84-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k615, env)}),
      VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k613, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 83 0) (close _V0scheme_V0r7rs_V20_k614) (quote list->string))
V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k614, env)}),
      VEncodePointer(&_V0list___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k612, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 82 0) (close _V0scheme_V0r7rs_V20_k613) (quote substring))
V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k613, env)}),
      VEncodePointer(&_V0substring.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k611, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 81 0) (close _V0scheme_V0r7rs_V20_k612) (quote string-copy!))
V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k612, env)}),
      VEncodePointer(&_V0string__copy_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k610, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 80 0) (close _V0scheme_V0r7rs_V20_k611) (quote string-set!))
V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k611, env)}),
      VEncodePointer(&_V0string__set_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k609, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 79 0) (close _V0scheme_V0r7rs_V20_k610) (quote string->symbol))
V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k610, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k608, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 78 0) (close _V0scheme_V0r7rs_V20_k609) (quote string->list))
V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k609, env)}),
      VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k607, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 77 0) (close _V0scheme_V0r7rs_V20_k608) (quote symbol->string))
V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k608, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k606, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 76 0) (close _V0scheme_V0r7rs_V20_k607) (quote vector))
V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k607, env)}),
      VEncodePointer(&_V0vector.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k605, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 75 0) (close _V0scheme_V0r7rs_V20_k606) (quote vector-set!))
V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k606, env)}),
      VEncodePointer(&_V0vector__set_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k604, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 74 0) (close _V0scheme_V0r7rs_V20_k605) (quote vector-for-each))
V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k605, env)}),
      VEncodePointer(&_V0vector__for__each.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k603, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 73 0) (close _V0scheme_V0r7rs_V20_k604) (quote current-output-port))
V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k604, env)}),
      VEncodePointer(&_V0current__output__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k602, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 72 0) (close _V0scheme_V0r7rs_V20_k603) (quote current-input-port))
V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k603, env)}),
      VEncodePointer(&_V0current__input__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k601, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 71 0) (close _V0scheme_V0r7rs_V20_k602) (quote open-output-file))
V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k602, env)}),
      VEncodePointer(&_V0open__output__file.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k600, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 70 0) (close _V0scheme_V0r7rs_V20_k601) (quote open-output-string))
V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k601, env)}),
      VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k599, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 69 0) (close _V0scheme_V0r7rs_V20_k600) (quote with-output-to-file))
V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k600, env)}),
      VEncodePointer(&_V0with__output__to__file.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k598, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 68 0) (close _V0scheme_V0r7rs_V20_k599) (quote read-char))
V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k599, env)}),
      VEncodePointer(&_V0read__char.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k597, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 67 0) (close _V0scheme_V0r7rs_V20_k598) (quote read))
V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k598, env)}),
      VEncodePointer(&_V0read.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k596, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 66 0) (close _V0scheme_V0r7rs_V20_k597) (quote display))
V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k597, env)}),
      VEncodePointer(&_V0display.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 65 0) (close _V0scheme_V0r7rs_V20_k596) (quote call/cc))
V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k596, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k594, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 64 0) (close _V0scheme_V0r7rs_V20_k595) (quote call-with-values))
V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k595, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k593, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 63 0) (close _V0scheme_V0r7rs_V20_k594) (quote values))
V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k594, env)}),
      VEncodePointer(&_V0values.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k592, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 62 0) (close _V0scheme_V0r7rs_V20_k593) (quote exit))
V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k593, env)}),
      VEncodePointer(&_V0exit.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k591, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 61 0) (close _V0scheme_V0r7rs_V20_k592) (quote error))
V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k592, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k590, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 60 0) (close _V0scheme_V0r7rs_V20_k591) (quote command-line))
V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k591, env)}),
      VEncodePointer(&_V0command__line.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k589, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 59 0) (close _V0scheme_V0r7rs_V20_k590) (quote apply))
V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k590, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 58 0) (close _V0scheme_V0r7rs_V20_k589) (quote call-with-current-continuation))
V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k589, env)}),
      VEncodePointer(&_V0call__with__current__continuation.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k587, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 57 0) (close _V0scheme_V0r7rs_V20_k588) (quote write))
V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k588, env)}),
      VEncodePointer(&_V0write.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k586, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 56 0) (close _V0scheme_V0r7rs_V20_k587) (quote newline))
V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k587, env)}),
      VEncodePointer(&_V0newline.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k585, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 55 0) (close _V0scheme_V0r7rs_V20_k586) (quote read-line))
V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k586, env)}),
      VEncodePointer(&_V0read__line.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k584, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 54 0) (close _V0scheme_V0r7rs_V20_k585) (quote with-input-from-file))
V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k585, env)}),
      VEncodePointer(&_V0with__input__from__file.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k583, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 53 0) (close _V0scheme_V0r7rs_V20_k584) (quote get-output-string))
V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k584, env)}),
      VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k582, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 52 0) (close _V0scheme_V0r7rs_V20_k583) (quote close-port))
V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k583, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 51 0) (close _V0scheme_V0r7rs_V20_k582) (quote open-input-file))
V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k582, env)}),
      VEncodePointer(&_V0open__input__file.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k580, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 50 0) (close _V0scheme_V0r7rs_V20_k581) (quote current-error-port))
V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k581, env)}),
      VEncodePointer(&_V0current__error__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k579, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 49 0) (close _V0scheme_V0r7rs_V20_k580) (quote char->integer))
V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k580, env)}),
      VEncodePointer(&_V0char___Ginteger.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 48 0) (close _V0scheme_V0r7rs_V20_k579) (quote vector-length))
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k579, env)}),
      VEncodePointer(&_V0vector__length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k577, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 47 0) (close _V0scheme_V0r7rs_V20_k578) (quote vector-ref))
V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k578, env)}),
      VEncodePointer(&_V0vector__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k576, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 46 0) (close _V0scheme_V0r7rs_V20_k577) (quote list->vector))
V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k577, env)}),
      VEncodePointer(&_V0list___Gvector.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k575, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 45 0) (close _V0scheme_V0r7rs_V20_k576) (quote string-append))
V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k576, env)}),
      VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k574, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 44 0) (close _V0scheme_V0r7rs_V20_k575) (quote string->number))
V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k575, env)}),
      VEncodePointer(&_V0string___Gnumber.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k573, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 43 0) (close _V0scheme_V0r7rs_V20_k574) (quote string-length))
V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k574, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k572, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 42 0) (close _V0scheme_V0r7rs_V20_k573) (quote string-ref))
V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k573, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k571, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 41 0) (close _V0scheme_V0r7rs_V20_k572) (quote string-copy))
V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k572, env)}),
      VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k570, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 40 0) (close _V0scheme_V0r7rs_V20_k571) (quote make-string))
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k571, env)}),
      VEncodePointer(&_V0make__string.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k569, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 39 0) (close _V0scheme_V0r7rs_V20_k570) (quote assv))
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k570, env)}),
      VEncodePointer(&_V0assv.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 38 0) (close _V0scheme_V0r7rs_V20_k569) (quote member))
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k569, env)}),
      VEncodePointer(&_V0member.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k567, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 37 0) (close _V0scheme_V0r7rs_V20_k568) (quote memq))
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k568, env)}),
      VEncodePointer(&_V0memq.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k566, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 36 0) (close _V0scheme_V0r7rs_V20_k567) (quote append))
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k567, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 35 0) (close _V0scheme_V0r7rs_V20_k566) (quote map))
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k566, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k564, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 34 0) (close _V0scheme_V0r7rs_V20_k565) (quote length))
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k565, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 33 0) (close _V0scheme_V0r7rs_V20_k564) (quote cddddr))
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k564, env)}),
      VEncodePointer(&_V0cddddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k562, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 0) (close _V0scheme_V0r7rs_V20_k563) (quote cddadr))
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k563, env)}),
      VEncodePointer(&_V0cddadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k561, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close _V0scheme_V0r7rs_V20_k562) (quote cdaddr))
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k562, env)}),
      VEncodePointer(&_V0cdaddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0scheme_V0r7rs_V20_k561) (quote cdaadr))
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k561, env)}),
      VEncodePointer(&_V0cdaadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k559, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0scheme_V0r7rs_V20_k560) (quote cadddr))
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k560, env)}),
      VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k558, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0scheme_V0r7rs_V20_k559) (quote cadadr))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k559, env)}),
      VEncodePointer(&_V0cadadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k557, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0scheme_V0r7rs_V20_k558) (quote caaddr))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k558, env)}),
      VEncodePointer(&_V0caaddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0scheme_V0r7rs_V20_k557) (quote caaadr))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k557, env)}),
      VEncodePointer(&_V0caaadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0scheme_V0r7rs_V20_k556) (quote cdddr))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k556, env)}),
      VEncodePointer(&_V0cdddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k554, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0scheme_V0r7rs_V20_k555) (quote cdadr))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k555, env)}),
      VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0scheme_V0r7rs_V20_k554) (quote caddr))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k554, env)}),
      VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0scheme_V0r7rs_V20_k553) (quote caadr))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k553, env)}),
      VEncodePointer(&_V0caadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k551, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0scheme_V0r7rs_V20_k552) (quote cddr))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k552, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k550, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0scheme_V0r7rs_V20_k551) (quote cadr))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k551, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k549, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0scheme_V0r7rs_V20_k550) (quote set-cdr!))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k550, env)}),
      VEncodePointer(&_V0set__cdr_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0scheme_V0r7rs_V20_k549) (quote cdr))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k549, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k547, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0scheme_V0r7rs_V20_k548) (quote cons))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k548, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k546, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0scheme_V0r7rs_V20_k547) (quote max))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k547, env)}),
      VEncodePointer(&_V0max.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k545, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0scheme_V0r7rs_V20_k546) (quote quotient))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k546, env)}),
      VEncodePointer(&_V0quotient.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k544, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0scheme_V0r7rs_V20_k545) (quote *))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k545, env)}),
      VEncodePointer(&_V0_S.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k543, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0scheme_V0r7rs_V20_k544) (quote +))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k544, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0scheme_V0r7rs_V20_k543) (quote number?))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k543, env)}),
      VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k541, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0scheme_V0r7rs_V20_k542) (quote inexact))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k542, env)}),
      VEncodePointer(&_V0inexact.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0scheme_V0r7rs_V20_k541) (quote <=))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k541, env)}),
      VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0scheme_V0r7rs_V20_k540) (quote =))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k540, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0scheme_V0r7rs_V20_k539) (quote not))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k539, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k537, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0scheme_V0r7rs_V20_k538) (quote eqv?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k538, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0scheme_V0r7rs_V20_k537) (quote eq?))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k537, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0scheme_V0r7rs_V20_k536) (quote integer?))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k536, env)}),
      VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0scheme_V0r7rs_V20_k535) (quote inexact?))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k535, env)}),
      VEncodePointer(&_V0inexact_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0scheme_V0r7rs_V20_k534) (quote string?))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k534, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k532, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0scheme_V0r7rs_V20_k533) (quote procedure?))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k533, env)}),
      VEncodePointer(&_V0procedure_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0scheme_V0r7rs_V20_k532) (quote pair?))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k532, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0scheme_V0r7rs_V20_k531) (quote eof-object?))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k531, env)}),
      VEncodePointer(&_V0eof__object_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k529, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0scheme_V0r7rs_V20_k530) (##string ##string.1535) (bruijn ##x.1492 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k530, env)}),
      VEncodePointer(&_V10string_D1535.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0scheme_V0r7rs_V20_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_lambda162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_lambda162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0scheme_V0r7rs_V20_k529) (##string ##string.1534))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k529, env)}),
      VEncodePointer(&_V10string_D1534.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0assert_V20_k666(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k666, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1495 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote assert-equal) (bruijn assert-equal 1 1)) (quote ())))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assert__equal.sym, VPOINTER_OTHER),
      upenv->vars[1]
    )
,
      VNULL
    )

    );
 }
}
static void _V0assert__equal_k670(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k670, runtime, upenv, 1, argc, _var0) {
  // ((bruijn exit 6 8) (bruijn ##k.1498 4 0) 1)
V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      upenv->up->up->up->vars[0],
      VEncodeInt(1l)
    );
 }
}
static void _V0assert__equal_k669(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k669, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn format 5 7) (close _V0assert__equal_k670) (bruijn ##x.1501 0 0) (##string ##string.1536) (bruijn x 3 1) (bruijn y 3 2))
V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k670, env)}),
      _var0,
      VEncodePointer(&_V10string_D1536.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]
    );
 }
}
static void _V0assert__equal_k668(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k668, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1499 0 0) ((bruijn current-error-port 4 6) (close _V0assert__equal_k669)) ((bruijn ##k.1498 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k669, env)})
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0assert__equal_k667(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k667, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 3 3) (close _V0assert__equal_k668) (bruijn ##x.1502 0 0))
V_CALL(upenv->up->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k668, env)}),
      _var0
    );
 }
}
static void _V0assert__equal_k671(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k671, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1504 1 0) (bruijn rest 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k676(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k676, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.1506 5 0) (bruijn ##x.1509 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k675(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k675, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 8 1) (close _V0loop_k676) (bruijn rest 4 1))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k676, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k674(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k674, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn assert-equal 6 1) (close _V0loop_k675) (bruijn x 5 1) (bruijn ##x.1510 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k675, env)}),
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k673(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k673, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1507 0 0) ((bruijn car 6 2) (close _V0loop_k674) (bruijn rest 2 1)) ((bruijn ##k.1506 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k674, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k672(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k672, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 5 3) (close _V0loop_k673) (bruijn ##x.1511 0 0))
V_CALL(VGetArg(upenv, 5-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k673, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda169, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda169, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 4 4) (close _V0loop_k672) (bruijn rest 0 1))
V_CALL(upenv->up->up->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k672, env)}),
      _var1
    );
 }
}
static void _V0assert__equal_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_lambda168, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0assert__equal_k671) (bruijn loop 0 1) (close _V0loop_lambda169))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k671, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda169, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0assert__equal_lambda167(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0assert__equal_lambda167 #t (3 ((bruijn equal? 2 5) (close _V0assert__equal_k667) (bruijn x 0 1) (bruijn y 0 2))) (2 + ((close _V0assert__equal_lambda168) (bruijn ##k.1503 0 0) #f)))
 VError("Not enough arguments to _V0assert__equal_lambda167, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0assert__equal_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0assert__equal_lambda167, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn equal? 2 5) (close _V0assert__equal_k667) (bruijn x 0 1) (bruijn y 0 2))
V_CALL(upenv->up->vars[5], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k667, env)}),
      _var1,
      _var2
    );
 }
}
__attribute__((used)) static void _V20Case1__V0assert__equal_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0assert__equal_lambda167, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0assert__equal_lambda168) (bruijn ##k.1503 0 0) #f)
V_CALL_FUNC(_V0assert__equal_lambda168, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
void _V0assert__equal_lambda167(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0assert__equal_lambda167:\n"
"    cmp edx, 3\n"
"    je _V20Case0__V0assert__equal_lambda167\n"
"    cmp edx, 2\n"
"    jge _V20Case1__V0assert__equal_lambda167\n"
"    jmp _V20CaseError__V0assert__equal_lambda167\n"
);
static void _V0vanity_V0assert_V20_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vanity_V0assert_V20_k666) (bruijn assert-equal 0 1) (close _V0assert__equal_lambda167))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k666, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_lambda167, env)})
    );
 }
}
static void _V0vanity_V0assert_V20_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_lambda165, runtime, upenv, 9, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8) {
  struct { VEnv env; VWORD argv[9]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 9; env->var_len = 9; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  // ((close _V0vanity_V0assert_V20_lambda166) (bruijn ##k.1494 0 0) #f)
V_CALL_FUNC(_V0vanity_V0assert_V20_lambda166, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0assert_V20_k665(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k665, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0assert_V20_lambda165) (bruijn ##k.1493 10 0) (bruijn ##x.1512 7 0) (bruijn ##x.1513 6 0) (bruijn ##x.1514 5 0) (bruijn ##x.1515 4 0) (bruijn ##x.1516 3 0) (bruijn ##x.1517 2 0) (bruijn ##x.1518 1 0) (bruijn ##x.1519 0 0))
V_CALL_FUNC(_V0vanity_V0assert_V20_lambda165, env, runtime,
      VGetArg(upenv, 10-1, 0),
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
static void _V0vanity_V0assert_V20_k664(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k664, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0assert_V20_k665) (quote exit))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k665, env)}),
      VEncodePointer(&_V0exit.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0assert_V20_k663(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k663, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0assert_V20_k664) (quote format))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k664, env)}),
      VEncodePointer(&_V0format.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0assert_V20_k662(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k662, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0assert_V20_k663) (quote current-error-port))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k663, env)}),
      VEncodePointer(&_V0current__error__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0assert_V20_k661(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k661, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0assert_V20_k662) (quote equal?))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k662, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0assert_V20_k660(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k660, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0assert_V20_k661) (quote null?))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k661, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0assert_V20_k659(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k659, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0assert_V20_k660) (quote not))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k660, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0assert_V20_k658(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k658, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0assert_V20_k659) (quote car))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k659, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0assert_V20_k657(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k657, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0assert_V20_k658) (quote cdr))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k658, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0assert_V20_k656(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k656, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0assert_V20_k657) (##string ##string.1537) (bruijn ##x.1520 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k657, env)}),
      VEncodePointer(&_V10string_D1537.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0vanity_V0assert_V20_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_lambda164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_lambda164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0assert_V20_k656) (##string ##string.1534))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k656, env)}),
      VEncodePointer(&_V10string_D1534.sym, VPOINTER_OTHER)
    );
 }
}
VFunc VMakeImport = (VFunc)VMakeImport_lambda1;
VFunc VLoadLibrary = (VFunc)VLoadLibrary_lambda5;
VFunc _V0vanity_V0core_V20 = (VFunc)_V0vanity_V0core_V20_lambda6;
VFunc _V0scheme_V0r7rs_V20 = (VFunc)_V0scheme_V0r7rs_V20_lambda162;
VFunc _V0vanity_V0assert_V20 = (VFunc)_V0vanity_V0assert_V20_lambda164;
