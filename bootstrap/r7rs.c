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
static struct { VBlob sym; char bytes[13]; } _V10string_D2601 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[21]; } _V10string_D2600 = { { VSTRING, 21 }, "_V0scheme_V0r7rs_V20" };
static struct { VBlob sym; char bytes[12]; } _V10string_D2599 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[21]; } _V10string_D2598 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[1]; } _V10string_D2597 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[3]; } _V10string_D2596 = { { VSTRING, 3 }, "#(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D2595 = { { VSTRING, 2 }, "(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D2594 = { { VSTRING, 2 }, ")" };
static struct { VBlob sym; char bytes[4]; } _V10string_D2593 = { { VSTRING, 4 }, " . " };
static struct { VBlob sym; char bytes[3]; } _V0ok = { { VSYMBOL, 3 }, "ok" };
static struct { VBlob sym; char bytes[41]; } _V10string_D2592 = { { VSTRING, 41 }, "printf: format string has trailing tilde" };
static struct { VBlob sym; char bytes[23]; } _V10string_D2591 = { { VSTRING, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10string_D2590 = { { VSTRING, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[8]; } _V10string_D2589 = { { VSTRING, 8 }, "error: " };
static struct { VBlob sym; char bytes[2]; } _V10string_D2588 = { { VSTRING, 2 }, ":" };
static struct { VBlob sym; char bytes[2]; } _V10string_D2587 = { { VSTRING, 2 }, " " };
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
static struct { VBlob sym; char bytes[9]; } _V10string_D2586 = { { VSTRING, 9 }, "library " };
static struct { VBlob sym; char bytes[21]; } _V10string_D2585 = { { VSTRING, 21 }, ": symbol not found: " };
static void VMakeImport_k1(VEnv * env) {
 V_GC_CHECK(VMakeImport_k1, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.7 1 0) (quote ()) (bruijn args 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VNULL,
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to VMakeImport_k1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k7(VEnv * env) {
 V_GC_CHECK(_V0loop_k7, env) {
 if (env->num_vars == 1) {
  // (##sys.abort (bruijn ##k.20 5 0))
    V_CALL_FUNC(VAbort,
      VGetArg(env, 5, 0)
    );
 } else {
  VError("Not enough arguments to _V0loop_k7, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k6(VEnv * env) {
 V_GC_CHECK(_V0loop_k6, env) {
 if (env->num_vars == 1) {
  // (##sys.newline (close _V0loop_k7) (bruijn stdout 4 1))
    V_CALL_FUNC(VNewline,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k7, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k6, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k5(VEnv * env) {
 V_GC_CHECK(_V0loop_k5, env) {
 if (env->num_vars == 1) {
  // (##sys.display-word (close _V0loop_k6) (bruijn x 7 1) (bruijn stdout 3 1))
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k6, env)}),
      VGetArg(env, 7, 1),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k5, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k4(VEnv * env) {
 V_GC_CHECK(_V0loop_k4, env) {
 if (env->num_vars == 1) {
  // (##sys.display-word (close _V0loop_k5) (##string ##string.2585) (bruijn stdout 2 1))
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k5, env)}),
      VEncodePointer(&_V10string_D2585.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k4, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k3(VEnv * env) {
 V_GC_CHECK(_V0loop_k3, env) {
 if (env->num_vars == 1) {
  // (##sys.display-word (close _V0loop_k4) (bruijn lib 6 1) (bruijn stdout 1 1))
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k4, env)}),
      VGetArg(env, 6, 1),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k3, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda5(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda5, env) {
  // (##sys.display-word (close _V0loop_k3) (##string ##string.2586) (bruijn stdout 0 1))
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k3, env)}),
      VEncodePointer(&_V10string_D2586.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 }
}
static void _V0loop_k2(VEnv * env) {
 V_GC_CHECK(_V0loop_k2, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda5) (bruijn ##k.12 1 0) (bruijn ##x.37 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda5, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k2, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k8(VEnv * env) {
 V_GC_CHECK(_V0loop_k8, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.44 0 0) ((bruijn ##k.12 1 0) (##inline ##sys.cdr (##inline ##sys.car (bruijn args 1 1)))) ((bruijn loop 2 1) (bruijn ##k.12 1 0) (##inline ##sys.cdr (bruijn args 1 1)) (bruijn rest 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCdr(
VInlineCar(
env->up->vars[1]
    )

    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )
,
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda4(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda4, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn args 0 1)) (if (##inline ##sys.null? (bruijn rest 0 2)) (##sys.dup-stdout (close _V0loop_k2)) ((bruijn loop 1 1) (bruijn ##k.12 0 0) (##inline ##sys.car (bruijn rest 0 2)) (##inline ##sys.cdr (bruijn rest 0 2)))) (##sys.symbol=? (close _V0loop_k8) (bruijn x 2 1) (##inline ##sys.car (##inline ##sys.car (bruijn args 0 1)))))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
if(VDecodeBool(
VInlineNullP(
env->vars[2]
    )
)) {
    V_CALL_FUNC(VDupStdout,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k2, env)})
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCar(
env->vars[2]
    )
,
      VInlineCdr(
env->vars[2]
    )

    );
}
} else {
    V_CALL_FUNC(VSymbolEqv,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k8, env)}),
      env->up->up->vars[1],
      VInlineCar(
VInlineCar(
env->vars[1]
    )

    )

    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda4, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void VMakeImport_lambda3(VEnv * env) {
 V_GC_CHECK(VMakeImport_lambda3, env) {
  // (set! (close VMakeImport_k1) (bruijn loop 0 1) (close _V0loop_lambda4))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VMakeImport_k1, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda4, env)})
    );
 }
}
static void VMakeImport_lambda2(VEnv * env) {
 V_GC_CHECK(VMakeImport_lambda2, env) {
 if (env->num_vars == 2) {
  // ((close VMakeImport_lambda3) (bruijn ##k.5 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VMakeImport_lambda3, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to VMakeImport_lambda2, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void VMakeImport_lambda1(VEnv * env) {
 V_GC_CHECK(VMakeImport_lambda1, env) {
 if (env->num_vars >= 2) {
  // ((bruijn ##k.3 0 0) (close VMakeImport_lambda2))
  V_GATHER_VARARGS(&env, 2);
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(VMakeImport_lambda2, env)})
    );
 } else {
  VError("Not enough arguments to VMakeImport_lambda1, got ~D~N"
  "-- expected 2 or more~N"
  , env->num_vars);
 }
 }
}
static void VLoadLibrary_k12(VEnv * env) {
 V_GC_CHECK(VLoadLibrary_k12, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.56 3 0) (##inline ##sys.cdr (##inline ##sys.car ##vcore.libraries)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VInlineCdr(
VInlineCar(
VLookupGlobalVarFast("##vcore.libraries")
    )

    )

    );
 } else {
  VError("Not enough arguments to VLoadLibrary_k12, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void VLoadLibrary_k11(VEnv * env) {
 V_GC_CHECK(VLoadLibrary_k11, env) {
 if (env->num_vars == 1) {
  // (set! (close VLoadLibrary_k12) ##vcore.libraries (##inline ##sys.cons (##inline ##sys.cons (bruijn lib 4 1) (bruijn ##x.68 0 0)) ##vcore.libraries))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(VLoadLibrary_k12, env)}),
      VEncodePointer(&_V10vcore_Dlibraries.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 4, 1),
      env->vars[0]
    )
,
      VLookupGlobalVarFast("##vcore.libraries")
    )

    );
 } else {
  VError("Not enough arguments to VLoadLibrary_k11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void VLoadLibrary_k10(VEnv * env) {
 V_GC_CHECK(VLoadLibrary_k10, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.69 0 0) (close VLoadLibrary_k11))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(VLoadLibrary_k11, env)})
    );
 } else {
  VError("Not enough arguments to VLoadLibrary_k10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void VLoadLibrary_lambda7(VEnv * env) {
 V_GC_CHECK(VLoadLibrary_lambda7, env) {
  // (if (bruijn lookup 0 1) ((bruijn ##k.56 0 0) (bruijn lookup 0 1)) (##vcore.function (close VLoadLibrary_k10) (bruijn lib 2 1)))
if(VDecodeBool(
env->vars[1])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[1]
    );
} else {
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(VLoadLibrary_k10, env)}),
      env->up->up->vars[1]
    );
}
 }
}
static void VLoadLibrary_k9(VEnv * env) {
 V_GC_CHECK(VLoadLibrary_k9, env) {
 if (env->num_vars == 1) {
  // ((close VLoadLibrary_lambda7) (bruijn ##k.54 1 0) (bruijn ##x.70 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VLoadLibrary_lambda7, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to VLoadLibrary_k9, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void VLoadLibrary_lambda6(VEnv * env) {
 V_GC_CHECK(VLoadLibrary_lambda6, env) {
 if (env->num_vars == 2) {
  // (##vcore.lookup-library (close VLoadLibrary_k9) (bruijn lib 0 1))
    V_CALL_FUNC(VLookupLibrary,
      VEncodeClosure((VClosure[]){VMakeClosure(VLoadLibrary_k9, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to VLoadLibrary_lambda6, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_lambda13(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda13, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1194 0 0) (bruijn out 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->up->vars[1]
    );
 } else if (env->num_vars == 2) {
  // (set! (bruijn ##k.1196 0 0) (bruijn out 1 1) (bruijn port 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      env->vars[0],
      1, 1,
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda13, got ~D~N"
  "-- expected 1~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_lambda12(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda12, env) {
  // ((bruijn ##k.1192 0 0) (close _V0vanity_V0core_V20_lambda13))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_lambda13, env)})
    );
 }
}
static void _V0vanity_V0core_V20_lambda15(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda15, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1186 0 0) (bruijn out 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->up->vars[1]
    );
 } else if (env->num_vars == 2) {
  // (set! (bruijn ##k.1188 0 0) (bruijn out 1 1) (bruijn port 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      env->vars[0],
      1, 1,
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda15, got ~D~N"
  "-- expected 1~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_lambda14(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda14, env) {
  // ((bruijn ##k.1184 0 0) (close _V0vanity_V0core_V20_lambda15))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_lambda15, env)})
    );
 }
}
static void _V0vanity_V0core_V20_lambda17(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda17, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1178 0 0) (bruijn in 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->up->vars[1]
    );
 } else if (env->num_vars == 2) {
  // (set! (bruijn ##k.1180 0 0) (bruijn in 1 1) (bruijn port 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      env->vars[0],
      1, 1,
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda17, got ~D~N"
  "-- expected 1~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_lambda16(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda16, env) {
  // ((bruijn ##k.1176 0 0) (close _V0vanity_V0core_V20_lambda17))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_lambda17, env)})
    );
 }
}
static void _V0vanity_V0core_V20_k161(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k161, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 147 0) (##inline ##sys.cons (##inline ##sys.cons (quote null?) (bruijn null? 147 1)) (##inline ##sys.cons (##inline ##sys.cons (quote eof-object?) (bruijn eof-object? 147 3)) (##inline ##sys.cons (##inline ##sys.cons (quote boolean?) (bruijn boolean? 147 2)) (##inline ##sys.cons (##inline ##sys.cons (quote pair?) (bruijn pair? 147 4)) (##inline ##sys.cons (##inline ##sys.cons (quote vector?) (bruijn vector? 147 5)) (##inline ##sys.cons (##inline ##sys.cons (quote procedure?) (bruijn procedure? 147 6)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol?) (bruijn symbol? 147 7)) (##inline ##sys.cons (##inline ##sys.cons (quote string?) (bruijn string? 147 8)) (##inline ##sys.cons (##inline ##sys.cons (quote exact?) (bruijn exact? 147 10)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact?) (bruijn inexact? 147 12)) (##inline ##sys.cons (##inline ##sys.cons (quote real?) (bruijn real? 147 13)) (##inline ##sys.cons (##inline ##sys.cons (quote integer?) (bruijn integer? 147 11)) (##inline ##sys.cons (##inline ##sys.cons (quote char?) (bruijn char? 147 9)) (##inline ##sys.cons (##inline ##sys.cons (quote eq?) (bruijn eq? 147 14)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol=?) (bruijn symbol=? 147 15)) (##inline ##sys.cons (##inline ##sys.cons (quote eqv?) (bruijn eqv? 147 16)) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (bruijn equal? 147 17)) (##inline ##sys.cons (##inline ##sys.cons (quote not) (bruijn not 147 18)) (##inline ##sys.cons (##inline ##sys.cons (quote <) (bruijn < 147 19)) (##inline ##sys.cons (##inline ##sys.cons (quote =) (bruijn = 147 20)) (##inline ##sys.cons (##inline ##sys.cons (quote >) (bruijn > 147 21)) (##inline ##sys.cons (##inline ##sys.cons (quote <=) (bruijn <= 147 22)) (##inline ##sys.cons (##inline ##sys.cons (quote >=) (bruijn >= 147 23)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact) (bruijn inexact 147 24)) (##inline ##sys.cons (##inline ##sys.cons (quote exact->inexact) (bruijn exact->inexact 147 25)) (##inline ##sys.cons (##inline ##sys.cons (quote number?) (bruijn number? 147 26)) (##inline ##sys.cons (##inline ##sys.cons (quote complex?) (bruijn complex? 147 27)) (##inline ##sys.cons (##inline ##sys.cons (quote +) (bruijn + 147 28)) (##inline ##sys.cons (##inline ##sys.cons (quote -) (bruijn - 147 29)) (##inline ##sys.cons (##inline ##sys.cons (quote *) (bruijn * 147 30)) (##inline ##sys.cons (##inline ##sys.cons (quote /) (bruijn / 147 31)) (##inline ##sys.cons (##inline ##sys.cons (quote quotient) (bruijn quotient 147 32)) (##inline ##sys.cons (##inline ##sys.cons (quote remainder) (bruijn remainder 147 33)) (##inline ##sys.cons (##inline ##sys.cons (quote max) (bruijn max 147 34)) (##inline ##sys.cons (##inline ##sys.cons (quote min) (bruijn min 147 35)) (##inline ##sys.cons (##inline ##sys.cons (quote cons) (bruijn cons 147 36)) (##inline ##sys.cons (##inline ##sys.cons (quote car) (bruijn car 147 37)) (##inline ##sys.cons (##inline ##sys.cons (quote cdr) (bruijn cdr 147 38)) (##inline ##sys.cons (##inline ##sys.cons (quote set-car!) (bruijn set-car! 147 39)) (##inline ##sys.cons (##inline ##sys.cons (quote set-cdr!) (bruijn set-cdr! 147 40)) (##inline ##sys.cons (##inline ##sys.cons (quote caar) (bruijn caar 147 41)) (##inline ##sys.cons (##inline ##sys.cons (quote cadr) (bruijn cadr 147 42)) (##inline ##sys.cons (##inline ##sys.cons (quote cdar) (bruijn cdar 147 43)) (##inline ##sys.cons (##inline ##sys.cons (quote cddr) (bruijn cddr 147 44)) (##inline ##sys.cons (##inline ##sys.cons (quote caaar) (bruijn caaar 147 45)) (##inline ##sys.cons (##inline ##sys.cons (quote caadr) (bruijn caadr 147 46)) (##inline ##sys.cons (##inline ##sys.cons (quote cadar) (bruijn cadar 147 47)) (##inline ##sys.cons (##inline ##sys.cons (quote caddr) (bruijn caddr 147 48)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaar) (bruijn cdaar 147 49)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadr) (bruijn cdadr 147 50)) (##inline ##sys.cons (##inline ##sys.cons (quote cddar) (bruijn cddar 147 51)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddr) (bruijn cdddr 147 52)) (##inline ##sys.cons (##inline ##sys.cons (quote caaaar) (bruijn caaaar 147 53)) (##inline ##sys.cons (##inline ##sys.cons (quote caaadr) (bruijn caaadr 147 54)) (##inline ##sys.cons (##inline ##sys.cons (quote caadar) (bruijn caadar 147 55)) (##inline ##sys.cons (##inline ##sys.cons (quote caaddr) (bruijn caaddr 147 56)) (##inline ##sys.cons (##inline ##sys.cons (quote cadaar) (bruijn cadaar 147 57)) (##inline ##sys.cons (##inline ##sys.cons (quote cadadr) (bruijn cadadr 147 58)) (##inline ##sys.cons (##inline ##sys.cons (quote caddar) (bruijn caddar 147 59)) (##inline ##sys.cons (##inline ##sys.cons (quote cadddr) (bruijn cadddr 147 60)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaaar) (bruijn cdaaar 147 61)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaadr) (bruijn cdaadr 147 62)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadar) (bruijn cdadar 147 63)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaddr) (bruijn cdaddr 147 64)) (##inline ##sys.cons (##inline ##sys.cons (quote cddaar) (bruijn cddaar 147 65)) (##inline ##sys.cons (##inline ##sys.cons (quote cddadr) (bruijn cddadr 147 66)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddar) (bruijn cdddar 147 67)) (##inline ##sys.cons (##inline ##sys.cons (quote cddddr) (bruijn cddddr 147 68)) (##inline ##sys.cons (##inline ##sys.cons (quote list) (bruijn list 147 69)) (##inline ##sys.cons (##inline ##sys.cons (quote length) (bruijn length 147 70)) (##inline ##sys.cons (##inline ##sys.cons (quote list-ref) (bruijn list-ref 147 71)) (##inline ##sys.cons (##inline ##sys.cons (quote map) (bruijn map 147 72)) (##inline ##sys.cons (##inline ##sys.cons (quote for-each) (bruijn for-each 147 73)) (##inline ##sys.cons (##inline ##sys.cons (quote append) (bruijn append 147 77)) (##inline ##sys.cons (##inline ##sys.cons (quote reverse) (bruijn reverse 147 78)) (##inline ##sys.cons (##inline ##sys.cons (quote memq) (bruijn memq 147 79)) (##inline ##sys.cons (##inline ##sys.cons (quote memv) (bruijn memv 147 80)) (##inline ##sys.cons (##inline ##sys.cons (quote member) (bruijn member 147 81)) (##inline ##sys.cons (##inline ##sys.cons (quote assq) (bruijn assq 147 82)) (##inline ##sys.cons (##inline ##sys.cons (quote assv) (bruijn assv 147 83)) (##inline ##sys.cons (##inline ##sys.cons (quote assoc) (bruijn assoc 147 84)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 147 96)) (##inline ##sys.cons (##inline ##sys.cons (quote list->string) (bruijn list->string 147 95)) (##inline ##sys.cons (##inline ##sys.cons (quote make-string) (bruijn make-string 147 85)) (##inline ##sys.cons (##inline ##sys.cons (quote substring) (bruijn substring 147 86)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy) (bruijn string-copy 147 87)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy!) (bruijn string-copy! 147 88)) (##inline ##sys.cons (##inline ##sys.cons (quote string-ref) (bruijn string-ref 147 89)) (##inline ##sys.cons (##inline ##sys.cons (quote string-set!) (bruijn string-set! 147 90)) (##inline ##sys.cons (##inline ##sys.cons (quote string-length) (bruijn string-length 147 91)) (##inline ##sys.cons (##inline ##sys.cons (quote string->symbol) (bruijn string->symbol 147 92)) (##inline ##sys.cons (##inline ##sys.cons (quote string->number) (bruijn string->number 147 93)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 147 96)) (##inline ##sys.cons (##inline ##sys.cons (quote string-append) (bruijn string-append 147 97)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol->string) (bruijn symbol->string 147 94)) (##inline ##sys.cons (##inline ##sys.cons (quote list->vector) (bruijn list->vector 147 98)) (##inline ##sys.cons (##inline ##sys.cons (quote vector) (bruijn vector 147 99)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-ref) (bruijn vector-ref 147 100)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-set!) (bruijn vector-set! 147 101)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-length) (bruijn vector-length 147 102)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-for-each) (bruijn vector-for-each 147 103)) (##inline ##sys.cons (##inline ##sys.cons (quote char->integer) (bruijn char->integer 147 104)) (##inline ##sys.cons (##inline ##sys.cons (quote current-output-port) (bruijn current-output-port 147 105)) (##inline ##sys.cons (##inline ##sys.cons (quote current-error-port) (bruijn current-error-port 147 106)) (##inline ##sys.cons (##inline ##sys.cons (quote current-input-port) (bruijn current-input-port 147 107)) (##inline ##sys.cons (##inline ##sys.cons (quote open-input-file) (bruijn open-input-file 147 108)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-file) (bruijn open-output-file 147 109)) (##inline ##sys.cons (##inline ##sys.cons (quote close-port) (bruijn close-port 147 110)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-string) (bruijn open-output-string 147 111)) (##inline ##sys.cons (##inline ##sys.cons (quote get-output-string) (bruijn get-output-string 147 112)) (##inline ##sys.cons (##inline ##sys.cons (quote with-output-to-file) (bruijn with-output-to-file 147 113)) (##inline ##sys.cons (##inline ##sys.cons (quote with-input-from-file) (bruijn with-input-from-file 147 114)) (##inline ##sys.cons (##inline ##sys.cons (quote read-char) (bruijn read-char 147 115)) (##inline ##sys.cons (##inline ##sys.cons (quote read-line) (bruijn read-line 147 116)) (##inline ##sys.cons (##inline ##sys.cons (quote read) (bruijn read 147 117)) (##inline ##sys.cons (##inline ##sys.cons (quote newline) (bruijn newline 147 118)) (##inline ##sys.cons (##inline ##sys.cons (quote display) (bruijn display 147 120)) (##inline ##sys.cons (##inline ##sys.cons (quote write) (bruijn write 147 121)) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (bruijn call/cc 147 122)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-current-continuation) (bruijn call-with-current-continuation 147 123)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (bruijn call-with-values 147 124)) (##inline ##sys.cons (##inline ##sys.cons (quote apply) (bruijn apply 147 125)) (##inline ##sys.cons (##inline ##sys.cons (quote values) (bruijn values 147 126)) (##inline ##sys.cons (##inline ##sys.cons (quote command-line) (bruijn command-line 147 127)) (##inline ##sys.cons (##inline ##sys.cons (quote system) (bruijn system 147 128)) (##inline ##sys.cons (##inline ##sys.cons (quote open-input-process) (bruijn open-input-process 147 129)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-process) (bruijn open-output-process 147 130)) (##inline ##sys.cons (##inline ##sys.cons (quote make-temporary-file) (bruijn make-temporary-file 147 131)) (##inline ##sys.cons (##inline ##sys.cons (quote exit) (bruijn exit 147 132)) (##inline ##sys.cons (##inline ##sys.cons (quote atom?) (bruijn atom? 147 133)) (##inline ##sys.cons (##inline ##sys.cons (quote displayln) (bruijn displayln 147 134)) (##inline ##sys.cons (##inline ##sys.cons (quote writeln) (bruijn writeln 147 135)) (##inline ##sys.cons (##inline ##sys.cons (quote format) (bruijn format 147 140)) (##inline ##sys.cons (##inline ##sys.cons (quote printf) (bruijn printf 147 138)) (##inline ##sys.cons (##inline ##sys.cons (quote sprintf) (bruijn sprintf 147 139)) (##inline ##sys.cons (##inline ##sys.cons (quote error) (bruijn error 147 141)) (##inline ##sys.cons (##inline ##sys.cons (quote fold) (bruijn fold 147 75)) (##inline ##sys.cons (##inline ##sys.cons (quote fold-right) (bruijn fold-right 147 76)) (##inline ##sys.cons (##inline ##sys.cons (quote iota) (bruijn iota 147 74)) (quote ())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 147, 0)),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 1)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eof__object_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0boolean_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 2)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 4)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 5)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0procedure_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 6)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 7)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 8)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 10)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 12)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0real_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 13)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 11)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 9)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 14)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_E_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 15)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 16)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 17)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0not.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 18)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 19)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_E.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 20)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 21)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 22)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G_E.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 23)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 24)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact___Ginexact.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 25)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 26)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0complex_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 27)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 28)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0__.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 29)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_S.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 30)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_W.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 31)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quotient.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 32)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0remainder.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 33)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0max.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 34)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0min.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 35)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cons.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 36)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0car.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 37)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 38)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 39)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__cdr_B.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 40)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 41)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 42)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 43)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 44)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 45)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 46)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 47)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 48)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 49)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 50)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 51)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 52)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaaar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 53)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaadr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 54)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 55)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaddr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 56)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadaar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 57)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadadr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 58)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 59)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 60)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaaar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 61)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaadr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 62)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 63)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaddr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 64)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddaar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 65)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddadr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 66)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddar.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 67)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddddr.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 68)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 69)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0length.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 70)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 71)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0map.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 72)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 73)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0append.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 77)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 78)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memq.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 79)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memv.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 80)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0member.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 81)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assq.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 82)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assv.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 83)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 84)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 96)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gstring.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 95)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0make__string.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 85)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0substring.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 86)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 87)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy_B.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 88)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 89)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__set_B.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 90)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 91)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 92)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gnumber.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 93)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 96)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 97)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 94)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gvector.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 98)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 99)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__ref.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 100)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__set_B.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 101)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__length.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 102)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__for__each.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 103)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char___Ginteger.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 104)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__output__port.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 105)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__error__port.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 106)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__input__port.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 107)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__input__file.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 108)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__file.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 109)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 110)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 111)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 112)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__output__to__file.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 113)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__input__from__file.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 114)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__char.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 115)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__line.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 116)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 117)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0newline.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 118)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0display.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 120)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0write.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 121)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 122)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__current__continuation.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 123)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 124)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0apply.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 125)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0values.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 126)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0command__line.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 127)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0system.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 128)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__input__process.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 129)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__process.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 130)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0make__temporary__file.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 131)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exit.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 132)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 133)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0displayln.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 134)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0writeln.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 135)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0format.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 140)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0printf.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 138)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 139)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 141)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0fold.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 75)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0fold__right.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 76)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0iota.sym, VPOINTER_OTHER),
      VGetArg(env, 147, 74)
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
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k161, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_k168(VEnv * env) {
 V_GC_CHECK(_V0error_k168, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.802 1 0) (bruijn irritants 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0error_k168, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k174(VEnv * env) {
 V_GC_CHECK(_V0loop_k174, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 7 1) (bruijn ##k.807 6 0) (bruijn ##x.818 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k174, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k173(VEnv * env) {
 V_GC_CHECK(_V0loop_k173, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 161 38) (close _V0loop_k174) (bruijn irritants 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k174, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k173, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k172(VEnv * env) {
 V_GC_CHECK(_V0loop_k172, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 160 120) (close _V0loop_k173) (bruijn ##x.819 0 0) (bruijn err 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k173, env)}),
      env->vars[0],
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k172, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k171(VEnv * env) {
 V_GC_CHECK(_V0loop_k171, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 159 37) (close _V0loop_k172) (bruijn irritants 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k172, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k171, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k170(VEnv * env) {
 V_GC_CHECK(_V0loop_k170, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.809 0 0) ((bruijn display 158 120) (close _V0loop_k171) (##string ##string.2587) (bruijn err 9 1)) ((bruijn ##k.807 2 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 158, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k171, env)}),
      VEncodePointer(&_V10string_D2587.sym, VPOINTER_OTHER),
      VGetArg(env, 9, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k170, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k169(VEnv * env) {
 V_GC_CHECK(_V0loop_k169, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 157 18) (close _V0loop_k170) (bruijn ##x.822 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 157, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k170, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k169, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda21(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda21, env) {
 if (env->num_vars == 2) {
  // ((bruijn null? 156 1) (close _V0loop_k169) (bruijn irritants 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 156, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k169, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda21, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0error_lambda20(VEnv * env) {
 V_GC_CHECK(_V0error_lambda20, env) {
  // (set! (close _V0error_k168) (bruijn loop 0 1) (close _V0loop_lambda21))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k168, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda21, env)})
    );
 }
}
static void _V0error_k176(VEnv * env) {
 V_GC_CHECK(_V0error_k176, env) {
 if (env->num_vars == 1) {
  // (##sys.abort (bruijn ##k.782 7 0))
    V_CALL_FUNC(VAbort,
      VGetArg(env, 7, 0)
    );
 } else {
  VError("Not enough arguments to _V0error_k176, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_k175(VEnv * env) {
 V_GC_CHECK(_V0error_k175, env) {
 if (env->num_vars == 1) {
  // ((bruijn newline 155 118) (close _V0error_k176) (bruijn err 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 155, 118)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k176, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0error_k175, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_k167(VEnv * env) {
 V_GC_CHECK(_V0error_k167, env) {
 if (env->num_vars == 1) {
  // ((close _V0error_lambda20) (close _V0error_k175) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0error_lambda20, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k175, env)}),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0error_k167, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_k177(VEnv * env) {
 V_GC_CHECK(_V0error_k177, env) {
 if (env->num_vars == 1) {
  // (##sys.abort (bruijn ##k.782 5 0))
    V_CALL_FUNC(VAbort,
      VGetArg(env, 5, 0)
    );
 } else {
  VError("Not enough arguments to _V0error_k177, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_k166(VEnv * env) {
 V_GC_CHECK(_V0error_k166, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.796 0 0) ((bruijn display 153 120) (close _V0error_k167) (##string ##string.2588) (bruijn err 4 1)) ((bruijn newline 153 118) (close _V0error_k177) (bruijn err 4 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 153, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k167, env)}),
      VEncodePointer(&_V10string_D2588.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 153, 118)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k177, env)}),
      VGetArg(env, 4, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0error_k166, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_k165(VEnv * env) {
 V_GC_CHECK(_V0error_k165, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 152 18) (close _V0error_k166) (bruijn ##x.825 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 152, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k166, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0error_k165, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_k164(VEnv * env) {
 V_GC_CHECK(_V0error_k164, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 151 1) (close _V0error_k165) (bruijn irritants 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 151, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k165, env)}),
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0error_k164, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_k163(VEnv * env) {
 V_GC_CHECK(_V0error_k163, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 150 120) (close _V0error_k164) (bruijn msg 3 1) (bruijn err 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 150, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k164, env)}),
      env->up->up->up->vars[1],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0error_k163, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_lambda19(VEnv * env) {
 V_GC_CHECK(_V0error_lambda19, env) {
  // ((bruijn display 149 120) (close _V0error_k163) (##string ##string.2589) (bruijn err 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 149, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k163, env)}),
      VEncodePointer(&_V10string_D2589.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 }
}
static void _V0error_k162(VEnv * env) {
 V_GC_CHECK(_V0error_k162, env) {
 if (env->num_vars == 1) {
  // ((close _V0error_lambda19) (bruijn ##k.780 1 0) (bruijn ##x.826 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0error_lambda19, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0error_k162, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0error_lambda18(VEnv * env) {
 V_GC_CHECK(_V0error_lambda18, env) {
 if (env->num_vars >= 2) {
  // ((bruijn current-error-port 147 106) (close _V0error_k162))
  V_GATHER_VARARGS(&env, 2);
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 147, 106)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_k162, env)})
    );
 } else {
  VError("Not enough arguments to _V0error_lambda18, got ~D~N"
  "-- expected 2 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k160(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k160, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k161) (bruijn error 146 141) (close _V0error_lambda18))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k161, env)}),
      146, 141,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0error_lambda18, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k160, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format_k179(VEnv * env) {
 V_GC_CHECK(_V0format_k179, env) {
 if (env->num_vars == 1) {
  // ((bruijn format-sprintf 148 137) (bruijn ##k.829 2 0) (bruijn a 2 1) (bruijn ##x.834 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 148, 137)),
      env->up->up->vars[0],
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0format_k179, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format_k181(VEnv * env) {
 V_GC_CHECK(_V0format_k181, env) {
 if (env->num_vars == 1) {
  // ((bruijn format-printf 149 136) (bruijn ##k.829 3 0) (bruijn ##x.840 0 0) (bruijn b 3 2) (bruijn args 3 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 149, 136)),
      env->up->up->up->vars[0],
      env->vars[0],
      env->up->up->up->vars[2],
      env->up->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0format_k181, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format_k182(VEnv * env) {
 V_GC_CHECK(_V0format_k182, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.843 0 0) ((bruijn format-sprintf 149 137) (bruijn ##k.829 3 0) (bruijn b 3 2) (bruijn args 3 3)) ((bruijn format-printf 149 136) (bruijn ##k.829 3 0) (bruijn a 3 1) (bruijn b 3 2) (bruijn args 3 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 149, 137)),
      env->up->up->up->vars[0],
      env->up->up->up->vars[2],
      env->up->up->up->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 149, 136)),
      env->up->up->up->vars[0],
      env->up->up->up->vars[1],
      env->up->up->up->vars[2],
      env->up->up->up->vars[3]
    );
}
 } else {
  VError("Not enough arguments to _V0format_k182, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format_k180(VEnv * env) {
 V_GC_CHECK(_V0format_k180, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.837 0 0) ((bruijn current-output-port 148 105) (close _V0format_k181)) ((bruijn eq? 148 14) (close _V0format_k182) (bruijn a 2 1) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 148, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format_k181, env)})
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 148, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format_k182, env)}),
      env->up->up->vars[1],
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0format_k180, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format_k178(VEnv * env) {
 V_GC_CHECK(_V0format_k178, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.831 0 0) ((bruijn cons 147 36) (close _V0format_k179) (bruijn b 1 2) (bruijn args 1 3)) ((bruijn eq? 147 14) (close _V0format_k180) (bruijn a 1 1) #t))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 147, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format_k179, env)}),
      env->up->vars[2],
      env->up->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 147, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format_k180, env)}),
      env->up->vars[1],
      VEncodeBool(true)
    );
}
 } else {
  VError("Not enough arguments to _V0format_k178, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format_lambda22(VEnv * env) {
 V_GC_CHECK(_V0format_lambda22, env) {
 if (env->num_vars == 2) {
  // ((bruijn sprintf 146 139) (bruijn ##k.827 0 0) (bruijn fmt 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 146, 139)),
      env->vars[0],
      env->vars[1]
    );
 } else if (env->num_vars >= 3) {
  // ((bruijn string? 146 8) (close _V0format_k178) (bruijn a 0 1))
  V_GATHER_VARARGS(&env, 3);
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 146, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format_k178, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0format_lambda22, got ~D~N"
  "-- expected 2~N"
  "-- expected 3 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k159(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k159, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k160) (bruijn format 145 140) (close _V0format_lambda22))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k160, env)}),
      145, 140,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format_lambda22, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k159, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0sprintf_k186(VEnv * env) {
 V_GC_CHECK(_V0sprintf_k186, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.855 1 0) (bruijn ret 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0sprintf_k186, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0sprintf_lambda25(VEnv * env) {
 V_GC_CHECK(_V0sprintf_lambda25, env) {
  // ((bruijn close-port 150 110) (close _V0sprintf_k186) (bruijn strport 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 150, 110)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0sprintf_k186, env)}),
      env->up->up->up->vars[1]
    );
 }
}
static void _V0sprintf_k185(VEnv * env) {
 V_GC_CHECK(_V0sprintf_k185, env) {
 if (env->num_vars == 1) {
  // ((close _V0sprintf_lambda25) (bruijn ##k.850 2 0) (bruijn ##x.860 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0sprintf_lambda25, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0sprintf_k185, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0sprintf_k184(VEnv * env) {
 V_GC_CHECK(_V0sprintf_k184, env) {
 if (env->num_vars == 1) {
  // ((bruijn get-output-string 148 112) (close _V0sprintf_k185) (bruijn strport 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 148, 112)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0sprintf_k185, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0sprintf_k184, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0sprintf_lambda24(VEnv * env) {
 V_GC_CHECK(_V0sprintf_lambda24, env) {
  // ((bruijn format-printf 147 136) (close _V0sprintf_k184) (bruijn strport 0 1) (bruijn fmt 2 1) (bruijn args 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 147, 136)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0sprintf_k184, env)}),
      env->vars[1],
      env->up->up->vars[1],
      env->up->up->vars[2]
    );
 }
}
static void _V0sprintf_k183(VEnv * env) {
 V_GC_CHECK(_V0sprintf_k183, env) {
 if (env->num_vars == 1) {
  // ((close _V0sprintf_lambda24) (bruijn ##k.848 1 0) (bruijn ##x.861 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0sprintf_lambda24, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0sprintf_k183, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0sprintf_lambda23(VEnv * env) {
 V_GC_CHECK(_V0sprintf_lambda23, env) {
 if (env->num_vars >= 2) {
  // ((bruijn open-output-string 145 111) (close _V0sprintf_k183))
  V_GATHER_VARARGS(&env, 2);
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 145, 111)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0sprintf_k183, env)})
    );
 } else {
  VError("Not enough arguments to _V0sprintf_lambda23, got ~D~N"
  "-- expected 2 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k158(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k158, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k159) (bruijn sprintf 144 139) (close _V0sprintf_lambda23))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k159, env)}),
      144, 139,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0sprintf_lambda23, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k158, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printf_k187(VEnv * env) {
 V_GC_CHECK(_V0printf_k187, env) {
 if (env->num_vars == 1) {
  // ((bruijn format-printf 145 136) (bruijn ##k.862 1 0) (bruijn ##x.864 0 0) (bruijn fmt 1 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 145, 136)),
      env->up->vars[0],
      env->vars[0],
      env->up->vars[1],
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0printf_k187, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printf_k190(VEnv * env) {
 V_GC_CHECK(_V0printf_k190, env) {
 if (env->num_vars == 1) {
  // ((bruijn format-printf 147 136) (bruijn ##k.865 3 0) (bruijn ##x.870 1 0) (bruijn a 3 1) (bruijn ##x.871 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 147, 136)),
      env->up->up->up->vars[0],
      env->up->vars[0],
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0printf_k190, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printf_k189(VEnv * env) {
 V_GC_CHECK(_V0printf_k189, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 146 36) (close _V0printf_k190) (bruijn b 2 2) (bruijn args 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 146, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printf_k190, env)}),
      env->up->up->vars[2],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0printf_k189, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printf_k188(VEnv * env) {
 V_GC_CHECK(_V0printf_k188, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.867 0 0) ((bruijn current-output-port 145 105) (close _V0printf_k189)) ((bruijn format-printf 145 136) (bruijn ##k.865 1 0) (bruijn a 1 1) (bruijn b 1 2) (bruijn args 1 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 145, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printf_k189, env)})
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 145, 136)),
      env->up->vars[0],
      env->up->vars[1],
      env->up->vars[2],
      env->up->vars[3]
    );
}
 } else {
  VError("Not enough arguments to _V0printf_k188, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printf_lambda26(VEnv * env) {
 V_GC_CHECK(_V0printf_lambda26, env) {
 if (env->num_vars == 2) {
  // ((bruijn current-output-port 144 105) (close _V0printf_k187))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 144, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printf_k187, env)})
    );
 } else if (env->num_vars >= 3) {
  // ((bruijn string? 144 8) (close _V0printf_k188) (bruijn a 0 1))
  V_GATHER_VARARGS(&env, 3);
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 144, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printf_k188, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0printf_lambda26, got ~D~N"
  "-- expected 2~N"
  "-- expected 3 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k157(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k157, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k158) (bruijn printf 143 138) (close _V0printf_lambda26))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k158, env)}),
      143, 138,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printf_lambda26, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k157, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format__sprintf_k194(VEnv * env) {
 V_GC_CHECK(_V0format__sprintf_k194, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.881 1 0) (bruijn ret 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0format__sprintf_k194, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format__sprintf_lambda29(VEnv * env) {
 V_GC_CHECK(_V0format__sprintf_lambda29, env) {
  // ((bruijn close-port 148 110) (close _V0format__sprintf_k194) (bruijn strport 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 148, 110)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format__sprintf_k194, env)}),
      env->up->up->up->vars[1]
    );
 }
}
static void _V0format__sprintf_k193(VEnv * env) {
 V_GC_CHECK(_V0format__sprintf_k193, env) {
 if (env->num_vars == 1) {
  // ((close _V0format__sprintf_lambda29) (bruijn ##k.876 2 0) (bruijn ##x.886 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0format__sprintf_lambda29, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0format__sprintf_k193, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format__sprintf_k192(VEnv * env) {
 V_GC_CHECK(_V0format__sprintf_k192, env) {
 if (env->num_vars == 1) {
  // ((bruijn get-output-string 146 112) (close _V0format__sprintf_k193) (bruijn strport 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 146, 112)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format__sprintf_k193, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0format__sprintf_k192, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format__sprintf_lambda28(VEnv * env) {
 V_GC_CHECK(_V0format__sprintf_lambda28, env) {
  // ((bruijn format-printf 145 136) (close _V0format__sprintf_k192) (bruijn strport 0 1) (bruijn fmt 2 1) (bruijn args 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 145, 136)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format__sprintf_k192, env)}),
      env->vars[1],
      env->up->up->vars[1],
      env->up->up->vars[2]
    );
 }
}
static void _V0format__sprintf_k191(VEnv * env) {
 V_GC_CHECK(_V0format__sprintf_k191, env) {
 if (env->num_vars == 1) {
  // ((close _V0format__sprintf_lambda28) (bruijn ##k.874 1 0) (bruijn ##x.887 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0format__sprintf_lambda28, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0format__sprintf_k191, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format__sprintf_lambda27(VEnv * env) {
 V_GC_CHECK(_V0format__sprintf_lambda27, env) {
 if (env->num_vars == 3) {
  // ((bruijn open-output-string 143 111) (close _V0format__sprintf_k191))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 143, 111)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format__sprintf_k191, env)})
    );
 } else {
  VError("Not enough arguments to _V0format__sprintf_lambda27, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k156(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k156, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k157) (bruijn format-sprintf 142 137) (close _V0format__sprintf_lambda27))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k157, env)}),
      142, 137,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format__sprintf_lambda27, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k156, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format__printf_k196(VEnv * env) {
 V_GC_CHECK(_V0format__printf_k196, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.892 1 0) 0 (bruijn args 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0format__printf_k196, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k207(VEnv * env) {
 V_GC_CHECK(_V0loop_k207, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 14 1) (bruijn ##k.910 3 0) (bruijn ##x.918 0 0) (bruijn args 13 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->up->up->vars[0],
      env->vars[0],
      VGetArg(env, 13, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k207, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k206(VEnv * env) {
 V_GC_CHECK(_V0loop_k206, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 158 28) (close _V0loop_k207) (bruijn i 12 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 158, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k207, env)}),
      VGetArg(env, 12, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k206, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k210(VEnv * env) {
 V_GC_CHECK(_V0loop_k210, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 15 1) (bruijn ##k.910 4 0) (bruijn ##x.927 0 0) (bruijn args 14 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VGetArg(env, 4, 0),
      env->vars[0],
      VGetArg(env, 14, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k210, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k209(VEnv * env) {
 V_GC_CHECK(_V0loop_k209, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 159 28) (close _V0loop_k210) (bruijn i 13 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k210, env)}),
      VGetArg(env, 13, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k209, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k217(VEnv * env) {
 V_GC_CHECK(_V0loop_k217, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 9 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 9, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k217, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k216(VEnv * env) {
 V_GC_CHECK(_V0loop_k216, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k217) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k217, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k216, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k215(VEnv * env) {
 V_GC_CHECK(_V0loop_k215, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k216) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k216, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k215, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k214(VEnv * env) {
 V_GC_CHECK(_V0loop_k214, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 162 120) (close _V0loop_k215) (bruijn ##x.941 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k215, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k214, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k213(VEnv * env) {
 V_GC_CHECK(_V0loop_k213, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 161 37) (close _V0loop_k214) (bruijn args 15 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k214, env)}),
      VGetArg(env, 15, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k213, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k221(VEnv * env) {
 V_GC_CHECK(_V0loop_k221, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 19 1) (bruijn ##k.910 8 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VGetArg(env, 8, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k221, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k220(VEnv * env) {
 V_GC_CHECK(_V0loop_k220, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 163 38) (close _V0loop_k221) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k221, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k220, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k219(VEnv * env) {
 V_GC_CHECK(_V0loop_k219, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 162 28) (close _V0loop_k220) (bruijn i 16 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k220, env)}),
      VGetArg(env, 16, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k219, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k218(VEnv * env) {
 V_GC_CHECK(_V0loop_k218, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 161 120) (close _V0loop_k219) (bruijn ##x.941 0 0) (bruijn port 19 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k219, env)}),
      env->vars[0],
      VGetArg(env, 19, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k218, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k212(VEnv * env) {
 V_GC_CHECK(_V0loop_k212, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.942 0 0) ((bruijn error 160 141) (close _V0loop_k213) (##string ##string.2590)) ((bruijn car 160 37) (close _V0loop_k218) (bruijn args 14 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k213, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k218, env)}),
      VGetArg(env, 14, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k212, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k228(VEnv * env) {
 V_GC_CHECK(_V0loop_k228, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 10 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k228, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k227(VEnv * env) {
 V_GC_CHECK(_V0loop_k227, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k228) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k228, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k227, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k226(VEnv * env) {
 V_GC_CHECK(_V0loop_k226, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k227) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k227, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k226, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k225(VEnv * env) {
 V_GC_CHECK(_V0loop_k225, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k226) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k226, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k225, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k224(VEnv * env) {
 V_GC_CHECK(_V0loop_k224, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 162 37) (close _V0loop_k225) (bruijn args 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k225, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k224, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k232(VEnv * env) {
 V_GC_CHECK(_V0loop_k232, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 9 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 9, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k232, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k231(VEnv * env) {
 V_GC_CHECK(_V0loop_k231, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k232) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k232, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k231, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k230(VEnv * env) {
 V_GC_CHECK(_V0loop_k230, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k231) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k231, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k230, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k229(VEnv * env) {
 V_GC_CHECK(_V0loop_k229, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 162 121) (close _V0loop_k230) (bruijn ##x.960 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k230, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k229, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k223(VEnv * env) {
 V_GC_CHECK(_V0loop_k223, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 161 141) (close _V0loop_k224) (##string ##string.2590)) ((bruijn car 161 37) (close _V0loop_k229) (bruijn args 15 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k224, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k229, env)}),
      VGetArg(env, 15, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k223, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k234(VEnv * env) {
 V_GC_CHECK(_V0loop_k234, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 162 141) (bruijn ##k.910 6 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VGetArg(env, 6, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k234, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k233(VEnv * env) {
 V_GC_CHECK(_V0loop_k233, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 161 86) (close _V0loop_k234) (bruijn fmt 19 2) (bruijn i 15 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k234, env)}),
      VGetArg(env, 19, 2),
      VGetArg(env, 15, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k233, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k241(VEnv * env) {
 V_GC_CHECK(_V0loop_k241, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k241, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k240(VEnv * env) {
 V_GC_CHECK(_V0loop_k240, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k241) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k241, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k240, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k239(VEnv * env) {
 V_GC_CHECK(_V0loop_k239, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k240) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k240, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k239, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k238(VEnv * env) {
 V_GC_CHECK(_V0loop_k238, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k239) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k239, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k238, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k237(VEnv * env) {
 V_GC_CHECK(_V0loop_k237, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 163 37) (close _V0loop_k238) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k238, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k237, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k245(VEnv * env) {
 V_GC_CHECK(_V0loop_k245, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 10 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k245, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k244(VEnv * env) {
 V_GC_CHECK(_V0loop_k244, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k245) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k245, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k244, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k243(VEnv * env) {
 V_GC_CHECK(_V0loop_k243, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k244) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k244, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k243, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k242(VEnv * env) {
 V_GC_CHECK(_V0loop_k242, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k243) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k243, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k242, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k236(VEnv * env) {
 V_GC_CHECK(_V0loop_k236, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 162 141) (close _V0loop_k237) (##string ##string.2590)) ((bruijn car 162 37) (close _V0loop_k242) (bruijn args 16 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k237, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k242, env)}),
      VGetArg(env, 16, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k236, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k247(VEnv * env) {
 V_GC_CHECK(_V0loop_k247, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 163 141) (bruijn ##k.910 7 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VGetArg(env, 7, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k247, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k246(VEnv * env) {
 V_GC_CHECK(_V0loop_k246, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 162 86) (close _V0loop_k247) (bruijn fmt 20 2) (bruijn i 16 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k247, env)}),
      VGetArg(env, 20, 2),
      VGetArg(env, 16, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k246, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k235(VEnv * env) {
 V_GC_CHECK(_V0loop_k235, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.972 0 0) ((bruijn null? 161 1) (close _V0loop_k236) (bruijn args 15 2)) ((bruijn + 161 28) (close _V0loop_k246) (bruijn i 15 1) 2))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k236, env)}),
      VGetArg(env, 15, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k246, env)}),
      VGetArg(env, 15, 1),
      VEncodeInt(2l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k235, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k222(VEnv * env) {
 V_GC_CHECK(_V0loop_k222, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.970 0 0) (if (bruijn ##x.970 0 0) ((bruijn null? 160 1) (close _V0loop_k223) (bruijn args 14 2)) ((bruijn + 160 28) (close _V0loop_k233) (bruijn i 14 1) 2)) ((bruijn eqv? 160 16) (close _V0loop_k235) (bruijn ##x.1 4 1) (quote #\S)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k223, env)}),
      VGetArg(env, 14, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k233, env)}),
      VGetArg(env, 14, 1),
      VEncodeInt(2l)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k235, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('S')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k222, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k254(VEnv * env) {
 V_GC_CHECK(_V0loop_k254, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 10 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k254, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k253(VEnv * env) {
 V_GC_CHECK(_V0loop_k253, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k254) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k254, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k253, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k252(VEnv * env) {
 V_GC_CHECK(_V0loop_k252, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k253) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k253, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k252, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k251(VEnv * env) {
 V_GC_CHECK(_V0loop_k251, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 163 120) (close _V0loop_k252) (bruijn ##x.941 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k252, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k251, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k250(VEnv * env) {
 V_GC_CHECK(_V0loop_k250, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 162 37) (close _V0loop_k251) (bruijn args 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k251, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k250, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k258(VEnv * env) {
 V_GC_CHECK(_V0loop_k258, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 9 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 9, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k258, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k257(VEnv * env) {
 V_GC_CHECK(_V0loop_k257, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k258) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k258, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k257, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k256(VEnv * env) {
 V_GC_CHECK(_V0loop_k256, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k257) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k257, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k256, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k255(VEnv * env) {
 V_GC_CHECK(_V0loop_k255, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 162 120) (close _V0loop_k256) (bruijn ##x.941 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k256, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k255, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k249(VEnv * env) {
 V_GC_CHECK(_V0loop_k249, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.942 0 0) ((bruijn error 161 141) (close _V0loop_k250) (##string ##string.2590)) ((bruijn car 161 37) (close _V0loop_k255) (bruijn args 15 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k250, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k255, env)}),
      VGetArg(env, 15, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k249, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k265(VEnv * env) {
 V_GC_CHECK(_V0loop_k265, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k265, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k264(VEnv * env) {
 V_GC_CHECK(_V0loop_k264, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k265) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k265, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k264, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k263(VEnv * env) {
 V_GC_CHECK(_V0loop_k263, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k264) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k264, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k263, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k262(VEnv * env) {
 V_GC_CHECK(_V0loop_k262, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k263) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k263, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k262, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k261(VEnv * env) {
 V_GC_CHECK(_V0loop_k261, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 163 37) (close _V0loop_k262) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k262, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k261, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k269(VEnv * env) {
 V_GC_CHECK(_V0loop_k269, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 10 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k269, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k268(VEnv * env) {
 V_GC_CHECK(_V0loop_k268, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k269) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k269, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k268, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k267(VEnv * env) {
 V_GC_CHECK(_V0loop_k267, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k268) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k268, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k267, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k266(VEnv * env) {
 V_GC_CHECK(_V0loop_k266, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k267) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k267, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k266, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k260(VEnv * env) {
 V_GC_CHECK(_V0loop_k260, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 162 141) (close _V0loop_k261) (##string ##string.2590)) ((bruijn car 162 37) (close _V0loop_k266) (bruijn args 16 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k261, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k266, env)}),
      VGetArg(env, 16, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k260, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k271(VEnv * env) {
 V_GC_CHECK(_V0loop_k271, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 163 141) (bruijn ##k.910 7 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VGetArg(env, 7, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k271, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k270(VEnv * env) {
 V_GC_CHECK(_V0loop_k270, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 162 86) (close _V0loop_k271) (bruijn fmt 20 2) (bruijn i 16 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k271, env)}),
      VGetArg(env, 20, 2),
      VGetArg(env, 16, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k270, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k278(VEnv * env) {
 V_GC_CHECK(_V0loop_k278, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 23 1) (bruijn ##k.910 12 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VGetArg(env, 12, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k278, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k277(VEnv * env) {
 V_GC_CHECK(_V0loop_k277, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 167 38) (close _V0loop_k278) (bruijn args 21 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 167, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k278, env)}),
      VGetArg(env, 21, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k277, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k276(VEnv * env) {
 V_GC_CHECK(_V0loop_k276, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 166 28) (close _V0loop_k277) (bruijn i 20 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k277, env)}),
      VGetArg(env, 20, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k276, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k275(VEnv * env) {
 V_GC_CHECK(_V0loop_k275, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 165 121) (close _V0loop_k276) (bruijn ##x.960 0 0) (bruijn port 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k276, env)}),
      env->vars[0],
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k275, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k274(VEnv * env) {
 V_GC_CHECK(_V0loop_k274, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 164 37) (close _V0loop_k275) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k275, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k274, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k282(VEnv * env) {
 V_GC_CHECK(_V0loop_k282, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k282, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k281(VEnv * env) {
 V_GC_CHECK(_V0loop_k281, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k282) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k282, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k281, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k280(VEnv * env) {
 V_GC_CHECK(_V0loop_k280, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k281) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k281, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k280, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k279(VEnv * env) {
 V_GC_CHECK(_V0loop_k279, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k280) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k280, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k279, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k273(VEnv * env) {
 V_GC_CHECK(_V0loop_k273, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 163 141) (close _V0loop_k274) (##string ##string.2590)) ((bruijn car 163 37) (close _V0loop_k279) (bruijn args 17 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k274, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k279, env)}),
      VGetArg(env, 17, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k273, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k284(VEnv * env) {
 V_GC_CHECK(_V0loop_k284, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 164 141) (bruijn ##k.910 8 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 141)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k284, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k283(VEnv * env) {
 V_GC_CHECK(_V0loop_k283, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 163 86) (close _V0loop_k284) (bruijn fmt 21 2) (bruijn i 17 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k284, env)}),
      VGetArg(env, 21, 2),
      VGetArg(env, 17, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k283, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k272(VEnv * env) {
 V_GC_CHECK(_V0loop_k272, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.972 0 0) ((bruijn null? 162 1) (close _V0loop_k273) (bruijn args 16 2)) ((bruijn + 162 28) (close _V0loop_k283) (bruijn i 16 1) 2))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k273, env)}),
      VGetArg(env, 16, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k283, env)}),
      VGetArg(env, 16, 1),
      VEncodeInt(2l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k272, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k259(VEnv * env) {
 V_GC_CHECK(_V0loop_k259, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.970 0 0) (if (bruijn ##x.970 0 0) ((bruijn null? 161 1) (close _V0loop_k260) (bruijn args 15 2)) ((bruijn + 161 28) (close _V0loop_k270) (bruijn i 15 1) 2)) ((bruijn eqv? 161 16) (close _V0loop_k272) (bruijn ##x.1 5 1) (quote #\S)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k260, env)}),
      VGetArg(env, 15, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k270, env)}),
      VGetArg(env, 15, 1),
      VEncodeInt(2l)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k272, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('S')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k259, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k248(VEnv * env) {
 V_GC_CHECK(_V0loop_k248, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.975 0 0) ((bruijn null? 160 1) (close _V0loop_k249) (bruijn args 14 2)) ((bruijn eqv? 160 16) (close _V0loop_k259) (bruijn ##x.1 4 1) (quote #\s)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k249, env)}),
      VGetArg(env, 14, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k259, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('s')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k248, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k211(VEnv * env) {
 V_GC_CHECK(_V0loop_k211, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.973 0 0) (if (bruijn ##x.973 0 0) ((bruijn null? 159 1) (close _V0loop_k212) (bruijn args 13 2)) ((bruijn eqv? 159 16) (close _V0loop_k222) (bruijn ##x.1 3 1) (quote #\s))) ((bruijn eqv? 159 16) (close _V0loop_k248) (bruijn ##x.1 3 1) (quote #\A)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k212, env)}),
      VGetArg(env, 13, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k222, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('s')
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k248, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('A')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k211, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k287(VEnv * env) {
 V_GC_CHECK(_V0loop_k287, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 16 1) (bruijn ##k.910 5 0) (bruijn ##x.927 0 0) (bruijn args 15 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VGetArg(env, 5, 0),
      env->vars[0],
      VGetArg(env, 15, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k287, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k286(VEnv * env) {
 V_GC_CHECK(_V0loop_k286, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 160 28) (close _V0loop_k287) (bruijn i 14 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k287, env)}),
      VGetArg(env, 14, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k286, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k294(VEnv * env) {
 V_GC_CHECK(_V0loop_k294, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 10 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k294, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k293(VEnv * env) {
 V_GC_CHECK(_V0loop_k293, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k294) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k294, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k293, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k292(VEnv * env) {
 V_GC_CHECK(_V0loop_k292, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k293) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k293, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k292, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k291(VEnv * env) {
 V_GC_CHECK(_V0loop_k291, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 163 120) (close _V0loop_k292) (bruijn ##x.941 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k292, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k291, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k290(VEnv * env) {
 V_GC_CHECK(_V0loop_k290, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 162 37) (close _V0loop_k291) (bruijn args 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k291, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k290, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k298(VEnv * env) {
 V_GC_CHECK(_V0loop_k298, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 9 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 9, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k298, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k297(VEnv * env) {
 V_GC_CHECK(_V0loop_k297, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k298) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k298, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k297, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k296(VEnv * env) {
 V_GC_CHECK(_V0loop_k296, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k297) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k297, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k296, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k295(VEnv * env) {
 V_GC_CHECK(_V0loop_k295, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 162 120) (close _V0loop_k296) (bruijn ##x.941 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k296, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k295, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k289(VEnv * env) {
 V_GC_CHECK(_V0loop_k289, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.942 0 0) ((bruijn error 161 141) (close _V0loop_k290) (##string ##string.2590)) ((bruijn car 161 37) (close _V0loop_k295) (bruijn args 15 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k290, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k295, env)}),
      VGetArg(env, 15, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k289, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k305(VEnv * env) {
 V_GC_CHECK(_V0loop_k305, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k305, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k304(VEnv * env) {
 V_GC_CHECK(_V0loop_k304, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k305) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k305, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k304, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k303(VEnv * env) {
 V_GC_CHECK(_V0loop_k303, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k304) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k304, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k303, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k302(VEnv * env) {
 V_GC_CHECK(_V0loop_k302, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k303) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k303, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k302, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k301(VEnv * env) {
 V_GC_CHECK(_V0loop_k301, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 163 37) (close _V0loop_k302) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k302, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k301, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k309(VEnv * env) {
 V_GC_CHECK(_V0loop_k309, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 10 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k309, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k308(VEnv * env) {
 V_GC_CHECK(_V0loop_k308, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k309) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k309, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k308, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k307(VEnv * env) {
 V_GC_CHECK(_V0loop_k307, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k308) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k308, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k307, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k306(VEnv * env) {
 V_GC_CHECK(_V0loop_k306, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k307) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k307, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k306, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k300(VEnv * env) {
 V_GC_CHECK(_V0loop_k300, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 162 141) (close _V0loop_k301) (##string ##string.2590)) ((bruijn car 162 37) (close _V0loop_k306) (bruijn args 16 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k301, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k306, env)}),
      VGetArg(env, 16, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k300, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k311(VEnv * env) {
 V_GC_CHECK(_V0loop_k311, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 163 141) (bruijn ##k.910 7 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VGetArg(env, 7, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k311, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k310(VEnv * env) {
 V_GC_CHECK(_V0loop_k310, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 162 86) (close _V0loop_k311) (bruijn fmt 20 2) (bruijn i 16 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k311, env)}),
      VGetArg(env, 20, 2),
      VGetArg(env, 16, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k310, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k318(VEnv * env) {
 V_GC_CHECK(_V0loop_k318, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 23 1) (bruijn ##k.910 12 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VGetArg(env, 12, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k318, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k317(VEnv * env) {
 V_GC_CHECK(_V0loop_k317, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 167 38) (close _V0loop_k318) (bruijn args 21 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 167, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k318, env)}),
      VGetArg(env, 21, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k317, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k316(VEnv * env) {
 V_GC_CHECK(_V0loop_k316, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 166 28) (close _V0loop_k317) (bruijn i 20 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k317, env)}),
      VGetArg(env, 20, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k316, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k315(VEnv * env) {
 V_GC_CHECK(_V0loop_k315, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 165 121) (close _V0loop_k316) (bruijn ##x.960 0 0) (bruijn port 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k316, env)}),
      env->vars[0],
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k315, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k314(VEnv * env) {
 V_GC_CHECK(_V0loop_k314, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 164 37) (close _V0loop_k315) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k315, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k314, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k322(VEnv * env) {
 V_GC_CHECK(_V0loop_k322, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k322, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k321(VEnv * env) {
 V_GC_CHECK(_V0loop_k321, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k322) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k322, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k321, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k320(VEnv * env) {
 V_GC_CHECK(_V0loop_k320, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k321) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k321, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k320, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k319(VEnv * env) {
 V_GC_CHECK(_V0loop_k319, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k320) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k320, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k319, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k313(VEnv * env) {
 V_GC_CHECK(_V0loop_k313, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 163 141) (close _V0loop_k314) (##string ##string.2590)) ((bruijn car 163 37) (close _V0loop_k319) (bruijn args 17 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k314, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k319, env)}),
      VGetArg(env, 17, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k313, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k324(VEnv * env) {
 V_GC_CHECK(_V0loop_k324, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 164 141) (bruijn ##k.910 8 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 141)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k324, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k323(VEnv * env) {
 V_GC_CHECK(_V0loop_k323, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 163 86) (close _V0loop_k324) (bruijn fmt 21 2) (bruijn i 17 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k324, env)}),
      VGetArg(env, 21, 2),
      VGetArg(env, 17, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k323, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k312(VEnv * env) {
 V_GC_CHECK(_V0loop_k312, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.972 0 0) ((bruijn null? 162 1) (close _V0loop_k313) (bruijn args 16 2)) ((bruijn + 162 28) (close _V0loop_k323) (bruijn i 16 1) 2))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k313, env)}),
      VGetArg(env, 16, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k323, env)}),
      VGetArg(env, 16, 1),
      VEncodeInt(2l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k312, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k299(VEnv * env) {
 V_GC_CHECK(_V0loop_k299, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.970 0 0) (if (bruijn ##x.970 0 0) ((bruijn null? 161 1) (close _V0loop_k300) (bruijn args 15 2)) ((bruijn + 161 28) (close _V0loop_k310) (bruijn i 15 1) 2)) ((bruijn eqv? 161 16) (close _V0loop_k312) (bruijn ##x.1 5 1) (quote #\S)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k300, env)}),
      VGetArg(env, 15, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k310, env)}),
      VGetArg(env, 15, 1),
      VEncodeInt(2l)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k312, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('S')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k299, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k331(VEnv * env) {
 V_GC_CHECK(_V0loop_k331, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 11 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k331, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k330(VEnv * env) {
 V_GC_CHECK(_V0loop_k330, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k331) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k331, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k330, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k329(VEnv * env) {
 V_GC_CHECK(_V0loop_k329, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k330) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k330, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k329, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k328(VEnv * env) {
 V_GC_CHECK(_V0loop_k328, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 164 120) (close _V0loop_k329) (bruijn ##x.941 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k329, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k328, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k327(VEnv * env) {
 V_GC_CHECK(_V0loop_k327, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 163 37) (close _V0loop_k328) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k328, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k327, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k335(VEnv * env) {
 V_GC_CHECK(_V0loop_k335, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 10 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k335, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k334(VEnv * env) {
 V_GC_CHECK(_V0loop_k334, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k335) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k335, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k334, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k333(VEnv * env) {
 V_GC_CHECK(_V0loop_k333, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k334) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k334, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k333, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k332(VEnv * env) {
 V_GC_CHECK(_V0loop_k332, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 163 120) (close _V0loop_k333) (bruijn ##x.941 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k333, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k332, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k326(VEnv * env) {
 V_GC_CHECK(_V0loop_k326, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.942 0 0) ((bruijn error 162 141) (close _V0loop_k327) (##string ##string.2590)) ((bruijn car 162 37) (close _V0loop_k332) (bruijn args 16 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k327, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k332, env)}),
      VGetArg(env, 16, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k326, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k342(VEnv * env) {
 V_GC_CHECK(_V0loop_k342, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 23 1) (bruijn ##k.910 12 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VGetArg(env, 12, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k342, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k341(VEnv * env) {
 V_GC_CHECK(_V0loop_k341, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 167 38) (close _V0loop_k342) (bruijn args 21 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 167, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k342, env)}),
      VGetArg(env, 21, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k341, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k340(VEnv * env) {
 V_GC_CHECK(_V0loop_k340, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 166 28) (close _V0loop_k341) (bruijn i 20 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k341, env)}),
      VGetArg(env, 20, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k340, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k339(VEnv * env) {
 V_GC_CHECK(_V0loop_k339, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 165 121) (close _V0loop_k340) (bruijn ##x.960 0 0) (bruijn port 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k340, env)}),
      env->vars[0],
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k339, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k338(VEnv * env) {
 V_GC_CHECK(_V0loop_k338, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 164 37) (close _V0loop_k339) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k339, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k338, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k346(VEnv * env) {
 V_GC_CHECK(_V0loop_k346, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k346, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k345(VEnv * env) {
 V_GC_CHECK(_V0loop_k345, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k346) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k346, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k345, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k344(VEnv * env) {
 V_GC_CHECK(_V0loop_k344, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k345) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k345, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k344, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k343(VEnv * env) {
 V_GC_CHECK(_V0loop_k343, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k344) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k344, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k343, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k337(VEnv * env) {
 V_GC_CHECK(_V0loop_k337, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 163 141) (close _V0loop_k338) (##string ##string.2590)) ((bruijn car 163 37) (close _V0loop_k343) (bruijn args 17 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k338, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k343, env)}),
      VGetArg(env, 17, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k337, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k348(VEnv * env) {
 V_GC_CHECK(_V0loop_k348, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 164 141) (bruijn ##k.910 8 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 141)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k348, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k347(VEnv * env) {
 V_GC_CHECK(_V0loop_k347, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 163 86) (close _V0loop_k348) (bruijn fmt 21 2) (bruijn i 17 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k348, env)}),
      VGetArg(env, 21, 2),
      VGetArg(env, 17, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k347, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k355(VEnv * env) {
 V_GC_CHECK(_V0loop_k355, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 24 1) (bruijn ##k.910 13 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VGetArg(env, 13, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k355, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k354(VEnv * env) {
 V_GC_CHECK(_V0loop_k354, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 168 38) (close _V0loop_k355) (bruijn args 22 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 168, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k355, env)}),
      VGetArg(env, 22, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k354, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k353(VEnv * env) {
 V_GC_CHECK(_V0loop_k353, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 167 28) (close _V0loop_k354) (bruijn i 21 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 167, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k354, env)}),
      VGetArg(env, 21, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k353, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k352(VEnv * env) {
 V_GC_CHECK(_V0loop_k352, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 166 121) (close _V0loop_k353) (bruijn ##x.960 0 0) (bruijn port 24 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k353, env)}),
      env->vars[0],
      VGetArg(env, 24, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k352, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k351(VEnv * env) {
 V_GC_CHECK(_V0loop_k351, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 165 37) (close _V0loop_k352) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k352, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k351, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k359(VEnv * env) {
 V_GC_CHECK(_V0loop_k359, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 23 1) (bruijn ##k.910 12 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VGetArg(env, 12, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k359, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k358(VEnv * env) {
 V_GC_CHECK(_V0loop_k358, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 167 38) (close _V0loop_k359) (bruijn args 21 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 167, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k359, env)}),
      VGetArg(env, 21, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k358, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k357(VEnv * env) {
 V_GC_CHECK(_V0loop_k357, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 166 28) (close _V0loop_k358) (bruijn i 20 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k358, env)}),
      VGetArg(env, 20, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k357, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k356(VEnv * env) {
 V_GC_CHECK(_V0loop_k356, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 165 121) (close _V0loop_k357) (bruijn ##x.960 0 0) (bruijn port 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k357, env)}),
      env->vars[0],
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k356, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k350(VEnv * env) {
 V_GC_CHECK(_V0loop_k350, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 164 141) (close _V0loop_k351) (##string ##string.2590)) ((bruijn car 164 37) (close _V0loop_k356) (bruijn args 18 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k351, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k356, env)}),
      VGetArg(env, 18, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k350, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k361(VEnv * env) {
 V_GC_CHECK(_V0loop_k361, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 165 141) (bruijn ##k.910 9 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 141)),
      VGetArg(env, 9, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k361, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k360(VEnv * env) {
 V_GC_CHECK(_V0loop_k360, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 164 86) (close _V0loop_k361) (bruijn fmt 22 2) (bruijn i 18 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k361, env)}),
      VGetArg(env, 22, 2),
      VGetArg(env, 18, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k360, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k349(VEnv * env) {
 V_GC_CHECK(_V0loop_k349, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.972 0 0) ((bruijn null? 163 1) (close _V0loop_k350) (bruijn args 17 2)) ((bruijn + 163 28) (close _V0loop_k360) (bruijn i 17 1) 2))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k350, env)}),
      VGetArg(env, 17, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k360, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k349, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k336(VEnv * env) {
 V_GC_CHECK(_V0loop_k336, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.970 0 0) (if (bruijn ##x.970 0 0) ((bruijn null? 162 1) (close _V0loop_k337) (bruijn args 16 2)) ((bruijn + 162 28) (close _V0loop_k347) (bruijn i 16 1) 2)) ((bruijn eqv? 162 16) (close _V0loop_k349) (bruijn ##x.1 6 1) (quote #\S)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k337, env)}),
      VGetArg(env, 16, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k347, env)}),
      VGetArg(env, 16, 1),
      VEncodeInt(2l)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k349, env)}),
      VGetArg(env, 6, 1),
      VEncodeChar('S')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k336, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k325(VEnv * env) {
 V_GC_CHECK(_V0loop_k325, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.975 0 0) ((bruijn null? 161 1) (close _V0loop_k326) (bruijn args 15 2)) ((bruijn eqv? 161 16) (close _V0loop_k336) (bruijn ##x.1 5 1) (quote #\s)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k326, env)}),
      VGetArg(env, 15, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k336, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('s')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k325, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k288(VEnv * env) {
 V_GC_CHECK(_V0loop_k288, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.973 0 0) (if (bruijn ##x.973 0 0) ((bruijn null? 160 1) (close _V0loop_k289) (bruijn args 14 2)) ((bruijn eqv? 160 16) (close _V0loop_k299) (bruijn ##x.1 4 1) (quote #\s))) ((bruijn eqv? 160 16) (close _V0loop_k325) (bruijn ##x.1 4 1) (quote #\A)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k289, env)}),
      VGetArg(env, 14, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k299, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('s')
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k325, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('A')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k288, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k285(VEnv * env) {
 V_GC_CHECK(_V0loop_k285, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.978 0 0) (##sys.display-word (close _V0loop_k286) #\newline (bruijn port 17 1)) ((bruijn eqv? 159 16) (close _V0loop_k288) (bruijn ##x.1 3 1) (quote #\a)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k286, env)}),
      VEncodeChar('\n'),
      VGetArg(env, 17, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k288, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('a')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k285, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k208(VEnv * env) {
 V_GC_CHECK(_V0loop_k208, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.976 0 0) (if (bruijn ##x.976 0 0) (##sys.display-word (close _V0loop_k209) #\newline (bruijn port 16 1)) ((bruijn eqv? 158 16) (close _V0loop_k211) (bruijn ##x.1 2 1) (quote #\a))) ((bruijn eqv? 158 16) (close _V0loop_k285) (bruijn ##x.1 2 1) (quote #\N)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k209, env)}),
      VEncodeChar('\n'),
      VGetArg(env, 16, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 158, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k211, env)}),
      env->up->up->vars[1],
      VEncodeChar('a')
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 158, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k285, env)}),
      env->up->up->vars[1],
      VEncodeChar('N')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k208, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k205(VEnv * env) {
 V_GC_CHECK(_V0loop_k205, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.912 0 0) (##sys.display-word (close _V0loop_k206) #\~ (bruijn port 15 1)) ((bruijn eqv? 157 16) (close _V0loop_k208) (bruijn ##x.1 1 1) (quote #\n)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k206, env)}),
      VEncodeChar('~'),
      VGetArg(env, 15, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 157, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k208, env)}),
      env->up->vars[1],
      VEncodeChar('n')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k205, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda35(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda35, env) {
  // ((bruijn eqv? 156 16) (close _V0loop_k205) (bruijn ##x.1 0 1) (quote #\~))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 156, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k205, env)}),
      env->vars[1],
      VEncodeChar('~')
    );
 }
}
static void _V0loop_k204(VEnv * env) {
 V_GC_CHECK(_V0loop_k204, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda35) (bruijn ##k.902 6 0) (bruijn ##x.979 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda35, env)},
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k204, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k203(VEnv * env) {
 V_GC_CHECK(_V0loop_k203, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-ref 154 89) (close _V0loop_k204) (bruijn fmt 12 2) (bruijn ##x.980 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 154, 89)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k204, env)}),
      VGetArg(env, 12, 2),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k203, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k202(VEnv * env) {
 V_GC_CHECK(_V0loop_k202, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 153 28) (close _V0loop_k203) (bruijn i 7 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 153, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k203, env)}),
      VGetArg(env, 7, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k202, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k366(VEnv * env) {
 V_GC_CHECK(_V0loop_k366, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 13 1) (bruijn ##k.910 3 0) (bruijn ##x.918 0 0) (bruijn args 12 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->up->up->vars[0],
      env->vars[0],
      VGetArg(env, 12, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k366, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k365(VEnv * env) {
 V_GC_CHECK(_V0loop_k365, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 157 28) (close _V0loop_k366) (bruijn i 11 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 157, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k366, env)}),
      VGetArg(env, 11, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k365, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k369(VEnv * env) {
 V_GC_CHECK(_V0loop_k369, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 14 1) (bruijn ##k.910 4 0) (bruijn ##x.927 0 0) (bruijn args 13 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VGetArg(env, 4, 0),
      env->vars[0],
      VGetArg(env, 13, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k369, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k368(VEnv * env) {
 V_GC_CHECK(_V0loop_k368, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 158 28) (close _V0loop_k369) (bruijn i 12 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 158, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k369, env)}),
      VGetArg(env, 12, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k368, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k376(VEnv * env) {
 V_GC_CHECK(_V0loop_k376, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 19 1) (bruijn ##k.910 9 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VGetArg(env, 9, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k376, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k375(VEnv * env) {
 V_GC_CHECK(_V0loop_k375, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 163 38) (close _V0loop_k376) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k376, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k375, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k374(VEnv * env) {
 V_GC_CHECK(_V0loop_k374, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 162 28) (close _V0loop_k375) (bruijn i 16 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k375, env)}),
      VGetArg(env, 16, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k374, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k373(VEnv * env) {
 V_GC_CHECK(_V0loop_k373, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 161 120) (close _V0loop_k374) (bruijn ##x.941 0 0) (bruijn port 19 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k374, env)}),
      env->vars[0],
      VGetArg(env, 19, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k373, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k372(VEnv * env) {
 V_GC_CHECK(_V0loop_k372, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 160 37) (close _V0loop_k373) (bruijn args 14 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k373, env)}),
      VGetArg(env, 14, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k372, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k380(VEnv * env) {
 V_GC_CHECK(_V0loop_k380, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 18 1) (bruijn ##k.910 8 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VGetArg(env, 8, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k380, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k379(VEnv * env) {
 V_GC_CHECK(_V0loop_k379, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 162 38) (close _V0loop_k380) (bruijn args 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k380, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k379, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k378(VEnv * env) {
 V_GC_CHECK(_V0loop_k378, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 161 28) (close _V0loop_k379) (bruijn i 15 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k379, env)}),
      VGetArg(env, 15, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k378, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k377(VEnv * env) {
 V_GC_CHECK(_V0loop_k377, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 160 120) (close _V0loop_k378) (bruijn ##x.941 0 0) (bruijn port 18 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k378, env)}),
      env->vars[0],
      VGetArg(env, 18, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k377, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k371(VEnv * env) {
 V_GC_CHECK(_V0loop_k371, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.942 0 0) ((bruijn error 159 141) (close _V0loop_k372) (##string ##string.2590)) ((bruijn car 159 37) (close _V0loop_k377) (bruijn args 13 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k372, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k377, env)}),
      VGetArg(env, 13, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k371, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k387(VEnv * env) {
 V_GC_CHECK(_V0loop_k387, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 10 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k387, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k386(VEnv * env) {
 V_GC_CHECK(_V0loop_k386, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k387) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k387, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k386, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k385(VEnv * env) {
 V_GC_CHECK(_V0loop_k385, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k386) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k386, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k385, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k384(VEnv * env) {
 V_GC_CHECK(_V0loop_k384, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 162 121) (close _V0loop_k385) (bruijn ##x.960 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k385, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k384, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k383(VEnv * env) {
 V_GC_CHECK(_V0loop_k383, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 161 37) (close _V0loop_k384) (bruijn args 15 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k384, env)}),
      VGetArg(env, 15, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k383, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k391(VEnv * env) {
 V_GC_CHECK(_V0loop_k391, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 19 1) (bruijn ##k.910 9 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VGetArg(env, 9, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k391, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k390(VEnv * env) {
 V_GC_CHECK(_V0loop_k390, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 163 38) (close _V0loop_k391) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k391, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k390, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k389(VEnv * env) {
 V_GC_CHECK(_V0loop_k389, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 162 28) (close _V0loop_k390) (bruijn i 16 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k390, env)}),
      VGetArg(env, 16, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k389, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k388(VEnv * env) {
 V_GC_CHECK(_V0loop_k388, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 161 121) (close _V0loop_k389) (bruijn ##x.960 0 0) (bruijn port 19 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k389, env)}),
      env->vars[0],
      VGetArg(env, 19, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k388, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k382(VEnv * env) {
 V_GC_CHECK(_V0loop_k382, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 160 141) (close _V0loop_k383) (##string ##string.2590)) ((bruijn car 160 37) (close _V0loop_k388) (bruijn args 14 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k383, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k388, env)}),
      VGetArg(env, 14, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k382, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k393(VEnv * env) {
 V_GC_CHECK(_V0loop_k393, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 161 141) (bruijn ##k.910 6 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 141)),
      VGetArg(env, 6, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k393, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k392(VEnv * env) {
 V_GC_CHECK(_V0loop_k392, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 160 86) (close _V0loop_k393) (bruijn fmt 18 2) (bruijn i 14 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k393, env)}),
      VGetArg(env, 18, 2),
      VGetArg(env, 14, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k392, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k400(VEnv * env) {
 V_GC_CHECK(_V0loop_k400, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k400, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k399(VEnv * env) {
 V_GC_CHECK(_V0loop_k399, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k400) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k400, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k399, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k398(VEnv * env) {
 V_GC_CHECK(_V0loop_k398, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k399) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k399, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k398, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k397(VEnv * env) {
 V_GC_CHECK(_V0loop_k397, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k398) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k398, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k397, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k396(VEnv * env) {
 V_GC_CHECK(_V0loop_k396, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 162 37) (close _V0loop_k397) (bruijn args 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k397, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k396, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k404(VEnv * env) {
 V_GC_CHECK(_V0loop_k404, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 10 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k404, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k403(VEnv * env) {
 V_GC_CHECK(_V0loop_k403, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k404) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k404, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k403, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k402(VEnv * env) {
 V_GC_CHECK(_V0loop_k402, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k403) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k403, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k402, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k401(VEnv * env) {
 V_GC_CHECK(_V0loop_k401, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 162 121) (close _V0loop_k402) (bruijn ##x.960 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k402, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k401, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k395(VEnv * env) {
 V_GC_CHECK(_V0loop_k395, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 161 141) (close _V0loop_k396) (##string ##string.2590)) ((bruijn car 161 37) (close _V0loop_k401) (bruijn args 15 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k396, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k401, env)}),
      VGetArg(env, 15, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k395, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k406(VEnv * env) {
 V_GC_CHECK(_V0loop_k406, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 162 141) (bruijn ##k.910 7 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VGetArg(env, 7, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k406, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k405(VEnv * env) {
 V_GC_CHECK(_V0loop_k405, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 161 86) (close _V0loop_k406) (bruijn fmt 19 2) (bruijn i 15 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k406, env)}),
      VGetArg(env, 19, 2),
      VGetArg(env, 15, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k405, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k394(VEnv * env) {
 V_GC_CHECK(_V0loop_k394, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.972 0 0) ((bruijn null? 160 1) (close _V0loop_k395) (bruijn args 14 2)) ((bruijn + 160 28) (close _V0loop_k405) (bruijn i 14 1) 2))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k395, env)}),
      VGetArg(env, 14, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k405, env)}),
      VGetArg(env, 14, 1),
      VEncodeInt(2l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k394, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k381(VEnv * env) {
 V_GC_CHECK(_V0loop_k381, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.970 0 0) (if (bruijn ##x.970 0 0) ((bruijn null? 159 1) (close _V0loop_k382) (bruijn args 13 2)) ((bruijn + 159 28) (close _V0loop_k392) (bruijn i 13 1) 2)) ((bruijn eqv? 159 16) (close _V0loop_k394) (bruijn ##x.1 4 1) (quote #\S)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k382, env)}),
      VGetArg(env, 13, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k392, env)}),
      VGetArg(env, 13, 1),
      VEncodeInt(2l)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k394, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('S')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k381, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k413(VEnv * env) {
 V_GC_CHECK(_V0loop_k413, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 10 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k413, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k412(VEnv * env) {
 V_GC_CHECK(_V0loop_k412, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k413) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k413, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k412, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k411(VEnv * env) {
 V_GC_CHECK(_V0loop_k411, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k412) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k412, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k411, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k410(VEnv * env) {
 V_GC_CHECK(_V0loop_k410, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 162 120) (close _V0loop_k411) (bruijn ##x.941 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k411, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k410, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k409(VEnv * env) {
 V_GC_CHECK(_V0loop_k409, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 161 37) (close _V0loop_k410) (bruijn args 15 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k410, env)}),
      VGetArg(env, 15, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k409, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k417(VEnv * env) {
 V_GC_CHECK(_V0loop_k417, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 19 1) (bruijn ##k.910 9 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VGetArg(env, 9, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k417, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k416(VEnv * env) {
 V_GC_CHECK(_V0loop_k416, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 163 38) (close _V0loop_k417) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k417, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k416, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k415(VEnv * env) {
 V_GC_CHECK(_V0loop_k415, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 162 28) (close _V0loop_k416) (bruijn i 16 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k416, env)}),
      VGetArg(env, 16, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k415, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k414(VEnv * env) {
 V_GC_CHECK(_V0loop_k414, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 161 120) (close _V0loop_k415) (bruijn ##x.941 0 0) (bruijn port 19 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k415, env)}),
      env->vars[0],
      VGetArg(env, 19, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k414, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k408(VEnv * env) {
 V_GC_CHECK(_V0loop_k408, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.942 0 0) ((bruijn error 160 141) (close _V0loop_k409) (##string ##string.2590)) ((bruijn car 160 37) (close _V0loop_k414) (bruijn args 14 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k409, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k414, env)}),
      VGetArg(env, 14, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k408, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k424(VEnv * env) {
 V_GC_CHECK(_V0loop_k424, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k424, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k423(VEnv * env) {
 V_GC_CHECK(_V0loop_k423, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k424) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k424, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k423, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k422(VEnv * env) {
 V_GC_CHECK(_V0loop_k422, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k423) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k423, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k422, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k421(VEnv * env) {
 V_GC_CHECK(_V0loop_k421, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k422) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k422, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k421, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k420(VEnv * env) {
 V_GC_CHECK(_V0loop_k420, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 162 37) (close _V0loop_k421) (bruijn args 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k421, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k420, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k428(VEnv * env) {
 V_GC_CHECK(_V0loop_k428, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 10 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k428, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k427(VEnv * env) {
 V_GC_CHECK(_V0loop_k427, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k428) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k428, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k427, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k426(VEnv * env) {
 V_GC_CHECK(_V0loop_k426, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k427) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k427, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k426, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k425(VEnv * env) {
 V_GC_CHECK(_V0loop_k425, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 162 121) (close _V0loop_k426) (bruijn ##x.960 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k426, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k425, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k419(VEnv * env) {
 V_GC_CHECK(_V0loop_k419, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 161 141) (close _V0loop_k420) (##string ##string.2590)) ((bruijn car 161 37) (close _V0loop_k425) (bruijn args 15 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k420, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k425, env)}),
      VGetArg(env, 15, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k419, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k430(VEnv * env) {
 V_GC_CHECK(_V0loop_k430, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 162 141) (bruijn ##k.910 7 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VGetArg(env, 7, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k430, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k429(VEnv * env) {
 V_GC_CHECK(_V0loop_k429, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 161 86) (close _V0loop_k430) (bruijn fmt 19 2) (bruijn i 15 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k430, env)}),
      VGetArg(env, 19, 2),
      VGetArg(env, 15, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k429, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k437(VEnv * env) {
 V_GC_CHECK(_V0loop_k437, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 12 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 12, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k437, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k436(VEnv * env) {
 V_GC_CHECK(_V0loop_k436, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k437) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k437, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k436, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k435(VEnv * env) {
 V_GC_CHECK(_V0loop_k435, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k436) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k436, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k435, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k434(VEnv * env) {
 V_GC_CHECK(_V0loop_k434, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k435) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k435, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k434, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k433(VEnv * env) {
 V_GC_CHECK(_V0loop_k433, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 163 37) (close _V0loop_k434) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k434, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k433, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k441(VEnv * env) {
 V_GC_CHECK(_V0loop_k441, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k441, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k440(VEnv * env) {
 V_GC_CHECK(_V0loop_k440, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k441) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k441, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k440, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k439(VEnv * env) {
 V_GC_CHECK(_V0loop_k439, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k440) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k440, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k439, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k438(VEnv * env) {
 V_GC_CHECK(_V0loop_k438, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k439) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k439, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k438, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k432(VEnv * env) {
 V_GC_CHECK(_V0loop_k432, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 162 141) (close _V0loop_k433) (##string ##string.2590)) ((bruijn car 162 37) (close _V0loop_k438) (bruijn args 16 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k433, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k438, env)}),
      VGetArg(env, 16, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k432, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k443(VEnv * env) {
 V_GC_CHECK(_V0loop_k443, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 163 141) (bruijn ##k.910 8 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k443, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k442(VEnv * env) {
 V_GC_CHECK(_V0loop_k442, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 162 86) (close _V0loop_k443) (bruijn fmt 20 2) (bruijn i 16 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k443, env)}),
      VGetArg(env, 20, 2),
      VGetArg(env, 16, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k442, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k431(VEnv * env) {
 V_GC_CHECK(_V0loop_k431, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.972 0 0) ((bruijn null? 161 1) (close _V0loop_k432) (bruijn args 15 2)) ((bruijn + 161 28) (close _V0loop_k442) (bruijn i 15 1) 2))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k432, env)}),
      VGetArg(env, 15, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k442, env)}),
      VGetArg(env, 15, 1),
      VEncodeInt(2l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k431, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k418(VEnv * env) {
 V_GC_CHECK(_V0loop_k418, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.970 0 0) (if (bruijn ##x.970 0 0) ((bruijn null? 160 1) (close _V0loop_k419) (bruijn args 14 2)) ((bruijn + 160 28) (close _V0loop_k429) (bruijn i 14 1) 2)) ((bruijn eqv? 160 16) (close _V0loop_k431) (bruijn ##x.1 5 1) (quote #\S)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k419, env)}),
      VGetArg(env, 14, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k429, env)}),
      VGetArg(env, 14, 1),
      VEncodeInt(2l)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k431, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('S')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k418, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k407(VEnv * env) {
 V_GC_CHECK(_V0loop_k407, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.975 0 0) ((bruijn null? 159 1) (close _V0loop_k408) (bruijn args 13 2)) ((bruijn eqv? 159 16) (close _V0loop_k418) (bruijn ##x.1 4 1) (quote #\s)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k408, env)}),
      VGetArg(env, 13, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k418, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('s')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k407, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k370(VEnv * env) {
 V_GC_CHECK(_V0loop_k370, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.973 0 0) (if (bruijn ##x.973 0 0) ((bruijn null? 158 1) (close _V0loop_k371) (bruijn args 12 2)) ((bruijn eqv? 158 16) (close _V0loop_k381) (bruijn ##x.1 3 1) (quote #\s))) ((bruijn eqv? 158 16) (close _V0loop_k407) (bruijn ##x.1 3 1) (quote #\A)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 158, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k371, env)}),
      VGetArg(env, 12, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 158, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k381, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('s')
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 158, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k407, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('A')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k370, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k446(VEnv * env) {
 V_GC_CHECK(_V0loop_k446, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 15 1) (bruijn ##k.910 5 0) (bruijn ##x.927 0 0) (bruijn args 14 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VGetArg(env, 5, 0),
      env->vars[0],
      VGetArg(env, 14, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k446, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k445(VEnv * env) {
 V_GC_CHECK(_V0loop_k445, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 159 28) (close _V0loop_k446) (bruijn i 13 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k446, env)}),
      VGetArg(env, 13, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k445, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k453(VEnv * env) {
 V_GC_CHECK(_V0loop_k453, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 10 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k453, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k452(VEnv * env) {
 V_GC_CHECK(_V0loop_k452, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k453) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k453, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k452, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k451(VEnv * env) {
 V_GC_CHECK(_V0loop_k451, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k452) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k452, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k451, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k450(VEnv * env) {
 V_GC_CHECK(_V0loop_k450, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 162 120) (close _V0loop_k451) (bruijn ##x.941 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k451, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k450, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k449(VEnv * env) {
 V_GC_CHECK(_V0loop_k449, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 161 37) (close _V0loop_k450) (bruijn args 15 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k450, env)}),
      VGetArg(env, 15, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k449, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k457(VEnv * env) {
 V_GC_CHECK(_V0loop_k457, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 19 1) (bruijn ##k.910 9 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VGetArg(env, 9, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k457, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k456(VEnv * env) {
 V_GC_CHECK(_V0loop_k456, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 163 38) (close _V0loop_k457) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k457, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k456, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k455(VEnv * env) {
 V_GC_CHECK(_V0loop_k455, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 162 28) (close _V0loop_k456) (bruijn i 16 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k456, env)}),
      VGetArg(env, 16, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k455, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k454(VEnv * env) {
 V_GC_CHECK(_V0loop_k454, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 161 120) (close _V0loop_k455) (bruijn ##x.941 0 0) (bruijn port 19 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k455, env)}),
      env->vars[0],
      VGetArg(env, 19, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k454, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k448(VEnv * env) {
 V_GC_CHECK(_V0loop_k448, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.942 0 0) ((bruijn error 160 141) (close _V0loop_k449) (##string ##string.2590)) ((bruijn car 160 37) (close _V0loop_k454) (bruijn args 14 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k449, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k454, env)}),
      VGetArg(env, 14, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k448, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k464(VEnv * env) {
 V_GC_CHECK(_V0loop_k464, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k464, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k463(VEnv * env) {
 V_GC_CHECK(_V0loop_k463, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k464) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k464, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k463, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k462(VEnv * env) {
 V_GC_CHECK(_V0loop_k462, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k463) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k463, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k462, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k461(VEnv * env) {
 V_GC_CHECK(_V0loop_k461, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k462) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k462, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k461, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k460(VEnv * env) {
 V_GC_CHECK(_V0loop_k460, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 162 37) (close _V0loop_k461) (bruijn args 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k461, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k460, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k468(VEnv * env) {
 V_GC_CHECK(_V0loop_k468, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 10 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k468, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k467(VEnv * env) {
 V_GC_CHECK(_V0loop_k467, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k468) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k468, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k467, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k466(VEnv * env) {
 V_GC_CHECK(_V0loop_k466, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k467) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k467, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k466, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k465(VEnv * env) {
 V_GC_CHECK(_V0loop_k465, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 162 121) (close _V0loop_k466) (bruijn ##x.960 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k466, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k465, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k459(VEnv * env) {
 V_GC_CHECK(_V0loop_k459, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 161 141) (close _V0loop_k460) (##string ##string.2590)) ((bruijn car 161 37) (close _V0loop_k465) (bruijn args 15 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k460, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k465, env)}),
      VGetArg(env, 15, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k459, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k470(VEnv * env) {
 V_GC_CHECK(_V0loop_k470, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 162 141) (bruijn ##k.910 7 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VGetArg(env, 7, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k470, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k469(VEnv * env) {
 V_GC_CHECK(_V0loop_k469, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 161 86) (close _V0loop_k470) (bruijn fmt 19 2) (bruijn i 15 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k470, env)}),
      VGetArg(env, 19, 2),
      VGetArg(env, 15, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k469, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k477(VEnv * env) {
 V_GC_CHECK(_V0loop_k477, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 12 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 12, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k477, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k476(VEnv * env) {
 V_GC_CHECK(_V0loop_k476, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k477) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k477, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k476, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k475(VEnv * env) {
 V_GC_CHECK(_V0loop_k475, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k476) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k476, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k475, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k474(VEnv * env) {
 V_GC_CHECK(_V0loop_k474, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k475) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k475, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k474, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k473(VEnv * env) {
 V_GC_CHECK(_V0loop_k473, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 163 37) (close _V0loop_k474) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k474, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k473, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k481(VEnv * env) {
 V_GC_CHECK(_V0loop_k481, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k481, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k480(VEnv * env) {
 V_GC_CHECK(_V0loop_k480, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k481) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k481, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k480, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k479(VEnv * env) {
 V_GC_CHECK(_V0loop_k479, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k480) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k480, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k479, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k478(VEnv * env) {
 V_GC_CHECK(_V0loop_k478, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k479) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k479, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k478, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k472(VEnv * env) {
 V_GC_CHECK(_V0loop_k472, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 162 141) (close _V0loop_k473) (##string ##string.2590)) ((bruijn car 162 37) (close _V0loop_k478) (bruijn args 16 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k473, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k478, env)}),
      VGetArg(env, 16, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k472, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k483(VEnv * env) {
 V_GC_CHECK(_V0loop_k483, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 163 141) (bruijn ##k.910 8 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k483, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k482(VEnv * env) {
 V_GC_CHECK(_V0loop_k482, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 162 86) (close _V0loop_k483) (bruijn fmt 20 2) (bruijn i 16 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k483, env)}),
      VGetArg(env, 20, 2),
      VGetArg(env, 16, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k482, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k471(VEnv * env) {
 V_GC_CHECK(_V0loop_k471, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.972 0 0) ((bruijn null? 161 1) (close _V0loop_k472) (bruijn args 15 2)) ((bruijn + 161 28) (close _V0loop_k482) (bruijn i 15 1) 2))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k472, env)}),
      VGetArg(env, 15, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k482, env)}),
      VGetArg(env, 15, 1),
      VEncodeInt(2l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k471, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k458(VEnv * env) {
 V_GC_CHECK(_V0loop_k458, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.970 0 0) (if (bruijn ##x.970 0 0) ((bruijn null? 160 1) (close _V0loop_k459) (bruijn args 14 2)) ((bruijn + 160 28) (close _V0loop_k469) (bruijn i 14 1) 2)) ((bruijn eqv? 160 16) (close _V0loop_k471) (bruijn ##x.1 5 1) (quote #\S)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k459, env)}),
      VGetArg(env, 14, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k469, env)}),
      VGetArg(env, 14, 1),
      VEncodeInt(2l)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k471, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('S')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k458, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k490(VEnv * env) {
 V_GC_CHECK(_V0loop_k490, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 11 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k490, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k489(VEnv * env) {
 V_GC_CHECK(_V0loop_k489, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k490) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k490, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k489, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k488(VEnv * env) {
 V_GC_CHECK(_V0loop_k488, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k489) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k489, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k488, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k487(VEnv * env) {
 V_GC_CHECK(_V0loop_k487, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 163 120) (close _V0loop_k488) (bruijn ##x.941 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k488, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k487, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k486(VEnv * env) {
 V_GC_CHECK(_V0loop_k486, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 162 37) (close _V0loop_k487) (bruijn args 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k487, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k486, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k494(VEnv * env) {
 V_GC_CHECK(_V0loop_k494, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 20 1) (bruijn ##k.910 10 0) (bruijn ##x.939 1 0) (bruijn ##x.940 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 10, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k494, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k493(VEnv * env) {
 V_GC_CHECK(_V0loop_k493, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 164 38) (close _V0loop_k494) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k494, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k493, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k492(VEnv * env) {
 V_GC_CHECK(_V0loop_k492, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 163 28) (close _V0loop_k493) (bruijn i 17 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k493, env)}),
      VGetArg(env, 17, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k492, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k491(VEnv * env) {
 V_GC_CHECK(_V0loop_k491, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 162 120) (close _V0loop_k492) (bruijn ##x.941 0 0) (bruijn port 20 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k492, env)}),
      env->vars[0],
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k491, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k485(VEnv * env) {
 V_GC_CHECK(_V0loop_k485, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.942 0 0) ((bruijn error 161 141) (close _V0loop_k486) (##string ##string.2590)) ((bruijn car 161 37) (close _V0loop_k491) (bruijn args 15 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k486, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k491, env)}),
      VGetArg(env, 15, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k485, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k501(VEnv * env) {
 V_GC_CHECK(_V0loop_k501, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 12 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 12, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k501, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k500(VEnv * env) {
 V_GC_CHECK(_V0loop_k500, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k501) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k501, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k500, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k499(VEnv * env) {
 V_GC_CHECK(_V0loop_k499, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k500) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k500, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k499, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k498(VEnv * env) {
 V_GC_CHECK(_V0loop_k498, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k499) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k499, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k498, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k497(VEnv * env) {
 V_GC_CHECK(_V0loop_k497, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 163 37) (close _V0loop_k498) (bruijn args 17 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k498, env)}),
      VGetArg(env, 17, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k497, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k505(VEnv * env) {
 V_GC_CHECK(_V0loop_k505, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 21 1) (bruijn ##k.910 11 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 11, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k505, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k504(VEnv * env) {
 V_GC_CHECK(_V0loop_k504, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 165 38) (close _V0loop_k505) (bruijn args 19 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k505, env)}),
      VGetArg(env, 19, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k504, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k503(VEnv * env) {
 V_GC_CHECK(_V0loop_k503, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 164 28) (close _V0loop_k504) (bruijn i 18 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k504, env)}),
      VGetArg(env, 18, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k503, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k502(VEnv * env) {
 V_GC_CHECK(_V0loop_k502, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 163 121) (close _V0loop_k503) (bruijn ##x.960 0 0) (bruijn port 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k503, env)}),
      env->vars[0],
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k502, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k496(VEnv * env) {
 V_GC_CHECK(_V0loop_k496, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 162 141) (close _V0loop_k497) (##string ##string.2590)) ((bruijn car 162 37) (close _V0loop_k502) (bruijn args 16 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k497, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k502, env)}),
      VGetArg(env, 16, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k496, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k507(VEnv * env) {
 V_GC_CHECK(_V0loop_k507, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 163 141) (bruijn ##k.910 8 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k507, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k506(VEnv * env) {
 V_GC_CHECK(_V0loop_k506, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 162 86) (close _V0loop_k507) (bruijn fmt 20 2) (bruijn i 16 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k507, env)}),
      VGetArg(env, 20, 2),
      VGetArg(env, 16, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k506, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k514(VEnv * env) {
 V_GC_CHECK(_V0loop_k514, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 23 1) (bruijn ##k.910 13 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VGetArg(env, 13, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k514, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k513(VEnv * env) {
 V_GC_CHECK(_V0loop_k513, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 167 38) (close _V0loop_k514) (bruijn args 21 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 167, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k514, env)}),
      VGetArg(env, 21, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k513, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k512(VEnv * env) {
 V_GC_CHECK(_V0loop_k512, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 166 28) (close _V0loop_k513) (bruijn i 20 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k513, env)}),
      VGetArg(env, 20, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k512, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k511(VEnv * env) {
 V_GC_CHECK(_V0loop_k511, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 165 121) (close _V0loop_k512) (bruijn ##x.960 0 0) (bruijn port 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k512, env)}),
      env->vars[0],
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k511, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k510(VEnv * env) {
 V_GC_CHECK(_V0loop_k510, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 164 37) (close _V0loop_k511) (bruijn args 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k511, env)}),
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k510, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k518(VEnv * env) {
 V_GC_CHECK(_V0loop_k518, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 22 1) (bruijn ##k.910 12 0) (bruijn ##x.958 1 0) (bruijn ##x.959 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VGetArg(env, 12, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k518, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k517(VEnv * env) {
 V_GC_CHECK(_V0loop_k517, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 166 38) (close _V0loop_k518) (bruijn args 20 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 166, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k518, env)}),
      VGetArg(env, 20, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k517, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k516(VEnv * env) {
 V_GC_CHECK(_V0loop_k516, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 165 28) (close _V0loop_k517) (bruijn i 19 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 165, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k517, env)}),
      VGetArg(env, 19, 1),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k516, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k515(VEnv * env) {
 V_GC_CHECK(_V0loop_k515, env) {
 if (env->num_vars == 1) {
  // ((bruijn write 164 121) (close _V0loop_k516) (bruijn ##x.960 0 0) (bruijn port 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k516, env)}),
      env->vars[0],
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k515, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k509(VEnv * env) {
 V_GC_CHECK(_V0loop_k509, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.961 0 0) ((bruijn error 163 141) (close _V0loop_k510) (##string ##string.2590)) ((bruijn car 163 37) (close _V0loop_k515) (bruijn args 17 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k510, env)}),
      VEncodePointer(&_V10string_D2590.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k515, env)}),
      VGetArg(env, 17, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k509, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k520(VEnv * env) {
 V_GC_CHECK(_V0loop_k520, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 164 141) (bruijn ##k.910 9 0) (##string ##string.2591) (bruijn ##x.968 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 164, 141)),
      VGetArg(env, 9, 0),
      VEncodePointer(&_V10string_D2591.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k520, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k519(VEnv * env) {
 V_GC_CHECK(_V0loop_k519, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 163 86) (close _V0loop_k520) (bruijn fmt 21 2) (bruijn i 17 1) (bruijn ##x.969 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 163, 86)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k520, env)}),
      VGetArg(env, 21, 2),
      VGetArg(env, 17, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k519, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k508(VEnv * env) {
 V_GC_CHECK(_V0loop_k508, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.972 0 0) ((bruijn null? 162 1) (close _V0loop_k509) (bruijn args 16 2)) ((bruijn + 162 28) (close _V0loop_k519) (bruijn i 16 1) 2))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k509, env)}),
      VGetArg(env, 16, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 162, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k519, env)}),
      VGetArg(env, 16, 1),
      VEncodeInt(2l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k508, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k495(VEnv * env) {
 V_GC_CHECK(_V0loop_k495, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.970 0 0) (if (bruijn ##x.970 0 0) ((bruijn null? 161 1) (close _V0loop_k496) (bruijn args 15 2)) ((bruijn + 161 28) (close _V0loop_k506) (bruijn i 15 1) 2)) ((bruijn eqv? 161 16) (close _V0loop_k508) (bruijn ##x.1 6 1) (quote #\S)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k496, env)}),
      VGetArg(env, 15, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k506, env)}),
      VGetArg(env, 15, 1),
      VEncodeInt(2l)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 161, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k508, env)}),
      VGetArg(env, 6, 1),
      VEncodeChar('S')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k495, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k484(VEnv * env) {
 V_GC_CHECK(_V0loop_k484, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.975 0 0) ((bruijn null? 160 1) (close _V0loop_k485) (bruijn args 14 2)) ((bruijn eqv? 160 16) (close _V0loop_k495) (bruijn ##x.1 5 1) (quote #\s)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k485, env)}),
      VGetArg(env, 14, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 160, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k495, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('s')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k484, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k447(VEnv * env) {
 V_GC_CHECK(_V0loop_k447, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.973 0 0) (if (bruijn ##x.973 0 0) ((bruijn null? 159 1) (close _V0loop_k448) (bruijn args 13 2)) ((bruijn eqv? 159 16) (close _V0loop_k458) (bruijn ##x.1 4 1) (quote #\s))) ((bruijn eqv? 159 16) (close _V0loop_k484) (bruijn ##x.1 4 1) (quote #\A)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k448, env)}),
      VGetArg(env, 13, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k458, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('s')
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 159, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k484, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('A')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k447, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k444(VEnv * env) {
 V_GC_CHECK(_V0loop_k444, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.978 0 0) (##sys.display-word (close _V0loop_k445) #\newline (bruijn port 16 1)) ((bruijn eqv? 158 16) (close _V0loop_k447) (bruijn ##x.1 3 1) (quote #\a)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k445, env)}),
      VEncodeChar('\n'),
      VGetArg(env, 16, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 158, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k447, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('a')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k444, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k367(VEnv * env) {
 V_GC_CHECK(_V0loop_k367, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.976 0 0) (if (bruijn ##x.976 0 0) (##sys.display-word (close _V0loop_k368) #\newline (bruijn port 15 1)) ((bruijn eqv? 157 16) (close _V0loop_k370) (bruijn ##x.1 2 1) (quote #\a))) ((bruijn eqv? 157 16) (close _V0loop_k444) (bruijn ##x.1 2 1) (quote #\N)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k368, env)}),
      VEncodeChar('\n'),
      VGetArg(env, 15, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 157, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k370, env)}),
      env->up->up->vars[1],
      VEncodeChar('a')
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 157, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k444, env)}),
      env->up->up->vars[1],
      VEncodeChar('N')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k367, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k364(VEnv * env) {
 V_GC_CHECK(_V0loop_k364, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.912 0 0) (##sys.display-word (close _V0loop_k365) #\~ (bruijn port 14 1)) ((bruijn eqv? 156 16) (close _V0loop_k367) (bruijn ##x.1 1 1) (quote #\n)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k365, env)}),
      VEncodeChar('~'),
      VGetArg(env, 14, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 156, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k367, env)}),
      env->up->vars[1],
      VEncodeChar('n')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k364, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda36(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda36, env) {
  // ((bruijn eqv? 155 16) (close _V0loop_k364) (bruijn ##x.1 0 1) (quote #\~))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 155, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k364, env)}),
      env->vars[1],
      VEncodeChar('~')
    );
 }
}
static void _V0loop_k363(VEnv * env) {
 V_GC_CHECK(_V0loop_k363, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda36) (bruijn ##k.902 5 0) (bruijn ##x.979 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda36, env)},
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k363, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k362(VEnv * env) {
 V_GC_CHECK(_V0loop_k362, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-ref 153 89) (close _V0loop_k363) (bruijn fmt 11 2) (bruijn ##x.980 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 153, 89)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k363, env)}),
      VGetArg(env, 11, 2),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k362, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k201(VEnv * env) {
 V_GC_CHECK(_V0loop_k201, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.981 0 0) ((bruijn error 152 141) (close _V0loop_k202) (##string ##string.2592) (bruijn fmt 10 2)) ((bruijn + 152 28) (close _V0loop_k362) (bruijn i 6 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 152, 141)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k202, env)}),
      VEncodePointer(&_V10string_D2592.sym, VPOINTER_OTHER),
      VGetArg(env, 10, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 152, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k362, env)}),
      VGetArg(env, 6, 1),
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k201, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k200(VEnv * env) {
 V_GC_CHECK(_V0loop_k200, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 151 20) (close _V0loop_k201) (bruijn ##x.986 0 0) (bruijn len 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 151, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k201, env)}),
      env->vars[0],
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k200, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k522(VEnv * env) {
 V_GC_CHECK(_V0loop_k522, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 7 1) (bruijn ##k.902 3 0) (bruijn ##x.992 0 0) (bruijn args 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      env->vars[0],
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k522, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k521(VEnv * env) {
 V_GC_CHECK(_V0loop_k521, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 151 28) (close _V0loop_k522) (bruijn i 5 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 151, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k522, env)}),
      VGetArg(env, 5, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k521, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k199(VEnv * env) {
 V_GC_CHECK(_V0loop_k199, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.904 0 0) ((bruijn + 150 28) (close _V0loop_k200) (bruijn i 4 1) 1) (##sys.display-word (close _V0loop_k521) (bruijn c 1 1) (bruijn port 8 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 150, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k200, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(1l)
    );
} else {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k521, env)}),
      env->up->vars[1],
      VGetArg(env, 8, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k199, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda34(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda34, env) {
  // ((bruijn eq? 149 14) (close _V0loop_k199) (bruijn c 0 1) #\~)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 149, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k199, env)}),
      env->vars[1],
      VEncodeChar('~')
    );
 }
}
static void _V0loop_k198(VEnv * env) {
 V_GC_CHECK(_V0loop_k198, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda34) (bruijn ##k.897 2 0) (bruijn ##x.993 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda34, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k198, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k197(VEnv * env) {
 V_GC_CHECK(_V0loop_k197, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.899 0 0) ((bruijn string-ref 147 89) (close _V0loop_k198) (bruijn fmt 5 2) (bruijn i 1 1)) ((bruijn ##k.897 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 147, 89)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k198, env)}),
      VGetArg(env, 5, 2),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k197, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda33(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda33, env) {
 if (env->num_vars == 3) {
  // ((bruijn < 146 19) (close _V0loop_k197) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 146, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k197, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda33, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0format__printf_lambda32(VEnv * env) {
 V_GC_CHECK(_V0format__printf_lambda32, env) {
  // (set! (close _V0format__printf_k196) (bruijn loop 0 1) (close _V0loop_lambda33))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format__printf_k196, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda33, env)})
    );
 }
}
static void _V0format__printf_lambda31(VEnv * env) {
 V_GC_CHECK(_V0format__printf_lambda31, env) {
  // ((close _V0format__printf_lambda32) (bruijn ##k.890 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0format__printf_lambda32, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0format__printf_k195(VEnv * env) {
 V_GC_CHECK(_V0format__printf_k195, env) {
 if (env->num_vars == 1) {
  // ((close _V0format__printf_lambda31) (bruijn ##k.888 1 0) (bruijn ##x.996 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0format__printf_lambda31, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0format__printf_k195, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0format__printf_lambda30(VEnv * env) {
 V_GC_CHECK(_V0format__printf_lambda30, env) {
 if (env->num_vars == 4) {
  // ((bruijn string-length 142 91) (close _V0format__printf_k195) (bruijn fmt 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 142, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format__printf_k195, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0format__printf_lambda30, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k155(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k155, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k156) (bruijn format-printf 141 136) (close _V0format__printf_lambda30))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k156, env)}),
      141, 136,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0format__printf_lambda30, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k155, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0writeln_k523(VEnv * env) {
 V_GC_CHECK(_V0writeln_k523, env) {
 if (env->num_vars == 1) {
  // ((bruijn writeln 142 135) (bruijn ##k.997 1 0) (bruijn x 1 1) (bruijn ##x.999 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 142, 135)),
      env->up->vars[0],
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0writeln_k523, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0writeln_k524(VEnv * env) {
 V_GC_CHECK(_V0writeln_k524, env) {
 if (env->num_vars == 1) {
  // ((bruijn newline 142 118) (bruijn ##k.1000 1 0) (bruijn port 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 142, 118)),
      env->up->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0writeln_k524, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0writeln_lambda37(VEnv * env) {
 V_GC_CHECK(_V0writeln_lambda37, env) {
 if (env->num_vars == 2) {
  // ((bruijn current-output-port 141 105) (close _V0writeln_k523))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 141, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0writeln_k523, env)})
    );
 } else if (env->num_vars == 3) {
  // ((bruijn write 141 121) (close _V0writeln_k524) (bruijn x 0 1) (bruijn port 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 141, 121)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0writeln_k524, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0writeln_lambda37, got ~D~N"
  "-- expected 2~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k154(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k154, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k155) (bruijn writeln 140 135) (close _V0writeln_lambda37))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k155, env)}),
      140, 135,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0writeln_lambda37, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k154, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0displayln_k525(VEnv * env) {
 V_GC_CHECK(_V0displayln_k525, env) {
 if (env->num_vars == 1) {
  // ((bruijn displayln 141 134) (bruijn ##k.1005 1 0) (bruijn x 1 1) (bruijn ##x.1007 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 141, 134)),
      env->up->vars[0],
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0displayln_k525, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0displayln_k526(VEnv * env) {
 V_GC_CHECK(_V0displayln_k526, env) {
 if (env->num_vars == 1) {
  // ((bruijn newline 141 118) (bruijn ##k.1008 1 0) (bruijn port 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 141, 118)),
      env->up->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0displayln_k526, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0displayln_lambda38(VEnv * env) {
 V_GC_CHECK(_V0displayln_lambda38, env) {
 if (env->num_vars == 2) {
  // ((bruijn current-output-port 140 105) (close _V0displayln_k525))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 140, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0displayln_k525, env)})
    );
 } else if (env->num_vars == 3) {
  // ((bruijn display 140 120) (close _V0displayln_k526) (bruijn x 0 1) (bruijn port 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 140, 120)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0displayln_k526, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0displayln_lambda38, got ~D~N"
  "-- expected 2~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k153(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k153, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k154) (bruijn displayln 139 134) (close _V0displayln_lambda38))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k154, env)}),
      139, 134,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0displayln_lambda38, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k153, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0atom_Q_k527(VEnv * env) {
 V_GC_CHECK(_V0atom_Q_k527, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 140 18) (bruijn ##k.1013 1 0) (bruijn ##x.1015 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 140, 18)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0atom_Q_k527, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0atom_Q_lambda39(VEnv * env) {
 V_GC_CHECK(_V0atom_Q_lambda39, env) {
 if (env->num_vars == 2) {
  // ((bruijn pair? 139 4) (close _V0atom_Q_k527) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 139, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0atom_Q_k527, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0atom_Q_lambda39, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k152(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k152, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k153) (bruijn atom? 138 133) (close _V0atom_Q_lambda39))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k153, env)}),
      138, 133,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0atom_Q_lambda39, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k152, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k151(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k151, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k152) (bruijn exit 137 132) ##sys.exit)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k152, env)}),
      137, 132,
      VEncodeClosure((VClosure[]){VMakeClosure(VExit,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k151, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k150(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k150, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k151) (bruijn make-temporary-file 136 131) ##sys.make-temporary-file)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k151, env)}),
      136, 131,
      VEncodeClosure((VClosure[]){VMakeClosure(VMakeTemporaryFile,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k150, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k149(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k149, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k150) (bruijn open-output-process 135 130) ##sys.open-output-process)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k150, env)}),
      135, 130,
      VEncodeClosure((VClosure[]){VMakeClosure(VOpenOutputProcess,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k149, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k148(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k148, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k149) (bruijn open-input-process 134 129) ##sys.open-input-process)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k149, env)}),
      134, 129,
      VEncodeClosure((VClosure[]){VMakeClosure(VOpenInputProcess,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k148, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k147(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k147, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k148) (bruijn system 133 128) ##sys.system)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k148, env)}),
      133, 128,
      VEncodeClosure((VClosure[]){VMakeClosure(VSystem,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k147, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k146(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k146, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k147) (bruijn command-line 132 127) ##sys.command-line)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k147, env)}),
      132, 127,
      VEncodeClosure((VClosure[]){VMakeClosure(VCommandLine,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k146, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0values_lambda41(VEnv * env) {
 V_GC_CHECK(_V0values_lambda41, env) {
 if (env->num_vars == 2) {
  // ((bruijn apply 133 125) (bruijn ##k.1018 0 0) (bruijn k 0 1) (bruijn args 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 133, 125)),
      env->vars[0],
      env->vars[1],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0values_lambda41, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0values_lambda40(VEnv * env) {
 V_GC_CHECK(_V0values_lambda40, env) {
 if (env->num_vars >= 1) {
  // ((bruijn call/cc 132 122) (bruijn ##k.1016 0 0) (close _V0values_lambda41))
  V_GATHER_VARARGS(&env, 1);
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 132, 122)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0values_lambda41, env)})
    );
 } else {
  VError("Not enough arguments to _V0values_lambda40, got ~D~N"
  "-- expected 1 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k145(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k145, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k146) (bruijn values 131 126) (close _V0values_lambda40))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k146, env)}),
      131, 126,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0values_lambda40, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k145, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k144(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k144, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k145) (bruijn apply 130 125) ##sys.apply)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k145, env)}),
      130, 125,
      VEncodeClosure((VClosure[]){VMakeClosure(VApply,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k144, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k143(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k143, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k144) (bruijn call-with-values 129 124) ##sys.call-with-values)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k144, env)}),
      129, 124,
      VEncodeClosure((VClosure[]){VMakeClosure(VCallValues,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k143, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k142(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k142, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k143) (bruijn call-with-current-continuation 128 123) ##sys.call/cc)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k143, env)}),
      128, 123,
      VEncodeClosure((VClosure[]){VMakeClosure(VCallCC,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k142, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k141(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k141, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k142) (bruijn call/cc 127 122) ##sys.call/cc)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k142, env)}),
      127, 122,
      VEncodeClosure((VClosure[]){VMakeClosure(VCallCC,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k141, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0write_k528(VEnv * env) {
 V_GC_CHECK(_V0write_k528, env) {
 if (env->num_vars == 1) {
  // ((bruijn printout 128 119) (bruijn ##k.1020 1 0) (bruijn x 1 1) #t (bruijn ##x.1022 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 128, 119)),
      env->up->vars[0],
      env->up->vars[1],
      VEncodeBool(true),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0write_k528, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0write_lambda42(VEnv * env) {
 V_GC_CHECK(_V0write_lambda42, env) {
 if (env->num_vars == 2) {
  // ((bruijn current-output-port 127 105) (close _V0write_k528))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 127, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0write_k528, env)})
    );
 } else if (env->num_vars == 3) {
  // ((bruijn printout 127 119) (bruijn ##k.1023 0 0) (bruijn x 0 1) #t (bruijn port 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 127, 119)),
      env->vars[0],
      env->vars[1],
      VEncodeBool(true),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0write_lambda42, got ~D~N"
  "-- expected 2~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k140(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k140, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k141) (bruijn write 126 121) (close _V0write_lambda42))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k141, env)}),
      126, 121,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0write_lambda42, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k140, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display_k529(VEnv * env) {
 V_GC_CHECK(_V0display_k529, env) {
 if (env->num_vars == 1) {
  // ((bruijn printout 127 119) (bruijn ##k.1025 1 0) (bruijn x 1 1) #f (bruijn ##x.1027 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 127, 119)),
      env->up->vars[0],
      env->up->vars[1],
      VEncodeBool(false),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0display_k529, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0display_lambda43(VEnv * env) {
 V_GC_CHECK(_V0display_lambda43, env) {
 if (env->num_vars == 2) {
  // ((bruijn current-output-port 126 105) (close _V0display_k529))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 126, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display_k529, env)})
    );
 } else if (env->num_vars == 3) {
  // ((bruijn printout 126 119) (bruijn ##k.1028 0 0) (bruijn x 0 1) #f (bruijn port 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 126, 119)),
      env->vars[0],
      env->vars[1],
      VEncodeBool(false),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0display_lambda43, got ~D~N"
  "-- expected 2~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k139(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k139, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k140) (bruijn display 125 120) (close _V0display_lambda43))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k140, env)}),
      125, 120,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0display_lambda43, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k139, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k535(VEnv * env) {
 V_GC_CHECK(_V0printout_k535, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (bruijn ##k.1044 2 0) (bruijn ##x.1049 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0printout_k535, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k534(VEnv * env) {
 V_GC_CHECK(_V0printout_k534, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 131 38) (close _V0printout_k535) (bruijn x 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 131, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k535, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0printout_k534, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k540(VEnv * env) {
 V_GC_CHECK(_V0loop_k540, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.1050 5 0) (bruijn ##x.1061 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k540, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k539(VEnv * env) {
 V_GC_CHECK(_V0loop_k539, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 135 38) (close _V0loop_k540) (bruijn xs 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 135, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k540, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k539, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k538(VEnv * env) {
 V_GC_CHECK(_V0loop_k538, env) {
 if (env->num_vars == 1) {
  // ((bruijn printout 134 119) (close _V0loop_k539) (bruijn ##x.1062 0 0) (bruijn write? 9 2) (bruijn port 9 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 134, 119)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k539, env)}),
      env->vars[0],
      VGetArg(env, 9, 2),
      VGetArg(env, 9, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k538, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k537(VEnv * env) {
 V_GC_CHECK(_V0loop_k537, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 133 37) (close _V0loop_k538) (bruijn xs 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 133, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k538, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k537, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k542(VEnv * env) {
 V_GC_CHECK(_V0loop_k542, env) {
 if (env->num_vars == 1) {
  // ((bruijn printout 134 119) (bruijn ##k.1050 3 0) (bruijn xs 3 1) (bruijn write? 9 2) (bruijn port 9 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 134, 119)),
      env->up->up->up->vars[0],
      env->up->up->up->vars[1],
      VGetArg(env, 9, 2),
      VGetArg(env, 9, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k542, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k541(VEnv * env) {
 V_GC_CHECK(_V0loop_k541, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1065 0 0) ((bruijn ##k.1050 2 0) (quote ok)) (##sys.display-word (close _V0loop_k542) (##string ##string.2593) (bruijn port 8 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k542, env)}),
      VEncodePointer(&_V10string_D2593.sym, VPOINTER_OTHER),
      VGetArg(env, 8, 3)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k541, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k536(VEnv * env) {
 V_GC_CHECK(_V0loop_k536, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1052 0 0) (##sys.display-word (close _V0loop_k537) (##string ##string.2587) (bruijn port 7 3)) ((bruijn null? 132 1) (close _V0loop_k541) (bruijn xs 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k537, env)}),
      VEncodePointer(&_V10string_D2587.sym, VPOINTER_OTHER),
      VGetArg(env, 7, 3)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 132, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k541, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k536, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda46(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda46, env) {
 if (env->num_vars == 2) {
  // ((bruijn pair? 131 4) (close _V0loop_k536) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 131, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k536, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda46, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_lambda45(VEnv * env) {
 V_GC_CHECK(_V0printout_lambda45, env) {
  // (set! (close _V0printout_k534) (bruijn loop 0 1) (close _V0loop_lambda46))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k534, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda46, env)})
    );
 }
}
static void _V0printout_k543(VEnv * env) {
 V_GC_CHECK(_V0printout_k543, env) {
 if (env->num_vars == 1) {
  // (##sys.display-word (bruijn ##k.1030 5 0) (##string ##string.2594) (bruijn port 5 3))
    V_CALL_FUNC(VDisplay,
      VGetArg(env, 5, 0),
      VEncodePointer(&_V10string_D2594.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 3)
    );
 } else {
  VError("Not enough arguments to _V0printout_k543, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k533(VEnv * env) {
 V_GC_CHECK(_V0printout_k533, env) {
 if (env->num_vars == 1) {
  // ((close _V0printout_lambda45) (close _V0printout_k543) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0printout_lambda45, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k543, env)}),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0printout_k533, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k532(VEnv * env) {
 V_GC_CHECK(_V0printout_k532, env) {
 if (env->num_vars == 1) {
  // ((bruijn printout 128 119) (close _V0printout_k533) (bruijn ##x.1073 0 0) (bruijn write? 3 2) (bruijn port 3 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 128, 119)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k533, env)}),
      env->vars[0],
      env->up->up->up->vars[2],
      env->up->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0printout_k532, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k531(VEnv * env) {
 V_GC_CHECK(_V0printout_k531, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 127 37) (close _V0printout_k532) (bruijn x 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 127, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k532, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0printout_k531, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k547(VEnv * env) {
 V_GC_CHECK(_V0printout_k547, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1087 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0printout_k547, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k552(VEnv * env) {
 V_GC_CHECK(_V0loop_k552, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.1092 5 0) (bruijn ##x.1105 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k552, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k551(VEnv * env) {
 V_GC_CHECK(_V0loop_k551, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 136 28) (close _V0loop_k552) (bruijn i 4 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 136, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k552, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k551, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k550(VEnv * env) {
 V_GC_CHECK(_V0loop_k550, env) {
 if (env->num_vars == 1) {
  // ((bruijn printout 135 119) (close _V0loop_k551) (bruijn ##x.1106 0 0) (bruijn write? 10 2) (bruijn port 10 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 135, 119)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k551, env)}),
      env->vars[0],
      VGetArg(env, 10, 2),
      VGetArg(env, 10, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k550, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k556(VEnv * env) {
 V_GC_CHECK(_V0loop_k556, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 7 1) (bruijn ##k.1092 6 0) (bruijn ##x.1105 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k556, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k555(VEnv * env) {
 V_GC_CHECK(_V0loop_k555, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 137 28) (close _V0loop_k556) (bruijn i 5 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 137, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k556, env)}),
      VGetArg(env, 5, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k555, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k554(VEnv * env) {
 V_GC_CHECK(_V0loop_k554, env) {
 if (env->num_vars == 1) {
  // ((bruijn printout 136 119) (close _V0loop_k555) (bruijn ##x.1106 0 0) (bruijn write? 11 2) (bruijn port 11 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 136, 119)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k555, env)}),
      env->vars[0],
      VGetArg(env, 11, 2),
      VGetArg(env, 11, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k554, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k553(VEnv * env) {
 V_GC_CHECK(_V0loop_k553, env) {
 if (env->num_vars == 1) {
  // ((bruijn vector-ref 135 100) (close _V0loop_k554) (bruijn x 10 1) (bruijn i 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 135, 100)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k554, env)}),
      VGetArg(env, 10, 1),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k553, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k549(VEnv * env) {
 V_GC_CHECK(_V0loop_k549, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1107 0 0) ((bruijn vector-ref 134 100) (close _V0loop_k550) (bruijn x 9 1) (bruijn i 2 1)) (##sys.display-word (close _V0loop_k553) (##string ##string.2587) (bruijn port 9 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 134, 100)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k550, env)}),
      VGetArg(env, 9, 1),
      env->up->up->vars[1]
    );
} else {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k553, env)}),
      VEncodePointer(&_V10string_D2587.sym, VPOINTER_OTHER),
      VGetArg(env, 9, 3)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k549, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k548(VEnv * env) {
 V_GC_CHECK(_V0loop_k548, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1094 0 0) ((bruijn ##k.1092 1 0) #f) ((bruijn eq? 133 14) (close _V0loop_k549) (bruijn i 1 1) 0))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 133, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k549, env)}),
      env->up->vars[1],
      VEncodeInt(0l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k548, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda49(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda49, env) {
 if (env->num_vars == 2) {
  // ((bruijn eq? 132 14) (close _V0loop_k548) (bruijn i 0 1) (bruijn len 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 132, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k548, env)}),
      env->vars[1],
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda49, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_lambda48(VEnv * env) {
 V_GC_CHECK(_V0printout_lambda48, env) {
  // (set! (close _V0printout_k547) (bruijn loop 0 1) (close _V0loop_lambda49))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k547, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda49, env)})
    );
 }
}
static void _V0printout_k557(VEnv * env) {
 V_GC_CHECK(_V0printout_k557, env) {
 if (env->num_vars == 1) {
  // (##sys.display-word (bruijn ##k.1079 2 0) (##string ##string.2594) (bruijn port 6 3))
    V_CALL_FUNC(VDisplay,
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D2594.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 3)
    );
 } else {
  VError("Not enough arguments to _V0printout_k557, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k546(VEnv * env) {
 V_GC_CHECK(_V0printout_k546, env) {
 if (env->num_vars == 1) {
  // ((close _V0printout_lambda48) (close _V0printout_k557) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0printout_lambda48, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k557, env)}),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0printout_k546, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_lambda47(VEnv * env) {
 V_GC_CHECK(_V0printout_lambda47, env) {
  // (##sys.display-word (close _V0printout_k546) (##string ##string.2596) (bruijn port 4 3))
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k546, env)}),
      VEncodePointer(&_V10string_D2596.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 3)
    );
 }
}
static void _V0printout_k545(VEnv * env) {
 V_GC_CHECK(_V0printout_k545, env) {
 if (env->num_vars == 1) {
  // ((close _V0printout_lambda47) (bruijn ##k.1030 3 0) (bruijn ##x.1112 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0printout_lambda47, env)},
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0printout_k545, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k544(VEnv * env) {
 V_GC_CHECK(_V0printout_k544, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1076 0 0) ((bruijn vector-length 127 102) (close _V0printout_k545) (bruijn x 2 1)) (if (bruijn write? 2 2) (##sys.write (bruijn ##k.1030 2 0) (bruijn x 2 1) (bruijn port 2 3)) (##sys.display-word (bruijn ##k.1030 2 0) (bruijn x 2 1) (bruijn port 2 3))))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 127, 102)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k545, env)}),
      env->up->up->vars[1]
    );
} else {
if(VDecodeBool(
env->up->up->vars[2])) {
    V_CALL_FUNC(VWrite,
      env->up->up->vars[0],
      env->up->up->vars[1],
      env->up->up->vars[3]
    );
} else {
    V_CALL_FUNC(VDisplay,
      env->up->up->vars[0],
      env->up->up->vars[1],
      env->up->up->vars[3]
    );
}
}
 } else {
  VError("Not enough arguments to _V0printout_k544, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k530(VEnv * env) {
 V_GC_CHECK(_V0printout_k530, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1032 0 0) (##sys.display-word (close _V0printout_k531) (##string ##string.2595) (bruijn port 1 3)) ((bruijn vector? 126 5) (close _V0printout_k544) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VDisplay,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k531, env)}),
      VEncodePointer(&_V10string_D2595.sym, VPOINTER_OTHER),
      env->up->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 126, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k544, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0printout_k530, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_lambda44(VEnv * env) {
 V_GC_CHECK(_V0printout_lambda44, env) {
 if (env->num_vars == 4) {
  // ((bruijn pair? 125 4) (close _V0printout_k530) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 125, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k530, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0printout_lambda44, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k138(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k138, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k139) (bruijn printout 124 119) (close _V0printout_lambda44))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k139, env)}),
      124, 119,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_lambda44, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k138, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0newline_k558(VEnv * env) {
 V_GC_CHECK(_V0newline_k558, env) {
 if (env->num_vars == 1) {
  // (##sys.newline (bruijn ##k.1119 1 0) (bruijn ##x.1121 0 0))
    V_CALL_FUNC(VNewline,
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0newline_k558, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0newline_lambda50(VEnv * env) {
 V_GC_CHECK(_V0newline_lambda50, env) {
 if (env->num_vars == 1) {
  // ((bruijn current-output-port 124 105) (close _V0newline_k558))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 124, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0newline_k558, env)})
    );
 } else if (env->num_vars == 2) {
  // (##sys.newline (bruijn ##k.1122 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VNewline,
      env->vars[0],
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0newline_lambda50, got ~D~N"
  "-- expected 1~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k137(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k137, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k138) (bruijn newline 123 118) (close _V0newline_lambda50))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k138, env)}),
      123, 118,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0newline_lambda50, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k137, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read_k559(VEnv * env) {
 V_GC_CHECK(_V0read_k559, env) {
 if (env->num_vars == 1) {
  // (##sys.read (bruijn ##k.1124 1 0) (bruijn ##x.1126 0 0))
    V_CALL_FUNC(VRead,
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0read_k559, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read_lambda51(VEnv * env) {
 V_GC_CHECK(_V0read_lambda51, env) {
 if (env->num_vars == 1) {
  // ((bruijn current-input-port 123 107) (close _V0read_k559))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 123, 107)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read_k559, env)})
    );
 } else if (env->num_vars == 2) {
  // (##sys.read (bruijn ##k.1127 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VRead,
      env->vars[0],
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0read_lambda51, got ~D~N"
  "-- expected 1~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k136(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k136, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k137) (bruijn read 122 117) (close _V0read_lambda51))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k137, env)}),
      122, 117,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read_lambda51, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k136, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read__line_k560(VEnv * env) {
 V_GC_CHECK(_V0read__line_k560, env) {
 if (env->num_vars == 1) {
  // (##sys.read-line (bruijn ##k.1129 1 0) (bruijn ##x.1131 0 0))
    V_CALL_FUNC(VReadLine,
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0read__line_k560, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read__line_lambda52(VEnv * env) {
 V_GC_CHECK(_V0read__line_lambda52, env) {
 if (env->num_vars == 1) {
  // ((bruijn current-input-port 122 107) (close _V0read__line_k560))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 122, 107)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read__line_k560, env)})
    );
 } else if (env->num_vars == 2) {
  // (##sys.read-line (bruijn ##k.1132 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadLine,
      env->vars[0],
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0read__line_lambda52, got ~D~N"
  "-- expected 1~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k135(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k135, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k136) (bruijn read-line 121 116) (close _V0read__line_lambda52))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k136, env)}),
      121, 116,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read__line_lambda52, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k135, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read__char_k561(VEnv * env) {
 V_GC_CHECK(_V0read__char_k561, env) {
 if (env->num_vars == 1) {
  // (##sys.read-char (bruijn ##k.1134 1 0) (bruijn ##x.1136 0 0))
    V_CALL_FUNC(VReadChar,
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0read__char_k561, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0read__char_lambda53(VEnv * env) {
 V_GC_CHECK(_V0read__char_lambda53, env) {
 if (env->num_vars == 1) {
  // ((bruijn current-input-port 121 107) (close _V0read__char_k561))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 121, 107)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read__char_k561, env)})
    );
 } else if (env->num_vars == 2) {
  // (##sys.read-char (bruijn ##k.1137 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadChar,
      env->vars[0],
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0read__char_lambda53, got ~D~N"
  "-- expected 1~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k134(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k134, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k135) (bruijn read-char 120 115) (close _V0read__char_lambda53))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k135, env)}),
      120, 115,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0read__char_lambda53, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k134, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__input__from__file_k567(VEnv * env) {
 V_GC_CHECK(_V0with__input__from__file_k567, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1146 2 0) (bruijn ret 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0with__input__from__file_k567, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__input__from__file_k566(VEnv * env) {
 V_GC_CHECK(_V0with__input__from__file_k566, env) {
 if (env->num_vars == 1) {
  // ((bruijn close-port 127 110) (close _V0with__input__from__file_k567) (bruijn port 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 127, 110)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__input__from__file_k567, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0with__input__from__file_k566, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__input__from__file_lambda56(VEnv * env) {
 V_GC_CHECK(_V0with__input__from__file_lambda56, env) {
  // ((bruijn current-input-port 126 107) (close _V0with__input__from__file_k566) (bruijn stdout 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 126, 107)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__input__from__file_k566, env)}),
      env->up->up->up->vars[2]
    );
 }
}
static void _V0with__input__from__file_k565(VEnv * env) {
 V_GC_CHECK(_V0with__input__from__file_k565, env) {
 if (env->num_vars == 1) {
  // ((close _V0with__input__from__file_lambda56) (bruijn ##k.1141 2 0) (bruijn ##x.1154 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0with__input__from__file_lambda56, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0with__input__from__file_k565, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__input__from__file_k564(VEnv * env) {
 V_GC_CHECK(_V0with__input__from__file_k564, env) {
 if (env->num_vars == 1) {
  // ((bruijn thunk 4 2) (close _V0with__input__from__file_k565))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__input__from__file_k565, env)})
    );
 } else {
  VError("Not enough arguments to _V0with__input__from__file_k564, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__input__from__file_lambda55(VEnv * env) {
 V_GC_CHECK(_V0with__input__from__file_lambda55, env) {
  // ((bruijn current-input-port 123 107) (close _V0with__input__from__file_k564) (bruijn port 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 123, 107)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__input__from__file_k564, env)}),
      env->vars[1]
    );
 }
}
static void _V0with__input__from__file_k563(VEnv * env) {
 V_GC_CHECK(_V0with__input__from__file_k563, env) {
 if (env->num_vars == 1) {
  // ((close _V0with__input__from__file_lambda55) (bruijn ##k.1139 2 0) (bruijn ##x.1155 1 0) (bruijn ##x.1156 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0with__input__from__file_lambda55, env)},
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0with__input__from__file_k563, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__input__from__file_k562(VEnv * env) {
 V_GC_CHECK(_V0with__input__from__file_k562, env) {
 if (env->num_vars == 1) {
  // ((bruijn current-input-port 121 107) (close _V0with__input__from__file_k563))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 121, 107)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__input__from__file_k563, env)})
    );
 } else {
  VError("Not enough arguments to _V0with__input__from__file_k562, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__input__from__file_lambda54(VEnv * env) {
 V_GC_CHECK(_V0with__input__from__file_lambda54, env) {
 if (env->num_vars == 3) {
  // ((bruijn open-input-file 120 108) (close _V0with__input__from__file_k562) (bruijn str 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 120, 108)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__input__from__file_k562, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0with__input__from__file_lambda54, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k133(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k133, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k134) (bruijn with-input-from-file 119 114) (close _V0with__input__from__file_lambda54))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k134, env)}),
      119, 114,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__input__from__file_lambda54, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k133, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__output__to__file_k573(VEnv * env) {
 V_GC_CHECK(_V0with__output__to__file_k573, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1164 2 0) (bruijn ret 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0with__output__to__file_k573, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__output__to__file_k572(VEnv * env) {
 V_GC_CHECK(_V0with__output__to__file_k572, env) {
 if (env->num_vars == 1) {
  // ((bruijn close-port 126 110) (close _V0with__output__to__file_k573) (bruijn port 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 126, 110)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__output__to__file_k573, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0with__output__to__file_k572, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__output__to__file_lambda59(VEnv * env) {
 V_GC_CHECK(_V0with__output__to__file_lambda59, env) {
  // ((bruijn current-output-port 125 105) (close _V0with__output__to__file_k572) (bruijn stdout 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 125, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__output__to__file_k572, env)}),
      env->up->up->up->vars[2]
    );
 }
}
static void _V0with__output__to__file_k571(VEnv * env) {
 V_GC_CHECK(_V0with__output__to__file_k571, env) {
 if (env->num_vars == 1) {
  // ((close _V0with__output__to__file_lambda59) (bruijn ##k.1159 2 0) (bruijn ##x.1172 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0with__output__to__file_lambda59, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0with__output__to__file_k571, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__output__to__file_k570(VEnv * env) {
 V_GC_CHECK(_V0with__output__to__file_k570, env) {
 if (env->num_vars == 1) {
  // ((bruijn thunk 4 2) (close _V0with__output__to__file_k571))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__output__to__file_k571, env)})
    );
 } else {
  VError("Not enough arguments to _V0with__output__to__file_k570, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__output__to__file_lambda58(VEnv * env) {
 V_GC_CHECK(_V0with__output__to__file_lambda58, env) {
  // ((bruijn current-output-port 122 105) (close _V0with__output__to__file_k570) (bruijn port 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 122, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__output__to__file_k570, env)}),
      env->vars[1]
    );
 }
}
static void _V0with__output__to__file_k569(VEnv * env) {
 V_GC_CHECK(_V0with__output__to__file_k569, env) {
 if (env->num_vars == 1) {
  // ((close _V0with__output__to__file_lambda58) (bruijn ##k.1157 2 0) (bruijn ##x.1173 1 0) (bruijn ##x.1174 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0with__output__to__file_lambda58, env)},
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0with__output__to__file_k569, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__output__to__file_k568(VEnv * env) {
 V_GC_CHECK(_V0with__output__to__file_k568, env) {
 if (env->num_vars == 1) {
  // ((bruijn current-output-port 120 105) (close _V0with__output__to__file_k569))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 120, 105)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__output__to__file_k569, env)})
    );
 } else {
  VError("Not enough arguments to _V0with__output__to__file_k568, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0with__output__to__file_lambda57(VEnv * env) {
 V_GC_CHECK(_V0with__output__to__file_lambda57, env) {
 if (env->num_vars == 3) {
  // ((bruijn open-output-file 119 109) (close _V0with__output__to__file_k568) (bruijn str 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 119, 109)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__output__to__file_k568, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0with__output__to__file_lambda57, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k132(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k132, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k133) (bruijn with-output-to-file 118 113) (close _V0with__output__to__file_lambda57))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k133, env)}),
      118, 113,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0with__output__to__file_lambda57, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k132, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k131(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k131, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k132) (bruijn get-output-string 117 112) ##sys.get-output-string)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k132, env)}),
      117, 112,
      VEncodeClosure((VClosure[]){VMakeClosure(VGetOutputString,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k131, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k130(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k130, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k131) (bruijn open-output-string 116 111) ##sys.open-output-string)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k131, env)}),
      116, 111,
      VEncodeClosure((VClosure[]){VMakeClosure(VOpenOutputString,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k130, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k129(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k129, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k130) (bruijn close-port 115 110) ##sys.close-stream)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k130, env)}),
      115, 110,
      VEncodeClosure((VClosure[]){VMakeClosure(VCloseStream,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k129, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k128(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k128, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k129) (bruijn open-output-file 114 109) ##sys.open-output-stream)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k129, env)}),
      114, 109,
      VEncodeClosure((VClosure[]){VMakeClosure(VOpenOutputStream,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k128, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k127(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k127, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k128) (bruijn open-input-file 113 108) ##sys.open-input-stream)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k128, env)}),
      113, 108,
      VEncodeClosure((VClosure[]){VMakeClosure(VOpenInputStream,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k127, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k126(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k126, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k127) (bruijn current-input-port 112 107) (bruijn ##x.1175 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k127, env)}),
      112, 107,
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k126, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k125(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k125, env) {
 if (env->num_vars == 1) {
  // ((close _V0vanity_V0core_V20_lambda16) (close _V0vanity_V0core_V20_k126) (bruijn ##x.1182 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_lambda16, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k126, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k125, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k124(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k124, env) {
 if (env->num_vars == 1) {
  // (##sys.dup-stdin (close _V0vanity_V0core_V20_k125))
    V_CALL_FUNC(VDupStdin,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k125, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k124, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k123(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k123, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k124) (bruijn current-error-port 109 106) (bruijn ##x.1183 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k124, env)}),
      109, 106,
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k123, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k122(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k122, env) {
 if (env->num_vars == 1) {
  // ((close _V0vanity_V0core_V20_lambda14) (close _V0vanity_V0core_V20_k123) (bruijn ##x.1190 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_lambda14, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k123, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k122, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k121(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k121, env) {
 if (env->num_vars == 1) {
  // (##sys.dup-stderr (close _V0vanity_V0core_V20_k122))
    V_CALL_FUNC(VDupStderr,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k122, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k121, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k120(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k120, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k121) (bruijn current-output-port 106 105) (bruijn ##x.1191 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k121, env)}),
      106, 105,
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k120, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k119(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k119, env) {
 if (env->num_vars == 1) {
  // ((close _V0vanity_V0core_V20_lambda12) (close _V0vanity_V0core_V20_k120) (bruijn ##x.1198 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_lambda12, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k120, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k119, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k118(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k118, env) {
 if (env->num_vars == 1) {
  // (##sys.dup-stdout (close _V0vanity_V0core_V20_k119))
    V_CALL_FUNC(VDupStdout,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k119, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k118, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k117(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k117, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k118) (bruijn char->integer 103 104) ##sys.char-integer)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k118, env)}),
      103, 104,
      VEncodeClosure((VClosure[]){VMakeClosure(VCharInt,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k117, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_k575(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_k575, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1203 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_k575, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k579(VEnv * env) {
 V_GC_CHECK(_V0loop_k579, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.1208 4 0) (bruijn ##x.1216 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k579, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k578(VEnv * env) {
 V_GC_CHECK(_V0loop_k578, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 110 28) (close _V0loop_k579) (bruijn i 3 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 110, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k579, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k578, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k577(VEnv * env) {
 V_GC_CHECK(_V0loop_k577, env) {
 if (env->num_vars == 1) {
  // ((bruijn f 6 1) (close _V0loop_k578) (bruijn ##x.1217 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k578, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k577, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k576(VEnv * env) {
 V_GC_CHECK(_V0loop_k576, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1210 0 0) ((bruijn vector-ref 108 100) (close _V0loop_k577) (bruijn xs 5 2) (bruijn i 1 1)) ((bruijn ##k.1208 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 108, 100)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k577, env)}),
      VGetArg(env, 5, 2),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k576, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda63(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda63, env) {
 if (env->num_vars == 2) {
  // ((bruijn < 107 19) (close _V0loop_k576) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 107, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k576, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda63, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_lambda62(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_lambda62, env) {
  // (set! (close _V0vector__for__each_k575) (bruijn loop 0 1) (close _V0loop_lambda63))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_k575, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda63, env)})
    );
 }
}
static void _V0vector__for__each_lambda61(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_lambda61, env) {
  // ((close _V0vector__for__each_lambda62) (bruijn ##k.1201 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vector__for__each_lambda62, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k574(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_k574, env) {
 if (env->num_vars == 1) {
  // ((close _V0vector__for__each_lambda61) (bruijn ##k.1199 1 0) (bruijn ##x.1220 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vector__for__each_lambda61, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_k574, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_k581(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_k581, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1225 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_k581, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k586(VEnv * env) {
 V_GC_CHECK(_V0loop_k586, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.1230 5 0) (bruijn ##x.1238 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k586, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k585(VEnv * env) {
 V_GC_CHECK(_V0loop_k585, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 111 28) (close _V0loop_k586) (bruijn i 4 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 111, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k586, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k585, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k584(VEnv * env) {
 V_GC_CHECK(_V0loop_k584, env) {
 if (env->num_vars == 1) {
  // ((bruijn f 7 1) (close _V0loop_k585) (bruijn ##x.1239 1 0) (bruijn ##x.1240 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k585, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k584, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k583(VEnv * env) {
 V_GC_CHECK(_V0loop_k583, env) {
 if (env->num_vars == 1) {
  // ((bruijn vector-ref 109 100) (close _V0loop_k584) (bruijn ys 6 3) (bruijn i 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 109, 100)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k584, env)}),
      VGetArg(env, 6, 3),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k583, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k582(VEnv * env) {
 V_GC_CHECK(_V0loop_k582, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1232 0 0) ((bruijn vector-ref 108 100) (close _V0loop_k583) (bruijn xs 5 2) (bruijn i 1 1)) ((bruijn ##k.1230 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 108, 100)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k583, env)}),
      VGetArg(env, 5, 2),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k582, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda66(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda66, env) {
 if (env->num_vars == 2) {
  // ((bruijn < 107 19) (close _V0loop_k582) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 107, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k582, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda66, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_lambda65(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_lambda65, env) {
  // (set! (close _V0vector__for__each_k581) (bruijn loop 0 1) (close _V0loop_lambda66))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_k581, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda66, env)})
    );
 }
}
static void _V0vector__for__each_lambda64(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_lambda64, env) {
  // ((close _V0vector__for__each_lambda65) (bruijn ##k.1223 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vector__for__each_lambda65, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k580(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_k580, env) {
 if (env->num_vars == 1) {
  // ((close _V0vector__for__each_lambda64) (bruijn ##k.1221 1 0) (bruijn ##x.1243 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vector__for__each_lambda64, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_k580, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_k588(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_k588, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1248 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_k588, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k594(VEnv * env) {
 V_GC_CHECK(_V0loop_k594, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 7 1) (bruijn ##k.1253 6 0) (bruijn ##x.1261 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k594, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k593(VEnv * env) {
 V_GC_CHECK(_V0loop_k593, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 112 28) (close _V0loop_k594) (bruijn i 5 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 112, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k594, env)}),
      VGetArg(env, 5, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k593, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k592(VEnv * env) {
 V_GC_CHECK(_V0loop_k592, env) {
 if (env->num_vars == 1) {
  // ((bruijn f 8 1) (close _V0loop_k593) (bruijn ##x.1262 2 0) (bruijn ##x.1263 1 0) (bruijn ##x.1264 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k593, env)}),
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k592, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k591(VEnv * env) {
 V_GC_CHECK(_V0loop_k591, env) {
 if (env->num_vars == 1) {
  // ((bruijn vector-ref 110 100) (close _V0loop_k592) (bruijn zs 7 4) (bruijn i 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 110, 100)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k592, env)}),
      VGetArg(env, 7, 4),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k591, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k590(VEnv * env) {
 V_GC_CHECK(_V0loop_k590, env) {
 if (env->num_vars == 1) {
  // ((bruijn vector-ref 109 100) (close _V0loop_k591) (bruijn ys 6 3) (bruijn i 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 109, 100)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k591, env)}),
      VGetArg(env, 6, 3),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k590, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k589(VEnv * env) {
 V_GC_CHECK(_V0loop_k589, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1255 0 0) ((bruijn vector-ref 108 100) (close _V0loop_k590) (bruijn xs 5 2) (bruijn i 1 1)) ((bruijn ##k.1253 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 108, 100)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k590, env)}),
      VGetArg(env, 5, 2),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k589, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda69(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda69, env) {
 if (env->num_vars == 2) {
  // ((bruijn < 107 19) (close _V0loop_k589) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 107, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k589, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda69, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_lambda68(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_lambda68, env) {
  // (set! (close _V0vector__for__each_k588) (bruijn loop 0 1) (close _V0loop_lambda69))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_k588, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda69, env)})
    );
 }
}
static void _V0vector__for__each_lambda67(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_lambda67, env) {
  // ((close _V0vector__for__each_lambda68) (bruijn ##k.1246 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vector__for__each_lambda68, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k587(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_k587, env) {
 if (env->num_vars == 1) {
  // ((close _V0vector__for__each_lambda67) (bruijn ##k.1244 1 0) (bruijn ##x.1267 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vector__for__each_lambda67, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_k587, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_k597(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_k597, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1272 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_k597, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k601(VEnv * env) {
 V_GC_CHECK(_V0loop_k601, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.1277 4 0) (bruijn ##x.1285 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k601, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k600(VEnv * env) {
 V_GC_CHECK(_V0loop_k600, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 111 28) (close _V0loop_k601) (bruijn i 3 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 111, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k601, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k600, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k599(VEnv * env) {
 V_GC_CHECK(_V0loop_k599, env) {
 if (env->num_vars == 1) {
  // ((bruijn apply 110 125) (close _V0loop_k600) (bruijn f 7 1) (bruijn ##x.1286 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 110, 125)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k600, env)}),
      VGetArg(env, 7, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k599, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda73(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda73, env) {
 if (env->num_vars == 2) {
  // ((bruijn vector-ref 110 100) (bruijn ##k.1287 0 0) (bruijn vec 0 1) (bruijn i 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 110, 100)),
      env->vars[0],
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda73, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k598(VEnv * env) {
 V_GC_CHECK(_V0loop_k598, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1279 0 0) ((bruijn map 109 72) (close _V0loop_k599) (close _V0loop_lambda73) (bruijn vecs 6 2)) ((bruijn ##k.1277 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 109, 72)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k599, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda73, env)}),
      VGetArg(env, 6, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k598, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda72(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda72, env) {
 if (env->num_vars == 2) {
  // ((bruijn < 108 19) (close _V0loop_k598) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 108, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k598, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda72, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_lambda71(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_lambda71, env) {
  // (set! (close _V0vector__for__each_k597) (bruijn loop 0 1) (close _V0loop_lambda72))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_k597, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda72, env)})
    );
 }
}
static void _V0vector__for__each_lambda70(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_lambda70, env) {
  // ((close _V0vector__for__each_lambda71) (bruijn ##k.1270 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vector__for__each_lambda71, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0vector__for__each_k596(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_k596, env) {
 if (env->num_vars == 1) {
  // ((close _V0vector__for__each_lambda70) (bruijn ##k.1268 2 0) (bruijn ##x.1291 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vector__for__each_lambda70, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_k596, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_k595(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_k595, env) {
 if (env->num_vars == 1) {
  // ((bruijn vector-length 104 102) (close _V0vector__for__each_k596) (bruijn ##x.1292 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 104, 102)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_k596, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_k595, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vector__for__each_lambda60(VEnv * env) {
 V_GC_CHECK(_V0vector__for__each_lambda60, env) {
 if (env->num_vars == 3) {
  // ((bruijn vector-length 103 102) (close _V0vector__for__each_k574) (bruijn xs 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 103, 102)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_k574, env)}),
      env->vars[2]
    );
 } else if (env->num_vars == 4) {
  // ((bruijn vector-length 103 102) (close _V0vector__for__each_k580) (bruijn xs 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 103, 102)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_k580, env)}),
      env->vars[2]
    );
 } else if (env->num_vars == 5) {
  // ((bruijn vector-length 103 102) (close _V0vector__for__each_k587) (bruijn xs 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 103, 102)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_k587, env)}),
      env->vars[2]
    );
 } else if (env->num_vars >= 2) {
  // ((bruijn car 103 37) (close _V0vector__for__each_k595) (bruijn vecs 0 2))
  V_GATHER_VARARGS(&env, 2);
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 103, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_k595, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0vector__for__each_lambda60, got ~D~N"
  "-- expected 3~N"
  "-- expected 4~N"
  "-- expected 5~N"
  "-- expected 2 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k116(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k116, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k117) (bruijn vector-for-each 102 103) (close _V0vector__for__each_lambda60))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k117, env)}),
      102, 103,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector__for__each_lambda60, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k116, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k115(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k115, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k116) (bruijn vector-length 101 102) ##sys.vector-length)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k116, env)}),
      101, 102,
      VEncodeClosure((VClosure[]){VMakeClosure(VVectorLength,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k115, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k114(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k114, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k115) (bruijn vector-set! 100 101) ##sys.vector-set!)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k115, env)}),
      100, 101,
      VEncodeClosure((VClosure[]){VMakeClosure(VVectorSet,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k114, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k113(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k113, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k114) (bruijn vector-ref 99 100) ##sys.vector-ref)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k114, env)}),
      99, 100,
      VEncodeClosure((VClosure[]){VMakeClosure(VVectorRef,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k113, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vector_lambda74(VEnv * env) {
 V_GC_CHECK(_V0vector_lambda74, env) {
 if (env->num_vars >= 1) {
  // ((bruijn list->vector 99 98) (bruijn ##k.1293 0 0) (bruijn args 0 1))
  V_GATHER_VARARGS(&env, 1);
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 99, 98)),
      env->vars[0],
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0vector_lambda74, got ~D~N"
  "-- expected 1 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k112(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k112, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k113) (bruijn vector 98 99) (close _V0vector_lambda74))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k113, env)}),
      98, 99,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vector_lambda74, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k112, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k111(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k111, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k112) (bruijn list->vector 97 98) ##sys.list->vector)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k112, env)}),
      97, 98,
      VEncodeClosure((VClosure[]){VMakeClosure(VListVector,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k111, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k608(VEnv * env) {
 V_GC_CHECK(_V0string__append_k608, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1303 3 0) (bruijn str 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k608, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k607(VEnv * env) {
 V_GC_CHECK(_V0string__append_k607, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-copy! 105 88) (close _V0string__append_k608) (bruijn str 2 1) (bruijn ##x.1311 0 0) (bruijn b 8 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 105, 88)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k608, env)}),
      env->up->up->vars[1],
      env->vars[0],
      VGetArg(env, 8, 2)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k607, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k606(VEnv * env) {
 V_GC_CHECK(_V0string__append_k606, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 104 91) (close _V0string__append_k607) (bruijn a 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 104, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k607, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k606, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_lambda77(VEnv * env) {
 V_GC_CHECK(_V0string__append_lambda77, env) {
  // ((bruijn string-copy! 103 88) (close _V0string__append_k606) (bruijn str 0 1) 0 (bruijn a 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 103, 88)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k606, env)}),
      env->vars[1],
      VEncodeInt(0l),
      VGetArg(env, 6, 1)
    );
 }
}
static void _V0string__append_k605(VEnv * env) {
 V_GC_CHECK(_V0string__append_k605, env) {
 if (env->num_vars == 1) {
  // ((close _V0string__append_lambda77) (bruijn ##k.1301 1 0) (bruijn ##x.1312 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0string__append_lambda77, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k605, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_lambda76(VEnv * env) {
 V_GC_CHECK(_V0string__append_lambda76, env) {
  // ((bruijn make-string 101 85) (close _V0string__append_k605) (bruijn len 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 101, 85)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k605, env)}),
      env->vars[1]
    );
 }
}
static void _V0string__append_k604(VEnv * env) {
 V_GC_CHECK(_V0string__append_k604, env) {
 if (env->num_vars == 1) {
  // ((close _V0string__append_lambda76) (bruijn ##k.1299 3 0) (bruijn ##x.1313 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0string__append_lambda76, env)},
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k604, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k603(VEnv * env) {
 V_GC_CHECK(_V0string__append_k603, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 99 28) (close _V0string__append_k604) (bruijn ##x.1314 1 0) (bruijn ##x.1315 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 99, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k604, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k603, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k602(VEnv * env) {
 V_GC_CHECK(_V0string__append_k602, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 98 91) (close _V0string__append_k603) (bruijn b 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 98, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k603, env)}),
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k602, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k620(VEnv * env) {
 V_GC_CHECK(_V0string__append_k620, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1320 7 0) (bruijn str 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k620, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k619(VEnv * env) {
 V_GC_CHECK(_V0string__append_k619, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-copy! 110 88) (close _V0string__append_k620) (bruijn str 6 1) (bruijn ##x.1331 0 0) (bruijn c 13 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 110, 88)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k620, env)}),
      VGetArg(env, 6, 1),
      env->vars[0],
      VGetArg(env, 13, 3)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k619, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k618(VEnv * env) {
 V_GC_CHECK(_V0string__append_k618, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 109 28) (close _V0string__append_k619) (bruijn ##x.1332 1 0) (bruijn ##x.1333 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 109, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k619, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k618, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k617(VEnv * env) {
 V_GC_CHECK(_V0string__append_k617, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 108 91) (close _V0string__append_k618) (bruijn b 11 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 108, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k618, env)}),
      VGetArg(env, 11, 2)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k617, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k616(VEnv * env) {
 V_GC_CHECK(_V0string__append_k616, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 107 91) (close _V0string__append_k617) (bruijn a 10 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 107, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k617, env)}),
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k616, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k615(VEnv * env) {
 V_GC_CHECK(_V0string__append_k615, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-copy! 106 88) (close _V0string__append_k616) (bruijn str 2 1) (bruijn ##x.1334 0 0) (bruijn b 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 106, 88)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k616, env)}),
      env->up->up->vars[1],
      env->vars[0],
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k615, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k614(VEnv * env) {
 V_GC_CHECK(_V0string__append_k614, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 105 91) (close _V0string__append_k615) (bruijn a 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 105, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k615, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k614, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_lambda79(VEnv * env) {
 V_GC_CHECK(_V0string__append_lambda79, env) {
  // ((bruijn string-copy! 104 88) (close _V0string__append_k614) (bruijn str 0 1) 0 (bruijn a 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 104, 88)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k614, env)}),
      env->vars[1],
      VEncodeInt(0l),
      VGetArg(env, 7, 1)
    );
 }
}
static void _V0string__append_k613(VEnv * env) {
 V_GC_CHECK(_V0string__append_k613, env) {
 if (env->num_vars == 1) {
  // ((close _V0string__append_lambda79) (bruijn ##k.1318 1 0) (bruijn ##x.1335 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0string__append_lambda79, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k613, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_lambda78(VEnv * env) {
 V_GC_CHECK(_V0string__append_lambda78, env) {
  // ((bruijn make-string 102 85) (close _V0string__append_k613) (bruijn len 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 102, 85)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k613, env)}),
      env->vars[1]
    );
 }
}
static void _V0string__append_k612(VEnv * env) {
 V_GC_CHECK(_V0string__append_k612, env) {
 if (env->num_vars == 1) {
  // ((close _V0string__append_lambda78) (bruijn ##k.1316 4 0) (bruijn ##x.1336 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0string__append_lambda78, env)},
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k612, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k611(VEnv * env) {
 V_GC_CHECK(_V0string__append_k611, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 100 28) (close _V0string__append_k612) (bruijn ##x.1337 2 0) (bruijn ##x.1338 1 0) (bruijn ##x.1339 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 100, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k612, env)}),
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k611, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k610(VEnv * env) {
 V_GC_CHECK(_V0string__append_k610, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 99 91) (close _V0string__append_k611) (bruijn c 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 99, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k611, env)}),
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k610, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k609(VEnv * env) {
 V_GC_CHECK(_V0string__append_k609, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 98 91) (close _V0string__append_k610) (bruijn b 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 98, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k610, env)}),
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k609, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k638(VEnv * env) {
 V_GC_CHECK(_V0string__append_k638, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1344 12 0) (bruijn str 12 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 0)),
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k638, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k637(VEnv * env) {
 V_GC_CHECK(_V0string__append_k637, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-copy! 116 88) (close _V0string__append_k638) (bruijn str 11 1) (bruijn ##x.1358 0 0) (bruijn d 19 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 116, 88)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k638, env)}),
      VGetArg(env, 11, 1),
      env->vars[0],
      VGetArg(env, 19, 4)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k637, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k636(VEnv * env) {
 V_GC_CHECK(_V0string__append_k636, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 115 28) (close _V0string__append_k637) (bruijn ##x.1359 2 0) (bruijn ##x.1360 1 0) (bruijn ##x.1361 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 115, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k637, env)}),
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k636, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k635(VEnv * env) {
 V_GC_CHECK(_V0string__append_k635, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 114 91) (close _V0string__append_k636) (bruijn c 17 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 114, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k636, env)}),
      VGetArg(env, 17, 3)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k635, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k634(VEnv * env) {
 V_GC_CHECK(_V0string__append_k634, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 113 91) (close _V0string__append_k635) (bruijn b 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 113, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k635, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k634, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k633(VEnv * env) {
 V_GC_CHECK(_V0string__append_k633, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 112 91) (close _V0string__append_k634) (bruijn a 15 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 112, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k634, env)}),
      VGetArg(env, 15, 1)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k633, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k632(VEnv * env) {
 V_GC_CHECK(_V0string__append_k632, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-copy! 111 88) (close _V0string__append_k633) (bruijn str 6 1) (bruijn ##x.1362 0 0) (bruijn c 14 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 111, 88)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k633, env)}),
      VGetArg(env, 6, 1),
      env->vars[0],
      VGetArg(env, 14, 3)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k632, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k631(VEnv * env) {
 V_GC_CHECK(_V0string__append_k631, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 110 28) (close _V0string__append_k632) (bruijn ##x.1363 1 0) (bruijn ##x.1364 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 110, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k632, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k631, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k630(VEnv * env) {
 V_GC_CHECK(_V0string__append_k630, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 109 91) (close _V0string__append_k631) (bruijn b 12 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 109, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k631, env)}),
      VGetArg(env, 12, 2)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k630, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k629(VEnv * env) {
 V_GC_CHECK(_V0string__append_k629, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 108 91) (close _V0string__append_k630) (bruijn a 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 108, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k630, env)}),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k629, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k628(VEnv * env) {
 V_GC_CHECK(_V0string__append_k628, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-copy! 107 88) (close _V0string__append_k629) (bruijn str 2 1) (bruijn ##x.1365 0 0) (bruijn b 10 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 107, 88)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k629, env)}),
      env->up->up->vars[1],
      env->vars[0],
      VGetArg(env, 10, 2)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k628, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k627(VEnv * env) {
 V_GC_CHECK(_V0string__append_k627, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 106 91) (close _V0string__append_k628) (bruijn a 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 106, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k628, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0string__append_k627, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_lambda81(VEnv * env) {
 V_GC_CHECK(_V0string__append_lambda81, env) {
  // ((bruijn string-copy! 105 88) (close _V0string__append_k627) (bruijn str 0 1) 0 (bruijn a 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 105, 88)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k627, env)}),
      env->vars[1],
      VEncodeInt(0l),
      VGetArg(env, 8, 1)
    );
 }
}
static void _V0string__append_k626(VEnv * env) {
 V_GC_CHECK(_V0string__append_k626, env) {
 if (env->num_vars == 1) {
  // ((close _V0string__append_lambda81) (bruijn ##k.1342 1 0) (bruijn ##x.1366 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0string__append_lambda81, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k626, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_lambda80(VEnv * env) {
 V_GC_CHECK(_V0string__append_lambda80, env) {
  // ((bruijn make-string 103 85) (close _V0string__append_k626) (bruijn len 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 103, 85)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k626, env)}),
      env->vars[1]
    );
 }
}
static void _V0string__append_k625(VEnv * env) {
 V_GC_CHECK(_V0string__append_k625, env) {
 if (env->num_vars == 1) {
  // ((close _V0string__append_lambda80) (bruijn ##k.1340 5 0) (bruijn ##x.1367 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0string__append_lambda80, env)},
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k625, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k624(VEnv * env) {
 V_GC_CHECK(_V0string__append_k624, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 101 28) (close _V0string__append_k625) (bruijn ##x.1368 3 0) (bruijn ##x.1369 2 0) (bruijn ##x.1370 1 0) (bruijn ##x.1371 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 101, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k625, env)}),
      env->up->up->up->vars[0],
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k624, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k623(VEnv * env) {
 V_GC_CHECK(_V0string__append_k623, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 100 91) (close _V0string__append_k624) (bruijn d 3 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 100, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k624, env)}),
      env->up->up->up->vars[4]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k623, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k622(VEnv * env) {
 V_GC_CHECK(_V0string__append_k622, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 99 91) (close _V0string__append_k623) (bruijn c 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 99, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k623, env)}),
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k622, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_k621(VEnv * env) {
 V_GC_CHECK(_V0string__append_k621, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 98 91) (close _V0string__append_k622) (bruijn b 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 98, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k622, env)}),
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0string__append_k621, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string__append_lambda75(VEnv * env) {
 V_GC_CHECK(_V0string__append_lambda75, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-copy 97 87) (bruijn ##k.1295 0 0) (##string ##string.2597))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 97, 87)),
      env->vars[0],
      VEncodePointer(&_V10string_D2597.sym, VPOINTER_OTHER)
    );
 } else if (env->num_vars == 2) {
  // ((bruijn string-copy 97 87) (bruijn ##k.1297 0 0) (bruijn a 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 97, 87)),
      env->vars[0],
      env->vars[1]
    );
 } else if (env->num_vars == 3) {
  // ((bruijn string-length 97 91) (close _V0string__append_k602) (bruijn a 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 97, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k602, env)}),
      env->vars[1]
    );
 } else if (env->num_vars == 4) {
  // ((bruijn string-length 97 91) (close _V0string__append_k609) (bruijn a 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 97, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k609, env)}),
      env->vars[1]
    );
 } else if (env->num_vars == 5) {
  // ((bruijn string-length 97 91) (close _V0string__append_k621) (bruijn a 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 97, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_k621, env)}),
      env->vars[1]
    );
 } else if (env->num_vars >= 1) {
  // ((bruijn fold-right 97 76) (bruijn ##k.1372 0 0) (bruijn string-append 97 97) (##string ##string.2597) (bruijn strs 0 1))
  V_GATHER_VARARGS(&env, 1);
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 97, 76)),
      env->vars[0],
      VGetArg(env, 97, 97),
      VEncodePointer(&_V10string_D2597.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0string__append_lambda75, got ~D~N"
  "-- expected 1~N"
  "-- expected 2~N"
  "-- expected 3~N"
  "-- expected 4~N"
  "-- expected 5~N"
  "-- expected 1 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k110(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k110, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k111) (bruijn string-append 96 97) (close _V0string__append_lambda75))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k111, env)}),
      96, 97,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string__append_lambda75, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k110, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string___Glist_k641(VEnv * env) {
 V_GC_CHECK(_V0string___Glist_k641, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.1376 3 0) (bruijn ##x.1381 0 0) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0],
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0string___Glist_k641, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string___Glist_k640(VEnv * env) {
 V_GC_CHECK(_V0string___Glist_k640, env) {
 if (env->num_vars == 1) {
  // ((bruijn - 99 29) (close _V0string___Glist_k641) (bruijn ##x.1382 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 99, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string___Glist_k641, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0string___Glist_k640, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0string___Glist_k639(VEnv * env) {
 V_GC_CHECK(_V0string___Glist_k639, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 98 91) (close _V0string___Glist_k640) (bruijn str 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 98, 91)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string___Glist_k640, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0string___Glist_k639, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k645(VEnv * env) {
 V_GC_CHECK(_V0loop_k645, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.1383 4 0) (bruijn ##x.1390 2 0) (bruijn ##x.1391 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k645, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k644(VEnv * env) {
 V_GC_CHECK(_V0loop_k644, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 101 36) (close _V0loop_k645) (bruijn ##x.1392 0 0) (bruijn acc 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 101, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k645, env)}),
      env->vars[0],
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k644, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k643(VEnv * env) {
 V_GC_CHECK(_V0loop_k643, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-ref 100 89) (close _V0loop_k644) (bruijn str 4 1) (bruijn i 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 100, 89)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k644, env)}),
      VGetArg(env, 4, 1),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k643, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k642(VEnv * env) {
 V_GC_CHECK(_V0loop_k642, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1385 0 0) ((bruijn ##k.1383 1 0) (bruijn acc 1 2)) ((bruijn - 99 29) (close _V0loop_k643) (bruijn i 1 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 99, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k643, env)}),
      env->up->vars[1],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k642, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda84(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda84, env) {
 if (env->num_vars == 3) {
  // ((bruijn eq? 98 14) (close _V0loop_k642) (bruijn i 0 1) -1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 98, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k642, env)}),
      env->vars[1],
      VEncodeInt(-1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda84, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0string___Glist_lambda83(VEnv * env) {
 V_GC_CHECK(_V0string___Glist_lambda83, env) {
  // (set! (close _V0string___Glist_k639) (bruijn loop 0 1) (close _V0loop_lambda84))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string___Glist_k639, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda84, env)})
    );
 }
}
static void _V0string___Glist_lambda82(VEnv * env) {
 V_GC_CHECK(_V0string___Glist_lambda82, env) {
 if (env->num_vars == 2) {
  // ((close _V0string___Glist_lambda83) (bruijn ##k.1374 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0string___Glist_lambda83, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0string___Glist_lambda82, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k109(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k109, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k110) (bruijn string->list 95 96) (close _V0string___Glist_lambda82))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k110, env)}),
      95, 96,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0string___Glist_lambda82, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k109, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list___Gstring_k648(VEnv * env) {
 V_GC_CHECK(_V0list___Gstring_k648, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1397 1 0) (bruijn lst 5 1) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 5, 1),
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0list___Gstring_k648, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k653(VEnv * env) {
 V_GC_CHECK(_V0loop_k653, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.1402 5 0) (bruijn ##x.1412 1 0) (bruijn ##x.1413 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k653, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k652(VEnv * env) {
 V_GC_CHECK(_V0loop_k652, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 104 28) (close _V0loop_k653) (bruijn i 4 2) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 104, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k653, env)}),
      VGetArg(env, 4, 2),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k652, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k651(VEnv * env) {
 V_GC_CHECK(_V0loop_k651, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 103 38) (close _V0loop_k652) (bruijn lst 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 103, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k652, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k651, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k650(VEnv * env) {
 V_GC_CHECK(_V0loop_k650, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-set! 102 90) (close _V0loop_k651) (bruijn str 4 1) (bruijn i 2 2) (bruijn ##x.1414 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 102, 90)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k651, env)}),
      VGetArg(env, 4, 1),
      env->up->up->vars[2],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k650, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k649(VEnv * env) {
 V_GC_CHECK(_V0loop_k649, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1404 0 0) ((bruijn ##k.1402 1 0) (bruijn str 3 1)) ((bruijn car 101 37) (close _V0loop_k650) (bruijn lst 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 101, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k650, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k649, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda88(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda88, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 100 1) (close _V0loop_k649) (bruijn lst 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 100, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k649, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda88, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0list___Gstring_lambda87(VEnv * env) {
 V_GC_CHECK(_V0list___Gstring_lambda87, env) {
  // (set! (close _V0list___Gstring_k648) (bruijn loop 0 1) (close _V0loop_lambda88))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list___Gstring_k648, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda88, env)})
    );
 }
}
static void _V0list___Gstring_lambda86(VEnv * env) {
 V_GC_CHECK(_V0list___Gstring_lambda86, env) {
  // ((close _V0list___Gstring_lambda87) (bruijn ##k.1395 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0list___Gstring_lambda87, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0list___Gstring_k647(VEnv * env) {
 V_GC_CHECK(_V0list___Gstring_k647, env) {
 if (env->num_vars == 1) {
  // ((close _V0list___Gstring_lambda86) (bruijn ##k.1393 2 0) (bruijn ##x.1415 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0list___Gstring_lambda86, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0list___Gstring_k647, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list___Gstring_k646(VEnv * env) {
 V_GC_CHECK(_V0list___Gstring_k646, env) {
 if (env->num_vars == 1) {
  // ((bruijn make-string 96 85) (close _V0list___Gstring_k647) (bruijn ##x.1416 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 96, 85)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list___Gstring_k647, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0list___Gstring_k646, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list___Gstring_lambda85(VEnv * env) {
 V_GC_CHECK(_V0list___Gstring_lambda85, env) {
 if (env->num_vars == 2) {
  // ((bruijn length 95 70) (close _V0list___Gstring_k646) (bruijn lst 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 95, 70)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list___Gstring_k646, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0list___Gstring_lambda85, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k108(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k108, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k109) (bruijn list->string 94 95) (close _V0list___Gstring_lambda85))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k109, env)}),
      94, 95,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list___Gstring_lambda85, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k108, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k107(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k107, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k108) (bruijn symbol->string 93 94) ##sys.symbol->string)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k108, env)}),
      93, 94,
      VEncodeClosure((VClosure[]){VMakeClosure(VSymbolString,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k107, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k106(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k106, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k107) (bruijn string->number 92 93) ##sys.string->number)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k107, env)}),
      92, 93,
      VEncodeClosure((VClosure[]){VMakeClosure(VStringNumber,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k106, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k105(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k105, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k106) (bruijn string->symbol 91 92) ##sys.string->symbol)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k106, env)}),
      91, 92,
      VEncodeClosure((VClosure[]){VMakeClosure(VStringSymbol,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k105, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k104(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k104, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k105) (bruijn string-length 90 91) ##sys.string-length)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k105, env)}),
      90, 91,
      VEncodeClosure((VClosure[]){VMakeClosure(VStringLength,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k104, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k103(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k103, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k104) (bruijn string-set! 89 90) ##sys.string-set!)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k104, env)}),
      89, 90,
      VEncodeClosure((VClosure[]){VMakeClosure(VStringSet,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k103, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k102(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k102, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k103) (bruijn string-ref 88 89) ##sys.string-ref)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k103, env)}),
      88, 89,
      VEncodeClosure((VClosure[]){VMakeClosure(VStringRef,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k102, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k101(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k101, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k102) (bruijn string-copy! 87 88) ##sys.string-copy!)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k102, env)}),
      87, 88,
      VEncodeClosure((VClosure[]){VMakeClosure(VStringCopy,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k101, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k100(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k100, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k101) (bruijn string-copy 86 87) ##sys.substring)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k101, env)}),
      86, 87,
      VEncodeClosure((VClosure[]){VMakeClosure(VSubstring,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k100, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k99(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k99, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k100) (bruijn substring 85 86) ##sys.substring)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k100, env)}),
      85, 86,
      VEncodeClosure((VClosure[]){VMakeClosure(VSubstring,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k99, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k98(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k98, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k99) (bruijn make-string 84 85) ##sys.make-string)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k99, env)}),
      84, 85,
      VEncodeClosure((VClosure[]){VMakeClosure(VMakeString,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k98, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assoc_k657(VEnv * env) {
 V_GC_CHECK(_V0assoc_k657, env) {
 if (env->num_vars == 1) {
  // ((bruijn assoc 88 84) (bruijn ##k.1417 4 0) (bruijn x 4 1) (bruijn ##x.1429 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 88, 84)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0assoc_k657, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assoc_k656(VEnv * env) {
 V_GC_CHECK(_V0assoc_k656, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1424 0 0) ((bruijn car 87 37) (bruijn ##k.1417 3 0) (bruijn alst 3 2)) ((bruijn cdr 87 38) (close _V0assoc_k657) (bruijn alst 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 87, 37)),
      env->up->up->up->vars[0],
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 87, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assoc_k657, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0assoc_k656, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assoc_k655(VEnv * env) {
 V_GC_CHECK(_V0assoc_k655, env) {
 if (env->num_vars == 1) {
  // ((bruijn equal? 86 17) (close _V0assoc_k656) (bruijn x 2 1) (bruijn ##x.1430 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 86, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assoc_k656, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0assoc_k655, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assoc_k654(VEnv * env) {
 V_GC_CHECK(_V0assoc_k654, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1419 0 0) ((bruijn ##k.1417 1 0) #f) ((bruijn caar 85 41) (close _V0assoc_k655) (bruijn alst 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 85, 41)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assoc_k655, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0assoc_k654, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assoc_lambda89(VEnv * env) {
 V_GC_CHECK(_V0assoc_lambda89, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 84 1) (close _V0assoc_k654) (bruijn alst 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 84, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assoc_k654, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0assoc_lambda89, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k97(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k97, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k98) (bruijn assoc 83 84) (close _V0assoc_lambda89))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k98, env)}),
      83, 84,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assoc_lambda89, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k97, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assv_k661(VEnv * env) {
 V_GC_CHECK(_V0assv_k661, env) {
 if (env->num_vars == 1) {
  // ((bruijn assv 87 83) (bruijn ##k.1431 4 0) (bruijn x 4 1) (bruijn ##x.1443 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 87, 83)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0assv_k661, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assv_k660(VEnv * env) {
 V_GC_CHECK(_V0assv_k660, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1438 0 0) ((bruijn car 86 37) (bruijn ##k.1431 3 0) (bruijn alst 3 2)) ((bruijn cdr 86 38) (close _V0assv_k661) (bruijn alst 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 86, 37)),
      env->up->up->up->vars[0],
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 86, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assv_k661, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0assv_k660, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assv_k659(VEnv * env) {
 V_GC_CHECK(_V0assv_k659, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 85 16) (close _V0assv_k660) (bruijn x 2 1) (bruijn ##x.1444 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 85, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assv_k660, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0assv_k659, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assv_k658(VEnv * env) {
 V_GC_CHECK(_V0assv_k658, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1433 0 0) ((bruijn ##k.1431 1 0) #f) ((bruijn caar 84 41) (close _V0assv_k659) (bruijn alst 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 84, 41)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assv_k659, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0assv_k658, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assv_lambda90(VEnv * env) {
 V_GC_CHECK(_V0assv_lambda90, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 83 1) (close _V0assv_k658) (bruijn alst 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 83, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assv_k658, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0assv_lambda90, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k96(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k96, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k97) (bruijn assv 82 83) (close _V0assv_lambda90))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k97, env)}),
      82, 83,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assv_lambda90, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k96, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assq_k665(VEnv * env) {
 V_GC_CHECK(_V0assq_k665, env) {
 if (env->num_vars == 1) {
  // ((bruijn assq 86 82) (bruijn ##k.1445 4 0) (bruijn x 4 1) (bruijn ##x.1457 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 86, 82)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0assq_k665, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assq_k664(VEnv * env) {
 V_GC_CHECK(_V0assq_k664, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1452 0 0) ((bruijn car 85 37) (bruijn ##k.1445 3 0) (bruijn alst 3 2)) ((bruijn cdr 85 38) (close _V0assq_k665) (bruijn alst 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 85, 37)),
      env->up->up->up->vars[0],
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 85, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assq_k665, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0assq_k664, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assq_k663(VEnv * env) {
 V_GC_CHECK(_V0assq_k663, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 84 14) (close _V0assq_k664) (bruijn x 2 1) (bruijn ##x.1458 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 84, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assq_k664, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0assq_k663, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assq_k662(VEnv * env) {
 V_GC_CHECK(_V0assq_k662, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1447 0 0) ((bruijn ##k.1445 1 0) #f) ((bruijn caar 83 41) (close _V0assq_k663) (bruijn alst 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 83, 41)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assq_k663, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0assq_k662, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0assq_lambda91(VEnv * env) {
 V_GC_CHECK(_V0assq_lambda91, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 82 1) (close _V0assq_k662) (bruijn alst 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 82, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assq_k662, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0assq_lambda91, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k95(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k95, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k96) (bruijn assq 81 82) (close _V0assq_lambda91))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k96, env)}),
      81, 82,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0assq_lambda91, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k95, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0member_k669(VEnv * env) {
 V_GC_CHECK(_V0member_k669, env) {
 if (env->num_vars == 1) {
  // ((bruijn member 85 81) (bruijn ##k.1459 4 0) (bruijn x 4 1) (bruijn ##x.1471 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 85, 81)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0member_k669, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0member_k668(VEnv * env) {
 V_GC_CHECK(_V0member_k668, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1466 0 0) ((bruijn ##k.1459 3 0) (bruijn lst 3 2)) ((bruijn cdr 84 38) (close _V0member_k669) (bruijn lst 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 84, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0member_k669, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0member_k668, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0member_k667(VEnv * env) {
 V_GC_CHECK(_V0member_k667, env) {
 if (env->num_vars == 1) {
  // ((bruijn equal? 83 17) (close _V0member_k668) (bruijn x 2 1) (bruijn ##x.1472 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 83, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0member_k668, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0member_k667, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0member_k666(VEnv * env) {
 V_GC_CHECK(_V0member_k666, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1461 0 0) ((bruijn ##k.1459 1 0) #f) ((bruijn car 82 37) (close _V0member_k667) (bruijn lst 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 82, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0member_k667, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0member_k666, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0member_lambda92(VEnv * env) {
 V_GC_CHECK(_V0member_lambda92, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 81 1) (close _V0member_k666) (bruijn lst 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 81, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0member_k666, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0member_lambda92, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k94(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k94, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k95) (bruijn member 80 81) (close _V0member_lambda92))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k95, env)}),
      80, 81,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0member_lambda92, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k94, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memv_k673(VEnv * env) {
 V_GC_CHECK(_V0memv_k673, env) {
 if (env->num_vars == 1) {
  // ((bruijn memv 84 80) (bruijn ##k.1473 4 0) (bruijn x 4 1) (bruijn ##x.1485 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 84, 80)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0memv_k673, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memv_k672(VEnv * env) {
 V_GC_CHECK(_V0memv_k672, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1480 0 0) ((bruijn ##k.1473 3 0) (bruijn lst 3 2)) ((bruijn cdr 83 38) (close _V0memv_k673) (bruijn lst 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 83, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memv_k673, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0memv_k672, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memv_k671(VEnv * env) {
 V_GC_CHECK(_V0memv_k671, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 82 16) (close _V0memv_k672) (bruijn x 2 1) (bruijn ##x.1486 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 82, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memv_k672, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0memv_k671, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memv_k670(VEnv * env) {
 V_GC_CHECK(_V0memv_k670, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1475 0 0) ((bruijn ##k.1473 1 0) #f) ((bruijn car 81 37) (close _V0memv_k671) (bruijn lst 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 81, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memv_k671, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0memv_k670, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memv_lambda93(VEnv * env) {
 V_GC_CHECK(_V0memv_lambda93, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 80 1) (close _V0memv_k670) (bruijn lst 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 80, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memv_k670, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0memv_lambda93, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k93(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k93, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k94) (bruijn memv 79 80) (close _V0memv_lambda93))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k94, env)}),
      79, 80,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memv_lambda93, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k93, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memq_k677(VEnv * env) {
 V_GC_CHECK(_V0memq_k677, env) {
 if (env->num_vars == 1) {
  // ((bruijn memq 83 79) (bruijn ##k.1487 4 0) (bruijn x 4 1) (bruijn ##x.1499 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 83, 79)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0memq_k677, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memq_k676(VEnv * env) {
 V_GC_CHECK(_V0memq_k676, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1494 0 0) ((bruijn ##k.1487 3 0) (bruijn lst 3 2)) ((bruijn cdr 82 38) (close _V0memq_k677) (bruijn lst 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 82, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memq_k677, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0memq_k676, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memq_k675(VEnv * env) {
 V_GC_CHECK(_V0memq_k675, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 81 14) (close _V0memq_k676) (bruijn x 2 1) (bruijn ##x.1500 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 81, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memq_k676, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0memq_k675, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memq_k674(VEnv * env) {
 V_GC_CHECK(_V0memq_k674, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1489 0 0) ((bruijn ##k.1487 1 0) #f) ((bruijn car 80 37) (close _V0memq_k675) (bruijn lst 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 80, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memq_k675, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0memq_k674, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memq_lambda94(VEnv * env) {
 V_GC_CHECK(_V0memq_lambda94, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 79 1) (close _V0memq_k674) (bruijn lst 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 79, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memq_k674, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0memq_lambda94, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k92(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k92, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k93) (bruijn memq 78 79) (close _V0memq_lambda94))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k93, env)}),
      78, 79,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memq_lambda94, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k92, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0reverse_k678(VEnv * env) {
 V_GC_CHECK(_V0reverse_k678, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 1 1) (bruijn ##k.1503 1 0) (quote ()) (bruijn lst 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VNULL,
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0reverse_k678, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k682(VEnv * env) {
 V_GC_CHECK(_V0iter_k682, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 5 1) (bruijn ##k.1508 4 0) (bruijn ##x.1515 1 0) (bruijn ##x.1516 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k682, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k681(VEnv * env) {
 V_GC_CHECK(_V0iter_k681, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 83 38) (close _V0iter_k682) (bruijn rest 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 83, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k682, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0iter_k681, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k680(VEnv * env) {
 V_GC_CHECK(_V0iter_k680, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 82 36) (close _V0iter_k681) (bruijn ##x.1517 0 0) (bruijn acc 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 82, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k681, env)}),
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k680, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k679(VEnv * env) {
 V_GC_CHECK(_V0iter_k679, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1510 0 0) ((bruijn ##k.1508 1 0) (bruijn acc 1 1)) ((bruijn car 81 37) (close _V0iter_k680) (bruijn rest 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 81, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k680, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k679, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda97(VEnv * env) {
 V_GC_CHECK(_V0iter_lambda97, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 80 1) (close _V0iter_k679) (bruijn rest 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 80, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k679, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda97, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0reverse_lambda96(VEnv * env) {
 V_GC_CHECK(_V0reverse_lambda96, env) {
  // (set! (close _V0reverse_k678) (bruijn iter 0 1) (close _V0iter_lambda97))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0reverse_k678, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda97, env)})
    );
 }
}
static void _V0reverse_lambda95(VEnv * env) {
 V_GC_CHECK(_V0reverse_lambda95, env) {
 if (env->num_vars == 2) {
  // ((close _V0reverse_lambda96) (bruijn ##k.1501 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0reverse_lambda96, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0reverse_lambda95, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k91(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k91, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k92) (bruijn reverse 77 78) (close _V0reverse_lambda95))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k92, env)}),
      77, 78,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0reverse_lambda95, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k91, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append_k683(VEnv * env) {
 V_GC_CHECK(_V0append_k683, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1524 1 0) (bruijn a 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0append_k683, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k684(VEnv * env) {
 V_GC_CHECK(_V0loop_k684, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1529 1 0) (##inline ##sys.cons (##inline ##sys.car (bruijn a 1 1)) (bruijn ##x.1537 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
VInlineCar(
env->up->vars[1]
    )
,
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k684, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda100(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda100, env) {
 if (env->num_vars == 2) {
  // (if (##inline ##sys.null? (bruijn a 0 1)) ((bruijn ##k.1529 0 0) (bruijn b 2 2)) ((bruijn loop 1 1) (close _V0loop_k684) (##inline ##sys.cdr (bruijn a 0 1))))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k684, env)}),
      VInlineCdr(
env->vars[1]
    )

    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda100, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0append_lambda99(VEnv * env) {
 V_GC_CHECK(_V0append_lambda99, env) {
  // (set! (close _V0append_k683) (bruijn loop 0 1) (close _V0loop_lambda100))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append_k683, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda100, env)})
    );
 }
}
static void _V0append_k685(VEnv * env) {
 V_GC_CHECK(_V0append_k685, env) {
 if (env->num_vars == 1) {
  // ((bruijn append 78 77) (bruijn ##k.1539 1 0) (bruijn a 1 1) (bruijn ##x.1541 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 78, 77)),
      env->up->vars[0],
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0append_k685, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append_k687(VEnv * env) {
 V_GC_CHECK(_V0append_k687, env) {
 if (env->num_vars == 1) {
  // ((bruijn append 79 77) (bruijn ##k.1542 2 0) (bruijn a 2 1) (bruijn ##x.1544 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 79, 77)),
      env->up->up->vars[0],
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0append_k687, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append_k686(VEnv * env) {
 V_GC_CHECK(_V0append_k686, env) {
 if (env->num_vars == 1) {
  // ((bruijn append 78 77) (close _V0append_k687) (bruijn b 1 2) (bruijn ##x.1545 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 78, 77)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append_k687, env)}),
      env->up->vars[2],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0append_k686, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append_lambda98(VEnv * env) {
 V_GC_CHECK(_V0append_lambda98, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1518 0 0) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VNULL
    );
 } else if (env->num_vars == 2) {
  // ((bruijn ##k.1520 0 0) (bruijn a 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[1]
    );
 } else if (env->num_vars == 3) {
  // ((close _V0append_lambda99) (bruijn ##k.1522 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0append_lambda99, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else if (env->num_vars == 4) {
  // ((bruijn append 77 77) (close _V0append_k685) (bruijn b 0 2) (bruijn c 0 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 77)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append_k685, env)}),
      env->vars[2],
      env->vars[3]
    );
 } else if (env->num_vars == 5) {
  // ((bruijn append 77 77) (close _V0append_k686) (bruijn c 0 3) (bruijn d 0 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 77)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append_k686, env)}),
      env->vars[3],
      env->vars[4]
    );
 } else if (env->num_vars >= 1) {
  // ((bruijn fold-right 77 76) (bruijn ##k.1546 0 0) (bruijn append 77 77) (quote ()) (bruijn lsts 0 1))
  V_GATHER_VARARGS(&env, 1);
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 76)),
      env->vars[0],
      VGetArg(env, 77, 77),
      VNULL,
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0append_lambda98, got ~D~N"
  "-- expected 1~N"
  "-- expected 2~N"
  "-- expected 3~N"
  "-- expected 4~N"
  "-- expected 5~N"
  "-- expected 1 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k90(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k90, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k91) (bruijn append 76 77) (close _V0append_lambda98))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k91, env)}),
      76, 77,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append_lambda98, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k90, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0fold__right_k688(VEnv * env) {
 V_GC_CHECK(_V0fold__right_k688, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1550 1 0) (bruijn ks 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0fold__right_k688, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k692(VEnv * env) {
 V_GC_CHECK(_V0loop_k692, env) {
 if (env->num_vars == 1) {
  // ((bruijn kons 6 1) (bruijn ##k.1555 4 0) (bruijn ##x.1562 2 0) (bruijn ##x.1563 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 4, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k692, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k691(VEnv * env) {
 V_GC_CHECK(_V0loop_k691, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 4 1) (close _V0loop_k692) (bruijn ##x.1564 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k692, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k691, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k690(VEnv * env) {
 V_GC_CHECK(_V0loop_k690, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 80 38) (close _V0loop_k691) (bruijn ks 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 80, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k691, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k690, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k689(VEnv * env) {
 V_GC_CHECK(_V0loop_k689, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1557 0 0) ((bruijn ##k.1555 1 0) (bruijn knil 3 2)) ((bruijn car 79 37) (close _V0loop_k690) (bruijn ks 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 79, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k690, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k689, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda103(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda103, env) {
 if (env->num_vars == 2) {
  // ((bruijn null? 78 1) (close _V0loop_k689) (bruijn ks 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 78, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k689, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda103, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0fold__right_lambda102(VEnv * env) {
 V_GC_CHECK(_V0fold__right_lambda102, env) {
  // (set! (close _V0fold__right_k688) (bruijn loop 0 1) (close _V0loop_lambda103))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0fold__right_k688, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda103, env)})
    );
 }
}
static void _V0fold__right_lambda101(VEnv * env) {
 V_GC_CHECK(_V0fold__right_lambda101, env) {
 if (env->num_vars == 4) {
  // ((close _V0fold__right_lambda102) (bruijn ##k.1548 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0fold__right_lambda102, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0fold__right_lambda101, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k89(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k89, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k90) (bruijn fold-right 75 76) (close _V0fold__right_lambda101))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k90, env)}),
      75, 76,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0fold__right_lambda101, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k89, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0fold_k693(VEnv * env) {
 V_GC_CHECK(_V0fold_k693, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1567 1 0) (bruijn knil 2 2) (bruijn ks 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0fold_k693, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k697(VEnv * env) {
 V_GC_CHECK(_V0loop_k697, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.1572 4 0) (bruijn ##x.1579 1 0) (bruijn ##x.1580 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k697, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k696(VEnv * env) {
 V_GC_CHECK(_V0loop_k696, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 80 38) (close _V0loop_k697) (bruijn ks 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 80, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k697, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k696, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k695(VEnv * env) {
 V_GC_CHECK(_V0loop_k695, env) {
 if (env->num_vars == 1) {
  // ((bruijn kons 4 1) (close _V0loop_k696) (bruijn ##x.1581 0 0) (bruijn kur 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k696, env)}),
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k695, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k694(VEnv * env) {
 V_GC_CHECK(_V0loop_k694, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1574 0 0) ((bruijn ##k.1572 1 0) (bruijn kur 1 1)) ((bruijn car 78 37) (close _V0loop_k695) (bruijn ks 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 78, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k695, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k694, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda106(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda106, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 77 1) (close _V0loop_k694) (bruijn ks 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k694, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda106, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0fold_lambda105(VEnv * env) {
 V_GC_CHECK(_V0fold_lambda105, env) {
  // (set! (close _V0fold_k693) (bruijn loop 0 1) (close _V0loop_lambda106))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0fold_k693, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda106, env)})
    );
 }
}
static void _V0fold_lambda104(VEnv * env) {
 V_GC_CHECK(_V0fold_lambda104, env) {
 if (env->num_vars == 4) {
  // ((close _V0fold_lambda105) (bruijn ##k.1565 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0fold_lambda105, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0fold_lambda104, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k88(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k88, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k89) (bruijn fold 74 75) (close _V0fold_lambda104))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k89, env)}),
      74, 75,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0fold_lambda104, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k88, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iota_k698(VEnv * env) {
 V_GC_CHECK(_V0iota_k698, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1584 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0iota_k698, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k701(VEnv * env) {
 V_GC_CHECK(_V0loop_k701, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 79 36) (bruijn ##k.1589 3 0) (bruijn i 3 1) (bruijn ##x.1596 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 79, 36)),
      env->up->up->up->vars[0],
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k701, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k700(VEnv * env) {
 V_GC_CHECK(_V0loop_k700, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (close _V0loop_k701) (bruijn ##x.1597 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k701, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k700, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k699(VEnv * env) {
 V_GC_CHECK(_V0loop_k699, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1591 0 0) ((bruijn ##k.1589 1 0) (quote ())) ((bruijn + 77 28) (close _V0loop_k700) (bruijn i 1 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k700, env)}),
      env->up->vars[1],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k699, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda109(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda109, env) {
 if (env->num_vars == 2) {
  // ((bruijn eq? 76 14) (close _V0loop_k699) (bruijn i 0 1) (bruijn n 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k699, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda109, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iota_lambda108(VEnv * env) {
 V_GC_CHECK(_V0iota_lambda108, env) {
  // (set! (close _V0iota_k698) (bruijn loop 0 1) (close _V0loop_lambda109))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iota_k698, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda109, env)})
    );
 }
}
static void _V0iota_k702(VEnv * env) {
 V_GC_CHECK(_V0iota_k702, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1600 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0iota_k702, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k706(VEnv * env) {
 V_GC_CHECK(_V0loop_k706, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 80 36) (bruijn ##k.1605 4 0) (bruijn ##x.1612 2 0) (bruijn ##x.1613 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 80, 36)),
      VGetArg(env, 4, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k706, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k705(VEnv * env) {
 V_GC_CHECK(_V0loop_k705, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 4 1) (close _V0loop_k706) (bruijn ##x.1614 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k706, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k705, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k704(VEnv * env) {
 V_GC_CHECK(_V0loop_k704, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 78 28) (close _V0loop_k705) (bruijn i 2 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 78, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k705, env)}),
      env->up->up->vars[1],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k704, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k703(VEnv * env) {
 V_GC_CHECK(_V0loop_k703, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1607 0 0) ((bruijn ##k.1605 1 0) (quote ())) ((bruijn + 77 28) (close _V0loop_k704) (bruijn i 1 1) (bruijn b 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k704, env)}),
      env->up->vars[1],
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k703, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda111(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda111, env) {
 if (env->num_vars == 2) {
  // ((bruijn eq? 76 14) (close _V0loop_k703) (bruijn i 0 1) (bruijn n 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k703, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda111, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iota_lambda110(VEnv * env) {
 V_GC_CHECK(_V0iota_lambda110, env) {
  // (set! (close _V0iota_k702) (bruijn loop 0 1) (close _V0loop_lambda111))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iota_k702, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda111, env)})
    );
 }
}
static void _V0iota_k707(VEnv * env) {
 V_GC_CHECK(_V0iota_k707, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1617 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0iota_k707, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k712(VEnv * env) {
 V_GC_CHECK(_V0loop_k712, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 81 36) (bruijn ##k.1622 5 0) (bruijn ##x.1629 2 0) (bruijn ##x.1630 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 81, 36)),
      VGetArg(env, 5, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k712, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k711(VEnv * env) {
 V_GC_CHECK(_V0loop_k711, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (close _V0loop_k712) (bruijn ##x.1631 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k712, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k711, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k710(VEnv * env) {
 V_GC_CHECK(_V0loop_k710, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 79 28) (close _V0loop_k711) (bruijn i 3 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 79, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k711, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k710, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k709(VEnv * env) {
 V_GC_CHECK(_V0loop_k709, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 78 28) (close _V0loop_k710) (bruijn ##x.1632 0 0) (bruijn b 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 78, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k710, env)}),
      env->vars[0],
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k709, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k708(VEnv * env) {
 V_GC_CHECK(_V0loop_k708, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1624 0 0) ((bruijn ##k.1622 1 0) (quote ())) ((bruijn * 77 30) (close _V0loop_k709) (bruijn i 1 1) (bruijn s 3 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k709, env)}),
      env->up->vars[1],
      env->up->up->up->vars[3]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k708, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda113(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda113, env) {
 if (env->num_vars == 2) {
  // ((bruijn eq? 76 14) (close _V0loop_k708) (bruijn i 0 1) (bruijn n 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k708, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda113, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iota_lambda112(VEnv * env) {
 V_GC_CHECK(_V0iota_lambda112, env) {
  // (set! (close _V0iota_k707) (bruijn loop 0 1) (close _V0loop_lambda113))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iota_k707, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda113, env)})
    );
 }
}
static void _V0iota_lambda107(VEnv * env) {
 V_GC_CHECK(_V0iota_lambda107, env) {
 if (env->num_vars == 2) {
  // ((close _V0iota_lambda108) (bruijn ##k.1582 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iota_lambda108, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else if (env->num_vars == 3) {
  // ((close _V0iota_lambda110) (bruijn ##k.1598 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iota_lambda110, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else if (env->num_vars == 4) {
  // ((close _V0iota_lambda112) (bruijn ##k.1615 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iota_lambda112, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iota_lambda107, got ~D~N"
  "-- expected 2~N"
  "-- expected 3~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k87(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k87, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k88) (bruijn iota 73 74) (close _V0iota_lambda107))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k88, env)}),
      73, 74,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iota_lambda107, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k87, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0for__each_k713(VEnv * env) {
 V_GC_CHECK(_V0for__each_k713, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1635 1 0) (bruijn xs 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0for__each_k713, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k714(VEnv * env) {
 V_GC_CHECK(_V0loop_k714, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (bruijn ##k.1640 1 0) (##inline ##sys.cdr (bruijn xs 1 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k714, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda116(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda116, env) {
 if (env->num_vars == 2) {
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k714) (##inline ##sys.car (bruijn xs 0 1))) ((bruijn ##k.1640 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlineNullP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k714, env)}),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda116, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0for__each_lambda115(VEnv * env) {
 V_GC_CHECK(_V0for__each_lambda115, env) {
  // (set! (close _V0for__each_k713) (bruijn loop 0 1) (close _V0loop_lambda116))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0for__each_k713, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda116, env)})
    );
 }
}
static void _V0for__each_k715(VEnv * env) {
 V_GC_CHECK(_V0for__each_k715, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1655 1 0) (bruijn xs 2 2) (bruijn ys 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0for__each_k715, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k716(VEnv * env) {
 V_GC_CHECK(_V0loop_k716, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (bruijn ##k.1660 1 0) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )
,
      VInlineCdr(
env->up->vars[2]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k716, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda118(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda118, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k716) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2))) ((bruijn ##k.1660 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlineNullP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k716, env)}),
      VInlineCar(
env->vars[1]
    )
,
      VInlineCar(
env->vars[2]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda118, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0for__each_lambda117(VEnv * env) {
 V_GC_CHECK(_V0for__each_lambda117, env) {
  // (set! (close _V0for__each_k715) (bruijn loop 0 1) (close _V0loop_lambda118))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0for__each_k715, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda118, env)})
    );
 }
}
static void _V0for__each_k717(VEnv * env) {
 V_GC_CHECK(_V0for__each_k717, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1677 1 0) (bruijn xs 2 2) (bruijn ys 2 3) (bruijn zs 2 4))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2],
      env->up->up->vars[3],
      env->up->up->vars[4]
    );
 } else {
  VError("Not enough arguments to _V0for__each_k717, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k718(VEnv * env) {
 V_GC_CHECK(_V0loop_k718, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (bruijn ##k.1682 1 0) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)) (##inline ##sys.cdr (bruijn zs 1 3)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )
,
      VInlineCdr(
env->up->vars[2]
    )
,
      VInlineCdr(
env->up->vars[3]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k718, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda120(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda120, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k718) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2)) (##inline ##sys.car (bruijn zs 0 3))) ((bruijn ##k.1682 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlineNullP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k718, env)}),
      VInlineCar(
env->vars[1]
    )
,
      VInlineCar(
env->vars[2]
    )
,
      VInlineCar(
env->vars[3]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda120, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0for__each_lambda119(VEnv * env) {
 V_GC_CHECK(_V0for__each_lambda119, env) {
  // (set! (close _V0for__each_k717) (bruijn loop 0 1) (close _V0loop_lambda120))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0for__each_k717, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda120, env)})
    );
 }
}
static void _V0for__each_k719(VEnv * env) {
 V_GC_CHECK(_V0for__each_k719, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1701 1 0) (bruijn lsts 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0for__each_k719, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k722(VEnv * env) {
 V_GC_CHECK(_V0loop_k722, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 4 1) (bruijn ##k.1706 3 0) (bruijn ##x.1714 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k722, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k721(VEnv * env) {
 V_GC_CHECK(_V0loop_k721, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 77 72) (close _V0loop_k722) ##sys.cdr (bruijn lsts 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 72)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k722, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(VCdr,NULL)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k721, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k720(VEnv * env) {
 V_GC_CHECK(_V0loop_k720, env) {
 if (env->num_vars == 1) {
  // ((bruijn apply 76 125) (close _V0loop_k721) (bruijn f 3 1) (bruijn ##x.1715 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 125)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k721, env)}),
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k720, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda122(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda122, env) {
 if (env->num_vars == 2) {
  // (if (##inline ##sys.not (##inline ##sys.null? (##inline ##sys.car (bruijn lsts 0 1)))) ((bruijn map 75 72) (close _V0loop_k720) ##sys.car (bruijn lsts 0 1)) ((bruijn ##k.1706 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlineNullP(
VInlineCar(
env->vars[1]
    )

    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 75, 72)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k720, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(VCar,NULL)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda122, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0for__each_lambda121(VEnv * env) {
 V_GC_CHECK(_V0for__each_lambda121, env) {
  // (set! (close _V0for__each_k719) (bruijn loop 0 1) (close _V0loop_lambda122))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0for__each_k719, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda122, env)})
    );
 }
}
static void _V0for__each_lambda114(VEnv * env) {
 V_GC_CHECK(_V0for__each_lambda114, env) {
 if (env->num_vars == 3) {
  // ((close _V0for__each_lambda115) (bruijn ##k.1633 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0for__each_lambda115, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else if (env->num_vars == 4) {
  // ((close _V0for__each_lambda117) (bruijn ##k.1653 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0for__each_lambda117, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else if (env->num_vars == 5) {
  // ((close _V0for__each_lambda119) (bruijn ##k.1675 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0for__each_lambda119, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else if (env->num_vars >= 2) {
  // ((close _V0for__each_lambda121) (bruijn ##k.1699 0 0) #f)
  V_GATHER_VARARGS(&env, 2);
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0for__each_lambda121, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0for__each_lambda114, got ~D~N"
  "-- expected 3~N"
  "-- expected 4~N"
  "-- expected 5~N"
  "-- expected 2 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k86(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k86, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k87) (bruijn for-each 72 73) (close _V0for__each_lambda114))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k87, env)}),
      72, 73,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0for__each_lambda114, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k86, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0map_k723(VEnv * env) {
 V_GC_CHECK(_V0map_k723, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1722 1 0) (bruijn xs 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0map_k723, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k725(VEnv * env) {
 V_GC_CHECK(_V0loop_k725, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1727 2 0) (##inline ##sys.cons (bruijn ##x.1734 1 0) (bruijn ##x.1735 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k725, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k724(VEnv * env) {
 V_GC_CHECK(_V0loop_k724, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (close _V0loop_k725) (##inline ##sys.cdr (bruijn xs 1 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k725, env)}),
      VInlineCdr(
env->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k724, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda125(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda125, env) {
 if (env->num_vars == 2) {
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.1727 0 0) (quote ())) ((bruijn f 2 1) (close _V0loop_k724) (##inline ##sys.car (bruijn xs 0 1))))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k724, env)}),
      VInlineCar(
env->vars[1]
    )

    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda125, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0map_lambda124(VEnv * env) {
 V_GC_CHECK(_V0map_lambda124, env) {
  // (set! (close _V0map_k723) (bruijn loop 0 1) (close _V0loop_lambda125))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0map_k723, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda125, env)})
    );
 }
}
static void _V0map_k726(VEnv * env) {
 V_GC_CHECK(_V0map_k726, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1740 1 0) (bruijn xs 2 2) (bruijn ys 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0map_k726, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k728(VEnv * env) {
 V_GC_CHECK(_V0loop_k728, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1745 2 0) (##inline ##sys.cons (bruijn ##x.1752 1 0) (bruijn ##x.1753 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k728, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k727(VEnv * env) {
 V_GC_CHECK(_V0loop_k727, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (close _V0loop_k728) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k728, env)}),
      VInlineCdr(
env->up->vars[1]
    )
,
      VInlineCdr(
env->up->vars[2]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k727, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda127(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda127, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.1745 0 0) (quote ())) ((bruijn f 2 1) (close _V0loop_k727) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2))))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k727, env)}),
      VInlineCar(
env->vars[1]
    )
,
      VInlineCar(
env->vars[2]
    )

    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda127, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0map_lambda126(VEnv * env) {
 V_GC_CHECK(_V0map_lambda126, env) {
  // (set! (close _V0map_k726) (bruijn loop 0 1) (close _V0loop_lambda127))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0map_k726, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda127, env)})
    );
 }
}
static void _V0map_k729(VEnv * env) {
 V_GC_CHECK(_V0map_k729, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1760 1 0) (bruijn xs 2 2) (bruijn ys 2 3) (bruijn zs 2 4))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2],
      env->up->up->vars[3],
      env->up->up->vars[4]
    );
 } else {
  VError("Not enough arguments to _V0map_k729, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k731(VEnv * env) {
 V_GC_CHECK(_V0loop_k731, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1765 2 0) (##inline ##sys.cons (bruijn ##x.1772 1 0) (bruijn ##x.1773 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k731, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k730(VEnv * env) {
 V_GC_CHECK(_V0loop_k730, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (close _V0loop_k731) (##inline ##sys.cdr (bruijn xs 1 1)) (##inline ##sys.cdr (bruijn ys 1 2)) (##inline ##sys.cdr (bruijn zs 1 3)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k731, env)}),
      VInlineCdr(
env->up->vars[1]
    )
,
      VInlineCdr(
env->up->vars[2]
    )
,
      VInlineCdr(
env->up->vars[3]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k730, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda129(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda129, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn xs 0 1)) ((bruijn ##k.1765 0 0) (quote ())) ((bruijn f 2 1) (close _V0loop_k730) (##inline ##sys.car (bruijn xs 0 1)) (##inline ##sys.car (bruijn ys 0 2)) (##inline ##sys.car (bruijn zs 0 3))))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k730, env)}),
      VInlineCar(
env->vars[1]
    )
,
      VInlineCar(
env->vars[2]
    )
,
      VInlineCar(
env->vars[3]
    )

    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda129, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0map_lambda128(VEnv * env) {
 V_GC_CHECK(_V0map_lambda128, env) {
  // (set! (close _V0map_k729) (bruijn loop 0 1) (close _V0loop_lambda129))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0map_k729, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda129, env)})
    );
 }
}
static void _V0map_k732(VEnv * env) {
 V_GC_CHECK(_V0map_k732, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1782 1 0) (bruijn lsts 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0map_k732, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k736(VEnv * env) {
 V_GC_CHECK(_V0loop_k736, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1787 4 0) (##inline ##sys.cons (bruijn ##x.1794 2 0) (bruijn ##x.1795 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VInlineCons(
env->up->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k736, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k735(VEnv * env) {
 V_GC_CHECK(_V0loop_k735, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 4 1) (close _V0loop_k736) (bruijn ##x.1796 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k736, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k735, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k734(VEnv * env) {
 V_GC_CHECK(_V0loop_k734, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 76 72) (close _V0loop_k735) ##sys.cdr (bruijn lsts 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 72)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k735, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(VCdr,NULL)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k734, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k733(VEnv * env) {
 V_GC_CHECK(_V0loop_k733, env) {
 if (env->num_vars == 1) {
  // ((bruijn apply 75 125) (close _V0loop_k734) (bruijn f 3 1) (bruijn ##x.1797 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 75, 125)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k734, env)}),
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k733, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda131(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda131, env) {
 if (env->num_vars == 2) {
  // (if (##inline ##sys.null? (##inline ##sys.car (bruijn lsts 0 1))) ((bruijn ##k.1787 0 0) (quote ())) ((bruijn map 74 72) (close _V0loop_k733) ##sys.car (bruijn lsts 0 1)))
if(VDecodeBool(
VInlineNullP(
VInlineCar(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 74, 72)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k733, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(VCar,NULL)}),
      env->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda131, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0map_lambda130(VEnv * env) {
 V_GC_CHECK(_V0map_lambda130, env) {
  // (set! (close _V0map_k732) (bruijn loop 0 1) (close _V0loop_lambda131))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0map_k732, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda131, env)})
    );
 }
}
static void _V0map_lambda123(VEnv * env) {
 V_GC_CHECK(_V0map_lambda123, env) {
 if (env->num_vars == 3) {
  // ((close _V0map_lambda124) (bruijn ##k.1720 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0map_lambda124, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else if (env->num_vars == 4) {
  // ((close _V0map_lambda126) (bruijn ##k.1738 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0map_lambda126, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else if (env->num_vars == 5) {
  // ((close _V0map_lambda128) (bruijn ##k.1758 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0map_lambda128, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else if (env->num_vars >= 2) {
  // ((close _V0map_lambda130) (bruijn ##k.1780 0 0) #f)
  V_GATHER_VARARGS(&env, 2);
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0map_lambda130, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0map_lambda123, got ~D~N"
  "-- expected 3~N"
  "-- expected 4~N"
  "-- expected 5~N"
  "-- expected 2 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k85(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k85, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k86) (bruijn map 71 72) (close _V0map_lambda123))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k86, env)}),
      71, 72,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0map_lambda123, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k85, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list__ref_k738(VEnv * env) {
 V_GC_CHECK(_V0list__ref_k738, env) {
 if (env->num_vars == 1) {
  // ((bruijn list-ref 73 71) (bruijn ##k.1799 2 0) (##inline ##sys.cdr (bruijn lst 2 1)) (bruijn ##x.1807 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 73, 71)),
      env->up->up->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )
,
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0list__ref_k738, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list__ref_k737(VEnv * env) {
 V_GC_CHECK(_V0list__ref_k737, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1801 0 0) ((bruijn ##k.1799 1 0) (##inline ##sys.car (bruijn lst 1 1))) ((bruijn - 72 29) (close _V0list__ref_k738) (bruijn x 1 2) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCar(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 72, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list__ref_k738, env)}),
      env->up->vars[2],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0list__ref_k737, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list__ref_lambda132(VEnv * env) {
 V_GC_CHECK(_V0list__ref_lambda132, env) {
 if (env->num_vars == 3) {
  // ((bruijn eq? 71 14) (close _V0list__ref_k737) (bruijn x 0 2) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 71, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list__ref_k737, env)}),
      env->vars[2],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0list__ref_lambda132, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k84(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k84, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k85) (bruijn list-ref 70 71) (close _V0list__ref_lambda132))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k85, env)}),
      70, 71,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list__ref_lambda132, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k84, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0length_k739(VEnv * env) {
 V_GC_CHECK(_V0length_k739, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1810 1 0) (bruijn lst 2 1) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[1],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0length_k739, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k740(VEnv * env) {
 V_GC_CHECK(_V0loop_k740, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (bruijn ##k.1815 1 0) (##inline ##sys.cdr (bruijn lst 1 1)) (bruijn ##x.1823 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )
,
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k740, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda135(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda135, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn lst 0 1)) ((bruijn ##k.1815 0 0) (bruijn i 0 2)) ((bruijn + 72 28) (close _V0loop_k740) (bruijn i 0 2) 1))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 72, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k740, env)}),
      env->vars[2],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda135, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0length_lambda134(VEnv * env) {
 V_GC_CHECK(_V0length_lambda134, env) {
  // (set! (close _V0length_k739) (bruijn loop 0 1) (close _V0loop_lambda135))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0length_k739, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda135, env)})
    );
 }
}
static void _V0length_lambda133(VEnv * env) {
 V_GC_CHECK(_V0length_lambda133, env) {
 if (env->num_vars == 2) {
  // ((close _V0length_lambda134) (bruijn ##k.1808 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0length_lambda134, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0length_lambda133, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k83(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k83, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k84) (bruijn length 69 70) (close _V0length_lambda133))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k84, env)}),
      69, 70,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0length_lambda133, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k83, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list_lambda136(VEnv * env) {
 V_GC_CHECK(_V0list_lambda136, env) {
 if (env->num_vars >= 1) {
  // ((bruijn ##k.1824 0 0) (bruijn args 0 1))
  V_GATHER_VARARGS(&env, 1);
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0list_lambda136, got ~D~N"
  "-- expected 1 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k82(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k82, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k83) (bruijn list 68 69) (close _V0list_lambda136))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k83, env)}),
      68, 69,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list_lambda136, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k82, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cddddr_lambda137(VEnv * env) {
 V_GC_CHECK(_V0cddddr_lambda137, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1826 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCdr(
VInlineCdr(
VInlineCdr(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cddddr_lambda137, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k81(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k81, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k82) (bruijn cddddr 67 68) (close _V0cddddr_lambda137))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k82, env)}),
      67, 68,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cddddr_lambda137, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k81, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cdddar_lambda138(VEnv * env) {
 V_GC_CHECK(_V0cdddar_lambda138, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1831 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCdr(
VInlineCdr(
VInlineCar(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cdddar_lambda138, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k80(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k80, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k81) (bruijn cdddar 66 67) (close _V0cdddar_lambda138))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k81, env)}),
      66, 67,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cdddar_lambda138, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k80, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cddadr_lambda139(VEnv * env) {
 V_GC_CHECK(_V0cddadr_lambda139, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1836 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCdr(
VInlineCar(
VInlineCdr(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cddadr_lambda139, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k79(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k79, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k80) (bruijn cddadr 65 66) (close _V0cddadr_lambda139))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k80, env)}),
      65, 66,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cddadr_lambda139, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k79, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cddaar_lambda140(VEnv * env) {
 V_GC_CHECK(_V0cddaar_lambda140, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1841 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCdr(
VInlineCar(
VInlineCar(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cddaar_lambda140, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k78(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k78, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k79) (bruijn cddaar 64 65) (close _V0cddaar_lambda140))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k79, env)}),
      64, 65,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cddaar_lambda140, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k78, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cdaddr_lambda141(VEnv * env) {
 V_GC_CHECK(_V0cdaddr_lambda141, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1846 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCar(
VInlineCdr(
VInlineCdr(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cdaddr_lambda141, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k77(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k77, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k78) (bruijn cdaddr 63 64) (close _V0cdaddr_lambda141))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k78, env)}),
      63, 64,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cdaddr_lambda141, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k77, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cdadar_lambda142(VEnv * env) {
 V_GC_CHECK(_V0cdadar_lambda142, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1851 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCar(
VInlineCdr(
VInlineCar(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cdadar_lambda142, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k76(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k76, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k77) (bruijn cdadar 62 63) (close _V0cdadar_lambda142))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k77, env)}),
      62, 63,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cdadar_lambda142, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k76, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cdaadr_lambda143(VEnv * env) {
 V_GC_CHECK(_V0cdaadr_lambda143, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1856 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCar(
VInlineCar(
VInlineCdr(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cdaadr_lambda143, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k75(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k75, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k76) (bruijn cdaadr 61 62) (close _V0cdaadr_lambda143))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k76, env)}),
      61, 62,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cdaadr_lambda143, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k75, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cdaaar_lambda144(VEnv * env) {
 V_GC_CHECK(_V0cdaaar_lambda144, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1861 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCar(
VInlineCar(
VInlineCar(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cdaaar_lambda144, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k74(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k74, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k75) (bruijn cdaaar 60 61) (close _V0cdaaar_lambda144))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k75, env)}),
      60, 61,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cdaaar_lambda144, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k74, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cadddr_lambda145(VEnv * env) {
 V_GC_CHECK(_V0cadddr_lambda145, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1866 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCdr(
VInlineCdr(
VInlineCdr(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cadddr_lambda145, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k73(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k73, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k74) (bruijn cadddr 59 60) (close _V0cadddr_lambda145))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k74, env)}),
      59, 60,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cadddr_lambda145, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k73, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0caddar_lambda146(VEnv * env) {
 V_GC_CHECK(_V0caddar_lambda146, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1871 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCdr(
VInlineCdr(
VInlineCar(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0caddar_lambda146, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k72(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k72, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k73) (bruijn caddar 58 59) (close _V0caddar_lambda146))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k73, env)}),
      58, 59,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0caddar_lambda146, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k72, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cadadr_lambda147(VEnv * env) {
 V_GC_CHECK(_V0cadadr_lambda147, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1876 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCdr(
VInlineCar(
VInlineCdr(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cadadr_lambda147, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k71(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k71, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k72) (bruijn cadadr 57 58) (close _V0cadadr_lambda147))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k72, env)}),
      57, 58,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cadadr_lambda147, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k71, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cadaar_lambda148(VEnv * env) {
 V_GC_CHECK(_V0cadaar_lambda148, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1881 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCdr(
VInlineCar(
VInlineCar(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cadaar_lambda148, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k70(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k70, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k71) (bruijn cadaar 56 57) (close _V0cadaar_lambda148))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k71, env)}),
      56, 57,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cadaar_lambda148, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k70, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0caaddr_lambda149(VEnv * env) {
 V_GC_CHECK(_V0caaddr_lambda149, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1886 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCar(
VInlineCdr(
VInlineCdr(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0caaddr_lambda149, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k69(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k69, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k70) (bruijn caaddr 55 56) (close _V0caaddr_lambda149))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k70, env)}),
      55, 56,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0caaddr_lambda149, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k69, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0caadar_lambda150(VEnv * env) {
 V_GC_CHECK(_V0caadar_lambda150, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1891 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCar(
VInlineCdr(
VInlineCar(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0caadar_lambda150, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k68(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k68, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k69) (bruijn caadar 54 55) (close _V0caadar_lambda150))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k69, env)}),
      54, 55,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0caadar_lambda150, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k68, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0caaadr_lambda151(VEnv * env) {
 V_GC_CHECK(_V0caaadr_lambda151, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1896 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCar(
VInlineCar(
VInlineCdr(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0caaadr_lambda151, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k67(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k67, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k68) (bruijn caaadr 53 54) (close _V0caaadr_lambda151))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k68, env)}),
      53, 54,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0caaadr_lambda151, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k67, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0caaaar_lambda152(VEnv * env) {
 V_GC_CHECK(_V0caaaar_lambda152, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1901 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCar(
VInlineCar(
VInlineCar(
env->vars[1]
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0caaaar_lambda152, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k66(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k66, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k67) (bruijn caaaar 52 53) (close _V0caaaar_lambda152))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k67, env)}),
      52, 53,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0caaaar_lambda152, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k66, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cdddr_lambda153(VEnv * env) {
 V_GC_CHECK(_V0cdddr_lambda153, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1906 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1)))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCdr(
VInlineCdr(
env->vars[1]
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cdddr_lambda153, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k65(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k65, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k66) (bruijn cdddr 51 52) (close _V0cdddr_lambda153))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k66, env)}),
      51, 52,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cdddr_lambda153, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k65, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cddar_lambda154(VEnv * env) {
 V_GC_CHECK(_V0cddar_lambda154, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1910 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1)))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCdr(
VInlineCar(
env->vars[1]
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cddar_lambda154, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k64(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k64, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k65) (bruijn cddar 50 51) (close _V0cddar_lambda154))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k65, env)}),
      50, 51,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cddar_lambda154, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k64, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cdadr_lambda155(VEnv * env) {
 V_GC_CHECK(_V0cdadr_lambda155, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1914 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1)))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCar(
VInlineCdr(
env->vars[1]
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cdadr_lambda155, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k63(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k63, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k64) (bruijn cdadr 49 50) (close _V0cdadr_lambda155))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k64, env)}),
      49, 50,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cdadr_lambda155, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k63, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cdaar_lambda156(VEnv * env) {
 V_GC_CHECK(_V0cdaar_lambda156, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1918 0 0) (##inline ##sys.cdr (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1)))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCar(
VInlineCar(
env->vars[1]
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cdaar_lambda156, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k62(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k62, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k63) (bruijn cdaar 48 49) (close _V0cdaar_lambda156))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k63, env)}),
      48, 49,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cdaar_lambda156, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k62, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0caddr_lambda157(VEnv * env) {
 V_GC_CHECK(_V0caddr_lambda157, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1922 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1)))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCdr(
VInlineCdr(
env->vars[1]
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0caddr_lambda157, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k61(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k61, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k62) (bruijn caddr 47 48) (close _V0caddr_lambda157))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k62, env)}),
      47, 48,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0caddr_lambda157, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k61, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cadar_lambda158(VEnv * env) {
 V_GC_CHECK(_V0cadar_lambda158, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1926 0 0) (##inline ##sys.car (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1)))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCdr(
VInlineCar(
env->vars[1]
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cadar_lambda158, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k60(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k60, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k61) (bruijn cadar 46 47) (close _V0cadar_lambda158))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k61, env)}),
      46, 47,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cadar_lambda158, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k60, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0caadr_lambda159(VEnv * env) {
 V_GC_CHECK(_V0caadr_lambda159, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1930 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1)))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCar(
VInlineCdr(
env->vars[1]
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0caadr_lambda159, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k59(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k59, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k60) (bruijn caadr 45 46) (close _V0caadr_lambda159))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k60, env)}),
      45, 46,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0caadr_lambda159, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k59, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0caaar_lambda160(VEnv * env) {
 V_GC_CHECK(_V0caaar_lambda160, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1934 0 0) (##inline ##sys.car (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1)))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCar(
VInlineCar(
env->vars[1]
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0caaar_lambda160, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k58(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k58, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k59) (bruijn caaar 44 45) (close _V0caaar_lambda160))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k59, env)}),
      44, 45,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0caaar_lambda160, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k58, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cddr_lambda161(VEnv * env) {
 V_GC_CHECK(_V0cddr_lambda161, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1938 0 0) (##inline ##sys.cdr (##inline ##sys.cdr (bruijn x 0 1))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCdr(
env->vars[1]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cddr_lambda161, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k57(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k57, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k58) (bruijn cddr 43 44) (close _V0cddr_lambda161))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k58, env)}),
      43, 44,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cddr_lambda161, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k57, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cdar_lambda162(VEnv * env) {
 V_GC_CHECK(_V0cdar_lambda162, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1941 0 0) (##inline ##sys.cdr (##inline ##sys.car (bruijn x 0 1))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCdr(
VInlineCar(
env->vars[1]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cdar_lambda162, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k56(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k56, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k57) (bruijn cdar 42 43) (close _V0cdar_lambda162))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k57, env)}),
      42, 43,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cdar_lambda162, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k56, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0cadr_lambda163(VEnv * env) {
 V_GC_CHECK(_V0cadr_lambda163, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1944 0 0) (##inline ##sys.car (##inline ##sys.cdr (bruijn x 0 1))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCdr(
env->vars[1]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0cadr_lambda163, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k55(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k55, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k56) (bruijn cadr 41 42) (close _V0cadr_lambda163))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k56, env)}),
      41, 42,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0cadr_lambda163, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k55, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0caar_lambda164(VEnv * env) {
 V_GC_CHECK(_V0caar_lambda164, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1947 0 0) (##inline ##sys.car (##inline ##sys.car (bruijn x 0 1))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCar(
VInlineCar(
env->vars[1]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0caar_lambda164, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k54(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k54, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k55) (bruijn caar 40 41) (close _V0caar_lambda164))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k55, env)}),
      40, 41,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0caar_lambda164, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k54, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k53(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k53, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k54) (bruijn set-cdr! 39 40) ##sys.set-cdr!)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k54, env)}),
      39, 40,
      VEncodeClosure((VClosure[]){VMakeClosure(VSetCdr,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k53, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k52(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k52, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k53) (bruijn set-car! 38 39) ##sys.set-car!)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k53, env)}),
      38, 39,
      VEncodeClosure((VClosure[]){VMakeClosure(VSetCar,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k52, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k51(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k51, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k52) (bruijn cdr 37 38) ##sys.cdr)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k52, env)}),
      37, 38,
      VEncodeClosure((VClosure[]){VMakeClosure(VCdr,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k51, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k50(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k50, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k51) (bruijn car 36 37) ##sys.car)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k51, env)}),
      36, 37,
      VEncodeClosure((VClosure[]){VMakeClosure(VCar,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k50, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k49(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k49, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k50) (bruijn cons 35 36) ##sys.cons)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k50, env)}),
      35, 36,
      VEncodeClosure((VClosure[]){VMakeClosure(VCons,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k49, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0min_k741(VEnv * env) {
 V_GC_CHECK(_V0min_k741, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1954 0 0) ((bruijn ##k.1952 1 0) (bruijn a 1 1)) ((bruijn ##k.1952 1 0) (bruijn b 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0min_k741, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0min_k742(VEnv * env) {
 V_GC_CHECK(_V0min_k742, env) {
 if (env->num_vars == 1) {
  // ((bruijn min 36 35) (bruijn ##k.1959 1 0) (bruijn ##x.1961 0 0) (bruijn c 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 35)),
      env->up->vars[0],
      env->vars[0],
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0min_k742, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0min_k744(VEnv * env) {
 V_GC_CHECK(_V0min_k744, env) {
 if (env->num_vars == 1) {
  // ((bruijn min 37 35) (bruijn ##k.1962 2 0) (bruijn ##x.1964 0 0) (bruijn d 2 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 35)),
      env->up->up->vars[0],
      env->vars[0],
      env->up->up->vars[4]
    );
 } else {
  VError("Not enough arguments to _V0min_k744, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0min_k743(VEnv * env) {
 V_GC_CHECK(_V0min_k743, env) {
 if (env->num_vars == 1) {
  // ((bruijn min 36 35) (close _V0min_k744) (bruijn ##x.1965 0 0) (bruijn c 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0min_k744, env)}),
      env->vars[0],
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0min_k743, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0min_k745(VEnv * env) {
 V_GC_CHECK(_V0min_k745, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1968 1 0) (bruijn a 2 1) (bruijn bs 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[1],
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0min_k745, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k749(VEnv * env) {
 V_GC_CHECK(_V0loop_k749, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.1973 4 0) (bruijn ##x.1980 1 0) (bruijn ##x.1981 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k749, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k748(VEnv * env) {
 V_GC_CHECK(_V0loop_k748, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 40 38) (close _V0loop_k749) (bruijn bs 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k749, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k748, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k747(VEnv * env) {
 V_GC_CHECK(_V0loop_k747, env) {
 if (env->num_vars == 1) {
  // ((bruijn min 39 35) (close _V0loop_k748) (bruijn a 4 1) (bruijn ##x.1982 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k748, env)}),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k747, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k746(VEnv * env) {
 V_GC_CHECK(_V0loop_k746, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1975 0 0) ((bruijn ##k.1973 1 0) (bruijn ret 1 1)) ((bruijn car 38 37) (close _V0loop_k747) (bruijn bs 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k747, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k746, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda167(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda167, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 37 1) (close _V0loop_k746) (bruijn bs 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k746, env)}),
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda167, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0min_lambda166(VEnv * env) {
 V_GC_CHECK(_V0min_lambda166, env) {
  // (set! (close _V0min_k745) (bruijn loop 0 1) (close _V0loop_lambda167))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0min_k745, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda167, env)})
    );
 }
}
static void _V0min_lambda165(VEnv * env) {
 V_GC_CHECK(_V0min_lambda165, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1950 0 0) (bruijn a 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[1]
    );
 } else if (env->num_vars == 3) {
  // ((bruijn < 35 19) (close _V0min_k741) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0min_k741, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else if (env->num_vars == 4) {
  // ((bruijn min 35 35) (close _V0min_k742) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0min_k742, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else if (env->num_vars == 5) {
  // ((bruijn min 35 35) (close _V0min_k743) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0min_k743, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else if (env->num_vars >= 2) {
  // ((close _V0min_lambda166) (bruijn ##k.1966 0 0) #f)
  V_GATHER_VARARGS(&env, 2);
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0min_lambda166, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0min_lambda165, got ~D~N"
  "-- expected 2~N"
  "-- expected 3~N"
  "-- expected 4~N"
  "-- expected 5~N"
  "-- expected 2 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k48(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k48, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k49) (bruijn min 34 35) (close _V0min_lambda165))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k49, env)}),
      34, 35,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0min_lambda165, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k48, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0max_k750(VEnv * env) {
 V_GC_CHECK(_V0max_k750, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1987 0 0) ((bruijn ##k.1985 1 0) (bruijn a 1 1)) ((bruijn ##k.1985 1 0) (bruijn b 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0max_k750, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0max_k751(VEnv * env) {
 V_GC_CHECK(_V0max_k751, env) {
 if (env->num_vars == 1) {
  // ((bruijn max 35 34) (bruijn ##k.1992 1 0) (bruijn ##x.1994 0 0) (bruijn c 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 34)),
      env->up->vars[0],
      env->vars[0],
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0max_k751, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0max_k753(VEnv * env) {
 V_GC_CHECK(_V0max_k753, env) {
 if (env->num_vars == 1) {
  // ((bruijn max 36 34) (bruijn ##k.1995 2 0) (bruijn ##x.1997 0 0) (bruijn d 2 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 34)),
      env->up->up->vars[0],
      env->vars[0],
      env->up->up->vars[4]
    );
 } else {
  VError("Not enough arguments to _V0max_k753, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0max_k752(VEnv * env) {
 V_GC_CHECK(_V0max_k752, env) {
 if (env->num_vars == 1) {
  // ((bruijn max 35 34) (close _V0max_k753) (bruijn ##x.1998 0 0) (bruijn c 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0max_k753, env)}),
      env->vars[0],
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0max_k752, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0max_k754(VEnv * env) {
 V_GC_CHECK(_V0max_k754, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.2001 1 0) (bruijn a 2 1) (bruijn bs 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[1],
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0max_k754, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k758(VEnv * env) {
 V_GC_CHECK(_V0loop_k758, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.2006 4 0) (bruijn ##x.2013 1 0) (bruijn ##x.2014 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k758, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k757(VEnv * env) {
 V_GC_CHECK(_V0loop_k757, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 39 38) (close _V0loop_k758) (bruijn bs 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k758, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k757, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k756(VEnv * env) {
 V_GC_CHECK(_V0loop_k756, env) {
 if (env->num_vars == 1) {
  // ((bruijn max 38 34) (close _V0loop_k757) (bruijn a 4 1) (bruijn ##x.2015 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k757, env)}),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k756, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k755(VEnv * env) {
 V_GC_CHECK(_V0loop_k755, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2008 0 0) ((bruijn ##k.2006 1 0) (bruijn ret 1 1)) ((bruijn car 37 37) (close _V0loop_k756) (bruijn bs 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k756, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k755, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda170(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda170, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 36 1) (close _V0loop_k755) (bruijn bs 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k755, env)}),
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda170, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0max_lambda169(VEnv * env) {
 V_GC_CHECK(_V0max_lambda169, env) {
  // (set! (close _V0max_k754) (bruijn loop 0 1) (close _V0loop_lambda170))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0max_k754, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda170, env)})
    );
 }
}
static void _V0max_lambda168(VEnv * env) {
 V_GC_CHECK(_V0max_lambda168, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1983 0 0) (bruijn a 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[1]
    );
 } else if (env->num_vars == 3) {
  // ((bruijn > 34 21) (close _V0max_k750) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0max_k750, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else if (env->num_vars == 4) {
  // ((bruijn max 34 34) (close _V0max_k751) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0max_k751, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else if (env->num_vars == 5) {
  // ((bruijn max 34 34) (close _V0max_k752) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0max_k752, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else if (env->num_vars >= 2) {
  // ((close _V0max_lambda169) (bruijn ##k.1999 0 0) #f)
  V_GATHER_VARARGS(&env, 2);
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0max_lambda169, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0max_lambda168, got ~D~N"
  "-- expected 2~N"
  "-- expected 3~N"
  "-- expected 4~N"
  "-- expected 5~N"
  "-- expected 2 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k47(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k47, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k48) (bruijn max 33 34) (close _V0max_lambda168))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k48, env)}),
      33, 34,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0max_lambda168, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k47, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k46(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k46, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k47) (bruijn remainder 32 33) ##sys.remainder)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k47, env)}),
      32, 33,
      VEncodeClosure((VClosure[]){VMakeClosure(VRem,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k46, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k45(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k45, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k46) (bruijn quotient 31 32) ##sys.quotient)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k46, env)}),
      31, 32,
      VEncodeClosure((VClosure[]){VMakeClosure(VQuot,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k45, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k44(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k44, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k45) (bruijn / 30 31) ##sys./)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k45, env)}),
      30, 31,
      VEncodeClosure((VClosure[]){VMakeClosure(VDiv,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k44, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k43(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k43, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k44) (bruijn * 29 30) ##sys.*)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k44, env)}),
      29, 30,
      VEncodeClosure((VClosure[]){VMakeClosure(VMul,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k43, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k42(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k42, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k43) (bruijn - 28 29) ##sys.-)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k43, env)}),
      28, 29,
      VEncodeClosure((VClosure[]){VMakeClosure(VSub,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k42, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k41(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k41, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k42) (bruijn + 27 28) ##sys.+)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k42, env)}),
      27, 28,
      VEncodeClosure((VClosure[]){VMakeClosure(VAdd,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k41, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k40(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k40, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k41) (bruijn complex? 26 27) (bruijn number? 26 26))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k41, env)}),
      26, 27,
      VGetArg(env, 26, 26)
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k40, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0number_Q_k759(VEnv * env) {
 V_GC_CHECK(_V0number_Q_k759, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2018 0 0) ((bruijn ##k.2016 1 0) (bruijn ##x.2018 0 0)) (##sys.int? (bruijn ##k.2016 1 0) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->vars[0]
    );
} else {
    V_CALL_FUNC(VIntP,
      env->up->vars[0],
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0number_Q_k759, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0number_Q_lambda171(VEnv * env) {
 V_GC_CHECK(_V0number_Q_lambda171, env) {
 if (env->num_vars == 2) {
  // (##sys.double? (close _V0number_Q_k759) (bruijn x 0 1))
    V_CALL_FUNC(VDoubleP,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0number_Q_k759, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0number_Q_lambda171, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k39(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k39, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k40) (bruijn number? 25 26) (close _V0number_Q_lambda171))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k40, env)}),
      25, 26,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0number_Q_lambda171, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k39, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k38(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k38, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k39) (bruijn exact->inexact 24 25) (bruijn inexact 24 24))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k39, env)}),
      24, 25,
      VGetArg(env, 24, 24)
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k38, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0inexact_lambda172(VEnv * env) {
 V_GC_CHECK(_V0inexact_lambda172, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.2021 0 0) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0inexact_lambda172, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k37(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k37, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k38) (bruijn inexact 23 24) (close _V0inexact_lambda172))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k38, env)}),
      23, 24,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0inexact_lambda172, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k37, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_G_E_k762(VEnv * env) {
 V_GC_CHECK(_V0_G_E_k762, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.2025 3 0) (bruijn ##x.2030 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_G_E_k762, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_G_E_k761(VEnv * env) {
 V_GC_CHECK(_V0_G_E_k761, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 26 36) (close _V0_G_E_k762) (bruijn x0 3 1) (bruijn ##x.2031 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_G_E_k762, env)}),
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_G_E_k761, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_G_E_k760(VEnv * env) {
 V_GC_CHECK(_V0_G_E_k760, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 25 36) (close _V0_G_E_k761) (bruijn x1 2 2) (bruijn xs 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_G_E_k761, env)}),
      env->up->up->vars[2],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0_G_E_k760, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k769(VEnv * env) {
 V_GC_CHECK(_V0loop_k769, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 8 1) (bruijn ##k.2032 7 0) (bruijn ##x.2044 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k769, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k768(VEnv * env) {
 V_GC_CHECK(_V0loop_k768, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2039 0 0) ((bruijn ##k.2032 6 0) #f) ((bruijn cdr 31 38) (close _V0loop_k769) (bruijn xs 6 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k769, env)}),
      VGetArg(env, 6, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k768, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k767(VEnv * env) {
 V_GC_CHECK(_V0loop_k767, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 30 14) (close _V0loop_k768) (bruijn ##x.2045 0 0) -1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k768, env)}),
      env->vars[0],
      VEncodeInt(-1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k767, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k766(VEnv * env) {
 V_GC_CHECK(_V0loop_k766, env) {
 if (env->num_vars == 1) {
  // (##sys.cmp (close _V0loop_k767) (bruijn ##x.2046 1 0) (bruijn ##x.2047 0 0))
    V_CALL_FUNC(VCmp,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k767, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k766, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k765(VEnv * env) {
 V_GC_CHECK(_V0loop_k765, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 28 42) (close _V0loop_k766) (bruijn xs 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 42)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k766, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k765, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k764(VEnv * env) {
 V_GC_CHECK(_V0loop_k764, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2034 0 0) ((bruijn ##k.2032 2 0) #t) ((bruijn car 27 37) (close _V0loop_k765) (bruijn xs 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k765, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k764, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k763(VEnv * env) {
 V_GC_CHECK(_V0loop_k763, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 26 1) (close _V0loop_k764) (bruijn ##x.2048 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k764, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k763, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda175(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda175, env) {
 if (env->num_vars == 2) {
  // ((bruijn cdr 25 38) (close _V0loop_k763) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k763, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda175, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0_G_E_lambda174(VEnv * env) {
 V_GC_CHECK(_V0_G_E_lambda174, env) {
  // (set! (close _V0_G_E_k760) (bruijn loop 0 1) (close _V0loop_lambda175))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_G_E_k760, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda175, env)})
    );
 }
}
static void _V0_G_E_lambda173(VEnv * env) {
 V_GC_CHECK(_V0_G_E_lambda173, env) {
 if (env->num_vars >= 3) {
  // ((close _V0_G_E_lambda174) (bruijn ##k.2023 0 0) #f)
  V_GATHER_VARARGS(&env, 3);
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0_G_E_lambda174, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0_G_E_lambda173, got ~D~N"
  "-- expected 3 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k36(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k36, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k37) (bruijn >= 22 23) (close _V0_G_E_lambda173))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k37, env)}),
      22, 23,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_G_E_lambda173, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k36, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_L_E_k772(VEnv * env) {
 V_GC_CHECK(_V0_L_E_k772, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.2051 3 0) (bruijn ##x.2056 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_L_E_k772, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_L_E_k771(VEnv * env) {
 V_GC_CHECK(_V0_L_E_k771, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 25 36) (close _V0_L_E_k772) (bruijn x0 3 1) (bruijn ##x.2057 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_L_E_k772, env)}),
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_L_E_k771, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_L_E_k770(VEnv * env) {
 V_GC_CHECK(_V0_L_E_k770, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 24 36) (close _V0_L_E_k771) (bruijn x1 2 2) (bruijn xs 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_L_E_k771, env)}),
      env->up->up->vars[2],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0_L_E_k770, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k779(VEnv * env) {
 V_GC_CHECK(_V0loop_k779, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 8 1) (bruijn ##k.2058 7 0) (bruijn ##x.2070 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k779, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k778(VEnv * env) {
 V_GC_CHECK(_V0loop_k778, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2065 0 0) ((bruijn ##k.2058 6 0) #f) ((bruijn cdr 30 38) (close _V0loop_k779) (bruijn xs 6 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k779, env)}),
      VGetArg(env, 6, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k778, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k777(VEnv * env) {
 V_GC_CHECK(_V0loop_k777, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 29 14) (close _V0loop_k778) (bruijn ##x.2071 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k778, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k777, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k776(VEnv * env) {
 V_GC_CHECK(_V0loop_k776, env) {
 if (env->num_vars == 1) {
  // (##sys.cmp (close _V0loop_k777) (bruijn ##x.2072 1 0) (bruijn ##x.2073 0 0))
    V_CALL_FUNC(VCmp,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k777, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k776, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k775(VEnv * env) {
 V_GC_CHECK(_V0loop_k775, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 27 42) (close _V0loop_k776) (bruijn xs 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 42)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k776, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k775, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k774(VEnv * env) {
 V_GC_CHECK(_V0loop_k774, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2060 0 0) ((bruijn ##k.2058 2 0) #t) ((bruijn car 26 37) (close _V0loop_k775) (bruijn xs 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k775, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k774, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k773(VEnv * env) {
 V_GC_CHECK(_V0loop_k773, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 25 1) (close _V0loop_k774) (bruijn ##x.2074 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k774, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k773, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda178(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda178, env) {
 if (env->num_vars == 2) {
  // ((bruijn cdr 24 38) (close _V0loop_k773) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k773, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda178, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0_L_E_lambda177(VEnv * env) {
 V_GC_CHECK(_V0_L_E_lambda177, env) {
  // (set! (close _V0_L_E_k770) (bruijn loop 0 1) (close _V0loop_lambda178))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_L_E_k770, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda178, env)})
    );
 }
}
static void _V0_L_E_lambda176(VEnv * env) {
 V_GC_CHECK(_V0_L_E_lambda176, env) {
 if (env->num_vars >= 3) {
  // ((close _V0_L_E_lambda177) (bruijn ##k.2049 0 0) #f)
  V_GATHER_VARARGS(&env, 3);
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0_L_E_lambda177, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0_L_E_lambda176, got ~D~N"
  "-- expected 3 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k35(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k35, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k36) (bruijn <= 21 22) (close _V0_L_E_lambda176))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k36, env)}),
      21, 22,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_L_E_lambda176, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k35, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_G_k782(VEnv * env) {
 V_GC_CHECK(_V0_G_k782, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.2077 3 0) (bruijn ##x.2082 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_G_k782, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_G_k781(VEnv * env) {
 V_GC_CHECK(_V0_G_k781, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 24 36) (close _V0_G_k782) (bruijn x0 3 1) (bruijn ##x.2083 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_G_k782, env)}),
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_G_k781, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_G_k780(VEnv * env) {
 V_GC_CHECK(_V0_G_k780, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 23 36) (close _V0_G_k781) (bruijn x1 2 2) (bruijn xs 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_G_k781, env)}),
      env->up->up->vars[2],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0_G_k780, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k789(VEnv * env) {
 V_GC_CHECK(_V0loop_k789, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 8 1) (bruijn ##k.2084 7 0) (bruijn ##x.2094 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k789, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k788(VEnv * env) {
 V_GC_CHECK(_V0loop_k788, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2091 0 0) ((bruijn cdr 29 38) (close _V0loop_k789) (bruijn xs 6 1)) ((bruijn ##k.2084 6 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k789, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k788, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k787(VEnv * env) {
 V_GC_CHECK(_V0loop_k787, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 28 14) (close _V0loop_k788) (bruijn ##x.2097 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k788, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k787, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k786(VEnv * env) {
 V_GC_CHECK(_V0loop_k786, env) {
 if (env->num_vars == 1) {
  // (##sys.cmp (close _V0loop_k787) (bruijn ##x.2098 1 0) (bruijn ##x.2099 0 0))
    V_CALL_FUNC(VCmp,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k787, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k786, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k785(VEnv * env) {
 V_GC_CHECK(_V0loop_k785, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 26 42) (close _V0loop_k786) (bruijn xs 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 42)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k786, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k785, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k784(VEnv * env) {
 V_GC_CHECK(_V0loop_k784, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2086 0 0) ((bruijn ##k.2084 2 0) #t) ((bruijn car 25 37) (close _V0loop_k785) (bruijn xs 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k785, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k784, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k783(VEnv * env) {
 V_GC_CHECK(_V0loop_k783, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 24 1) (close _V0loop_k784) (bruijn ##x.2100 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k784, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k783, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda181(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda181, env) {
 if (env->num_vars == 2) {
  // ((bruijn cdr 23 38) (close _V0loop_k783) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k783, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda181, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0_G_lambda180(VEnv * env) {
 V_GC_CHECK(_V0_G_lambda180, env) {
  // (set! (close _V0_G_k780) (bruijn loop 0 1) (close _V0loop_lambda181))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_G_k780, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda181, env)})
    );
 }
}
static void _V0_G_lambda179(VEnv * env) {
 V_GC_CHECK(_V0_G_lambda179, env) {
 if (env->num_vars >= 3) {
  // ((close _V0_G_lambda180) (bruijn ##k.2075 0 0) #f)
  V_GATHER_VARARGS(&env, 3);
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0_G_lambda180, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0_G_lambda179, got ~D~N"
  "-- expected 3 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k34(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k34, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k35) (bruijn > 20 21) (close _V0_G_lambda179))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k35, env)}),
      20, 21,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_G_lambda179, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k34, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_E_k792(VEnv * env) {
 V_GC_CHECK(_V0_E_k792, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.2103 3 0) (bruijn ##x.2108 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_E_k792, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_E_k791(VEnv * env) {
 V_GC_CHECK(_V0_E_k791, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 23 36) (close _V0_E_k792) (bruijn x0 3 1) (bruijn ##x.2109 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_E_k792, env)}),
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_E_k791, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_E_k790(VEnv * env) {
 V_GC_CHECK(_V0_E_k790, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 22 36) (close _V0_E_k791) (bruijn x1 2 2) (bruijn xs 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_E_k791, env)}),
      env->up->up->vars[2],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0_E_k790, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k799(VEnv * env) {
 V_GC_CHECK(_V0loop_k799, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 8 1) (bruijn ##k.2110 7 0) (bruijn ##x.2120 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k799, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k798(VEnv * env) {
 V_GC_CHECK(_V0loop_k798, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2117 0 0) ((bruijn cdr 28 38) (close _V0loop_k799) (bruijn xs 6 1)) ((bruijn ##k.2110 6 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k799, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k798, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k797(VEnv * env) {
 V_GC_CHECK(_V0loop_k797, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 27 14) (close _V0loop_k798) (bruijn ##x.2123 0 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k798, env)}),
      env->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k797, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k796(VEnv * env) {
 V_GC_CHECK(_V0loop_k796, env) {
 if (env->num_vars == 1) {
  // (##sys.cmp (close _V0loop_k797) (bruijn ##x.2124 1 0) (bruijn ##x.2125 0 0))
    V_CALL_FUNC(VCmp,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k797, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k796, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k795(VEnv * env) {
 V_GC_CHECK(_V0loop_k795, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 25 42) (close _V0loop_k796) (bruijn xs 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 42)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k796, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k795, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k794(VEnv * env) {
 V_GC_CHECK(_V0loop_k794, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2112 0 0) ((bruijn ##k.2110 2 0) #t) ((bruijn car 24 37) (close _V0loop_k795) (bruijn xs 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k795, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k794, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k793(VEnv * env) {
 V_GC_CHECK(_V0loop_k793, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 23 1) (close _V0loop_k794) (bruijn ##x.2126 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k794, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k793, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda184(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda184, env) {
 if (env->num_vars == 2) {
  // ((bruijn cdr 22 38) (close _V0loop_k793) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k793, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda184, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0_E_lambda183(VEnv * env) {
 V_GC_CHECK(_V0_E_lambda183, env) {
  // (set! (close _V0_E_k790) (bruijn loop 0 1) (close _V0loop_lambda184))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_E_k790, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda184, env)})
    );
 }
}
static void _V0_E_lambda182(VEnv * env) {
 V_GC_CHECK(_V0_E_lambda182, env) {
 if (env->num_vars >= 3) {
  // ((close _V0_E_lambda183) (bruijn ##k.2101 0 0) #f)
  V_GATHER_VARARGS(&env, 3);
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0_E_lambda183, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0_E_lambda182, got ~D~N"
  "-- expected 3 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k33(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k33, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k34) (bruijn = 19 20) (close _V0_E_lambda182))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k34, env)}),
      19, 20,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_E_lambda182, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k33, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_L_k802(VEnv * env) {
 V_GC_CHECK(_V0_L_k802, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 3 1) (bruijn ##k.2129 3 0) (bruijn ##x.2134 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_L_k802, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_L_k801(VEnv * env) {
 V_GC_CHECK(_V0_L_k801, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 22 36) (close _V0_L_k802) (bruijn x0 3 1) (bruijn ##x.2135 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_L_k802, env)}),
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0_L_k801, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0_L_k800(VEnv * env) {
 V_GC_CHECK(_V0_L_k800, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 21 36) (close _V0_L_k801) (bruijn x1 2 2) (bruijn xs 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_L_k801, env)}),
      env->up->up->vars[2],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0_L_k800, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k809(VEnv * env) {
 V_GC_CHECK(_V0loop_k809, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 8 1) (bruijn ##k.2136 7 0) (bruijn ##x.2146 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k809, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k808(VEnv * env) {
 V_GC_CHECK(_V0loop_k808, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2143 0 0) ((bruijn cdr 27 38) (close _V0loop_k809) (bruijn xs 6 1)) ((bruijn ##k.2136 6 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k809, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k808, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k807(VEnv * env) {
 V_GC_CHECK(_V0loop_k807, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 26 14) (close _V0loop_k808) (bruijn ##x.2149 0 0) -1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k808, env)}),
      env->vars[0],
      VEncodeInt(-1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k807, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k806(VEnv * env) {
 V_GC_CHECK(_V0loop_k806, env) {
 if (env->num_vars == 1) {
  // (##sys.cmp (close _V0loop_k807) (bruijn ##x.2150 1 0) (bruijn ##x.2151 0 0))
    V_CALL_FUNC(VCmp,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k807, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k806, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k805(VEnv * env) {
 V_GC_CHECK(_V0loop_k805, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 24 42) (close _V0loop_k806) (bruijn xs 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 42)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k806, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k805, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k804(VEnv * env) {
 V_GC_CHECK(_V0loop_k804, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2138 0 0) ((bruijn ##k.2136 2 0) #t) ((bruijn car 23 37) (close _V0loop_k805) (bruijn xs 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k805, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k804, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k803(VEnv * env) {
 V_GC_CHECK(_V0loop_k803, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 22 1) (close _V0loop_k804) (bruijn ##x.2152 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k804, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k803, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda187(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda187, env) {
 if (env->num_vars == 2) {
  // ((bruijn cdr 21 38) (close _V0loop_k803) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k803, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda187, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0_L_lambda186(VEnv * env) {
 V_GC_CHECK(_V0_L_lambda186, env) {
  // (set! (close _V0_L_k800) (bruijn loop 0 1) (close _V0loop_lambda187))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_L_k800, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda187, env)})
    );
 }
}
static void _V0_L_lambda185(VEnv * env) {
 V_GC_CHECK(_V0_L_lambda185, env) {
 if (env->num_vars >= 3) {
  // ((close _V0_L_lambda186) (bruijn ##k.2127 0 0) #f)
  V_GATHER_VARARGS(&env, 3);
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0_L_lambda186, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0_L_lambda185, got ~D~N"
  "-- expected 3 or more~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k32(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k32, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k33) (bruijn < 18 19) (close _V0_L_lambda185))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k33, env)}),
      18, 19,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0_L_lambda185, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k32, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k31(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k31, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k32) (bruijn not 17 18) ##sys.not)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k32, env)}),
      17, 18,
      VEncodeClosure((VClosure[]){VMakeClosure(VNot,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k31, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0equal_Q_k814(VEnv * env) {
 V_GC_CHECK(_V0equal_Q_k814, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2167 0 0) ((bruijn equal? 22 17) (bruijn ##k.2153 5 0) (##inline ##sys.cdr (bruijn x 5 1)) (##inline ##sys.cdr (bruijn y 5 2))) ((bruijn ##k.2153 5 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 17)),
      VGetArg(env, 5, 0),
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCdr(
VGetArg(env, 5, 2)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0equal_Q_k814, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0equal_Q_k813(VEnv * env) {
 V_GC_CHECK(_V0equal_Q_k813, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2179 0 0) ((bruijn ##k.2153 4 0) (bruijn ##x.2179 0 0)) (if (##inline ##sys.pair? (bruijn x 4 1)) (if (##inline ##sys.pair? (bruijn y 4 2)) ((bruijn equal? 21 17) (close _V0equal_Q_k814) (##inline ##sys.car (bruijn x 4 1)) (##inline ##sys.car (bruijn y 4 2))) ((bruijn ##k.2153 4 0) #f)) ((bruijn ##k.2153 4 0) #f)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      env->vars[0]
    );
} else {
if(VDecodeBool(
VInlinePairP(
VGetArg(env, 4, 1)
    )
)) {
if(VDecodeBool(
VInlinePairP(
VGetArg(env, 4, 2)
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0equal_Q_k814, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )
,
      VInlineCar(
VGetArg(env, 4, 2)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VEncodeBool(false)
    );
}
}
 } else {
  VError("Not enough arguments to _V0equal_Q_k813, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0equal_Q_k815(VEnv * env) {
 V_GC_CHECK(_V0equal_Q_k815, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2167 0 0) ((bruijn equal? 21 17) (bruijn ##k.2153 4 0) (##inline ##sys.cdr (bruijn x 4 1)) (##inline ##sys.cdr (bruijn y 4 2))) ((bruijn ##k.2153 4 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 17)),
      VGetArg(env, 4, 0),
      VInlineCdr(
VGetArg(env, 4, 1)
    )
,
      VInlineCdr(
VGetArg(env, 4, 2)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0equal_Q_k815, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0equal_Q_k812(VEnv * env) {
 V_GC_CHECK(_V0equal_Q_k812, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2177 0 0) (##sys.blob=? (close _V0equal_Q_k813) (bruijn x 3 1) (bruijn y 3 2)) (if (##inline ##sys.pair? (bruijn x 3 1)) (if (##inline ##sys.pair? (bruijn y 3 2)) ((bruijn equal? 20 17) (close _V0equal_Q_k815) (##inline ##sys.car (bruijn x 3 1)) (##inline ##sys.car (bruijn y 3 2))) ((bruijn ##k.2153 3 0) #f)) ((bruijn ##k.2153 3 0) #f)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VBlobEqv,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0equal_Q_k813, env)}),
      env->up->up->up->vars[1],
      env->up->up->up->vars[2]
    );
} else {
if(VDecodeBool(
VInlinePairP(
env->up->up->up->vars[1]
    )
)) {
if(VDecodeBool(
VInlinePairP(
env->up->up->up->vars[2]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0equal_Q_k815, env)}),
      VInlineCar(
env->up->up->up->vars[1]
    )
,
      VInlineCar(
env->up->up->up->vars[2]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodeBool(false)
    );
}
}
 } else {
  VError("Not enough arguments to _V0equal_Q_k812, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0equal_Q_k816(VEnv * env) {
 V_GC_CHECK(_V0equal_Q_k816, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2167 0 0) ((bruijn equal? 20 17) (bruijn ##k.2153 3 0) (##inline ##sys.cdr (bruijn x 3 1)) (##inline ##sys.cdr (bruijn y 3 2))) ((bruijn ##k.2153 3 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 17)),
      env->up->up->up->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCdr(
env->up->up->up->vars[2]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0equal_Q_k816, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0equal_Q_k811(VEnv * env) {
 V_GC_CHECK(_V0equal_Q_k811, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2174 0 0) (##sys.blob? (close _V0equal_Q_k812) (bruijn y 2 2)) (if (##inline ##sys.pair? (bruijn x 2 1)) (if (##inline ##sys.pair? (bruijn y 2 2)) ((bruijn equal? 19 17) (close _V0equal_Q_k816) (##inline ##sys.car (bruijn x 2 1)) (##inline ##sys.car (bruijn y 2 2))) ((bruijn ##k.2153 2 0) #f)) ((bruijn ##k.2153 2 0) #f)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VBlobP,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0equal_Q_k812, env)}),
      env->up->up->vars[2]
    );
} else {
if(VDecodeBool(
VInlinePairP(
env->up->up->vars[1]
    )
)) {
if(VDecodeBool(
VInlinePairP(
env->up->up->vars[2]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0equal_Q_k816, env)}),
      VInlineCar(
env->up->up->vars[1]
    )
,
      VInlineCar(
env->up->up->vars[2]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(false)
    );
}
}
 } else {
  VError("Not enough arguments to _V0equal_Q_k811, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0equal_Q_k810(VEnv * env) {
 V_GC_CHECK(_V0equal_Q_k810, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2155 0 0) ((bruijn ##k.2153 1 0) (bruijn ##x.2155 0 0)) (##sys.blob? (close _V0equal_Q_k811) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->vars[0]
    );
} else {
    V_CALL_FUNC(VBlobP,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0equal_Q_k811, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0equal_Q_k810, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0equal_Q_lambda188(VEnv * env) {
 V_GC_CHECK(_V0equal_Q_lambda188, env) {
 if (env->num_vars == 3) {
  // ((close _V0equal_Q_k810) (##inline ##sys.eq? (bruijn x 0 1) (bruijn y 0 2)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0equal_Q_k810, env)},
      VInlineEq(
env->vars[1],
      env->vars[2]
    )

    );
 } else {
  VError("Not enough arguments to _V0equal_Q_lambda188, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k30(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k30, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k31) (bruijn equal? 16 17) (close _V0equal_Q_lambda188))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k31, env)}),
      16, 17,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0equal_Q_lambda188, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k30, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0eqv_Q_k819(VEnv * env) {
 V_GC_CHECK(_V0eqv_Q_k819, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2188 0 0) (##sys.symbol=? (bruijn ##k.2180 3 0) (bruijn x 3 1) (bruijn y 3 2)) ((bruijn ##k.2180 3 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VSymbolEqv,
      env->up->up->up->vars[0],
      env->up->up->up->vars[1],
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0eqv_Q_k819, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0eqv_Q_k818(VEnv * env) {
 V_GC_CHECK(_V0eqv_Q_k818, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2185 0 0) (##sys.symbol? (close _V0eqv_Q_k819) (bruijn y 2 2)) ((bruijn ##k.2180 2 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_FUNC(VSymbolP,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0eqv_Q_k819, env)}),
      env->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0eqv_Q_k818, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0eqv_Q_k817(VEnv * env) {
 V_GC_CHECK(_V0eqv_Q_k817, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2182 0 0) ((bruijn ##k.2180 1 0) (bruijn ##x.2182 0 0)) (##sys.symbol? (close _V0eqv_Q_k818) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->vars[0]
    );
} else {
    V_CALL_FUNC(VSymbolP,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0eqv_Q_k818, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0eqv_Q_k817, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0eqv_Q_lambda189(VEnv * env) {
 V_GC_CHECK(_V0eqv_Q_lambda189, env) {
 if (env->num_vars == 3) {
  // ((close _V0eqv_Q_k817) (##inline ##sys.eq? (bruijn x 0 1) (bruijn y 0 2)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0eqv_Q_k817, env)},
      VInlineEq(
env->vars[1],
      env->vars[2]
    )

    );
 } else {
  VError("Not enough arguments to _V0eqv_Q_lambda189, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k29(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k29, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k30) (bruijn eqv? 15 16) (close _V0eqv_Q_lambda189))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k30, env)}),
      15, 16,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0eqv_Q_lambda189, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k29, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k28(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k28, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k29) (bruijn symbol=? 14 15) ##sys.symbol=?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k29, env)}),
      14, 15,
      VEncodeClosure((VClosure[]){VMakeClosure(VSymbolEqv,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k28, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k27(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k27, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k28) (bruijn eq? 13 14) ##sys.eq?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k28, env)}),
      13, 14,
      VEncodeClosure((VClosure[]){VMakeClosure(VEq,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k27, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k26(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k26, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k27) (bruijn real? 12 13) ##sys.double?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k27, env)}),
      12, 13,
      VEncodeClosure((VClosure[]){VMakeClosure(VDoubleP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k26, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k25(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k25, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k26) (bruijn inexact? 11 12) ##sys.double?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k26, env)}),
      11, 12,
      VEncodeClosure((VClosure[]){VMakeClosure(VDoubleP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k25, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k24(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k24, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k25) (bruijn integer? 10 11) ##sys.int?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k25, env)}),
      10, 11,
      VEncodeClosure((VClosure[]){VMakeClosure(VIntP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k24, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k23(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k23, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k24) (bruijn exact? 9 10) ##sys.int?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k24, env)}),
      9, 10,
      VEncodeClosure((VClosure[]){VMakeClosure(VIntP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k23, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k22(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k22, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k23) (bruijn char? 8 9) ##sys.char?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k23, env)}),
      8, 9,
      VEncodeClosure((VClosure[]){VMakeClosure(VCharP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k21(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k21, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k22) (bruijn string? 7 8) ##sys.string?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k22, env)}),
      7, 8,
      VEncodeClosure((VClosure[]){VMakeClosure(VStringP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k21, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k20(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k20, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k21) (bruijn symbol? 6 7) ##sys.symbol?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k21, env)}),
      6, 7,
      VEncodeClosure((VClosure[]){VMakeClosure(VSymbolP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k20, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k19(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k19, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k20) (bruijn procedure? 5 6) ##sys.procedure?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k20, env)}),
      5, 6,
      VEncodeClosure((VClosure[]){VMakeClosure(VProcedureP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k19, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k18(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k18, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k19) (bruijn vector? 4 5) ##sys.vector?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k19, env)}),
      4, 5,
      VEncodeClosure((VClosure[]){VMakeClosure(VVectorP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k17(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k17, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k18) (bruijn pair? 3 4) ##sys.pair?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k18, env)}),
      3, 4,
      VEncodeClosure((VClosure[]){VMakeClosure(VPairP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k17, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k16(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k16, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k17) (bruijn eof-object? 2 3) ##sys.eof-object?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k17, env)}),
      2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure(VEofP,NULL)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k16, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0boolean_Q_k820(VEnv * env) {
 V_GC_CHECK(_V0boolean_Q_k820, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2193 0 0) ((bruijn ##k.2191 1 0) (bruijn ##x.2193 0 0)) ((bruijn ##k.2191 1 0) (##inline ##sys.eq? (bruijn x 1 1) #f)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->vars[0]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineEq(
env->up->vars[1],
      VEncodeBool(false)
    )

    );
}
 } else {
  VError("Not enough arguments to _V0boolean_Q_k820, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0boolean_Q_lambda190(VEnv * env) {
 V_GC_CHECK(_V0boolean_Q_lambda190, env) {
 if (env->num_vars == 2) {
  // ((close _V0boolean_Q_k820) (##inline ##sys.eq? (bruijn x 0 1) #t))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0boolean_Q_k820, env)},
      VInlineEq(
env->vars[1],
      VEncodeBool(true)
    )

    );
 } else {
  VError("Not enough arguments to _V0boolean_Q_lambda190, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k15(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k15, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0vanity_V0core_V20_k16) (bruijn boolean? 1 2) (close _V0boolean_Q_lambda190))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k16, env)}),
      1, 2,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0boolean_Q_lambda190, env)})
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_lambda11(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda11, env) {
  // (set! (close _V0vanity_V0core_V20_k15) (bruijn null? 0 1) ##sys.null?)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k15, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(VNullP,NULL)})
    );
 }
}
static void _V0vanity_V0core_V20_lambda10(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda10, env) {
  // ((close _V0vanity_V0core_V20_lambda11) (bruijn ##k.76 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_lambda11, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
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
static void _V0vanity_V0core_V20_lambda9(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda9, env) {
  // ((close _V0vanity_V0core_V20_lambda10) (bruijn ##k.74 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_lambda10, env)},
      env->vars[0]
    );
 }
}
static void _V0vanity_V0core_V20_k14(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k14, env) {
 if (env->num_vars == 1) {
  // ((close _V0vanity_V0core_V20_lambda9) (bruijn ##k.72 2 0) (bruijn ##x.2196 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_lambda9, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k14, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_k13(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_k13, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.2197 0 0) (close _V0vanity_V0core_V20_k14) (##string ##string.2598))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k14, env)}),
      VEncodePointer(&_V10string_D2598.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_k13, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0vanity_V0core_V20_lambda8(VEnv * env) {
 V_GC_CHECK(_V0vanity_V0core_V20_lambda8, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close _V0vanity_V0core_V20_k13) (##string ##string.2599))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0vanity_V0core_V20_k13, env)}),
      VEncodePointer(&_V10string_D2599.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_lambda193(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_lambda193, env) {
  // ((bruijn ##k.2203 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote null?) (bruijn null? 0 125)) (##inline ##sys.cons (##inline ##sys.cons (quote eof-object?) (bruijn eof-object? 0 1)) (##inline ##sys.cons (##inline ##sys.cons (quote boolean?) (bruijn boolean? 0 124)) (##inline ##sys.cons (##inline ##sys.cons (quote pair?) (bruijn pair? 0 2)) (##inline ##sys.cons (##inline ##sys.cons (quote vector?) (bruijn vector? 0 123)) (##inline ##sys.cons (##inline ##sys.cons (quote procedure?) (bruijn procedure? 0 3)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol?) (bruijn symbol? 0 122)) (##inline ##sys.cons (##inline ##sys.cons (quote string?) (bruijn string? 0 4)) (##inline ##sys.cons (##inline ##sys.cons (quote exact?) (bruijn exact? 0 121)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact?) (bruijn inexact? 0 5)) (##inline ##sys.cons (##inline ##sys.cons (quote real?) (bruijn real? 0 120)) (##inline ##sys.cons (##inline ##sys.cons (quote integer?) (bruijn integer? 0 6)) (##inline ##sys.cons (##inline ##sys.cons (quote char?) (bruijn char? 0 119)) (##inline ##sys.cons (##inline ##sys.cons (quote eq?) (bruijn eq? 0 7)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol=?) (bruijn symbol=? 0 118)) (##inline ##sys.cons (##inline ##sys.cons (quote eqv?) (bruijn eqv? 0 8)) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (bruijn equal? 0 117)) (##inline ##sys.cons (##inline ##sys.cons (quote not) (bruijn not 0 9)) (##inline ##sys.cons (##inline ##sys.cons (quote <) (bruijn < 0 116)) (##inline ##sys.cons (##inline ##sys.cons (quote =) (bruijn = 0 10)) (##inline ##sys.cons (##inline ##sys.cons (quote >) (bruijn > 0 115)) (##inline ##sys.cons (##inline ##sys.cons (quote <=) (bruijn <= 0 11)) (##inline ##sys.cons (##inline ##sys.cons (quote >=) (bruijn >= 0 114)) (##inline ##sys.cons (##inline ##sys.cons (quote inexact) (bruijn inexact 0 12)) (##inline ##sys.cons (##inline ##sys.cons (quote exact->inexact) (bruijn exact->inexact 0 113)) (##inline ##sys.cons (##inline ##sys.cons (quote number?) (bruijn number? 0 13)) (##inline ##sys.cons (##inline ##sys.cons (quote complex?) (bruijn complex? 0 112)) (##inline ##sys.cons (##inline ##sys.cons (quote +) (bruijn + 0 14)) (##inline ##sys.cons (##inline ##sys.cons (quote -) (bruijn - 0 111)) (##inline ##sys.cons (##inline ##sys.cons (quote *) (bruijn * 0 15)) (##inline ##sys.cons (##inline ##sys.cons (quote /) (bruijn / 0 110)) (##inline ##sys.cons (##inline ##sys.cons (quote quotient) (bruijn quotient 0 16)) (##inline ##sys.cons (##inline ##sys.cons (quote remainder) (bruijn remainder 0 109)) (##inline ##sys.cons (##inline ##sys.cons (quote max) (bruijn max 0 17)) (##inline ##sys.cons (##inline ##sys.cons (quote min) (bruijn min 0 108)) (##inline ##sys.cons (##inline ##sys.cons (quote cons) (bruijn cons 0 18)) (##inline ##sys.cons (##inline ##sys.cons (quote car) (bruijn car 0 107)) (##inline ##sys.cons (##inline ##sys.cons (quote cdr) (bruijn cdr 0 19)) (##inline ##sys.cons (##inline ##sys.cons (quote set-car!) (bruijn set-car! 0 106)) (##inline ##sys.cons (##inline ##sys.cons (quote set-cdr!) (bruijn set-cdr! 0 20)) (##inline ##sys.cons (##inline ##sys.cons (quote caar) (bruijn caar 0 105)) (##inline ##sys.cons (##inline ##sys.cons (quote cadr) (bruijn cadr 0 21)) (##inline ##sys.cons (##inline ##sys.cons (quote cdar) (bruijn cdar 0 104)) (##inline ##sys.cons (##inline ##sys.cons (quote cddr) (bruijn cddr 0 22)) (##inline ##sys.cons (##inline ##sys.cons (quote caaar) (bruijn caaar 0 103)) (##inline ##sys.cons (##inline ##sys.cons (quote caadr) (bruijn caadr 0 23)) (##inline ##sys.cons (##inline ##sys.cons (quote cadar) (bruijn cadar 0 102)) (##inline ##sys.cons (##inline ##sys.cons (quote caddr) (bruijn caddr 0 24)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaar) (bruijn cdaar 0 101)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadr) (bruijn cdadr 0 25)) (##inline ##sys.cons (##inline ##sys.cons (quote cddar) (bruijn cddar 0 100)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddr) (bruijn cdddr 0 26)) (##inline ##sys.cons (##inline ##sys.cons (quote caaaar) (bruijn caaaar 0 99)) (##inline ##sys.cons (##inline ##sys.cons (quote caaadr) (bruijn caaadr 0 27)) (##inline ##sys.cons (##inline ##sys.cons (quote caadar) (bruijn caadar 0 98)) (##inline ##sys.cons (##inline ##sys.cons (quote caaddr) (bruijn caaddr 0 28)) (##inline ##sys.cons (##inline ##sys.cons (quote cadaar) (bruijn cadaar 0 97)) (##inline ##sys.cons (##inline ##sys.cons (quote cadadr) (bruijn cadadr 0 29)) (##inline ##sys.cons (##inline ##sys.cons (quote caddar) (bruijn caddar 0 96)) (##inline ##sys.cons (##inline ##sys.cons (quote cadddr) (bruijn cadddr 0 30)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaaar) (bruijn cdaaar 0 95)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaadr) (bruijn cdaadr 0 31)) (##inline ##sys.cons (##inline ##sys.cons (quote cdadar) (bruijn cdadar 0 94)) (##inline ##sys.cons (##inline ##sys.cons (quote cdaddr) (bruijn cdaddr 0 32)) (##inline ##sys.cons (##inline ##sys.cons (quote cddaar) (bruijn cddaar 0 93)) (##inline ##sys.cons (##inline ##sys.cons (quote cddadr) (bruijn cddadr 0 33)) (##inline ##sys.cons (##inline ##sys.cons (quote cdddar) (bruijn cdddar 0 92)) (##inline ##sys.cons (##inline ##sys.cons (quote cddddr) (bruijn cddddr 0 34)) (##inline ##sys.cons (##inline ##sys.cons (quote list) (bruijn list 0 91)) (##inline ##sys.cons (##inline ##sys.cons (quote length) (bruijn length 0 35)) (##inline ##sys.cons (##inline ##sys.cons (quote list-ref) (bruijn list-ref 0 90)) (##inline ##sys.cons (##inline ##sys.cons (quote map) (bruijn map 0 36)) (##inline ##sys.cons (##inline ##sys.cons (quote for-each) (bruijn for-each 0 89)) (##inline ##sys.cons (##inline ##sys.cons (quote append) (bruijn append 0 37)) (##inline ##sys.cons (##inline ##sys.cons (quote reverse) (bruijn reverse 0 88)) (##inline ##sys.cons (##inline ##sys.cons (quote memq) (bruijn memq 0 38)) (##inline ##sys.cons (##inline ##sys.cons (quote memv) (bruijn memv 0 87)) (##inline ##sys.cons (##inline ##sys.cons (quote member) (bruijn member 0 39)) (##inline ##sys.cons (##inline ##sys.cons (quote assq) (bruijn assq 0 86)) (##inline ##sys.cons (##inline ##sys.cons (quote assv) (bruijn assv 0 40)) (##inline ##sys.cons (##inline ##sys.cons (quote assoc) (bruijn assoc 0 85)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 0 79)) (##inline ##sys.cons (##inline ##sys.cons (quote list->string) (bruijn list->string 0 84)) (##inline ##sys.cons (##inline ##sys.cons (quote make-string) (bruijn make-string 0 41)) (##inline ##sys.cons (##inline ##sys.cons (quote substring) (bruijn substring 0 83)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy) (bruijn string-copy 0 42)) (##inline ##sys.cons (##inline ##sys.cons (quote string-copy!) (bruijn string-copy! 0 82)) (##inline ##sys.cons (##inline ##sys.cons (quote string-ref) (bruijn string-ref 0 43)) (##inline ##sys.cons (##inline ##sys.cons (quote string-set!) (bruijn string-set! 0 81)) (##inline ##sys.cons (##inline ##sys.cons (quote string-length) (bruijn string-length 0 44)) (##inline ##sys.cons (##inline ##sys.cons (quote string->symbol) (bruijn string->symbol 0 80)) (##inline ##sys.cons (##inline ##sys.cons (quote string->number) (bruijn string->number 0 45)) (##inline ##sys.cons (##inline ##sys.cons (quote string->list) (bruijn string->list 0 79)) (##inline ##sys.cons (##inline ##sys.cons (quote string-append) (bruijn string-append 0 46)) (##inline ##sys.cons (##inline ##sys.cons (quote symbol->string) (bruijn symbol->string 0 78)) (##inline ##sys.cons (##inline ##sys.cons (quote list->vector) (bruijn list->vector 0 47)) (##inline ##sys.cons (##inline ##sys.cons (quote vector) (bruijn vector 0 77)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-ref) (bruijn vector-ref 0 48)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-set!) (bruijn vector-set! 0 76)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-length) (bruijn vector-length 0 49)) (##inline ##sys.cons (##inline ##sys.cons (quote vector-for-each) (bruijn vector-for-each 0 75)) (##inline ##sys.cons (##inline ##sys.cons (quote char->integer) (bruijn char->integer 0 50)) (##inline ##sys.cons (##inline ##sys.cons (quote current-output-port) (bruijn current-output-port 0 74)) (##inline ##sys.cons (##inline ##sys.cons (quote current-error-port) (bruijn current-error-port 0 51)) (##inline ##sys.cons (##inline ##sys.cons (quote current-input-port) (bruijn current-input-port 0 73)) (##inline ##sys.cons (##inline ##sys.cons (quote open-input-file) (bruijn open-input-file 0 52)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-file) (bruijn open-output-file 0 72)) (##inline ##sys.cons (##inline ##sys.cons (quote close-port) (bruijn close-port 0 53)) (##inline ##sys.cons (##inline ##sys.cons (quote open-output-string) (bruijn open-output-string 0 71)) (##inline ##sys.cons (##inline ##sys.cons (quote get-output-string) (bruijn get-output-string 0 54)) (##inline ##sys.cons (##inline ##sys.cons (quote with-output-to-file) (bruijn with-output-to-file 0 70)) (##inline ##sys.cons (##inline ##sys.cons (quote with-input-from-file) (bruijn with-input-from-file 0 55)) (##inline ##sys.cons (##inline ##sys.cons (quote read-char) (bruijn read-char 0 69)) (##inline ##sys.cons (##inline ##sys.cons (quote read-line) (bruijn read-line 0 56)) (##inline ##sys.cons (##inline ##sys.cons (quote read) (bruijn read 0 68)) (##inline ##sys.cons (##inline ##sys.cons (quote newline) (bruijn newline 0 57)) (##inline ##sys.cons (##inline ##sys.cons (quote display) (bruijn display 0 67)) (##inline ##sys.cons (##inline ##sys.cons (quote write) (bruijn write 0 58)) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (bruijn call/cc 0 66)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-current-continuation) (bruijn call-with-current-continuation 0 59)) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (bruijn call-with-values 0 65)) (##inline ##sys.cons (##inline ##sys.cons (quote apply) (bruijn apply 0 60)) (##inline ##sys.cons (##inline ##sys.cons (quote values) (bruijn values 0 64)) (##inline ##sys.cons (##inline ##sys.cons (quote command-line) (bruijn command-line 0 61)) (##inline ##sys.cons (##inline ##sys.cons (quote exit) (bruijn exit 0 63)) (##inline ##sys.cons (##inline ##sys.cons (quote error) (bruijn error 0 62)) (quote ()))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER),
      env->vars[125]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eof__object_Q.sym, VPOINTER_OTHER),
      env->vars[1]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0boolean_Q.sym, VPOINTER_OTHER),
      env->vars[124]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER),
      env->vars[2]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER),
      env->vars[123]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0procedure_Q.sym, VPOINTER_OTHER),
      env->vars[3]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER),
      env->vars[122]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER),
      env->vars[4]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact_Q.sym, VPOINTER_OTHER),
      env->vars[121]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact_Q.sym, VPOINTER_OTHER),
      env->vars[5]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0real_Q.sym, VPOINTER_OTHER),
      env->vars[120]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER),
      env->vars[6]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER),
      env->vars[119]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER),
      env->vars[7]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol_E_Q.sym, VPOINTER_OTHER),
      env->vars[118]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER),
      env->vars[8]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      env->vars[117]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0not.sym, VPOINTER_OTHER),
      env->vars[9]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L.sym, VPOINTER_OTHER),
      env->vars[116]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_E.sym, VPOINTER_OTHER),
      env->vars[10]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G.sym, VPOINTER_OTHER),
      env->vars[115]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER),
      env->vars[11]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_G_E.sym, VPOINTER_OTHER),
      env->vars[114]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inexact.sym, VPOINTER_OTHER),
      env->vars[12]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exact___Ginexact.sym, VPOINTER_OTHER),
      env->vars[113]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER),
      env->vars[13]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0complex_Q.sym, VPOINTER_OTHER),
      env->vars[112]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      env->vars[14]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0__.sym, VPOINTER_OTHER),
      env->vars[111]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_S.sym, VPOINTER_OTHER),
      env->vars[15]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_W.sym, VPOINTER_OTHER),
      env->vars[110]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quotient.sym, VPOINTER_OTHER),
      env->vars[16]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0remainder.sym, VPOINTER_OTHER),
      env->vars[109]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0max.sym, VPOINTER_OTHER),
      env->vars[17]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0min.sym, VPOINTER_OTHER),
      env->vars[108]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cons.sym, VPOINTER_OTHER),
      env->vars[18]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0car.sym, VPOINTER_OTHER),
      env->vars[107]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER),
      env->vars[19]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER),
      env->vars[106]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0set__cdr_B.sym, VPOINTER_OTHER),
      env->vars[20]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caar.sym, VPOINTER_OTHER),
      env->vars[105]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER),
      env->vars[21]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER),
      env->vars[104]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER),
      env->vars[22]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaar.sym, VPOINTER_OTHER),
      env->vars[103]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadr.sym, VPOINTER_OTHER),
      env->vars[23]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER),
      env->vars[102]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER),
      env->vars[24]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaar.sym, VPOINTER_OTHER),
      env->vars[101]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER),
      env->vars[25]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER),
      env->vars[100]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddr.sym, VPOINTER_OTHER),
      env->vars[26]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaaar.sym, VPOINTER_OTHER),
      env->vars[99]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaadr.sym, VPOINTER_OTHER),
      env->vars[27]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caadar.sym, VPOINTER_OTHER),
      env->vars[98]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caaddr.sym, VPOINTER_OTHER),
      env->vars[28]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadaar.sym, VPOINTER_OTHER),
      env->vars[97]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadadr.sym, VPOINTER_OTHER),
      env->vars[29]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0caddar.sym, VPOINTER_OTHER),
      env->vars[96]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER),
      env->vars[30]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaaar.sym, VPOINTER_OTHER),
      env->vars[95]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaadr.sym, VPOINTER_OTHER),
      env->vars[31]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdadar.sym, VPOINTER_OTHER),
      env->vars[94]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdaddr.sym, VPOINTER_OTHER),
      env->vars[32]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddaar.sym, VPOINTER_OTHER),
      env->vars[93]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddadr.sym, VPOINTER_OTHER),
      env->vars[33]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cdddar.sym, VPOINTER_OTHER),
      env->vars[92]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cddddr.sym, VPOINTER_OTHER),
      env->vars[34]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list.sym, VPOINTER_OTHER),
      env->vars[91]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0length.sym, VPOINTER_OTHER),
      env->vars[35]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER),
      env->vars[90]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0map.sym, VPOINTER_OTHER),
      env->vars[36]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER),
      env->vars[89]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0append.sym, VPOINTER_OTHER),
      env->vars[37]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER),
      env->vars[88]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memq.sym, VPOINTER_OTHER),
      env->vars[38]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0memv.sym, VPOINTER_OTHER),
      env->vars[87]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0member.sym, VPOINTER_OTHER),
      env->vars[39]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assq.sym, VPOINTER_OTHER),
      env->vars[86]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assv.sym, VPOINTER_OTHER),
      env->vars[40]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER),
      env->vars[85]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      env->vars[79]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gstring.sym, VPOINTER_OTHER),
      env->vars[84]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0make__string.sym, VPOINTER_OTHER),
      env->vars[41]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0substring.sym, VPOINTER_OTHER),
      env->vars[83]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER),
      env->vars[42]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__copy_B.sym, VPOINTER_OTHER),
      env->vars[82]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER),
      env->vars[43]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__set_B.sym, VPOINTER_OTHER),
      env->vars[81]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER),
      env->vars[44]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER),
      env->vars[80]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Gnumber.sym, VPOINTER_OTHER),
      env->vars[45]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER),
      env->vars[79]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER),
      env->vars[46]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER),
      env->vars[78]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0list___Gvector.sym, VPOINTER_OTHER),
      env->vars[47]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector.sym, VPOINTER_OTHER),
      env->vars[77]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__ref.sym, VPOINTER_OTHER),
      env->vars[48]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__set_B.sym, VPOINTER_OTHER),
      env->vars[76]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__length.sym, VPOINTER_OTHER),
      env->vars[49]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vector__for__each.sym, VPOINTER_OTHER),
      env->vars[75]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char___Ginteger.sym, VPOINTER_OTHER),
      env->vars[50]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__output__port.sym, VPOINTER_OTHER),
      env->vars[74]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__error__port.sym, VPOINTER_OTHER),
      env->vars[51]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0current__input__port.sym, VPOINTER_OTHER),
      env->vars[73]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__input__file.sym, VPOINTER_OTHER),
      env->vars[52]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__file.sym, VPOINTER_OTHER),
      env->vars[72]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER),
      env->vars[53]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER),
      env->vars[71]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER),
      env->vars[54]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__output__to__file.sym, VPOINTER_OTHER),
      env->vars[70]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0with__input__from__file.sym, VPOINTER_OTHER),
      env->vars[55]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__char.sym, VPOINTER_OTHER),
      env->vars[69]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read__line.sym, VPOINTER_OTHER),
      env->vars[56]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0read.sym, VPOINTER_OTHER),
      env->vars[68]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0newline.sym, VPOINTER_OTHER),
      env->vars[57]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0display.sym, VPOINTER_OTHER),
      env->vars[67]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0write.sym, VPOINTER_OTHER),
      env->vars[58]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      env->vars[66]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__current__continuation.sym, VPOINTER_OTHER),
      env->vars[59]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      env->vars[65]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0apply.sym, VPOINTER_OTHER),
      env->vars[60]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0values.sym, VPOINTER_OTHER),
      env->vars[64]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0command__line.sym, VPOINTER_OTHER),
      env->vars[61]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0exit.sym, VPOINTER_OTHER),
      env->vars[63]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      env->vars[62]
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
static void _V0scheme_V0r7rs_V20_k949(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k949, env) {
 if (env->num_vars == 1) {
  // ((close _V0scheme_V0r7rs_V20_lambda193) (bruijn ##k.2201 125 0) (bruijn ##x.2456 124 0) (bruijn ##x.2457 123 0) (bruijn ##x.2458 122 0) (bruijn ##x.2459 121 0) (bruijn ##x.2460 120 0) (bruijn ##x.2461 119 0) (bruijn ##x.2462 118 0) (bruijn ##x.2463 117 0) (bruijn ##x.2464 116 0) (bruijn ##x.2465 115 0) (bruijn ##x.2466 114 0) (bruijn ##x.2467 113 0) (bruijn ##x.2468 112 0) (bruijn ##x.2469 111 0) (bruijn ##x.2470 110 0) (bruijn ##x.2471 109 0) (bruijn ##x.2472 108 0) (bruijn ##x.2473 107 0) (bruijn ##x.2474 106 0) (bruijn ##x.2475 105 0) (bruijn ##x.2476 104 0) (bruijn ##x.2477 103 0) (bruijn ##x.2478 102 0) (bruijn ##x.2479 101 0) (bruijn ##x.2480 100 0) (bruijn ##x.2481 99 0) (bruijn ##x.2482 98 0) (bruijn ##x.2483 97 0) (bruijn ##x.2484 96 0) (bruijn ##x.2485 95 0) (bruijn ##x.2486 94 0) (bruijn ##x.2487 93 0) (bruijn ##x.2488 92 0) (bruijn ##x.2489 91 0) (bruijn ##x.2490 90 0) (bruijn ##x.2491 89 0) (bruijn ##x.2492 88 0) (bruijn ##x.2493 87 0) (bruijn ##x.2494 86 0) (bruijn ##x.2495 85 0) (bruijn ##x.2496 84 0) (bruijn ##x.2497 83 0) (bruijn ##x.2498 82 0) (bruijn ##x.2499 81 0) (bruijn ##x.2500 80 0) (bruijn ##x.2501 79 0) (bruijn ##x.2502 78 0) (bruijn ##x.2503 77 0) (bruijn ##x.2504 76 0) (bruijn ##x.2505 75 0) (bruijn ##x.2506 74 0) (bruijn ##x.2507 73 0) (bruijn ##x.2508 72 0) (bruijn ##x.2509 71 0) (bruijn ##x.2510 70 0) (bruijn ##x.2511 69 0) (bruijn ##x.2512 68 0) (bruijn ##x.2513 67 0) (bruijn ##x.2514 66 0) (bruijn ##x.2515 65 0) (bruijn ##x.2516 64 0) (bruijn ##x.2517 63 0) (bruijn ##x.2518 62 0) (bruijn ##x.2519 61 0) (bruijn ##x.2520 60 0) (bruijn ##x.2521 59 0) (bruijn ##x.2522 58 0) (bruijn ##x.2523 57 0) (bruijn ##x.2524 56 0) (bruijn ##x.2525 55 0) (bruijn ##x.2526 54 0) (bruijn ##x.2527 53 0) (bruijn ##x.2528 52 0) (bruijn ##x.2529 51 0) (bruijn ##x.2530 50 0) (bruijn ##x.2531 49 0) (bruijn ##x.2532 48 0) (bruijn ##x.2533 47 0) (bruijn ##x.2534 46 0) (bruijn ##x.2535 45 0) (bruijn ##x.2536 44 0) (bruijn ##x.2537 43 0) (bruijn ##x.2538 42 0) (bruijn ##x.2539 41 0) (bruijn ##x.2540 40 0) (bruijn ##x.2541 39 0) (bruijn ##x.2542 38 0) (bruijn ##x.2543 37 0) (bruijn ##x.2544 36 0) (bruijn ##x.2545 35 0) (bruijn ##x.2546 34 0) (bruijn ##x.2547 33 0) (bruijn ##x.2548 32 0) (bruijn ##x.2549 31 0) (bruijn ##x.2550 30 0) (bruijn ##x.2551 29 0) (bruijn ##x.2552 28 0) (bruijn ##x.2553 27 0) (bruijn ##x.2554 26 0) (bruijn ##x.2555 25 0) (bruijn ##x.2556 24 0) (bruijn ##x.2557 23 0) (bruijn ##x.2558 22 0) (bruijn ##x.2559 21 0) (bruijn ##x.2560 20 0) (bruijn ##x.2561 19 0) (bruijn ##x.2562 18 0) (bruijn ##x.2563 17 0) (bruijn ##x.2564 16 0) (bruijn ##x.2565 15 0) (bruijn ##x.2566 14 0) (bruijn ##x.2567 13 0) (bruijn ##x.2568 12 0) (bruijn ##x.2569 11 0) (bruijn ##x.2570 10 0) (bruijn ##x.2571 9 0) (bruijn ##x.2572 8 0) (bruijn ##x.2573 7 0) (bruijn ##x.2574 6 0) (bruijn ##x.2575 5 0) (bruijn ##x.2576 4 0) (bruijn ##x.2577 3 0) (bruijn ##x.2578 2 0) (bruijn ##x.2579 1 0) (bruijn ##x.2580 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_lambda193, env)},
      VGetArg(env, 125, 0),
      VGetArg(env, 124, 0),
      VGetArg(env, 123, 0),
      VGetArg(env, 122, 0),
      VGetArg(env, 121, 0),
      VGetArg(env, 120, 0),
      VGetArg(env, 119, 0),
      VGetArg(env, 118, 0),
      VGetArg(env, 117, 0),
      VGetArg(env, 116, 0),
      VGetArg(env, 115, 0),
      VGetArg(env, 114, 0),
      VGetArg(env, 113, 0),
      VGetArg(env, 112, 0),
      VGetArg(env, 111, 0),
      VGetArg(env, 110, 0),
      VGetArg(env, 109, 0),
      VGetArg(env, 108, 0),
      VGetArg(env, 107, 0),
      VGetArg(env, 106, 0),
      VGetArg(env, 105, 0),
      VGetArg(env, 104, 0),
      VGetArg(env, 103, 0),
      VGetArg(env, 102, 0),
      VGetArg(env, 101, 0),
      VGetArg(env, 100, 0),
      VGetArg(env, 99, 0),
      VGetArg(env, 98, 0),
      VGetArg(env, 97, 0),
      VGetArg(env, 96, 0),
      VGetArg(env, 95, 0),
      VGetArg(env, 94, 0),
      VGetArg(env, 93, 0),
      VGetArg(env, 92, 0),
      VGetArg(env, 91, 0),
      VGetArg(env, 90, 0),
      VGetArg(env, 89, 0),
      VGetArg(env, 88, 0),
      VGetArg(env, 87, 0),
      VGetArg(env, 86, 0),
      VGetArg(env, 85, 0),
      VGetArg(env, 84, 0),
      VGetArg(env, 83, 0),
      VGetArg(env, 82, 0),
      VGetArg(env, 81, 0),
      VGetArg(env, 80, 0),
      VGetArg(env, 79, 0),
      VGetArg(env, 78, 0),
      VGetArg(env, 77, 0),
      VGetArg(env, 76, 0),
      VGetArg(env, 75, 0),
      VGetArg(env, 74, 0),
      VGetArg(env, 73, 0),
      VGetArg(env, 72, 0),
      VGetArg(env, 71, 0),
      VGetArg(env, 70, 0),
      VGetArg(env, 69, 0),
      VGetArg(env, 68, 0),
      VGetArg(env, 67, 0),
      VGetArg(env, 66, 0),
      VGetArg(env, 65, 0),
      VGetArg(env, 64, 0),
      VGetArg(env, 63, 0),
      VGetArg(env, 62, 0),
      VGetArg(env, 61, 0),
      VGetArg(env, 60, 0),
      VGetArg(env, 59, 0),
      VGetArg(env, 58, 0),
      VGetArg(env, 57, 0),
      VGetArg(env, 56, 0),
      VGetArg(env, 55, 0),
      VGetArg(env, 54, 0),
      VGetArg(env, 53, 0),
      VGetArg(env, 52, 0),
      VGetArg(env, 51, 0),
      VGetArg(env, 50, 0),
      VGetArg(env, 49, 0),
      VGetArg(env, 48, 0),
      VGetArg(env, 47, 0),
      VGetArg(env, 46, 0),
      VGetArg(env, 45, 0),
      VGetArg(env, 44, 0),
      VGetArg(env, 43, 0),
      VGetArg(env, 42, 0),
      VGetArg(env, 41, 0),
      VGetArg(env, 40, 0),
      VGetArg(env, 39, 0),
      VGetArg(env, 38, 0),
      VGetArg(env, 37, 0),
      VGetArg(env, 36, 0),
      VGetArg(env, 35, 0),
      VGetArg(env, 34, 0),
      VGetArg(env, 33, 0),
      VGetArg(env, 32, 0),
      VGetArg(env, 31, 0),
      VGetArg(env, 30, 0),
      VGetArg(env, 29, 0),
      VGetArg(env, 28, 0),
      VGetArg(env, 27, 0),
      VGetArg(env, 26, 0),
      VGetArg(env, 25, 0),
      VGetArg(env, 24, 0),
      VGetArg(env, 23, 0),
      VGetArg(env, 22, 0),
      VGetArg(env, 21, 0),
      VGetArg(env, 20, 0),
      VGetArg(env, 19, 0),
      VGetArg(env, 18, 0),
      VGetArg(env, 17, 0),
      VGetArg(env, 16, 0),
      VGetArg(env, 15, 0),
      VGetArg(env, 14, 0),
      VGetArg(env, 13, 0),
      VGetArg(env, 12, 0),
      VGetArg(env, 11, 0),
      VGetArg(env, 10, 0),
      VGetArg(env, 9, 0),
      VGetArg(env, 8, 0),
      VGetArg(env, 7, 0),
      VGetArg(env, 6, 0),
      VGetArg(env, 5, 0),
      VGetArg(env, 4, 0),
      env->up->up->up->vars[0],
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k949, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k948(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k948, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 124 1) (close _V0scheme_V0r7rs_V20_k949) (quote null?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 124, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k949, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k948, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k947(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k947, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 123 1) (close _V0scheme_V0r7rs_V20_k948) (quote boolean?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 123, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k948, env)}),
      VEncodePointer(&_V0boolean_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k947, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k946(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k946, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 122 1) (close _V0scheme_V0r7rs_V20_k947) (quote vector?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 122, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k947, env)}),
      VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k946, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k945(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k945, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 121 1) (close _V0scheme_V0r7rs_V20_k946) (quote symbol?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 121, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k946, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k945, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k944(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k944, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 120 1) (close _V0scheme_V0r7rs_V20_k945) (quote exact?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 120, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k945, env)}),
      VEncodePointer(&_V0exact_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k944, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k943(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k943, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 119 1) (close _V0scheme_V0r7rs_V20_k944) (quote real?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 119, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k944, env)}),
      VEncodePointer(&_V0real_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k943, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k942(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k942, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 118 1) (close _V0scheme_V0r7rs_V20_k943) (quote char?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 118, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k943, env)}),
      VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k942, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k941(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k941, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 117 1) (close _V0scheme_V0r7rs_V20_k942) (quote symbol=?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 117, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k942, env)}),
      VEncodePointer(&_V0symbol_E_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k941, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k940(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k940, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 116 1) (close _V0scheme_V0r7rs_V20_k941) (quote equal?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 116, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k941, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k940, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k939(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k939, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 115 1) (close _V0scheme_V0r7rs_V20_k940) (quote <))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 115, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k940, env)}),
      VEncodePointer(&_V0_L.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k939, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k938(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k938, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 114 1) (close _V0scheme_V0r7rs_V20_k939) (quote >))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 114, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k939, env)}),
      VEncodePointer(&_V0_G.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k938, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k937(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k937, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 113 1) (close _V0scheme_V0r7rs_V20_k938) (quote >=))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 113, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k938, env)}),
      VEncodePointer(&_V0_G_E.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k937, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k936(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k936, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 112 1) (close _V0scheme_V0r7rs_V20_k937) (quote exact->inexact))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 112, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k937, env)}),
      VEncodePointer(&_V0exact___Ginexact.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k936, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k935(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k935, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 111 1) (close _V0scheme_V0r7rs_V20_k936) (quote complex?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 111, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k936, env)}),
      VEncodePointer(&_V0complex_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k935, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k934(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k934, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 110 1) (close _V0scheme_V0r7rs_V20_k935) (quote -))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 110, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k935, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k934, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k933(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k933, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 109 1) (close _V0scheme_V0r7rs_V20_k934) (quote /))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 109, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k934, env)}),
      VEncodePointer(&_V0_W.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k933, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k932(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k932, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 108 1) (close _V0scheme_V0r7rs_V20_k933) (quote remainder))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 108, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k933, env)}),
      VEncodePointer(&_V0remainder.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k932, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k931(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k931, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 107 1) (close _V0scheme_V0r7rs_V20_k932) (quote min))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 107, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k932, env)}),
      VEncodePointer(&_V0min.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k931, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k930(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k930, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 106 1) (close _V0scheme_V0r7rs_V20_k931) (quote car))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 106, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k931, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k930, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k929(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k929, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 105 1) (close _V0scheme_V0r7rs_V20_k930) (quote set-car!))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 105, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k930, env)}),
      VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k929, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k928(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k928, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 104 1) (close _V0scheme_V0r7rs_V20_k929) (quote caar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 104, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k929, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k928, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k927(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k927, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 103 1) (close _V0scheme_V0r7rs_V20_k928) (quote cdar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 103, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k928, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k927, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k926(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k926, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 102 1) (close _V0scheme_V0r7rs_V20_k927) (quote caaar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 102, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k927, env)}),
      VEncodePointer(&_V0caaar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k926, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k925(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k925, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 101 1) (close _V0scheme_V0r7rs_V20_k926) (quote cadar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 101, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k926, env)}),
      VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k925, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k924(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k924, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 100 1) (close _V0scheme_V0r7rs_V20_k925) (quote cdaar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 100, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k925, env)}),
      VEncodePointer(&_V0cdaar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k924, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k923(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k923, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 99 1) (close _V0scheme_V0r7rs_V20_k924) (quote cddar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 99, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k924, env)}),
      VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k923, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k922(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k922, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 98 1) (close _V0scheme_V0r7rs_V20_k923) (quote caaaar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 98, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k923, env)}),
      VEncodePointer(&_V0caaaar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k922, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k921(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k921, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 97 1) (close _V0scheme_V0r7rs_V20_k922) (quote caadar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 97, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k922, env)}),
      VEncodePointer(&_V0caadar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k921, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k920(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k920, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 96 1) (close _V0scheme_V0r7rs_V20_k921) (quote cadaar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 96, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k921, env)}),
      VEncodePointer(&_V0cadaar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k920, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k919(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k919, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 95 1) (close _V0scheme_V0r7rs_V20_k920) (quote caddar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 95, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k920, env)}),
      VEncodePointer(&_V0caddar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k919, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k918(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k918, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 94 1) (close _V0scheme_V0r7rs_V20_k919) (quote cdaaar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 94, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k919, env)}),
      VEncodePointer(&_V0cdaaar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k918, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k917(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k917, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 93 1) (close _V0scheme_V0r7rs_V20_k918) (quote cdadar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 93, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k918, env)}),
      VEncodePointer(&_V0cdadar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k917, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k916(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k916, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 92 1) (close _V0scheme_V0r7rs_V20_k917) (quote cddaar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 92, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k917, env)}),
      VEncodePointer(&_V0cddaar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k916, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k915(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k915, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 91 1) (close _V0scheme_V0r7rs_V20_k916) (quote cdddar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 91, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k916, env)}),
      VEncodePointer(&_V0cdddar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k915, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k914(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k914, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 90 1) (close _V0scheme_V0r7rs_V20_k915) (quote list))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 90, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k915, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k914, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k913(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k913, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 89 1) (close _V0scheme_V0r7rs_V20_k914) (quote list-ref))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 89, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k914, env)}),
      VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k913, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k912(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k912, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 88 1) (close _V0scheme_V0r7rs_V20_k913) (quote for-each))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 88, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k913, env)}),
      VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k912, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k911(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k911, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 87 1) (close _V0scheme_V0r7rs_V20_k912) (quote reverse))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 87, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k912, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k911, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k910(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k910, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 86 1) (close _V0scheme_V0r7rs_V20_k911) (quote memv))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 86, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k911, env)}),
      VEncodePointer(&_V0memv.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k910, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k909(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k909, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 85 1) (close _V0scheme_V0r7rs_V20_k910) (quote assq))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 85, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k910, env)}),
      VEncodePointer(&_V0assq.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k909, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k908(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k908, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 84 1) (close _V0scheme_V0r7rs_V20_k909) (quote assoc))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 84, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k909, env)}),
      VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k908, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k907(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k907, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 83 1) (close _V0scheme_V0r7rs_V20_k908) (quote list->string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 83, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k908, env)}),
      VEncodePointer(&_V0list___Gstring.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k907, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k906(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k906, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 82 1) (close _V0scheme_V0r7rs_V20_k907) (quote substring))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 82, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k907, env)}),
      VEncodePointer(&_V0substring.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k906, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k905(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k905, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 81 1) (close _V0scheme_V0r7rs_V20_k906) (quote string-copy!))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 81, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k906, env)}),
      VEncodePointer(&_V0string__copy_B.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k905, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k904(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k904, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 80 1) (close _V0scheme_V0r7rs_V20_k905) (quote string-set!))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 80, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k905, env)}),
      VEncodePointer(&_V0string__set_B.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k904, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k903(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k903, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 79 1) (close _V0scheme_V0r7rs_V20_k904) (quote string->symbol))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 79, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k904, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k903, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k902(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k902, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 78 1) (close _V0scheme_V0r7rs_V20_k903) (quote string->list))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 78, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k903, env)}),
      VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k902, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k901(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k901, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 77 1) (close _V0scheme_V0r7rs_V20_k902) (quote symbol->string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k902, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k901, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k900(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k900, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 76 1) (close _V0scheme_V0r7rs_V20_k901) (quote vector))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k901, env)}),
      VEncodePointer(&_V0vector.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k900, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k899(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k899, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 75 1) (close _V0scheme_V0r7rs_V20_k900) (quote vector-set!))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 75, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k900, env)}),
      VEncodePointer(&_V0vector__set_B.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k899, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k898(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k898, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 74 1) (close _V0scheme_V0r7rs_V20_k899) (quote vector-for-each))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 74, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k899, env)}),
      VEncodePointer(&_V0vector__for__each.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k898, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k897(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k897, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 73 1) (close _V0scheme_V0r7rs_V20_k898) (quote current-output-port))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 73, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k898, env)}),
      VEncodePointer(&_V0current__output__port.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k897, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k896(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k896, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 72 1) (close _V0scheme_V0r7rs_V20_k897) (quote current-input-port))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 72, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k897, env)}),
      VEncodePointer(&_V0current__input__port.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k896, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k895(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k895, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 71 1) (close _V0scheme_V0r7rs_V20_k896) (quote open-output-file))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 71, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k896, env)}),
      VEncodePointer(&_V0open__output__file.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k895, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k894(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k894, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 70 1) (close _V0scheme_V0r7rs_V20_k895) (quote open-output-string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 70, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k895, env)}),
      VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k894, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k893(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k893, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 69 1) (close _V0scheme_V0r7rs_V20_k894) (quote with-output-to-file))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 69, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k894, env)}),
      VEncodePointer(&_V0with__output__to__file.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k893, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k892(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k892, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 68 1) (close _V0scheme_V0r7rs_V20_k893) (quote read-char))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 68, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k893, env)}),
      VEncodePointer(&_V0read__char.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k892, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k891(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k891, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 67 1) (close _V0scheme_V0r7rs_V20_k892) (quote read))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 67, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k892, env)}),
      VEncodePointer(&_V0read.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k891, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k890(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k890, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 66 1) (close _V0scheme_V0r7rs_V20_k891) (quote display))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 66, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k891, env)}),
      VEncodePointer(&_V0display.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k890, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k889(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k889, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 65 1) (close _V0scheme_V0r7rs_V20_k890) (quote call/cc))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 65, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k890, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k889, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k888(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k888, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 64 1) (close _V0scheme_V0r7rs_V20_k889) (quote call-with-values))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k889, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k888, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k887(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k887, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 63 1) (close _V0scheme_V0r7rs_V20_k888) (quote values))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k888, env)}),
      VEncodePointer(&_V0values.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k887, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k886(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k886, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 62 1) (close _V0scheme_V0r7rs_V20_k887) (quote exit))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k887, env)}),
      VEncodePointer(&_V0exit.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k886, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k885(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k885, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 61 1) (close _V0scheme_V0r7rs_V20_k886) (quote error))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 61, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k886, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k885, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k884(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k884, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 60 1) (close _V0scheme_V0r7rs_V20_k885) (quote command-line))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k885, env)}),
      VEncodePointer(&_V0command__line.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k884, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k883(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k883, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 59 1) (close _V0scheme_V0r7rs_V20_k884) (quote apply))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k884, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k883, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k882(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k882, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 58 1) (close _V0scheme_V0r7rs_V20_k883) (quote call-with-current-continuation))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k883, env)}),
      VEncodePointer(&_V0call__with__current__continuation.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k882, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k881(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k881, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 57 1) (close _V0scheme_V0r7rs_V20_k882) (quote write))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 57, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k882, env)}),
      VEncodePointer(&_V0write.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k881, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k880(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k880, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 56 1) (close _V0scheme_V0r7rs_V20_k881) (quote newline))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 56, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k881, env)}),
      VEncodePointer(&_V0newline.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k880, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k879(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k879, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 55 1) (close _V0scheme_V0r7rs_V20_k880) (quote read-line))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k880, env)}),
      VEncodePointer(&_V0read__line.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k879, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k878(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k878, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 54 1) (close _V0scheme_V0r7rs_V20_k879) (quote with-input-from-file))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k879, env)}),
      VEncodePointer(&_V0with__input__from__file.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k878, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k877(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k877, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 53 1) (close _V0scheme_V0r7rs_V20_k878) (quote get-output-string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k878, env)}),
      VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k877, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k876(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k876, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 52 1) (close _V0scheme_V0r7rs_V20_k877) (quote close-port))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k877, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k876, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k875(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k875, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 51 1) (close _V0scheme_V0r7rs_V20_k876) (quote open-input-file))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k876, env)}),
      VEncodePointer(&_V0open__input__file.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k875, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k874(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k874, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 50 1) (close _V0scheme_V0r7rs_V20_k875) (quote current-error-port))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k875, env)}),
      VEncodePointer(&_V0current__error__port.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k874, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k873(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k873, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 49 1) (close _V0scheme_V0r7rs_V20_k874) (quote char->integer))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k874, env)}),
      VEncodePointer(&_V0char___Ginteger.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k873, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k872(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k872, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 48 1) (close _V0scheme_V0r7rs_V20_k873) (quote vector-length))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k873, env)}),
      VEncodePointer(&_V0vector__length.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k872, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k871(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k871, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 47 1) (close _V0scheme_V0r7rs_V20_k872) (quote vector-ref))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 47, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k872, env)}),
      VEncodePointer(&_V0vector__ref.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k871, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k870(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k870, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 46 1) (close _V0scheme_V0r7rs_V20_k871) (quote list->vector))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k871, env)}),
      VEncodePointer(&_V0list___Gvector.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k870, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k869(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k869, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 45 1) (close _V0scheme_V0r7rs_V20_k870) (quote string-append))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k870, env)}),
      VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k869, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k868(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k868, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 44 1) (close _V0scheme_V0r7rs_V20_k869) (quote string->number))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k869, env)}),
      VEncodePointer(&_V0string___Gnumber.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k868, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k867(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k867, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 43 1) (close _V0scheme_V0r7rs_V20_k868) (quote string-length))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k868, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k867, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k866(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k866, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 42 1) (close _V0scheme_V0r7rs_V20_k867) (quote string-ref))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k867, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k866, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k865(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k865, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 41 1) (close _V0scheme_V0r7rs_V20_k866) (quote string-copy))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k866, env)}),
      VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k865, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k864(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k864, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 40 1) (close _V0scheme_V0r7rs_V20_k865) (quote make-string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k865, env)}),
      VEncodePointer(&_V0make__string.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k864, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k863(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k863, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 39 1) (close _V0scheme_V0r7rs_V20_k864) (quote assv))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k864, env)}),
      VEncodePointer(&_V0assv.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k863, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k862(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k862, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 38 1) (close _V0scheme_V0r7rs_V20_k863) (quote member))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k863, env)}),
      VEncodePointer(&_V0member.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k862, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k861(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k861, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 37 1) (close _V0scheme_V0r7rs_V20_k862) (quote memq))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k862, env)}),
      VEncodePointer(&_V0memq.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k861, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k860(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k860, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 36 1) (close _V0scheme_V0r7rs_V20_k861) (quote append))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k861, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k860, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k859(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k859, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 35 1) (close _V0scheme_V0r7rs_V20_k860) (quote map))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k860, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k859, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k858(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k858, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 34 1) (close _V0scheme_V0r7rs_V20_k859) (quote length))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k859, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k858, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k857(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k857, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 33 1) (close _V0scheme_V0r7rs_V20_k858) (quote cddddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k858, env)}),
      VEncodePointer(&_V0cddddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k857, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k856(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k856, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 32 1) (close _V0scheme_V0r7rs_V20_k857) (quote cddadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k857, env)}),
      VEncodePointer(&_V0cddadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k856, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k855(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k855, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 31 1) (close _V0scheme_V0r7rs_V20_k856) (quote cdaddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k856, env)}),
      VEncodePointer(&_V0cdaddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k855, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k854(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k854, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 30 1) (close _V0scheme_V0r7rs_V20_k855) (quote cdaadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k855, env)}),
      VEncodePointer(&_V0cdaadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k854, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k853(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k853, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 29 1) (close _V0scheme_V0r7rs_V20_k854) (quote cadddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k854, env)}),
      VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k853, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k852(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k852, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 28 1) (close _V0scheme_V0r7rs_V20_k853) (quote cadadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k853, env)}),
      VEncodePointer(&_V0cadadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k852, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k851(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k851, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 27 1) (close _V0scheme_V0r7rs_V20_k852) (quote caaddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k852, env)}),
      VEncodePointer(&_V0caaddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k851, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k850(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k850, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 26 1) (close _V0scheme_V0r7rs_V20_k851) (quote caaadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k851, env)}),
      VEncodePointer(&_V0caaadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k850, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k849(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k849, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 25 1) (close _V0scheme_V0r7rs_V20_k850) (quote cdddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k850, env)}),
      VEncodePointer(&_V0cdddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k849, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k848(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k848, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 24 1) (close _V0scheme_V0r7rs_V20_k849) (quote cdadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k849, env)}),
      VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k848, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k847(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k847, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 23 1) (close _V0scheme_V0r7rs_V20_k848) (quote caddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k848, env)}),
      VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k847, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k846(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k846, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 22 1) (close _V0scheme_V0r7rs_V20_k847) (quote caadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k847, env)}),
      VEncodePointer(&_V0caadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k846, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k845(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k845, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 21 1) (close _V0scheme_V0r7rs_V20_k846) (quote cddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k846, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k845, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k844(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k844, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 20 1) (close _V0scheme_V0r7rs_V20_k845) (quote cadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k845, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k844, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k843(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k843, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 19 1) (close _V0scheme_V0r7rs_V20_k844) (quote set-cdr!))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k844, env)}),
      VEncodePointer(&_V0set__cdr_B.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k843, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k842(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k842, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 18 1) (close _V0scheme_V0r7rs_V20_k843) (quote cdr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k843, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k842, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k841(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k841, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 17 1) (close _V0scheme_V0r7rs_V20_k842) (quote cons))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k842, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k841, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k840(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k840, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 16 1) (close _V0scheme_V0r7rs_V20_k841) (quote max))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k841, env)}),
      VEncodePointer(&_V0max.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k840, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k839(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k839, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 15 1) (close _V0scheme_V0r7rs_V20_k840) (quote quotient))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k840, env)}),
      VEncodePointer(&_V0quotient.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k839, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k838(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k838, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 14 1) (close _V0scheme_V0r7rs_V20_k839) (quote *))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k839, env)}),
      VEncodePointer(&_V0_S.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k838, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k837(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k837, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 13 1) (close _V0scheme_V0r7rs_V20_k838) (quote +))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k838, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k837, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k836(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k836, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 12 1) (close _V0scheme_V0r7rs_V20_k837) (quote number?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k837, env)}),
      VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k836, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k835(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k835, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 11 1) (close _V0scheme_V0r7rs_V20_k836) (quote inexact))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k836, env)}),
      VEncodePointer(&_V0inexact.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k835, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k834(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k834, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 10 1) (close _V0scheme_V0r7rs_V20_k835) (quote <=))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k835, env)}),
      VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k834, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k833(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k833, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 9 1) (close _V0scheme_V0r7rs_V20_k834) (quote =))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k834, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k833, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k832(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k832, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 8 1) (close _V0scheme_V0r7rs_V20_k833) (quote not))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k833, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k832, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k831(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k831, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 7 1) (close _V0scheme_V0r7rs_V20_k832) (quote eqv?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k832, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k831, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k830(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k830, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 6 1) (close _V0scheme_V0r7rs_V20_k831) (quote eq?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k831, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k830, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k829(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k829, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 5 1) (close _V0scheme_V0r7rs_V20_k830) (quote integer?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k830, env)}),
      VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k829, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k828(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k828, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 4 1) (close _V0scheme_V0r7rs_V20_k829) (quote inexact?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k829, env)}),
      VEncodePointer(&_V0inexact_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k828, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k827(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k827, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 3 1) (close _V0scheme_V0r7rs_V20_k828) (quote string?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k828, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k827, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k826(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k826, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 2 1) (close _V0scheme_V0r7rs_V20_k827) (quote procedure?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k827, env)}),
      VEncodePointer(&_V0procedure_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k826, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k825(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k825, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 1 1) (close _V0scheme_V0r7rs_V20_k826) (quote pair?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k826, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k825, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_lambda192(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_lambda192, env) {
  // ((bruijn ##vcore.import 0 1) (close _V0scheme_V0r7rs_V20_k825) (quote eof-object?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k825, env)}),
      VEncodePointer(&_V0eof__object_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0scheme_V0r7rs_V20_k824(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k824, env) {
 if (env->num_vars == 1) {
  // ((close _V0scheme_V0r7rs_V20_lambda192) (bruijn ##k.2199 4 0) (bruijn ##x.2581 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_lambda192, env)},
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k824, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k823(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k823, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.2582 2 0) (close _V0scheme_V0r7rs_V20_k824) (##string ##string.2600) (bruijn ##x.2583 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k824, env)}),
      VEncodePointer(&_V10string_D2600.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k823, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k822(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k822, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.2584 0 0) (close _V0scheme_V0r7rs_V20_k823) (##string ##string.2598))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k823, env)}),
      VEncodePointer(&_V10string_D2598.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k822, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_k821(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_k821, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close _V0scheme_V0r7rs_V20_k822) (##string ##string.2601))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k822, env)}),
      VEncodePointer(&_V10string_D2601.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_k821, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0scheme_V0r7rs_V20_lambda191(VEnv * env) {
 V_GC_CHECK(_V0scheme_V0r7rs_V20_lambda191, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close _V0scheme_V0r7rs_V20_k821) (##string ##string.2599))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0scheme_V0r7rs_V20_k821, env)}),
      VEncodePointer(&_V10string_D2599.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0scheme_V0r7rs_V20_lambda191, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
void (*VMakeImport)(VEnv*) = VMakeImport_lambda1;
void (*VLoadLibrary)(VEnv*) = VLoadLibrary_lambda6;
void (*_V0vanity_V0core_V20)(VEnv*) = _V0vanity_V0core_V20_lambda8;
void (*_V0scheme_V0r7rs_V20)(VEnv*) = _V0scheme_V0r7rs_V20_lambda191;
