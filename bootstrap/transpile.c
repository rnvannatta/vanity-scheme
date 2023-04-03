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
static struct { VBlob sym; char bytes[12]; } _V10string_D3788 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[21]; } _V10string_D3787 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D3786 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D3785 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[13]; } _V10string_D3784 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[10]; } _V10string_D3783 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[10]; } _V10string_D3782 = { { VSTRING, 10 }, "transpile" };
static struct { VBlob sym; char bytes[19]; } _V0open__output__string = { { VSYMBOL, 19 }, "open-output-string" };
static struct { VBlob sym; char bytes[18]; } _V0get__output__string = { { VSYMBOL, 18 }, "get-output-string" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[2]; } _V0_L = { { VSYMBOL, 2 }, "<" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[6]; } _V0char_Q = { { VSYMBOL, 6 }, "char\?" };
static struct { VBlob sym; char bytes[8]; } _V0number_Q = { { VSYMBOL, 8 }, "number\?" };
static struct { VBlob sym; char bytes[9]; } _V0integer_Q = { { VSYMBOL, 9 }, "integer\?" };
static struct { VBlob sym; char bytes[14]; } _V0mangle__symbol = { { VSYMBOL, 14 }, "mangle-symbol" };
static struct { VBlob sym; char bytes[14]; } _V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[14]; } _V0lookup__inline = { { VSYMBOL, 14 }, "lookup-inline" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[17]; } _V0lookup__intrinsic = { { VSYMBOL, 17 }, "lookup-intrinsic" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[8]; } _V0display = { { VSYMBOL, 8 }, "display" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[6]; } _V0caddr = { { VSYMBOL, 6 }, "caddr" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[7]; } _V0printf = { { VSYMBOL, 7 }, "printf" };
static struct { VBlob sym; char bytes[7]; } _V0length = { { VSYMBOL, 7 }, "length" };
static struct { VBlob sym; char bytes[5]; } _V0iota = { { VSYMBOL, 5 }, "iota" };
static struct { VBlob sym; char bytes[10]; } _V0displayln = { { VSYMBOL, 10 }, "displayln" };
static struct { VBlob sym; char bytes[9]; } _V0for__each = { { VSYMBOL, 9 }, "for-each" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[8]; } _V0sprintf = { { VSYMBOL, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[5]; } _V0assv = { { VSYMBOL, 5 }, "assv" };
static struct { VBlob sym; char bytes[6]; } _V0assoc = { { VSYMBOL, 6 }, "assoc" };
static struct { VBlob sym; char bytes[5]; } _V0cdar = { { VSYMBOL, 5 }, "cdar" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[2]; } _V0__ = { { VSYMBOL, 2 }, "-" };
static struct { VBlob sym; char bytes[9]; } _V0set__car_B = { { VSYMBOL, 9 }, "set-car!" };
static struct { VBlob sym; char bytes[6]; } _V0apply = { { VSYMBOL, 6 }, "apply" };
static struct { VBlob sym; char bytes[7]; } _V0values = { { VSYMBOL, 7 }, "values" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[9]; } _V0list__ref = { { VSYMBOL, 9 }, "list-ref" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[17]; } _V10string_D3781 = { { VSTRING, 17 }, "No matching case" };
static struct { VBlob sym; char bytes[12]; } _V10string_D3780 = { { VSTRING, 12 }, "~A_lambda~A" };
static struct { VBlob sym; char bytes[7]; } _V10string_D3779 = { { VSTRING, 7 }, "~A_k~A" };
static struct { VBlob sym; char bytes[7]; } _V10string_D3778 = { { VSTRING, 7 }, "string" };
static struct { VBlob sym; char bytes[13]; } _V0continuation = { { VSYMBOL, 13 }, "continuation" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[7]; } _V10string_D3777 = { { VSTRING, 7 }, "global" };
static struct { VBlob sym; char bytes[16]; } _V10vcore_Ddeclare = { { VSYMBOL, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[27]; } _V10string_D3776 = { { VSTRING, 27 }, "VLookupGlobalVarFast(\"~A\")" };
static struct { VBlob sym; char bytes[52]; } _V10string_D3775 = { { VSTRING, 52 }, "VEncodeClosure((VClosure[]){VMakeClosure(~A,NULL)})" };
static struct { VBlob sym; char bytes[3]; } _V10string_D3774 = { { VSTRING, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10string_D3773 = { { VSTRING, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10string_D3772 = { { VSTRING, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10string_D3771 = { { VSTRING, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10string_D3770 = { { VSTRING, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10string_D3769 = { { VSTRING, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10string_D3768 = { { VSTRING, 3 }, "\\t" };
static struct { VBlob sym; char bytes[3]; } _V10string_D3767 = { { VSTRING, 3 }, "\\a" };
static struct { VBlob sym; char bytes[21]; } _V10string_D3766 = { { VSTRING, 21 }, "Unknown literal type" };
static struct { VBlob sym; char bytes[40]; } _V10string_D3765 = { { VSTRING, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[25]; } _V10string_D3764 = { { VSTRING, 25 }, "V_BLOB_LITERAL(VSTRING, " };
static struct { VBlob sym; char bytes[19]; } _V10string_D3763 = { { VSTRING, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D3762 = { { VSTRING, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D3761 = { { VSTRING, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[18]; } _V10string_D3760 = { { VSTRING, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10string_D3759 = { { VSTRING, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[31]; } _V10string_D3758 = { { VSTRING, 31 }, "unknown entry in literal table" };
static struct { VBlob sym; char bytes[79]; } _V10string_D3757 = { { VSTRING, 79 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { VSTRING, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[79]; } _V10string_D3756 = { { VSTRING, 79 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { VSYMBOL, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[19]; } _V10string_D3755 = { { VSTRING, 19 }, "    V_CALL_FUNC(~A" };
static struct { VBlob sym; char bytes[20]; } _V10string_D3754 = { { VSTRING, 20 }, "    V_CALL_CLOSURE(" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3753 = { { VSTRING, 30 }, "    V_TAIL_CALL_CLOSURE(env, " };
static struct { VBlob sym; char bytes[21]; } _V10string_D3752 = { { VSTRING, 21 }, "VDecodeClosureApply(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D3751 = { { VSTRING, 2 }, ")" };
static struct { VBlob sym; char bytes[36]; } _V10string_D3750 = { { VSTRING, 36 }, "(VClosure[]){VMakeClosure(~A, env)}" };
static struct { VBlob sym; char bytes[78]; } _V10string_D3749 = { { VSTRING, 78 }, "    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VDefineGlobalVar, env)},~N      " };
static struct { VBlob sym; char bytes[17]; } _V10string_D3748 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[38]; } _V10string_D3747 = { { VSTRING, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[75]; } _V10string_D3746 = { { VSTRING, 75 }, "    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetGlobalVar, env)},~N      " };
static struct { VBlob sym; char bytes[72]; } _V10string_D3745 = { { VSTRING, 72 }, "    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},~N      " };
static struct { VBlob sym; char bytes[51]; } _V10string_D3744 = { { VSTRING, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[11]; } _V10string_D3743 = { { VSTRING, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[15]; } _V10string_D3742 = { { VSTRING, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[6]; } _V10string_D3741 = { { VSTRING, 6 }, "~A(~N" };
static struct { VBlob sym; char bytes[10]; } _V10string_D3740 = { { VSTRING, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[10]; } _V10string_D3739 = { { VSTRING, 10 }, "~N    )~N" };
static struct { VBlob sym; char bytes[21]; } _V10string_D3738 = { { VSTRING, 21 }, "malformed expression" };
static struct { VBlob sym; char bytes[5]; } _V10string_D3737 = { { VSTRING, 5 }, "fugg" };
static struct { VBlob sym; char bytes[9]; } _V10inline = { { VSYMBOL, 9 }, "##inline" };
static struct { VBlob sym; char bytes[7]; } _V0define = { { VSYMBOL, 7 }, "define" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[16]; } _V10string_D3736 = { { VSTRING, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10string_D3735 = { { VSTRING, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10string_D3734 = { { VSTRING, 9 }, "} else {" };
static struct { VBlob sym; char bytes[7]; } _V0bruijn = { { VSYMBOL, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[21]; } _V10string_D3733 = { { VSTRING, 21 }, "VGetArg(env, ~A, ~A)" };
static struct { VBlob sym; char bytes[26]; } _V10string_D3732 = { { VSTRING, 26 }, "env->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[22]; } _V10string_D3731 = { { VSTRING, 22 }, "env->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[18]; } _V10string_D3730 = { { VSTRING, 18 }, "env->up->vars[~A]" };
static struct { VBlob sym; char bytes[14]; } _V10string_D3729 = { { VSTRING, 14 }, "env->vars[~A]" };
static struct { VBlob sym; char bytes[6]; } _V0close = { { VSYMBOL, 6 }, "close" };
static struct { VBlob sym; char bytes[52]; } _V10string_D3728 = { { VSTRING, 52 }, "VEncodeClosure((VClosure[]){VMakeClosure(~A, env)})" };
static struct { VBlob sym; char bytes[9]; } _V10string = { { VSYMBOL, 9 }, "##string" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[6]; } _V10string_D3727 = { { VSTRING, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[17]; } _V10string_D3726 = { { VSTRING, 17 }, "    V_LETREC(env" };
static struct { VBlob sym; char bytes[5]; } _V10string_D3725 = { { VSTRING, 5 }, ", ~A" };
static struct { VBlob sym; char bytes[5]; } _V10string_D3724 = { { VSTRING, 5 }, ");~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D3723 = { { VSTRING, 31 }, "static void ~A(VEnv * env) {~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D3722 = { { VSTRING, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D3721 = { { VSTRING, 22 }, " VRecordCall(&dbg);~N" };
static struct { VBlob sym; char bytes[25]; } _V10string_D3720 = { { VSTRING, 25 }, " V_GC_CHECK(~A, env) {~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3719 = { { VSTRING, 30 }, " if (env->num_vars >= ~A) {~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D3718 = { { VSTRING, 32 }, "  V_GATHER_VARARGS(&env, ~A);~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3717 = { { VSTRING, 30 }, " if (env->num_vars == ~A) {~N" };
static struct { VBlob sym; char bytes[10]; } _V10string_D3716 = { { VSTRING, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[8]; } _V10string_D3715 = { { VSTRING, 8 }, " } else" };
static struct { VBlob sym; char bytes[5]; } _V10string_D3714 = { { VSTRING, 5 }, " {~N" };
static struct { VBlob sym; char bytes[52]; } _V10string_D3713 = { { VSTRING, 52 }, "  VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D3712 = { { VSTRING, 22 }, "malformed case lambda" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[32]; } _V10string_D3711 = { { VSTRING, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D3710 = { { VSTRING, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D3709 = { { VSTRING, 22 }, "  , env->num_vars);~N" };
static struct { VBlob sym; char bytes[5]; } _V10string_D3708 = { { VSTRING, 5 }, " }~N" };
static struct { VBlob sym; char bytes[4]; } _V10string_D3707 = { { VSTRING, 4 }, "}~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D3706 = { { VSTRING, 22 }, "void toplevel~A() {~N" };
static struct { VBlob sym; char bytes[23]; } _V10string_D3705 = { { VSTRING, 23 }, "    VEnv * env = NULL;" };
static struct { VBlob sym; char bytes[26]; } _V10string_D3704 = { { VSTRING, 26 }, "void (*~A)(VEnv*) = ~A;~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D3703 = { { VSTRING, 37 }, "int main(int argc, char ** argv) {~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3702 = { { VSTRING, 30 }, "  void (*toplevels[])() = {~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D3701 = { { VSTRING, 16 }, "    toplevel~A," };
static struct { VBlob sym; char bytes[9]; } _V10string_D3700 = { { VSTRING, 9 }, "  ~N};~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3699 = { { VSTRING, 30 }, "  VArgc = argc; VArgv = argv;" };
static struct { VBlob sym; char bytes[68]; } _V10string_D3698 = { { VSTRING, 68 }, "  return VStart(sizeof toplevels / sizeof *toplevels, toplevels);~N" };
static struct { VBlob sym; char bytes[2]; } _V10string_D3697 = { { VSTRING, 2 }, "}" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3696 = { { VSTRING, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3695 = { { VSTRING, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3694 = { { VSTRING, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[51]; } _V10string_D3693 = { { VSTRING, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[9]; } _V0printout = { { VSYMBOL, 9 }, "printout" };
static struct { VBlob sym; char bytes[13]; } _V0to__functions = { { VSYMBOL, 13 }, "to-functions" };
static struct { VBlob sym; char bytes[11]; } _V0bruijn__ify = { { VSYMBOL, 11 }, "bruijn-ify" };
static void transpile_k68(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k68" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k68, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.198 6 0) (##inline ##sys.cons (##inline ##sys.cons (quote bruijn-ify) (bruijn bruijn-ify 6 2)) (##inline ##sys.cons (##inline ##sys.cons (quote to-functions) (bruijn to-functions 6 5)) (##inline ##sys.cons (##inline ##sys.cons (quote printout) (bruijn printout 6 6)) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0bruijn__ify.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 2)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0to__functions.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 5)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0printout.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 6)
    )
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to transpile_k68, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k97(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k97" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k97, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.281 8 0) (bruijn print-main? 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0printout_k97, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k96(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k96" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k96, env) {
 if (env->num_vars == 1) {
  // (if (bruijn print-main? 7 1) ((bruijn print-main 29 18) (close _V0printout_k97) (bruijn toplevels 30 6)) ((bruijn ##k.281 7 0) (bruijn print-main? 7 1)))
if(VDecodeBool(
VGetArg(env, 7, 1))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k97, env)}),
      VGetArg(env, 30, 6)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VGetArg(env, 7, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0printout_k96, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k98(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k98" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k98, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.281 7 0) (bruijn print-main? 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0printout_k98, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k99(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k99" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k99, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.281 7 0) (bruijn print-main? 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0printout_k99, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k95(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k95" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k95, env) {
 if (env->num_vars == 1) {
  // (if (bruijn shared? 29 2) (if (bruijn print-main? 6 1) ((bruijn error 36 34) (close _V0printout_k96) (##string ##string.3693)) (if (bruijn print-main? 6 1) ((bruijn print-main 28 18) (close _V0printout_k98) (bruijn toplevels 29 6)) ((bruijn ##k.281 6 0) (bruijn print-main? 6 1)))) (if (bruijn print-main? 6 1) ((bruijn print-main 28 18) (close _V0printout_k99) (bruijn toplevels 29 6)) ((bruijn ##k.281 6 0) (bruijn print-main? 6 1))))
if(VDecodeBool(
VGetArg(env, 29, 2))) {
if(VDecodeBool(
VGetArg(env, 6, 1))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k96, env)}),
      VEncodePointer(&_V10string_D3693.sym, VPOINTER_OTHER)
    );
} else {
if(VDecodeBool(
VGetArg(env, 6, 1))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k98, env)}),
      VGetArg(env, 29, 6)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VGetArg(env, 6, 1)
    );
}
}
} else {
if(VDecodeBool(
VGetArg(env, 6, 1))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k99, env)}),
      VGetArg(env, 29, 6)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VGetArg(env, 6, 1)
    );
}
}
 } else {
  VError("Not enough arguments to _V0printout_k95, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k94(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k94" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k94, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 35 33) (close _V0printout_k95) (bruijn print-declare 27 17) (bruijn declares 28 5))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k95, env)}),
      VGetArg(env, 27, 17),
      VGetArg(env, 28, 5)
    );
 } else {
  VError("Not enough arguments to _V0printout_k94, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k93(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k93" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k93, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 34 33) (close _V0printout_k94) (bruijn print-fun-case 26 15) (bruijn functions 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k94, env)}),
      VGetArg(env, 26, 15),
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0printout_k93, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k92(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k92" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k92, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 33 33) (close _V0printout_k93) (bruijn print-literal-declaration 25 7) (bruijn literal-table 26 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k93, env)}),
      VGetArg(env, 25, 7),
      VGetArg(env, 26, 3)
    );
 } else {
  VError("Not enough arguments to _V0printout_k92, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k91(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k91" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k91, env) {
 if (env->num_vars == 1) {
  // ((bruijn displayln 32 32) (close _V0printout_k92) (##string ##string.3694))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 32)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k92, env)}),
      VEncodePointer(&_V10string_D3694.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0printout_k91, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k90(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k90" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k90, env) {
 if (env->num_vars == 1) {
  // ((bruijn displayln 31 32) (close _V0printout_k91) (##string ##string.3695))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 32)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k91, env)}),
      VEncodePointer(&_V10string_D3695.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0printout_k90, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_lambda7(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_lambda7, env) {
  // ((bruijn displayln 30 32) (close _V0printout_k90) (##string ##string.3696))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 32)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k90, env)}),
      VEncodePointer(&_V10string_D3696.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0printout_k89(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k89" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k89, env) {
 if (env->num_vars == 1) {
  // ((close _V0printout_lambda7) (bruijn ##k.225 21 0) (bruijn ##x.318 1 0) (bruijn ##x.319 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0printout_lambda7, env)},
      VGetArg(env, 21, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0printout_k89, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k88(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k88" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k88, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 28 37) (close _V0printout_k89) (bruijn functions 21 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k89, env)}),
      VGetArg(env, 21, 4)
    );
 } else {
  VError("Not enough arguments to _V0printout_k88, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k87(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k87" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k87, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 27 36) (close _V0printout_k88) (bruijn ##x.320 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k88, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0printout_k87, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k86(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k86" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k86, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 26 35) (close _V0printout_k87) (bruijn toplevels 19 6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k87, env)}),
      VGetArg(env, 19, 6)
    );
 } else {
  VError("Not enough arguments to _V0printout_k86, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k110(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k110" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k110, env) {
 if (env->num_vars == 1) {
  // ((bruijn displayln 37 32) (bruijn ##k.321 11 0) (##string ##string.3697))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 32)),
      VGetArg(env, 11, 0),
      VEncodePointer(&_V10string_D3697.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__main_k110, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k109(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k109" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k109, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 36 29) (close _V0print__main_k110) (##string ##string.3698))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k110, env)}),
      VEncodePointer(&_V10string_D3698.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__main_k109, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k108(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k108" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k108, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 35 29) (close _V0print__main_k109) (##string ##string.3699))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k109, env)}),
      VEncodePointer(&_V10string_D3699.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__main_k108, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k107(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k107" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k107, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 34 29) (close _V0print__main_k108) (##string ##string.3700))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k108, env)}),
      VEncodePointer(&_V10string_D3700.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__main_k107, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_lambda9(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_lambda9, env) {
 if (env->num_vars == 2) {
  // ((bruijn printf 34 29) (bruijn ##k.344 0 0) (##string ##string.3701) (bruijn i 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 29)),
      env->vars[0],
      VEncodePointer(&_V10string_D3701.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__main_lambda9, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k106(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k106" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k106, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 33 33) (close _V0print__main_k107) (close _V0print__main_lambda9) (bruijn ##x.346 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k107, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_lambda9, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__main_k106, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k105(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k105" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k105, env) {
 if (env->num_vars == 1) {
  // ((bruijn iota 32 31) (close _V0print__main_k106) (bruijn ##x.347 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 31)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k106, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__main_k105, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k104(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k104" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k104, env) {
 if (env->num_vars == 1) {
  // ((bruijn length 31 30) (close _V0print__main_k105) (bruijn toplevels 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k105, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__main_k104, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k103(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k103" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k103, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 30 29) (close _V0print__main_k104) (##string ##string.3702))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k104, env)}),
      VEncodePointer(&_V10string_D3702.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__main_k103, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k102(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k102" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k102, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 29 29) (close _V0print__main_k103) (##string ##string.3703))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k103, env)}),
      VEncodePointer(&_V10string_D3703.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__main_k102, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k101(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k101" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k101, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 28 33) (close _V0print__main_k102) (bruijn print-toplevel 20 16) (bruijn ##x.350 0 0) (bruijn toplevels 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k102, env)}),
      VGetArg(env, 20, 16),
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__main_k101, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_k100(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_k100" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_k100, env) {
 if (env->num_vars == 1) {
  // ((bruijn iota 27 31) (close _V0print__main_k101) (bruijn ##x.351 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 31)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k101, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__main_k100, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__main_lambda8(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__main_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__main_lambda8, env) {
 if (env->num_vars == 2) {
  // ((bruijn length 26 30) (close _V0print__main_k100) (bruijn toplevels 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_k100, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__main_lambda8, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k85(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k85" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k85, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k86) (bruijn print-main 17 18) (close _V0print__main_lambda8))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k86, env)}),
      VEncodeInt(17l), VEncodeInt(18l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__main_lambda8, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k85, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__declare_k112(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__declare_k112" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__declare_k112, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 27 29) (bruijn ##k.352 2 0) (##string ##string.3704) (bruijn ##x.354 1 0) (bruijn ##x.355 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 29)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D3704.sym, VPOINTER_OTHER),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__declare_k112, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__declare_k111(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__declare_k111" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__declare_k111, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 26 27) (close _V0print__declare_k112) (bruijn declare 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__declare_k112, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__declare_k111, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__declare_lambda10(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__declare_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__declare_lambda10, env) {
 if (env->num_vars == 2) {
  // ((bruijn car 25 28) (close _V0print__declare_k111) (bruijn declare 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__declare_k111, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__declare_lambda10, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k84(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k84" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k84, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k85) (bruijn print-declare 16 17) (close _V0print__declare_lambda10))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k85, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__declare_lambda10, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k84, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__toplevel_k115(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__toplevel_k115" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__toplevel_k115, env) {
 if (env->num_vars == 1) {
  // ((bruijn displayln 27 32) (bruijn ##k.356 3 0) (##string ##string.3697))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 32)),
      env->up->up->up->vars[0],
      VEncodePointer(&_V10string_D3697.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__toplevel_k115, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__toplevel_k114(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__toplevel_k114" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__toplevel_k114, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 18 13) (close _V0print__toplevel_k115) (bruijn expr 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__toplevel_k115, env)}),
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0print__toplevel_k114, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__toplevel_k113(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__toplevel_k113" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__toplevel_k113, env) {
 if (env->num_vars == 1) {
  // ((bruijn displayln 25 32) (close _V0print__toplevel_k114) (##string ##string.3705))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 32)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__toplevel_k114, env)}),
      VEncodePointer(&_V10string_D3705.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__toplevel_k113, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__toplevel_lambda11(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__toplevel_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__toplevel_lambda11, env) {
 if (env->num_vars == 3) {
  // ((bruijn printf 24 29) (close _V0print__toplevel_k113) (##string ##string.3706) (bruijn i 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__toplevel_k113, env)}),
      VEncodePointer(&_V10string_D3706.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__toplevel_lambda11, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k83(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k83" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k83, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k84) (bruijn print-toplevel 15 16) (close _V0print__toplevel_lambda11))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k84, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__toplevel_lambda11, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k83, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k131(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k131" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k131, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 40 29) (bruijn ##k.369 15 0) (##string ##string.3707))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 29)),
      VGetArg(env, 15, 0),
      VEncodePointer(&_V10string_D3707.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k131, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k130(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k130" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k130, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 39 29) (close _V0print__fun__case_k131) (##string ##string.3708))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k131, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k130, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k129(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k129" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k129, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 38 29) (close _V0print__fun__case_k130) (##string ##string.3708))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k130, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k129, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k128(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k128" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k128, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 37 29) (close _V0print__fun__case_k129) (##string ##string.3709))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k129, env)}),
      VEncodePointer(&_V10string_D3709.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k128, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k132(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k132" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k132, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 6 1) (bruijn ##k.471 1 0) (bruijn ##x.476 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k132, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda20(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda20, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.185 1 1))) ((bruijn printf 43 29) (close _V0print__fun__case_k132) (##string ##string.3710) (bruijn num 2 1)) ((bruijn ##k.471 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k132, env)}),
      VEncodePointer(&_V10string_D3710.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda19(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda19, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 1)) ((close _V0print__fun__case_lambda20) (bruijn ##k.466 0 0) (##inline ##sys.car (bruijn ##expr.185 0 1))) ((bruijn ##k.466 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda20, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda18(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda18, env) {
  // ((close _V0print__fun__case_lambda19) (bruijn ##k.464 0 0) (##inline ##sys.cdr (bruijn ##expr.184 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda19, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda17(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda17, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 1)) ((close _V0print__fun__case_lambda18) (bruijn ##k.459 0 0) (##inline ##sys.car (bruijn ##expr.184 0 1))) ((bruijn ##k.459 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda18, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k135(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k135" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k135, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 9 1) (bruijn ##k.437 1 0) (bruijn ##x.442 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k135, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda25(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda25, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.188 1 1))) ((bruijn printf 46 29) (close _V0print__fun__case_k135) (##string ##string.3711) (bruijn num 4 1)) ((bruijn ##k.437 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k135, env)}),
      VEncodePointer(&_V10string_D3711.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda24(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda24, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 1)) ((close _V0print__fun__case_lambda25) (bruijn ##k.432 0 0) (##inline ##sys.car (bruijn ##expr.188 0 1))) ((bruijn ##k.432 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda25, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k134(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k134" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k134, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.429 0 0) ((close _V0print__fun__case_lambda24) (bruijn ##k.424 1 0) (##inline ##sys.cdr (bruijn ##expr.187 1 1))) ((bruijn ##k.424 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda24, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k134, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda23(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda23, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((bruijn equal? 43 24) (close _V0print__fun__case_k134) (quote +) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.424 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k134, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda22(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda22, env) {
  // ((close _V0print__fun__case_lambda23) (bruijn ##k.422 0 0) (##inline ##sys.cdr (bruijn ##expr.186 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda23, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda21(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda21" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda21, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 1)) ((close _V0print__fun__case_lambda22) (bruijn ##k.417 0 0) (##inline ##sys.car (bruijn ##expr.186 0 1))) ((bruijn ##k.417 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda22, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k137(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k137" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k137, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 4 1) (bruijn ##k.408 3 0) (bruijn ##x.416 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k137, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k136(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k136" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k136, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 41 34) (close _V0print__fun__case_k137) (##string ##string.3712))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k137, env)}),
      VEncodePointer(&_V10string_D3712.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k136, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k133(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k133" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k133, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda21) (close _V0print__fun__case_k136) (bruijn ##input.183 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda21, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k136, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k133, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda16(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda16, env) {
  // ((close _V0print__fun__case_lambda17) (close _V0print__fun__case_k133) (bruijn ##input.183 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda17, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k133, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda15(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda15, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__fun__case_lambda16) (bruijn ##k.406 0 0) (bruijn lamb 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda16, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda15, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda14(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda14, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 37 25) (bruijn ##k.404 0 0) (close _V0print__fun__case_lambda15))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda15, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda14, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k127(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k127" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k127, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 36 33) (close _V0print__fun__case_k128) (close _V0print__fun__case_lambda14) (bruijn ##x.487 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k128, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda14, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k127, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k126(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k126" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k126, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 35 23) (close _V0print__fun__case_k127) (bruijn fun 12 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k127, env)}),
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k126, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k125(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k125" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k125, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 34 29) (close _V0print__fun__case_k126) (##string ##string.3713) (bruijn name 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k126, env)}),
      VEncodePointer(&_V10string_D3713.sym, VPOINTER_OTHER),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k125, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k138(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k138" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k138, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 34 29) (bruijn ##k.369 9 0) (##string ##string.3707))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 29)),
      VGetArg(env, 9, 0),
      VEncodePointer(&_V10string_D3707.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k138, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k124(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k124" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k124, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.389 0 0) ((bruijn printf 33 29) (close _V0print__fun__case_k125) (##string ##string.3714)) ((bruijn printf 33 29) (close _V0print__fun__case_k138) (##string ##string.3708)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k125, env)}),
      VEncodePointer(&_V10string_D3714.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k138, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k124, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k123(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k123" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k123, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 32 22) (close _V0print__fun__case_k124) (bruijn fun 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k124, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k123, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k142(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k142" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k142, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.168 9 1) (bruijn ##k.572 4 0) (bruijn ##x.586 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k142, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k141(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k141" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k141, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 41 29) (close _V0print__fun__case_k142) (##string ##string.3715))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k142, env)}),
      VEncodePointer(&_V10string_D3715.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k141, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k140(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k140" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k140, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 32 13) (close _V0print__fun__case_k141) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k141, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k140, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k139(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k139" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k139, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 39 29) (close _V0print__fun__case_k140) (##string ##string.3716) (bruijn body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k140, env)}),
      VEncodePointer(&_V10string_D3716.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k139, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda32(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda32" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda32, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.171 1 1))) ((bruijn printf 38 29) (close _V0print__fun__case_k139) (##string ##string.3717) (bruijn num 2 1)) ((bruijn ##k.572 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k139, env)}),
      VEncodePointer(&_V10string_D3717.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda31(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda31" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda31, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 1)) ((close _V0print__fun__case_lambda32) (bruijn ##k.567 0 0) (##inline ##sys.car (bruijn ##expr.171 0 1))) ((bruijn ##k.567 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda32, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda30(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda30" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda30, env) {
  // ((close _V0print__fun__case_lambda31) (bruijn ##k.565 0 0) (##inline ##sys.cdr (bruijn ##expr.170 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda31, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda29(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda29, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 1)) ((close _V0print__fun__case_lambda30) (bruijn ##k.560 0 0) (##inline ##sys.car (bruijn ##expr.170 0 1))) ((bruijn ##k.560 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda30, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k149(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k149" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k149, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.168 13 1) (bruijn ##k.526 5 0) (bruijn ##x.543 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k149, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k148(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k148" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k148, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 45 29) (close _V0print__fun__case_k149) (##string ##string.3715))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k149, env)}),
      VEncodePointer(&_V10string_D3715.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k148, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k147(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k147" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k147, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 36 13) (close _V0print__fun__case_k148) (bruijn body 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k148, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k147, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k146(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k146" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k146, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 43 29) (close _V0print__fun__case_k147) (##string ##string.3718) (bruijn num 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k147, env)}),
      VEncodePointer(&_V10string_D3718.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k146, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k145(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k145" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k145, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 42 29) (close _V0print__fun__case_k146) (##string ##string.3716) (bruijn body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k146, env)}),
      VEncodePointer(&_V10string_D3716.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k145, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda37(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda37" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda37, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.174 1 1))) ((bruijn printf 41 29) (close _V0print__fun__case_k145) (##string ##string.3719) (bruijn num 4 1)) ((bruijn ##k.526 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k145, env)}),
      VEncodePointer(&_V10string_D3719.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda36(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda36" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda36, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 1)) ((close _V0print__fun__case_lambda37) (bruijn ##k.521 0 0) (##inline ##sys.car (bruijn ##expr.174 0 1))) ((bruijn ##k.521 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda37, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k144(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k144" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k144, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.518 0 0) ((close _V0print__fun__case_lambda36) (bruijn ##k.513 1 0) (##inline ##sys.cdr (bruijn ##expr.173 1 1))) ((bruijn ##k.513 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda36, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k144, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda35(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda35" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda35, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 1)) ((bruijn equal? 38 24) (close _V0print__fun__case_k144) (quote +) (##inline ##sys.car (bruijn ##expr.173 0 1))) ((bruijn ##k.513 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k144, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda34(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda34" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda34, env) {
  // ((close _V0print__fun__case_lambda35) (bruijn ##k.511 0 0) (##inline ##sys.cdr (bruijn ##expr.172 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda35, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda33(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda33" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda33, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 1)) ((close _V0print__fun__case_lambda34) (bruijn ##k.506 0 0) (##inline ##sys.car (bruijn ##expr.172 0 1))) ((bruijn ##k.506 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda34, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k151(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k151" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k151, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.168 4 1) (bruijn ##k.497 3 0) (bruijn ##x.505 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k151, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k150(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k150" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k150, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 36 34) (close _V0print__fun__case_k151) (##string ##string.3712) (bruijn fun 13 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k151, env)}),
      VEncodePointer(&_V10string_D3712.sym, VPOINTER_OTHER),
      VGetArg(env, 13, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k150, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k143(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k143" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k143, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda33) (close _V0print__fun__case_k150) (bruijn ##input.169 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda33, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k150, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k143, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda28(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda28, env) {
  // ((close _V0print__fun__case_lambda29) (close _V0print__fun__case_k143) (bruijn ##input.169 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda29, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k143, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda27(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda27, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__fun__case_lambda28) (bruijn ##k.495 0 0) (bruijn lamb 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda28, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda27, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda26(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda26, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 32 25) (bruijn ##k.493 0 0) (close _V0print__fun__case_lambda27))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda27, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda26, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k122(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k122" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k122, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 31 33) (close _V0print__fun__case_k123) (close _V0print__fun__case_lambda26) (bruijn ##x.597 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k123, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda26, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k122, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k160(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k160" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k160, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 39 29) (bruijn ##k.369 14 0) (##string ##string.3707))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 29)),
      VGetArg(env, 14, 0),
      VEncodePointer(&_V10string_D3707.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k160, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k159(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k159" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k159, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 38 29) (close _V0print__fun__case_k160) (##string ##string.3708))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k160, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k159, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k158(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k158" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k158, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 37 29) (close _V0print__fun__case_k159) (##string ##string.3708))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k159, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k158, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k157(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k157" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k157, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 36 29) (close _V0print__fun__case_k158) (##string ##string.3709))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k158, env)}),
      VEncodePointer(&_V10string_D3709.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k157, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k161(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k161" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k161, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 6 1) (bruijn ##k.471 1 0) (bruijn ##x.476 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k161, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda44(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda44" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda44, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.185 1 1))) ((bruijn printf 42 29) (close _V0print__fun__case_k161) (##string ##string.3710) (bruijn num 2 1)) ((bruijn ##k.471 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k161, env)}),
      VEncodePointer(&_V10string_D3710.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda43(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda43" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda43, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 1)) ((close _V0print__fun__case_lambda44) (bruijn ##k.466 0 0) (##inline ##sys.car (bruijn ##expr.185 0 1))) ((bruijn ##k.466 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda44, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda42(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda42" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda42, env) {
  // ((close _V0print__fun__case_lambda43) (bruijn ##k.464 0 0) (##inline ##sys.cdr (bruijn ##expr.184 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda43, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda41(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda41" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda41, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 1)) ((close _V0print__fun__case_lambda42) (bruijn ##k.459 0 0) (##inline ##sys.car (bruijn ##expr.184 0 1))) ((bruijn ##k.459 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda42, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k164(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k164" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k164, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 9 1) (bruijn ##k.437 1 0) (bruijn ##x.442 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k164, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda49(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda49" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda49, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.188 1 1))) ((bruijn printf 45 29) (close _V0print__fun__case_k164) (##string ##string.3711) (bruijn num 4 1)) ((bruijn ##k.437 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k164, env)}),
      VEncodePointer(&_V10string_D3711.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda48(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda48" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda48, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 1)) ((close _V0print__fun__case_lambda49) (bruijn ##k.432 0 0) (##inline ##sys.car (bruijn ##expr.188 0 1))) ((bruijn ##k.432 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda49, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k163(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k163" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k163, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.429 0 0) ((close _V0print__fun__case_lambda48) (bruijn ##k.424 1 0) (##inline ##sys.cdr (bruijn ##expr.187 1 1))) ((bruijn ##k.424 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda48, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k163, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda47(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda47" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda47, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((bruijn equal? 42 24) (close _V0print__fun__case_k163) (quote +) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.424 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k163, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda46(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda46" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda46, env) {
  // ((close _V0print__fun__case_lambda47) (bruijn ##k.422 0 0) (##inline ##sys.cdr (bruijn ##expr.186 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda47, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda45(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda45" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda45, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 1)) ((close _V0print__fun__case_lambda46) (bruijn ##k.417 0 0) (##inline ##sys.car (bruijn ##expr.186 0 1))) ((bruijn ##k.417 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda46, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k166(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k166" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k166, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 4 1) (bruijn ##k.408 3 0) (bruijn ##x.416 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k166, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k165(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k165" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k165, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 40 34) (close _V0print__fun__case_k166) (##string ##string.3712))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k166, env)}),
      VEncodePointer(&_V10string_D3712.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k165, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k162(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k162" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k162, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda45) (close _V0print__fun__case_k165) (bruijn ##input.183 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda45, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k165, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k162, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda40(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda40" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda40, env) {
  // ((close _V0print__fun__case_lambda41) (close _V0print__fun__case_k162) (bruijn ##input.183 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda41, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k162, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda39(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda39" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda39, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__fun__case_lambda40) (bruijn ##k.406 0 0) (bruijn lamb 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda40, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda39, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda38(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda38" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda38, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 36 25) (bruijn ##k.404 0 0) (close _V0print__fun__case_lambda39))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda39, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda38, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k156(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k156" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k156, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 35 33) (close _V0print__fun__case_k157) (close _V0print__fun__case_lambda38) (bruijn ##x.487 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k157, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda38, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k156, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k155(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k155" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k155, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 34 23) (close _V0print__fun__case_k156) (bruijn fun 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k156, env)}),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k155, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k154(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k154" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k154, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 33 29) (close _V0print__fun__case_k155) (##string ##string.3713) (bruijn name 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k155, env)}),
      VEncodePointer(&_V10string_D3713.sym, VPOINTER_OTHER),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k154, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k167(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k167" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k167, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 33 29) (bruijn ##k.369 8 0) (##string ##string.3707))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 29)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D3707.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k167, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k153(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k153" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k153, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.389 0 0) ((bruijn printf 32 29) (close _V0print__fun__case_k154) (##string ##string.3714)) ((bruijn printf 32 29) (close _V0print__fun__case_k167) (##string ##string.3708)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k154, env)}),
      VEncodePointer(&_V10string_D3714.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k167, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k153, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k152(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k152" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k152, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 31 22) (close _V0print__fun__case_k153) (bruijn fun 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k153, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k152, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k170(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k170" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k170, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.175 8 1) (bruijn ##k.671 2 0) (bruijn ##x.679 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k170, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k169(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k169" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k169, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 30 13) (close _V0print__fun__case_k170) (bruijn body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k170, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k169, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda55(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda55" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda55, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.178 1 1))) ((bruijn printf 37 29) (close _V0print__fun__case_k169) (##string ##string.3716) (bruijn body 0 1)) ((bruijn ##k.671 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k169, env)}),
      VEncodePointer(&_V10string_D3716.sym, VPOINTER_OTHER),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda54(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda54, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 1)) ((close _V0print__fun__case_lambda55) (bruijn ##k.666 0 0) (##inline ##sys.car (bruijn ##expr.178 0 1))) ((bruijn ##k.666 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda55, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda53(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda53" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda53, env) {
  // ((close _V0print__fun__case_lambda54) (bruijn ##k.664 0 0) (##inline ##sys.cdr (bruijn ##expr.177 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda54, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda52(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda52, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 1)) ((close _V0print__fun__case_lambda53) (bruijn ##k.659 0 0) (##inline ##sys.car (bruijn ##expr.177 0 1))) ((bruijn ##k.659 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda53, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k175(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k175" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k175, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.175 12 1) (bruijn ##k.631 3 0) (bruijn ##x.642 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k175, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k174(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k174" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k174, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 34 13) (close _V0print__fun__case_k175) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k175, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k174, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k173(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k173" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k173, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 41 29) (close _V0print__fun__case_k174) (##string ##string.3718) (bruijn num 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k174, env)}),
      VEncodePointer(&_V10string_D3718.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k173, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda60(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda60" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda60, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.181 1 1))) ((bruijn printf 40 29) (close _V0print__fun__case_k173) (##string ##string.3716) (bruijn body 0 1)) ((bruijn ##k.631 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k173, env)}),
      VEncodePointer(&_V10string_D3716.sym, VPOINTER_OTHER),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda59(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda59" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda59, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 1)) ((close _V0print__fun__case_lambda60) (bruijn ##k.626 0 0) (##inline ##sys.car (bruijn ##expr.181 0 1))) ((bruijn ##k.626 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda60, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k172(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k172" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k172, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.623 0 0) ((close _V0print__fun__case_lambda59) (bruijn ##k.618 1 0) (##inline ##sys.cdr (bruijn ##expr.180 1 1))) ((bruijn ##k.618 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda59, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k172, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda58(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda58" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda58, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 1)) ((bruijn equal? 37 24) (close _V0print__fun__case_k172) (quote +) (##inline ##sys.car (bruijn ##expr.180 0 1))) ((bruijn ##k.618 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k172, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda57(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda57" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda57, env) {
  // ((close _V0print__fun__case_lambda58) (bruijn ##k.616 0 0) (##inline ##sys.cdr (bruijn ##expr.179 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda58, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda56(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda56" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda56, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 1)) ((close _V0print__fun__case_lambda57) (bruijn ##k.611 0 0) (##inline ##sys.car (bruijn ##expr.179 0 1))) ((bruijn ##k.611 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda57, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k177(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k177" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k177, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.175 5 1) (bruijn ##k.602 3 0) (bruijn ##x.610 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k177, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k176(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k176" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k176, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 35 34) (close _V0print__fun__case_k177) (##string ##string.3712) (bruijn fun 12 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k177, env)}),
      VEncodePointer(&_V10string_D3712.sym, VPOINTER_OTHER),
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k176, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k171(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k171" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k171, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda56) (close _V0print__fun__case_k176) (bruijn ##input.176 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda56, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k176, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k171, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda51(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda51, env) {
  // ((close _V0print__fun__case_lambda52) (close _V0print__fun__case_k171) (bruijn ##input.176 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda52, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k171, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__fun__case_k168(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k168" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k168, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda51) (bruijn ##k.600 1 0) (bruijn ##x.690 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda51, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k168, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda50(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda50" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda50, env) {
 if (env->num_vars == 2) {
  // ((bruijn caddr 31 26) (close _V0print__fun__case_k168) (bruijn fun 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k168, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda50, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k121(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k121" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k121, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.490 0 0) ((bruijn cddr 30 23) (close _V0print__fun__case_k122) (bruijn fun 7 1)) ((bruijn call/cc 30 25) (close _V0print__fun__case_k152) (close _V0print__fun__case_lambda50)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k122, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k152, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda50, env)})
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k121, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k120(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k120" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k120, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 29 22) (close _V0print__fun__case_k121) (bruijn fun 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k121, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k120, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k119(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k119" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k119, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 28 29) (close _V0print__fun__case_k120) (##string ##string.3720) (bruijn name 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k120, env)}),
      VEncodePointer(&_V10string_D3720.sym, VPOINTER_OTHER),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k119, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k118(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k118" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k118, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 27 29) (close _V0print__fun__case_k119) (##string ##string.3721))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k119, env)}),
      VEncodePointer(&_V10string_D3721.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k118, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k189(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k189" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k189, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 38 29) (bruijn ##k.369 13 0) (##string ##string.3707))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 29)),
      VGetArg(env, 13, 0),
      VEncodePointer(&_V10string_D3707.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k189, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k188(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k188" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k188, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 37 29) (close _V0print__fun__case_k189) (##string ##string.3708))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k189, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k188, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k187(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k187" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k187, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 36 29) (close _V0print__fun__case_k188) (##string ##string.3708))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k188, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k187, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k186(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k186" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k186, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 35 29) (close _V0print__fun__case_k187) (##string ##string.3709))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k187, env)}),
      VEncodePointer(&_V10string_D3709.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k186, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k190(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k190" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k190, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 6 1) (bruijn ##k.471 1 0) (bruijn ##x.476 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k190, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda67(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda67" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda67, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.185 1 1))) ((bruijn printf 41 29) (close _V0print__fun__case_k190) (##string ##string.3710) (bruijn num 2 1)) ((bruijn ##k.471 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k190, env)}),
      VEncodePointer(&_V10string_D3710.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda66(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda66" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda66, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 1)) ((close _V0print__fun__case_lambda67) (bruijn ##k.466 0 0) (##inline ##sys.car (bruijn ##expr.185 0 1))) ((bruijn ##k.466 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda67, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda65(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda65, env) {
  // ((close _V0print__fun__case_lambda66) (bruijn ##k.464 0 0) (##inline ##sys.cdr (bruijn ##expr.184 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda66, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda64(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda64" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda64, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 1)) ((close _V0print__fun__case_lambda65) (bruijn ##k.459 0 0) (##inline ##sys.car (bruijn ##expr.184 0 1))) ((bruijn ##k.459 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda65, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k193(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k193" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k193, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 9 1) (bruijn ##k.437 1 0) (bruijn ##x.442 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k193, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda72(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda72" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda72, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.188 1 1))) ((bruijn printf 44 29) (close _V0print__fun__case_k193) (##string ##string.3711) (bruijn num 4 1)) ((bruijn ##k.437 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k193, env)}),
      VEncodePointer(&_V10string_D3711.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda71(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda71" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda71, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 1)) ((close _V0print__fun__case_lambda72) (bruijn ##k.432 0 0) (##inline ##sys.car (bruijn ##expr.188 0 1))) ((bruijn ##k.432 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda72, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k192(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k192" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k192, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.429 0 0) ((close _V0print__fun__case_lambda71) (bruijn ##k.424 1 0) (##inline ##sys.cdr (bruijn ##expr.187 1 1))) ((bruijn ##k.424 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda71, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k192, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda70(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda70" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda70, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((bruijn equal? 41 24) (close _V0print__fun__case_k192) (quote +) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.424 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k192, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda69(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda69" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda69, env) {
  // ((close _V0print__fun__case_lambda70) (bruijn ##k.422 0 0) (##inline ##sys.cdr (bruijn ##expr.186 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda70, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda68(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda68" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda68, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 1)) ((close _V0print__fun__case_lambda69) (bruijn ##k.417 0 0) (##inline ##sys.car (bruijn ##expr.186 0 1))) ((bruijn ##k.417 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda69, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k195(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k195" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k195, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 4 1) (bruijn ##k.408 3 0) (bruijn ##x.416 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k195, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k194(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k194" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k194, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 39 34) (close _V0print__fun__case_k195) (##string ##string.3712))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k195, env)}),
      VEncodePointer(&_V10string_D3712.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k194, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k191(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k191" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k191, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda68) (close _V0print__fun__case_k194) (bruijn ##input.183 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda68, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k194, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k191, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda63(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda63" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda63, env) {
  // ((close _V0print__fun__case_lambda64) (close _V0print__fun__case_k191) (bruijn ##input.183 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda64, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k191, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda62(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda62" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda62, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__fun__case_lambda63) (bruijn ##k.406 0 0) (bruijn lamb 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda63, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda62, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda61(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda61" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda61, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 35 25) (bruijn ##k.404 0 0) (close _V0print__fun__case_lambda62))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda62, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda61, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k185(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k185" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k185, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 34 33) (close _V0print__fun__case_k186) (close _V0print__fun__case_lambda61) (bruijn ##x.487 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k186, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda61, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k185, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k184(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k184" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k184, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 33 23) (close _V0print__fun__case_k185) (bruijn fun 10 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k185, env)}),
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k184, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k183(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k183" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k183, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 32 29) (close _V0print__fun__case_k184) (##string ##string.3713) (bruijn name 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k184, env)}),
      VEncodePointer(&_V10string_D3713.sym, VPOINTER_OTHER),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k183, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k196(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k196" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k196, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 32 29) (bruijn ##k.369 7 0) (##string ##string.3707))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 29)),
      VGetArg(env, 7, 0),
      VEncodePointer(&_V10string_D3707.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k196, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k182(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k182" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k182, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.389 0 0) ((bruijn printf 31 29) (close _V0print__fun__case_k183) (##string ##string.3714)) ((bruijn printf 31 29) (close _V0print__fun__case_k196) (##string ##string.3708)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k183, env)}),
      VEncodePointer(&_V10string_D3714.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k196, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k182, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k181(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k181" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k181, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 30 22) (close _V0print__fun__case_k182) (bruijn fun 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k182, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k181, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k200(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k200" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k200, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.168 9 1) (bruijn ##k.572 4 0) (bruijn ##x.586 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k200, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k199(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k199" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k199, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 39 29) (close _V0print__fun__case_k200) (##string ##string.3715))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k200, env)}),
      VEncodePointer(&_V10string_D3715.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k199, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k198(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k198" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k198, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 30 13) (close _V0print__fun__case_k199) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k199, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k198, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k197(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k197" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k197, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 37 29) (close _V0print__fun__case_k198) (##string ##string.3716) (bruijn body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k198, env)}),
      VEncodePointer(&_V10string_D3716.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k197, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda79(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda79" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda79, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.171 1 1))) ((bruijn printf 36 29) (close _V0print__fun__case_k197) (##string ##string.3717) (bruijn num 2 1)) ((bruijn ##k.572 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k197, env)}),
      VEncodePointer(&_V10string_D3717.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda78(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda78" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda78, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 1)) ((close _V0print__fun__case_lambda79) (bruijn ##k.567 0 0) (##inline ##sys.car (bruijn ##expr.171 0 1))) ((bruijn ##k.567 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda79, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda77(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda77" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda77, env) {
  // ((close _V0print__fun__case_lambda78) (bruijn ##k.565 0 0) (##inline ##sys.cdr (bruijn ##expr.170 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda78, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda76(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda76" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda76, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 1)) ((close _V0print__fun__case_lambda77) (bruijn ##k.560 0 0) (##inline ##sys.car (bruijn ##expr.170 0 1))) ((bruijn ##k.560 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda77, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k207(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k207" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k207, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.168 13 1) (bruijn ##k.526 5 0) (bruijn ##x.543 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k207, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k206(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k206" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k206, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 43 29) (close _V0print__fun__case_k207) (##string ##string.3715))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k207, env)}),
      VEncodePointer(&_V10string_D3715.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k206, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k205(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k205" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k205, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 34 13) (close _V0print__fun__case_k206) (bruijn body 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k206, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k205, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k204(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k204" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k204, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 41 29) (close _V0print__fun__case_k205) (##string ##string.3718) (bruijn num 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k205, env)}),
      VEncodePointer(&_V10string_D3718.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k204, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k203(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k203" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k203, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 40 29) (close _V0print__fun__case_k204) (##string ##string.3716) (bruijn body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k204, env)}),
      VEncodePointer(&_V10string_D3716.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k203, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda84(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda84" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda84, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.174 1 1))) ((bruijn printf 39 29) (close _V0print__fun__case_k203) (##string ##string.3719) (bruijn num 4 1)) ((bruijn ##k.526 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k203, env)}),
      VEncodePointer(&_V10string_D3719.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda83(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda83" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda83, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 1)) ((close _V0print__fun__case_lambda84) (bruijn ##k.521 0 0) (##inline ##sys.car (bruijn ##expr.174 0 1))) ((bruijn ##k.521 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda84, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k202(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k202" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k202, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.518 0 0) ((close _V0print__fun__case_lambda83) (bruijn ##k.513 1 0) (##inline ##sys.cdr (bruijn ##expr.173 1 1))) ((bruijn ##k.513 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda83, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k202, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda82(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda82" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda82, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 1)) ((bruijn equal? 36 24) (close _V0print__fun__case_k202) (quote +) (##inline ##sys.car (bruijn ##expr.173 0 1))) ((bruijn ##k.513 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k202, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda81(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda81, env) {
  // ((close _V0print__fun__case_lambda82) (bruijn ##k.511 0 0) (##inline ##sys.cdr (bruijn ##expr.172 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda82, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda80(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda80" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda80, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 1)) ((close _V0print__fun__case_lambda81) (bruijn ##k.506 0 0) (##inline ##sys.car (bruijn ##expr.172 0 1))) ((bruijn ##k.506 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda81, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k209(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k209" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k209, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.168 4 1) (bruijn ##k.497 3 0) (bruijn ##x.505 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k209, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k208(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k208" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k208, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 34 34) (close _V0print__fun__case_k209) (##string ##string.3712) (bruijn fun 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k209, env)}),
      VEncodePointer(&_V10string_D3712.sym, VPOINTER_OTHER),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k208, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k201(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k201" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k201, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda80) (close _V0print__fun__case_k208) (bruijn ##input.169 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda80, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k208, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k201, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda75(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda75" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda75, env) {
  // ((close _V0print__fun__case_lambda76) (close _V0print__fun__case_k201) (bruijn ##input.169 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda76, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k201, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda74(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda74" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda74, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__fun__case_lambda75) (bruijn ##k.495 0 0) (bruijn lamb 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda75, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda74, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda73(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda73" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda73, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 30 25) (bruijn ##k.493 0 0) (close _V0print__fun__case_lambda74))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda74, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda73, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k180(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k180" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k180, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 29 33) (close _V0print__fun__case_k181) (close _V0print__fun__case_lambda73) (bruijn ##x.597 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k181, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda73, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k180, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k218(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k218" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k218, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 37 29) (bruijn ##k.369 12 0) (##string ##string.3707))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 29)),
      VGetArg(env, 12, 0),
      VEncodePointer(&_V10string_D3707.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k218, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k217(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k217" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k217, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 36 29) (close _V0print__fun__case_k218) (##string ##string.3708))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k218, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k217, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k216(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k216" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k216, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 35 29) (close _V0print__fun__case_k217) (##string ##string.3708))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k217, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k216, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k215(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k215" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k215, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 34 29) (close _V0print__fun__case_k216) (##string ##string.3709))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k216, env)}),
      VEncodePointer(&_V10string_D3709.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k215, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k219(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k219" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k219, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 6 1) (bruijn ##k.471 1 0) (bruijn ##x.476 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k219, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda91(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda91" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda91, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.185 1 1))) ((bruijn printf 40 29) (close _V0print__fun__case_k219) (##string ##string.3710) (bruijn num 2 1)) ((bruijn ##k.471 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k219, env)}),
      VEncodePointer(&_V10string_D3710.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda90(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda90" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda90, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 1)) ((close _V0print__fun__case_lambda91) (bruijn ##k.466 0 0) (##inline ##sys.car (bruijn ##expr.185 0 1))) ((bruijn ##k.466 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda91, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda89(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda89" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda89, env) {
  // ((close _V0print__fun__case_lambda90) (bruijn ##k.464 0 0) (##inline ##sys.cdr (bruijn ##expr.184 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda90, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda88(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda88" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda88, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 1)) ((close _V0print__fun__case_lambda89) (bruijn ##k.459 0 0) (##inline ##sys.car (bruijn ##expr.184 0 1))) ((bruijn ##k.459 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda89, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k222(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k222" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k222, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 9 1) (bruijn ##k.437 1 0) (bruijn ##x.442 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k222, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda96(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda96" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda96, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.188 1 1))) ((bruijn printf 43 29) (close _V0print__fun__case_k222) (##string ##string.3711) (bruijn num 4 1)) ((bruijn ##k.437 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k222, env)}),
      VEncodePointer(&_V10string_D3711.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda95(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda95" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda95, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 1)) ((close _V0print__fun__case_lambda96) (bruijn ##k.432 0 0) (##inline ##sys.car (bruijn ##expr.188 0 1))) ((bruijn ##k.432 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda96, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k221(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k221" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k221, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.429 0 0) ((close _V0print__fun__case_lambda95) (bruijn ##k.424 1 0) (##inline ##sys.cdr (bruijn ##expr.187 1 1))) ((bruijn ##k.424 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda95, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k221, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda94(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda94" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda94, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((bruijn equal? 40 24) (close _V0print__fun__case_k221) (quote +) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.424 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k221, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda93(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda93" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda93, env) {
  // ((close _V0print__fun__case_lambda94) (bruijn ##k.422 0 0) (##inline ##sys.cdr (bruijn ##expr.186 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda94, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda92(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda92" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda92, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 1)) ((close _V0print__fun__case_lambda93) (bruijn ##k.417 0 0) (##inline ##sys.car (bruijn ##expr.186 0 1))) ((bruijn ##k.417 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda93, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k224(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k224" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k224, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.182 4 1) (bruijn ##k.408 3 0) (bruijn ##x.416 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k224, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k223(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k223" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k223, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 38 34) (close _V0print__fun__case_k224) (##string ##string.3712))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k224, env)}),
      VEncodePointer(&_V10string_D3712.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k223, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k220(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k220" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k220, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda92) (close _V0print__fun__case_k223) (bruijn ##input.183 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda92, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k223, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k220, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda87(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda87" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda87, env) {
  // ((close _V0print__fun__case_lambda88) (close _V0print__fun__case_k220) (bruijn ##input.183 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda88, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k220, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda86(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda86" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda86, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__fun__case_lambda87) (bruijn ##k.406 0 0) (bruijn lamb 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda87, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda86, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda85(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda85" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda85, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 34 25) (bruijn ##k.404 0 0) (close _V0print__fun__case_lambda86))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda86, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda85, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k214(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k214" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k214, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 33 33) (close _V0print__fun__case_k215) (close _V0print__fun__case_lambda85) (bruijn ##x.487 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k215, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda85, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k214, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k213(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k213" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k213, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 32 23) (close _V0print__fun__case_k214) (bruijn fun 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k214, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k213, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k212(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k212" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k212, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 31 29) (close _V0print__fun__case_k213) (##string ##string.3713) (bruijn name 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k213, env)}),
      VEncodePointer(&_V10string_D3713.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k212, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k225(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k225" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k225, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 31 29) (bruijn ##k.369 6 0) (##string ##string.3707))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 29)),
      VGetArg(env, 6, 0),
      VEncodePointer(&_V10string_D3707.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k225, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k211(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k211" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k211, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.389 0 0) ((bruijn printf 30 29) (close _V0print__fun__case_k212) (##string ##string.3714)) ((bruijn printf 30 29) (close _V0print__fun__case_k225) (##string ##string.3708)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k212, env)}),
      VEncodePointer(&_V10string_D3714.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k225, env)}),
      VEncodePointer(&_V10string_D3708.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k211, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k210(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k210" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k210, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 29 22) (close _V0print__fun__case_k211) (bruijn fun 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k211, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k210, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k228(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k228" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k228, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.175 8 1) (bruijn ##k.671 2 0) (bruijn ##x.679 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k228, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k227(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k227" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k227, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 28 13) (close _V0print__fun__case_k228) (bruijn body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k228, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k227, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda102(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda102" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda102, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.178 1 1))) ((bruijn printf 35 29) (close _V0print__fun__case_k227) (##string ##string.3716) (bruijn body 0 1)) ((bruijn ##k.671 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k227, env)}),
      VEncodePointer(&_V10string_D3716.sym, VPOINTER_OTHER),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda101(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda101" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda101, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 1)) ((close _V0print__fun__case_lambda102) (bruijn ##k.666 0 0) (##inline ##sys.car (bruijn ##expr.178 0 1))) ((bruijn ##k.666 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda102, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda100(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda100" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda100, env) {
  // ((close _V0print__fun__case_lambda101) (bruijn ##k.664 0 0) (##inline ##sys.cdr (bruijn ##expr.177 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda101, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda99(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda99" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda99, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 1)) ((close _V0print__fun__case_lambda100) (bruijn ##k.659 0 0) (##inline ##sys.car (bruijn ##expr.177 0 1))) ((bruijn ##k.659 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda100, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k233(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k233" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k233, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.175 12 1) (bruijn ##k.631 3 0) (bruijn ##x.642 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k233, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k232(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k232" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k232, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 32 13) (close _V0print__fun__case_k233) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k233, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k232, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k231(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k231" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k231, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 39 29) (close _V0print__fun__case_k232) (##string ##string.3718) (bruijn num 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k232, env)}),
      VEncodePointer(&_V10string_D3718.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k231, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda107(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda107" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda107, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.181 1 1))) ((bruijn printf 38 29) (close _V0print__fun__case_k231) (##string ##string.3716) (bruijn body 0 1)) ((bruijn ##k.631 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k231, env)}),
      VEncodePointer(&_V10string_D3716.sym, VPOINTER_OTHER),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda106(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda106" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda106, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 1)) ((close _V0print__fun__case_lambda107) (bruijn ##k.626 0 0) (##inline ##sys.car (bruijn ##expr.181 0 1))) ((bruijn ##k.626 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda107, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k230(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k230" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k230, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.623 0 0) ((close _V0print__fun__case_lambda106) (bruijn ##k.618 1 0) (##inline ##sys.cdr (bruijn ##expr.180 1 1))) ((bruijn ##k.618 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda106, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k230, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda105(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda105" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda105, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 1)) ((bruijn equal? 35 24) (close _V0print__fun__case_k230) (quote +) (##inline ##sys.car (bruijn ##expr.180 0 1))) ((bruijn ##k.618 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k230, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda104(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda104" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda104, env) {
  // ((close _V0print__fun__case_lambda105) (bruijn ##k.616 0 0) (##inline ##sys.cdr (bruijn ##expr.179 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda105, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__fun__case_lambda103(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda103" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda103, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 1)) ((close _V0print__fun__case_lambda104) (bruijn ##k.611 0 0) (##inline ##sys.car (bruijn ##expr.179 0 1))) ((bruijn ##k.611 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda104, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k235(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k235" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k235, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.175 5 1) (bruijn ##k.602 3 0) (bruijn ##x.610 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k235, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k234(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k234" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k234, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 33 34) (close _V0print__fun__case_k235) (##string ##string.3712) (bruijn fun 10 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k235, env)}),
      VEncodePointer(&_V10string_D3712.sym, VPOINTER_OTHER),
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k234, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k229(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k229" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k229, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda103) (close _V0print__fun__case_k234) (bruijn ##input.176 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda103, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k234, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k229, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda98(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda98" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda98, env) {
  // ((close _V0print__fun__case_lambda99) (close _V0print__fun__case_k229) (bruijn ##input.176 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda99, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k229, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__fun__case_k226(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k226" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k226, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda98) (bruijn ##k.600 1 0) (bruijn ##x.690 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda98, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k226, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda97(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda97, env) {
 if (env->num_vars == 2) {
  // ((bruijn caddr 29 26) (close _V0print__fun__case_k226) (bruijn fun 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k226, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda97, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k179(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k179" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k179, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.490 0 0) ((bruijn cddr 28 23) (close _V0print__fun__case_k180) (bruijn fun 5 1)) ((bruijn call/cc 28 25) (close _V0print__fun__case_k210) (close _V0print__fun__case_lambda97)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k180, env)}),
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k210, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda97, env)})
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k179, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k178(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k178" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k178, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 27 22) (close _V0print__fun__case_k179) (bruijn fun 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k179, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k178, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_k117(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k117" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k117, env) {
 if (env->num_vars == 1) {
  // (if (bruijn debug? 19 1) ((bruijn printf 26 29) (close _V0print__fun__case_k118) (##string ##string.3722) (bruijn name 1 1)) ((bruijn printf 26 29) (close _V0print__fun__case_k178) (##string ##string.3720) (bruijn name 1 1)))
if(VDecodeBool(
VGetArg(env, 19, 1))) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k118, env)}),
      VEncodePointer(&_V10string_D3722.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k178, env)}),
      VEncodePointer(&_V10string_D3720.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0print__fun__case_k117, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda13(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda13, env) {
  // ((bruijn printf 25 29) (close _V0print__fun__case_k117) (##string ##string.3723) (bruijn name 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k117, env)}),
      VEncodePointer(&_V10string_D3723.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 }
}
static void _V0print__fun__case_k116(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_k116" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_k116, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__fun__case_lambda13) (bruijn ##k.367 1 0) (bruijn ##x.698 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__fun__case_lambda13, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_k116, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__fun__case_lambda12(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__fun__case_lambda12, env) {
 if (env->num_vars == 2) {
  // ((bruijn car 23 28) (close _V0print__fun__case_k116) (bruijn fun 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_k116, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__fun__case_lambda12, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k82(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k82" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k82, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k83) (bruijn print-fun-case 14 15) (close _V0print__fun__case_lambda12))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k83, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__fun__case_lambda12, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k82, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define_k237(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define_k237" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define_k237, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 24 29) (bruijn ##k.699 2 0) (##string ##string.3724))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 29)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D3724.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__define_k237, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define_lambda109(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define_lambda109" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define_lambda109, env) {
 if (env->num_vars == 2) {
  // ((bruijn printf 24 29) (bruijn ##k.707 0 0) (##string ##string.3725) (bruijn ##x.167 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 29)),
      env->vars[0],
      VEncodePointer(&_V10string_D3725.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__define_lambda109, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define_k236(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define_k236" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define_k236, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 23 33) (close _V0print__define_k237) (close _V0print__define_lambda109) (bruijn funs 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define_k237, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define_lambda109, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__define_k236, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define_lambda108(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define_lambda108" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define_lambda108, env) {
 if (env->num_vars == 2) {
  // ((bruijn printf 22 29) (close _V0print__define_k236) (##string ##string.3726))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define_k236, env)}),
      VEncodePointer(&_V10string_D3726.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__define_lambda108, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k81(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k81" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k81, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k82) (bruijn print-define 13 14) (close _V0print__define_lambda108))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k82, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define_lambda108, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k81, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k239(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k239" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k239, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 5 1) (bruijn ##k.1266 1 0) (bruijn ##x.1277 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k239, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda114(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda114" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda114, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.132 0 1)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.132 0 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.132 0 1))) ((bruijn display 26 21) (close _V0print__expr_k239) (##string ##string.3727)) ((bruijn ##k.1266 0 0) #f)) ((bruijn ##k.1266 0 0) #f)) ((bruijn ##k.1266 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCar(
env->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k239, env)}),
      VEncodePointer(&_V10string_D3727.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k238(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k238" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k238, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1263 0 0) ((close _V0print__expr_lambda114) (bruijn ##k.1258 1 0) (##inline ##sys.cdr (bruijn ##expr.131 1 1))) ((bruijn ##k.1258 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda114, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k238, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda113(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda113" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda113, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 1)) ((bruijn equal? 24 24) (close _V0print__expr_k238) (quote quote) (##inline ##sys.car (bruijn ##expr.131 0 1))) ((bruijn ##k.1258 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k238, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k243(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k243" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k243, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 10 1) (bruijn ##k.1225 1 0) (bruijn ##x.1233 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k243, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda119(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda119" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda119, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.136 1 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.134 4 1))) ((bruijn print-literal-string 23 5) (close _V0print__expr_k243) (bruijn x 0 1)) ((bruijn ##k.1225 0 0) #f)) ((bruijn ##k.1225 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(env, 4, 1)
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k243, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda118(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda118" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda118, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((close _V0print__expr_lambda119) (bruijn ##k.1220 0 0) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.1220 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda119, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k242(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k242" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k242, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1217 0 0) ((close _V0print__expr_lambda118) (bruijn ##k.1212 1 0) (##inline ##sys.cdr (bruijn ##expr.135 1 1))) ((bruijn ##k.1212 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda118, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k242, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda117(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda117" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda117, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 1)) ((bruijn equal? 28 24) (close _V0print__expr_k242) (quote ##string) (##inline ##sys.car (bruijn ##expr.135 0 1))) ((bruijn ##k.1212 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k242, env)}),
      VEncodePointer(&_V10string.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda116(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda116" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda116, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.134 0 1)) ((close _V0print__expr_lambda117) (bruijn ##k.1207 0 0) (##inline ##sys.car (bruijn ##expr.134 0 1))) ((bruijn ##k.1207 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda117, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k241(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k241" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k241, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1204 0 0) ((close _V0print__expr_lambda116) (bruijn ##k.1199 1 0) (##inline ##sys.cdr (bruijn ##expr.133 1 1))) ((bruijn ##k.1199 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda116, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k241, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda115(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda115" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda115, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.133 0 1)) ((bruijn equal? 25 24) (close _V0print__expr_k241) (quote quote) (##inline ##sys.car (bruijn ##expr.133 0 1))) ((bruijn ##k.1199 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k241, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k246(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k246" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k246, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 8 1) (bruijn ##k.1181 1 0) (bruijn ##x.1186 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k246, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda122(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda122" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda122, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.138 1 1))) ((bruijn print-literal 21 6) (close _V0print__expr_k246) (bruijn x 0 1)) ((bruijn ##k.1181 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k246, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda121(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda121" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda121, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 1)) ((close _V0print__expr_lambda122) (bruijn ##k.1176 0 0) (##inline ##sys.car (bruijn ##expr.138 0 1))) ((bruijn ##k.1176 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda122, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k245(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k245" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k245, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1173 0 0) ((close _V0print__expr_lambda121) (bruijn ##k.1168 1 0) (##inline ##sys.cdr (bruijn ##expr.137 1 1))) ((bruijn ##k.1168 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda121, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k245, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda120(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda120" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda120, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 1)) ((bruijn equal? 26 24) (close _V0print__expr_k245) (quote quote) (##inline ##sys.car (bruijn ##expr.137 0 1))) ((bruijn ##k.1168 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k245, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k249(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k249" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k249, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 9 1) (bruijn ##k.1150 1 0) (bruijn ##x.1155 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k249, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda125(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda125" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda125, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.140 1 1))) ((bruijn printf 30 29) (close _V0print__expr_k249) (##string ##string.3728) (bruijn fun 0 1)) ((bruijn ##k.1150 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k249, env)}),
      VEncodePointer(&_V10string_D3728.sym, VPOINTER_OTHER),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda124(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda124" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda124, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 1)) ((close _V0print__expr_lambda125) (bruijn ##k.1145 0 0) (##inline ##sys.car (bruijn ##expr.140 0 1))) ((bruijn ##k.1145 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda125, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k248(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k248" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k248, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1142 0 0) ((close _V0print__expr_lambda124) (bruijn ##k.1137 1 0) (##inline ##sys.cdr (bruijn ##expr.139 1 1))) ((bruijn ##k.1137 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda124, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k248, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda123(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda123" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda123, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.139 0 1)) ((bruijn equal? 27 24) (close _V0print__expr_k248) (quote close) (##inline ##sys.car (bruijn ##expr.139 0 1))) ((bruijn ##k.1137 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k248, env)}),
      VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k253(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k253" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k253, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 15 1) (bruijn ##k.1091 2 0) (bruijn ##x.1099 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k253, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k255(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k255" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k255, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 16 1) (bruijn ##k.1091 3 0) (bruijn ##x.1104 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k255, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k257(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k257" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k257, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 17 1) (bruijn ##k.1091 4 0) (bruijn ##x.1109 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k257, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k259(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k259" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k259, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 18 1) (bruijn ##k.1091 5 0) (bruijn ##x.1114 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k259, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k260(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k260" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k260, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 18 1) (bruijn ##k.1091 5 0) (bruijn ##x.1116 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k260, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k258(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k258" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k258, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1112 0 0) ((bruijn printf 39 29) (close _V0print__expr_k259) (##string ##string.3732) (bruijn right 4 1)) ((bruijn printf 39 29) (close _V0print__expr_k260) (##string ##string.3733) (bruijn up 6 1) (bruijn right 4 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k259, env)}),
      VEncodePointer(&_V10string_D3732.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k260, env)}),
      VEncodePointer(&_V10string_D3733.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 1),
      VGetArg(env, 4, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k258, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k256(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k256" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k256, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1107 0 0) ((bruijn printf 38 29) (close _V0print__expr_k257) (##string ##string.3731) (bruijn right 3 1)) ((bruijn = 38 20) (close _V0print__expr_k258) (bruijn up 5 1) 3))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k257, env)}),
      VEncodePointer(&_V10string_D3731.sym, VPOINTER_OTHER),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k258, env)}),
      VGetArg(env, 5, 1),
      VEncodeInt(3l)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k256, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k254(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k254" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k254, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1102 0 0) ((bruijn printf 37 29) (close _V0print__expr_k255) (##string ##string.3730) (bruijn right 2 1)) ((bruijn = 37 20) (close _V0print__expr_k256) (bruijn up 4 1) 2))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k255, env)}),
      VEncodePointer(&_V10string_D3730.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k256, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(2l)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k254, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k252(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k252" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k252, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1097 0 0) ((bruijn printf 36 29) (close _V0print__expr_k253) (##string ##string.3729) (bruijn right 1 1)) ((bruijn = 36 20) (close _V0print__expr_k254) (bruijn up 3 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k253, env)}),
      VEncodePointer(&_V10string_D3729.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k254, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k252, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda132(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda132" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda132, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.144 1 1))) ((bruijn = 35 20) (close _V0print__expr_k252) (bruijn up 2 1) 0) ((bruijn ##k.1091 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k252, env)}),
      env->up->up->vars[1],
      VEncodeInt(0l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda131(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda131" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda131, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 1)) ((close _V0print__expr_lambda132) (bruijn ##k.1086 0 0) (##inline ##sys.car (bruijn ##expr.144 0 1))) ((bruijn ##k.1086 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda132, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda130(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda130" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda130, env) {
  // ((close _V0print__expr_lambda131) (bruijn ##k.1084 0 0) (##inline ##sys.cdr (bruijn ##expr.143 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda131, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda129(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda129" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda129, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 1)) ((close _V0print__expr_lambda130) (bruijn ##k.1079 0 0) (##inline ##sys.car (bruijn ##expr.143 0 1))) ((bruijn ##k.1079 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda130, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda128(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda128" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda128, env) {
  // ((close _V0print__expr_lambda129) (bruijn ##k.1077 0 0) (##inline ##sys.cdr (bruijn ##expr.142 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda129, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda127(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda127" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda127, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 1)) ((close _V0print__expr_lambda128) (bruijn ##k.1072 0 0) (##inline ##sys.car (bruijn ##expr.142 0 1))) ((bruijn ##k.1072 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda128, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k251(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k251" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k251, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1069 0 0) ((close _V0print__expr_lambda127) (bruijn ##k.1064 1 0) (##inline ##sys.cdr (bruijn ##expr.141 1 1))) ((bruijn ##k.1064 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda127, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k251, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda126(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda126" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda126, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 1)) ((bruijn equal? 28 24) (close _V0print__expr_k251) (quote bruijn) (##inline ##sys.car (bruijn ##expr.141 0 1))) ((bruijn ##k.1064 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k251, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k269(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k269" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k269, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 21 1) (bruijn ##k.1020 7 0) (bruijn ##x.1043 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k269, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k268(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k268" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k268, env) {
 if (env->num_vars == 1) {
  // ((bruijn displayln 42 32) (close _V0print__expr_k269) (##string ##string.3697))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 32)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k269, env)}),
      VEncodePointer(&_V10string_D3697.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k268, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k267(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k267" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k267, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 33 13) (close _V0print__expr_k268) (bruijn b 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k268, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k267, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k266(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k266" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k266, env) {
 if (env->num_vars == 1) {
  // ((bruijn displayln 40 32) (close _V0print__expr_k267) (##string ##string.3734))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 32)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k267, env)}),
      VEncodePointer(&_V10string_D3734.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k266, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k265(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k265" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k265, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 31 13) (close _V0print__expr_k266) (bruijn a 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k266, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k265, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k264(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k264" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k264, env) {
 if (env->num_vars == 1) {
  // ((bruijn displayln 38 32) (close _V0print__expr_k265) (##string ##string.3735))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 32)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k265, env)}),
      VEncodePointer(&_V10string_D3735.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k264, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k263(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k263" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k263, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 29 13) (close _V0print__expr_k264) (bruijn p 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k264, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k263, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda139(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda139" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda139, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.148 1 1))) ((bruijn displayln 36 32) (close _V0print__expr_k263) (##string ##string.3736)) ((bruijn ##k.1020 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 32)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k263, env)}),
      VEncodePointer(&_V10string_D3736.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda138(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda138" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda138, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.148 0 1)) ((close _V0print__expr_lambda139) (bruijn ##k.1015 0 0) (##inline ##sys.car (bruijn ##expr.148 0 1))) ((bruijn ##k.1015 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda139, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda137(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda137" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda137, env) {
  // ((close _V0print__expr_lambda138) (bruijn ##k.1013 0 0) (##inline ##sys.cdr (bruijn ##expr.147 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda138, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda136(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda136" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda136, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.147 0 1)) ((close _V0print__expr_lambda137) (bruijn ##k.1008 0 0) (##inline ##sys.car (bruijn ##expr.147 0 1))) ((bruijn ##k.1008 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda137, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda135(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda135" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda135, env) {
  // ((close _V0print__expr_lambda136) (bruijn ##k.1006 0 0) (##inline ##sys.cdr (bruijn ##expr.146 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda136, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda134(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda134" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda134, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.146 0 1)) ((close _V0print__expr_lambda135) (bruijn ##k.1001 0 0) (##inline ##sys.car (bruijn ##expr.146 0 1))) ((bruijn ##k.1001 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda135, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k262(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k262" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k262, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.998 0 0) ((close _V0print__expr_lambda134) (bruijn ##k.993 1 0) (##inline ##sys.cdr (bruijn ##expr.145 1 1))) ((bruijn ##k.993 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda134, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k262, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda133(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda133" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda133, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.145 0 1)) ((bruijn equal? 29 24) (close _V0print__expr_k262) (quote if) (##inline ##sys.car (bruijn ##expr.145 0 1))) ((bruijn ##k.993 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k262, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k272(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k272" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k272, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 16 1) (bruijn ##k.967 1 0) (bruijn ##x.972 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k272, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda146(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda146" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda146, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.152 1 1))) ((bruijn print-set 29 11) (close _V0print__expr_k272) (bruijn k 4 1) (bruijn y 2 1) (bruijn x 0 1) #f) ((bruijn ##k.967 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k272, env)}),
      VGetArg(env, 4, 1),
      env->up->up->vars[1],
      env->vars[1],
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda145(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda145" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda145, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 1)) ((close _V0print__expr_lambda146) (bruijn ##k.962 0 0) (##inline ##sys.car (bruijn ##expr.152 0 1))) ((bruijn ##k.962 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda146, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda144(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda144" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda144, env) {
  // ((close _V0print__expr_lambda145) (bruijn ##k.960 0 0) (##inline ##sys.cdr (bruijn ##expr.151 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda145, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda143(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda143" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda143, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 1)) ((close _V0print__expr_lambda144) (bruijn ##k.955 0 0) (##inline ##sys.car (bruijn ##expr.151 0 1))) ((bruijn ##k.955 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda144, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda142(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda142" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda142, env) {
  // ((close _V0print__expr_lambda143) (bruijn ##k.953 0 0) (##inline ##sys.cdr (bruijn ##expr.150 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda143, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda141(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda141" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda141, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 1)) ((close _V0print__expr_lambda142) (bruijn ##k.948 0 0) (##inline ##sys.car (bruijn ##expr.150 0 1))) ((bruijn ##k.948 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda142, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k271(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k271" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k271, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.945 0 0) ((close _V0print__expr_lambda141) (bruijn ##k.940 1 0) (##inline ##sys.cdr (bruijn ##expr.149 1 1))) ((bruijn ##k.940 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda141, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k271, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda140(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda140" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda140, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.149 0 1)) ((bruijn equal? 30 24) (close _V0print__expr_k271) (quote set!) (##inline ##sys.car (bruijn ##expr.149 0 1))) ((bruijn ##k.940 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k271, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k275(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k275" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k275, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 17 1) (bruijn ##k.914 1 0) (bruijn ##x.919 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k275, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda153(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda153" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda153, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.156 1 1))) ((bruijn print-define-global 30 10) (close _V0print__expr_k275) (bruijn k 4 1) (bruijn y 2 1) (bruijn x 0 1) #f) ((bruijn ##k.914 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k275, env)}),
      VGetArg(env, 4, 1),
      env->up->up->vars[1],
      env->vars[1],
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda152(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda152" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda152, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 1)) ((close _V0print__expr_lambda153) (bruijn ##k.909 0 0) (##inline ##sys.car (bruijn ##expr.156 0 1))) ((bruijn ##k.909 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda153, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda151(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda151, env) {
  // ((close _V0print__expr_lambda152) (bruijn ##k.907 0 0) (##inline ##sys.cdr (bruijn ##expr.155 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda152, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda150(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda150" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda150, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 1)) ((close _V0print__expr_lambda151) (bruijn ##k.902 0 0) (##inline ##sys.car (bruijn ##expr.155 0 1))) ((bruijn ##k.902 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda151, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda149(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda149" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda149, env) {
  // ((close _V0print__expr_lambda150) (bruijn ##k.900 0 0) (##inline ##sys.cdr (bruijn ##expr.154 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda150, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda148(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda148, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.154 0 1)) ((close _V0print__expr_lambda149) (bruijn ##k.895 0 0) (##inline ##sys.car (bruijn ##expr.154 0 1))) ((bruijn ##k.895 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda149, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k274(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k274" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k274, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.892 0 0) ((close _V0print__expr_lambda148) (bruijn ##k.887 1 0) (##inline ##sys.cdr (bruijn ##expr.153 1 1))) ((bruijn ##k.887 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda148, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k274, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda147(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda147" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda147, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.153 0 1)) ((bruijn equal? 31 24) (close _V0print__expr_k274) (quote define) (##inline ##sys.car (bruijn ##expr.153 0 1))) ((bruijn ##k.887 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k274, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k278(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k278" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k278, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 15 1) (bruijn ##k.874 1 0) (bruijn ##x.876 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k278, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda157(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda157" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda157, env) {
  // ((bruijn print-inline 28 12) (close _V0print__expr_k278) (bruijn f 1 1) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k278, env)}),
      env->up->vars[1],
      env->vars[1]
    );
 }
}
static void _V0print__expr_lambda156(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda156" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda156, env) {
  // ((close _V0print__expr_lambda157) (bruijn ##k.872 0 0) (##inline ##sys.cdr (bruijn ##expr.158 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda157, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda155(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda155" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda155, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.158 0 1)) ((close _V0print__expr_lambda156) (bruijn ##k.867 0 0) (##inline ##sys.car (bruijn ##expr.158 0 1))) ((bruijn ##k.867 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda156, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k277(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k277" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k277, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.864 0 0) ((close _V0print__expr_lambda155) (bruijn ##k.859 1 0) (##inline ##sys.cdr (bruijn ##expr.157 1 1))) ((bruijn ##k.859 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda155, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k277, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda154(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda154" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda154, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.157 0 1)) ((bruijn equal? 32 24) (close _V0print__expr_k277) (quote ##inline) (##inline ##sys.car (bruijn ##expr.157 0 1))) ((bruijn ##k.859 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k277, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k283(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k283" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k283, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 17 1) (bruijn ##k.833 3 0) (bruijn ##x.841 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k283, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k282(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k282" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k282, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-literal-string 30 5) (close _V0print__expr_k283) (bruijn x 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k283, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k282, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k284(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k284" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k284, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 16 1) (bruijn ##k.833 2 0) (bruijn ##x.841 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k284, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k281(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k281" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k281, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.842 0 0) ((bruijn error 37 34) (close _V0print__expr_k282) (##string ##string.3737) (bruijn literal-table 30 3)) ((bruijn print-literal-string 29 5) (close _V0print__expr_k284) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k282, env)}),
      VEncodePointer(&_V10string_D3737.sym, VPOINTER_OTHER),
      VGetArg(env, 30, 3)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k284, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k281, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda160(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda160" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda160, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.160 1 1))) ((bruijn null? 36 35) (close _V0print__expr_k281) (bruijn x 0 1)) ((bruijn ##k.833 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k281, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda159(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda159" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda159, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 1)) ((close _V0print__expr_lambda160) (bruijn ##k.828 0 0) (##inline ##sys.car (bruijn ##expr.160 0 1))) ((bruijn ##k.828 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda160, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k280(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k280" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k280, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.825 0 0) ((close _V0print__expr_lambda159) (bruijn ##k.820 1 0) (##inline ##sys.cdr (bruijn ##expr.159 1 1))) ((bruijn ##k.820 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda159, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k280, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda158(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda158" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda158, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 1)) ((bruijn equal? 33 24) (close _V0print__expr_k280) (quote ##string) (##inline ##sys.car (bruijn ##expr.159 0 1))) ((bruijn ##k.820 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k280, env)}),
      VEncodePointer(&_V10string.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k286(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k286" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k286, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.773 1 0) (bruijn ##expr.162 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k286, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda170(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda170" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda170, env) {
  // ((bruijn ##k.165 1 1) (bruijn ##k.791 0 0) (##inline ##sys.cdr (bruijn ##expr.166 5 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.163 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k290(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k290" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k290, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.164 8 1) (bruijn ##k.785 2 0) (bruijn ##expr.166 6 1) (bruijn ##x.790 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k290, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k289(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k289" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k289, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 45 37) (close _V0loop_k290) (bruijn ##xs.163 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k290, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k289, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda169(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda169" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda169, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda170) (close _V0loop_k289) (##inline ##sys.car (bruijn ##expr.166 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda170, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k289, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda169, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda168(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda168" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda168, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 43 25) (bruijn ##k.783 0 0) (close _V0loop_lambda169))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda169, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda168, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k288(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k288" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k288, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 42 18) (bruijn ##k.778 2 0) (close _V0loop_lambda168) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 18)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda168, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k288, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k287(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k287" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k287, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.164 3 1) (close _V0loop_k288) (bruijn ##expr.166 1 1) (bruijn ##x.799 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k288, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k287, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda173(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda173" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda173, env) {
  // ((bruijn ##k.165 1 1) (bruijn ##k.791 0 0) (##inline ##sys.cdr (bruijn ##expr.166 3 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.163 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k292(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k292" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k292, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.164 6 1) (bruijn ##k.785 2 0) (bruijn ##expr.166 4 1) (bruijn ##x.790 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k292, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k291(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k291" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k291, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 43 37) (close _V0loop_k292) (bruijn ##xs.163 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k292, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k291, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda172(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda172" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda172, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda173) (close _V0loop_k291) (##inline ##sys.car (bruijn ##expr.166 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda173, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k291, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda172, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda171(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda171" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda171, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 41 25) (bruijn ##k.783 0 0) (close _V0loop_lambda172))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda172, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda171, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda167(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda167" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda167, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.166 0 1))) ((bruijn reverse 40 37) (close _V0loop_k287) (bruijn ##xs.163 0 2)) ((bruijn call-with-values 40 18) (bruijn ##k.778 0 0) (close _V0loop_lambda171) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k287, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda171, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda167, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda166(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda166" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda166, env) {
  // (set! (close _V0print__expr_k286) (bruijn loop 0 1) (close _V0loop_lambda167))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k286, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda167, env)})
    );
 }
}
static void _V0print__expr_lambda165(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda165" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda165, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__expr_lambda166) (bruijn ##k.771 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda166, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_lambda165, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda164(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda164" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda164, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 37 25) (bruijn ##k.769 0 0) (close _V0print__expr_lambda165))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_lambda165, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__expr_lambda164, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k294(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k294" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k294, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 17 1) (bruijn ##k.803 2 0) (bruijn ##x.811 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k294, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k295(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k295" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k295, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 17 1) (bruijn ##k.803 2 0) (bruijn ##x.813 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k295, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k293(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k293" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k293, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.809 0 0) ((bruijn print-builtin-apply 30 8) (close _V0print__expr_k294) (bruijn f 3 1) (bruijn xs 1 2) #f) ((bruijn print-closure-apply 30 9) (close _V0print__expr_k295) (bruijn f 3 1) (bruijn xs 1 2) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k294, env)}),
      env->up->up->up->vars[1],
      env->up->vars[2],
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k295, env)}),
      env->up->up->up->vars[1],
      env->up->vars[2],
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k293, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda174(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda174" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda174, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn lookup-intrinsic 37 19) (close _V0print__expr_k293) (bruijn f 2 1)) ((bruijn ##k.803 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k293, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_lambda174, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda163(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda163" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda163, env) {
  // ((bruijn call-with-values 36 18) (bruijn ##k.767 0 0) (close _V0print__expr_lambda164) (close _V0print__expr_lambda174))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_lambda164, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_lambda174, env)})
    );
 }
}
static void _V0print__expr_lambda162(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda162" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda162, env) {
  // ((close _V0print__expr_lambda163) (bruijn ##k.765 0 0) (##inline ##sys.cdr (bruijn ##expr.161 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda163, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__expr_lambda161(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda161" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda161, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 1)) ((close _V0print__expr_lambda162) (bruijn ##k.760 0 0) (##inline ##sys.car (bruijn ##expr.161 0 1))) ((bruijn ##k.760 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda162, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k298(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k298" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k298, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 15 1) (bruijn ##k.752 2 0) (bruijn ##x.757 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k298, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k299(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k299" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k299, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 15 1) (bruijn ##k.752 2 0) (bruijn ##x.759 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k299, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k297(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k297" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k297, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.755 0 0) ((bruijn print-global 28 1) (close _V0print__expr_k298) (bruijn x 1 1)) ((bruijn print-literal 28 6) (close _V0print__expr_k299) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k298, env)}),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k299, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0print__expr_k297, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda175(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda175" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda175, env) {
  // ((bruijn symbol? 35 17) (close _V0print__expr_k297) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k297, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__expr_k301(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k301" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k301, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.129 14 1) (bruijn ##k.713 13 0) (bruijn ##x.751 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VGetArg(env, 13, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k301, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k300(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k300" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k300, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 35 34) (close _V0print__expr_k301) (##string ##string.3738) (bruijn expr 14 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k301, env)}),
      VEncodePointer(&_V10string_D3738.sym, VPOINTER_OTHER),
      VGetArg(env, 14, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k300, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k296(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k296" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k296, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda175) (close _V0print__expr_k300) (bruijn ##input.130 11 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda175, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k300, env)}),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k296, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k285(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k285" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k285, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda161) (close _V0print__expr_k296) (bruijn ##input.130 10 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda161, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k296, env)}),
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k285, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k279(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k279" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k279, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda158) (close _V0print__expr_k285) (bruijn ##input.130 9 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda158, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k285, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k279, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k276(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k276" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k276, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda154) (close _V0print__expr_k279) (bruijn ##input.130 8 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda154, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k279, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k276, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k273(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k273" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k273, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda147) (close _V0print__expr_k276) (bruijn ##input.130 7 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda147, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k276, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k273, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k270(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k270" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k270, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda140) (close _V0print__expr_k273) (bruijn ##input.130 6 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda140, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k273, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k270, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k261(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k261" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k261, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda133) (close _V0print__expr_k270) (bruijn ##input.130 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda133, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k270, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k261, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k250(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k250" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k250, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda126) (close _V0print__expr_k261) (bruijn ##input.130 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda126, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k261, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k250, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k247(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k247" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k247, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda123) (close _V0print__expr_k250) (bruijn ##input.130 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda123, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k250, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k247, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k244(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k244" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k244, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda120) (close _V0print__expr_k247) (bruijn ##input.130 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda120, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k247, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k244, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_k240(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_k240" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_k240, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__expr_lambda115) (close _V0print__expr_k244) (bruijn ##input.130 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda115, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k244, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_k240, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda112(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda112" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda112, env) {
  // ((close _V0print__expr_lambda113) (close _V0print__expr_k240) (bruijn ##input.130 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda113, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_k240, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__expr_lambda111(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda111" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda111, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__expr_lambda112) (bruijn ##k.711 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__expr_lambda112, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__expr_lambda111, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__expr_lambda110(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__expr_lambda110" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__expr_lambda110, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 21 25) (bruijn ##k.709 0 0) (close _V0print__expr_lambda111))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_lambda111, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__expr_lambda110, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k80(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k80" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k80, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k81) (bruijn print-expr 12 13) (close _V0print__expr_lambda110))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k81, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__expr_lambda110, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k80, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k311(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k311" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k311, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 31 29) (bruijn ##k.1294 9 0) (##string ##string.3739))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 29)),
      VGetArg(env, 9, 0),
      VEncodePointer(&_V10string_D3739.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k311, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k312(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k312" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k312, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 24 13) (bruijn ##k.1311 1 0) (bruijn x 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 13)),
      env->up->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k312, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_lambda178(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_lambda178" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_lambda178, env) {
 if (env->num_vars == 2) {
  // ((bruijn printf 31 29) (close _V0print__inline_k312) (##string ##string.3740))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k312, env)}),
      VEncodePointer(&_V10string_D3740.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__inline_lambda178, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k310(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k310" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k310, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 30 33) (close _V0print__inline_k311) (close _V0print__inline_lambda178) (bruijn ##x.1316 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k311, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_lambda178, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k310, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k309(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k309" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k309, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 29 27) (close _V0print__inline_k310) (bruijn xs 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k310, env)}),
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k309, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k308(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k308" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k308, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 20 13) (close _V0print__inline_k309) (bruijn ##x.1317 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k309, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k308, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k307(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k307" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k307, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1305 0 0) ((bruijn car 27 28) (close _V0print__inline_k308) (bruijn xs 7 2)) ((bruijn printf 27 29) (bruijn ##k.1294 5 0) (##string ##string.3739)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k308, env)}),
      VGetArg(env, 7, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 29)),
      VGetArg(env, 5, 0),
      VEncodePointer(&_V10string_D3739.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0print__inline_k307, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k306(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k306" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k306, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 26 36) (close _V0print__inline_k307) (bruijn ##x.1320 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k307, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k306, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k305(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k305" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k305, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 25 35) (close _V0print__inline_k306) (bruijn xs 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k306, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k305, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k304(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k304" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k304, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 24 29) (close _V0print__inline_k305) (##string ##string.3741) (bruijn inline 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k305, env)}),
      VEncodePointer(&_V10string_D3741.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k304, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k319(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k319" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k319, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 30 29) (bruijn ##k.1294 8 0) (##string ##string.3739))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 29)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D3739.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k319, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k320(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k320" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k320, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 23 13) (bruijn ##k.1311 1 0) (bruijn x 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 13)),
      env->up->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k320, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_lambda179(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_lambda179" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_lambda179, env) {
 if (env->num_vars == 2) {
  // ((bruijn printf 30 29) (close _V0print__inline_k320) (##string ##string.3740))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k320, env)}),
      VEncodePointer(&_V10string_D3740.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__inline_lambda179, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k318(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k318" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k318, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 29 33) (close _V0print__inline_k319) (close _V0print__inline_lambda179) (bruijn ##x.1316 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k319, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_lambda179, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k318, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k317(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k317" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k317, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 28 27) (close _V0print__inline_k318) (bruijn xs 8 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k318, env)}),
      VGetArg(env, 8, 2)
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k317, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k316(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k316" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k316, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 19 13) (close _V0print__inline_k317) (bruijn ##x.1317 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k317, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k316, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k315(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k315" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k315, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1305 0 0) ((bruijn car 26 28) (close _V0print__inline_k316) (bruijn xs 6 2)) ((bruijn printf 26 29) (bruijn ##k.1294 4 0) (##string ##string.3739)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k316, env)}),
      VGetArg(env, 6, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 29)),
      VGetArg(env, 4, 0),
      VEncodePointer(&_V10string_D3739.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0print__inline_k315, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k314(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k314" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k314, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 25 36) (close _V0print__inline_k315) (bruijn ##x.1320 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k315, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k314, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k313(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k313" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k313, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 24 35) (close _V0print__inline_k314) (bruijn xs 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k314, env)}),
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k313, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_k303(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k303" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k303, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1321 0 0) ((bruijn error 23 34) (close _V0print__inline_k304) (##string ##string.3742) (bruijn f 3 1)) ((bruijn printf 23 29) (close _V0print__inline_k313) (##string ##string.3741) (bruijn inline 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k304, env)}),
      VEncodePointer(&_V10string_D3742.sym, VPOINTER_OTHER),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k313, env)}),
      VEncodePointer(&_V10string_D3741.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0print__inline_k303, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_lambda177(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_lambda177" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_lambda177, env) {
  // ((bruijn not 22 36) (close _V0print__inline_k303) (bruijn inline 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k303, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__inline_k302(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_k302" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_k302, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__inline_lambda177) (bruijn ##k.1292 1 0) (bruijn ##x.1326 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__inline_lambda177, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_k302, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__inline_lambda176(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__inline_lambda176" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__inline_lambda176, env) {
 if (env->num_vars == 3) {
  // ((bruijn lookup-inline 20 16) (close _V0print__inline_k302) (bruijn f 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_k302, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__inline_lambda176, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k79(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k79" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k79, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k80) (bruijn print-inline 11 12) (close _V0print__inline_lambda176))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k80, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__inline_lambda176, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k79, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k326(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k326" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k326, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.123 14 1) (bruijn ##k.1392 5 0) (bruijn ##x.1409 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__set_k326, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k325(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k325" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k325, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 33 29) (close _V0print__set_k326) (##string ##string.3743))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k326, env)}),
      VEncodePointer(&_V10string_D3743.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k325, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k324(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k324" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k324, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 24 13) (close _V0print__set_k325) (bruijn x 13 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k325, env)}),
      VGetArg(env, 13, 3)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k324, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k323(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k323" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k323, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 31 29) (close _V0print__set_k324) (##string ##string.3744) (bruijn up 4 1) (bruijn right 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k324, env)}),
      VEncodePointer(&_V10string_D3744.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__set_k323, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k322(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k322" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k322, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 22 13) (close _V0print__set_k323) (bruijn k 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k323, env)}),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k322, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_lambda189(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda189" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda189, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.128 1 1))) ((bruijn printf 29 29) (close _V0print__set_k322) (##string ##string.3745)) ((bruijn ##k.1392 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k322, env)}),
      VEncodePointer(&_V10string_D3745.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_lambda188(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda188" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda188, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.128 0 1)) ((close _V0print__set_lambda189) (bruijn ##k.1387 0 0) (##inline ##sys.car (bruijn ##expr.128 0 1))) ((bruijn ##k.1387 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__set_lambda189, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_lambda187(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda187" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda187, env) {
  // ((close _V0print__set_lambda188) (bruijn ##k.1385 0 0) (##inline ##sys.cdr (bruijn ##expr.127 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__set_lambda188, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__set_lambda186(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda186" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda186, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 1)) ((close _V0print__set_lambda187) (bruijn ##k.1380 0 0) (##inline ##sys.car (bruijn ##expr.127 0 1))) ((bruijn ##k.1380 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__set_lambda187, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_lambda185(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda185" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda185, env) {
  // ((close _V0print__set_lambda186) (bruijn ##k.1378 0 0) (##inline ##sys.cdr (bruijn ##expr.126 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__set_lambda186, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0print__set_lambda184(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda184" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda184, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.126 0 1)) ((close _V0print__set_lambda185) (bruijn ##k.1373 0 0) (##inline ##sys.car (bruijn ##expr.126 0 1))) ((bruijn ##k.1373 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__set_lambda185, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_k321(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k321" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k321, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1370 0 0) ((close _V0print__set_lambda184) (bruijn ##k.1365 1 0) (##inline ##sys.cdr (bruijn ##expr.125 1 1))) ((bruijn ##k.1365 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__set_lambda184, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__set_k321, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_lambda183(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda183" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda183, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 1)) ((bruijn equal? 22 24) (close _V0print__set_k321) (quote bruijn) (##inline ##sys.car (bruijn ##expr.125 0 1))) ((bruijn ##k.1365 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k321, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_k335(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k335" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k335, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.123 11 1) (bruijn ##k.1339 8 0) (bruijn ##x.1362 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VGetArg(env, 8, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__set_k335, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k334(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k334" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k334, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 30 29) (close _V0print__set_k335) (##string ##string.3743))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k335, env)}),
      VEncodePointer(&_V10string_D3743.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k334, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k333(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k333" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k333, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 21 13) (close _V0print__set_k334) (bruijn x 10 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k334, env)}),
      VGetArg(env, 10, 3)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k333, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k332(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k332" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k332, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 28 29) (close _V0print__set_k333) (##string ##string.3740))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k333, env)}),
      VEncodePointer(&_V10string_D3740.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k332, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k331(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k331" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k331, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-literal 19 6) (close _V0print__set_k332) (bruijn sym 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k332, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k331, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k330(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k330" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k330, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 26 29) (close _V0print__set_k331) (##string ##string.3740))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k331, env)}),
      VEncodePointer(&_V10string_D3740.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k330, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k329(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k329" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k329, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 17 13) (close _V0print__set_k330) (bruijn k 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k330, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k329, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k336(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k336" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k336, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.123 5 1) (bruijn ##k.1339 2 0) (bruijn ##x.1364 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__set_k336, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k328(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k328" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k328, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1342 0 0) ((bruijn printf 24 29) (close _V0print__set_k329) (##string ##string.3746)) ((bruijn error 24 34) (close _V0print__set_k336) (##string ##string.3747)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k329, env)}),
      VEncodePointer(&_V10string_D3746.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k336, env)}),
      VEncodePointer(&_V10string_D3747.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0print__set_k328, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_lambda190(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda190" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda190, env) {
  // ((bruijn symbol? 23 17) (close _V0print__set_k328) (bruijn sym 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k328, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__set_k337(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k337" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k337, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 23 34) (bruijn ##k.1331 2 0) (##string ##string.3748))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 34)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D3748.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__set_k337, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_k327(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_k327" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_k327, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__set_lambda190) (close _V0print__set_k337) (bruijn ##input.124 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__set_lambda190, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k337, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__set_k327, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_lambda182(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda182" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda182, env) {
  // ((close _V0print__set_lambda183) (close _V0print__set_k327) (bruijn ##input.124 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__set_lambda183, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_k327, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__set_lambda181(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda181" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda181, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__set_lambda182) (bruijn ##k.1329 0 0) (bruijn y 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__set_lambda182, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0print__set_lambda181, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__set_lambda180(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__set_lambda180" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__set_lambda180, env) {
 if (env->num_vars == 5) {
  // ((bruijn call/cc 19 25) (bruijn ##k.1327 0 0) (close _V0print__set_lambda181))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_lambda181, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__set_lambda180, got ~D~N"
  "-- expected 5~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k78(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k78" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k78, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k79) (bruijn print-set 10 11) (close _V0print__set_lambda180))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k79, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__set_lambda180, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k78, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define__global_k343(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define__global_k343" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define__global_k343, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 24 29) (bruijn ##k.1430 6 0) (##string ##string.3743))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 29)),
      VGetArg(env, 6, 0),
      VEncodePointer(&_V10string_D3743.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__define__global_k343, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define__global_k342(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define__global_k342" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define__global_k342, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 15 13) (close _V0print__define__global_k343) (bruijn x 5 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define__global_k343, env)}),
      VGetArg(env, 5, 3)
    );
 } else {
  VError("Not enough arguments to _V0print__define__global_k342, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define__global_k341(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define__global_k341" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define__global_k341, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 22 29) (close _V0print__define__global_k342) (##string ##string.3740))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define__global_k342, env)}),
      VEncodePointer(&_V10string_D3740.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__define__global_k341, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define__global_k340(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define__global_k340" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define__global_k340, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-literal 13 6) (close _V0print__define__global_k341) (bruijn y 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define__global_k341, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0print__define__global_k340, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define__global_k339(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define__global_k339" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define__global_k339, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 20 29) (close _V0print__define__global_k340) (##string ##string.3740))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define__global_k340, env)}),
      VEncodePointer(&_V10string_D3740.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__define__global_k339, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define__global_k338(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define__global_k338" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define__global_k338, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 11 13) (close _V0print__define__global_k339) (bruijn k 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define__global_k339, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__define__global_k338, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__define__global_lambda191(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__define__global_lambda191" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__define__global_lambda191, env) {
 if (env->num_vars == 5) {
  // ((bruijn printf 18 29) (close _V0print__define__global_k338) (##string ##string.3749))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define__global_k338, env)}),
      VEncodePointer(&_V10string_D3749.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__define__global_lambda191, got ~D~N"
  "-- expected 5~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k77(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k77" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k77, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k78) (bruijn print-define-global 9 10) (close _V0print__define__global_lambda191))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k78, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__define__global_lambda191, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k77, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k346(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k346" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k346, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 20 29) (bruijn ##k.1450 3 0) (##string ##string.3743))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 29)),
      env->up->up->up->vars[0],
      VEncodePointer(&_V10string_D3743.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k346, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k347(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k347" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k347, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 13 13) (bruijn ##k.1461 1 0) (bruijn x 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 13)),
      env->up->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k347, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_lambda193(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda193" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda193, env) {
 if (env->num_vars == 2) {
  // ((bruijn printf 20 29) (close _V0print__closure__apply_k347) (##string ##string.3740))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k347, env)}),
      VEncodePointer(&_V10string_D3740.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_lambda193, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k345(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k345" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k345, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 19 33) (close _V0print__closure__apply_k346) (close _V0print__closure__apply_lambda193) (bruijn xs 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k346, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda193, env)}),
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k345, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k349(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k349" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k349, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.119 6 1) (bruijn ##k.1493 1 0) (bruijn ##x.1498 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k349, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_lambda198(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda198" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda198, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.122 1 1))) ((bruijn printf 24 29) (close _V0print__closure__apply_k349) (##string ##string.3750) (bruijn fun 0 1)) ((bruijn ##k.1493 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k349, env)}),
      VEncodePointer(&_V10string_D3750.sym, VPOINTER_OTHER),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__closure__apply_lambda197(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda197" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda197, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.122 0 1)) ((close _V0print__closure__apply_lambda198) (bruijn ##k.1488 0 0) (##inline ##sys.car (bruijn ##expr.122 0 1))) ((bruijn ##k.1488 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda198, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__closure__apply_k348(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k348" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k348, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1485 0 0) ((close _V0print__closure__apply_lambda197) (bruijn ##k.1480 1 0) (##inline ##sys.cdr (bruijn ##expr.121 1 1))) ((bruijn ##k.1480 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda197, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k348, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_lambda196(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda196" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda196, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 1)) ((bruijn equal? 21 24) (close _V0print__closure__apply_k348) (quote close) (##inline ##sys.car (bruijn ##expr.121 0 1))) ((bruijn ##k.1480 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k348, env)}),
      VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__closure__apply_k353(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k353" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k353, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.119 5 1) (bruijn ##k.1468 4 0) (bruijn ##x.1479 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k353, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k352(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k352" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k352, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 23 21) (close _V0print__closure__apply_k353) (##string ##string.3751))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k353, env)}),
      VEncodePointer(&_V10string_D3751.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k352, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k351(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k351" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k351, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 14 13) (close _V0print__closure__apply_k352) (bruijn f 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k352, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k351, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k350(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k350" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k350, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 21 21) (close _V0print__closure__apply_k351) (##string ##string.3752))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k351, env)}),
      VEncodePointer(&_V10string_D3752.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k350, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_lambda195(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda195" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda195, env) {
  // ((close _V0print__closure__apply_lambda196) (close _V0print__closure__apply_k350) (bruijn ##input.120 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda196, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k350, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__closure__apply_lambda194(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda194" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda194, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__closure__apply_lambda195) (bruijn ##k.1466 0 0) (bruijn f 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda195, env)},
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_lambda194, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k344(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k344" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k344, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 18 25) (close _V0print__closure__apply_k345) (close _V0print__closure__apply_lambda194))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k345, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda194, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k344, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k356(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k356" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k356, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 20 29) (bruijn ##k.1450 3 0) (##string ##string.3743))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 29)),
      env->up->up->up->vars[0],
      VEncodePointer(&_V10string_D3743.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k356, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k357(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k357" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k357, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 13 13) (bruijn ##k.1461 1 0) (bruijn x 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 13)),
      env->up->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k357, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_lambda199(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda199" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda199, env) {
 if (env->num_vars == 2) {
  // ((bruijn printf 20 29) (close _V0print__closure__apply_k357) (##string ##string.3740))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k357, env)}),
      VEncodePointer(&_V10string_D3740.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_lambda199, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k355(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k355" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k355, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 19 33) (close _V0print__closure__apply_k356) (close _V0print__closure__apply_lambda199) (bruijn xs 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k356, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda199, env)}),
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k355, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k359(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k359" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k359, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.119 6 1) (bruijn ##k.1493 1 0) (bruijn ##x.1498 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k359, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_lambda204(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda204" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda204, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.122 1 1))) ((bruijn printf 24 29) (close _V0print__closure__apply_k359) (##string ##string.3750) (bruijn fun 0 1)) ((bruijn ##k.1493 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k359, env)}),
      VEncodePointer(&_V10string_D3750.sym, VPOINTER_OTHER),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__closure__apply_lambda203(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda203" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda203, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.122 0 1)) ((close _V0print__closure__apply_lambda204) (bruijn ##k.1488 0 0) (##inline ##sys.car (bruijn ##expr.122 0 1))) ((bruijn ##k.1488 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda204, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__closure__apply_k358(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k358" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k358, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1485 0 0) ((close _V0print__closure__apply_lambda203) (bruijn ##k.1480 1 0) (##inline ##sys.cdr (bruijn ##expr.121 1 1))) ((bruijn ##k.1480 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda203, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k358, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_lambda202(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda202" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda202, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 1)) ((bruijn equal? 21 24) (close _V0print__closure__apply_k358) (quote close) (##inline ##sys.car (bruijn ##expr.121 0 1))) ((bruijn ##k.1480 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k358, env)}),
      VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__closure__apply_k363(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k363" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k363, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.119 5 1) (bruijn ##k.1468 4 0) (bruijn ##x.1479 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k363, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k362(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k362" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k362, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 23 21) (close _V0print__closure__apply_k363) (##string ##string.3751))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k363, env)}),
      VEncodePointer(&_V10string_D3751.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k362, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k361(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k361" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k361, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 14 13) (close _V0print__closure__apply_k362) (bruijn f 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k362, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k361, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k360(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k360" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k360, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 21 21) (close _V0print__closure__apply_k361) (##string ##string.3752))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k361, env)}),
      VEncodePointer(&_V10string_D3752.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k360, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_lambda201(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda201" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda201, env) {
  // ((close _V0print__closure__apply_lambda202) (close _V0print__closure__apply_k360) (bruijn ##input.120 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda202, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k360, env)}),
      env->vars[1]
    );
 }
}
static void _V0print__closure__apply_lambda200(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda200" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda200, env) {
 if (env->num_vars == 2) {
  // ((close _V0print__closure__apply_lambda201) (bruijn ##k.1466 0 0) (bruijn f 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda201, env)},
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_lambda200, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_k354(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k354" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_k354, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 18 25) (close _V0print__closure__apply_k355) (close _V0print__closure__apply_lambda200))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k355, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda200, env)})
    );
 } else {
  VError("Not enough arguments to _V0print__closure__apply_k354, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__closure__apply_lambda192(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda192" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__closure__apply_lambda192, env) {
 if (env->num_vars == 4) {
  // (if (bruijn tail-call? 0 3) ((bruijn printf 17 29) (close _V0print__closure__apply_k344) (##string ##string.3753)) ((bruijn printf 17 29) (close _V0print__closure__apply_k354) (##string ##string.3754)))
if(VDecodeBool(
env->vars[3])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k344, env)}),
      VEncodePointer(&_V10string_D3753.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_k354, env)}),
      VEncodePointer(&_V10string_D3754.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0print__closure__apply_lambda192, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k76(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k76" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k76, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k77) (bruijn print-closure-apply 8 9) (close _V0print__closure__apply_lambda192))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k77, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__closure__apply_lambda192, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k76, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__builtin__apply_k366(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_k366" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__builtin__apply_k366, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 19 29) (bruijn ##k.1515 3 0) (##string ##string.3743))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 29)),
      env->up->up->up->vars[0],
      VEncodePointer(&_V10string_D3743.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__builtin__apply_k366, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__builtin__apply_k367(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_k367" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__builtin__apply_k367, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-expr 12 13) (bruijn ##k.1523 1 0) (bruijn x 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 13)),
      env->up->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__builtin__apply_k367, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__builtin__apply_lambda206(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_lambda206" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__builtin__apply_lambda206, env) {
 if (env->num_vars == 2) {
  // ((bruijn printf 19 29) (close _V0print__builtin__apply_k367) (##string ##string.3740))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__builtin__apply_k367, env)}),
      VEncodePointer(&_V10string_D3740.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__builtin__apply_lambda206, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__builtin__apply_k365(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_k365" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__builtin__apply_k365, env) {
 if (env->num_vars == 1) {
  // ((bruijn for-each 18 33) (close _V0print__builtin__apply_k366) (close _V0print__builtin__apply_lambda206) (bruijn xs 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 33)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__builtin__apply_k366, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__builtin__apply_lambda206, env)}),
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0print__builtin__apply_k365, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__builtin__apply_k364(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_k364" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__builtin__apply_k364, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 17 29) (close _V0print__builtin__apply_k365) (##string ##string.3755) (bruijn ##x.1528 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__builtin__apply_k365, env)}),
      VEncodePointer(&_V10string_D3755.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__builtin__apply_k364, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__builtin__apply_lambda205(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_lambda205" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__builtin__apply_lambda205, env) {
 if (env->num_vars == 4) {
  // ((bruijn lookup-intrinsic 16 19) (close _V0print__builtin__apply_k364) (bruijn f 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__builtin__apply_k364, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__builtin__apply_lambda205, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k75(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k75" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k75, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k76) (bruijn print-builtin-apply 7 8) (close _V0print__builtin__apply_lambda205))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k76, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__builtin__apply_lambda205, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k75, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_lambda210(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_lambda210" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_lambda210, env) {
  // ((bruijn printf 29 29) (bruijn ##k.1538 0 0) (##string ##string.3756) (bruijn len 0 1) (bruijn mangled 9 1) (bruijn len 0 1) (bruijn escaped 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 29)),
      env->vars[0],
      VEncodePointer(&_V10string_D3756.sym, VPOINTER_OTHER),
      env->vars[1],
      VGetArg(env, 9, 1),
      env->vars[1],
      VGetArg(env, 5, 1)
    );
 }
}
static void _V0print__literal__declaration_k378(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k378" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k378, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__literal__declaration_lambda210) (bruijn ##k.1536 4 0) (bruijn ##x.1540 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__literal__declaration_lambda210, env)},
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k378, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k377(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k377" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k377, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 27 12) (close _V0print__literal__declaration_k378) (bruijn ##x.1541 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k378, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k377, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k376(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k376" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k376, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 26 13) (close _V0print__literal__declaration_k377) (bruijn ##x.1542 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k377, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k376, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k375(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k375" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k375, env) {
 if (env->num_vars == 1) {
  // ((bruijn symbol->string 25 15) (close _V0print__literal__declaration_k376) (bruijn ##x.1543 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k376, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k375, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_lambda209(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_lambda209" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_lambda209, env) {
  // ((bruijn car 24 28) (close _V0print__literal__declaration_k375) (bruijn lit 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k375, env)}),
      VGetArg(env, 9, 1)
    );
 }
}
static void _V0print__literal__declaration_k374(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k374" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k374, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__literal__declaration_lambda209) (bruijn ##k.1534 3 0) (bruijn ##x.1544 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__literal__declaration_lambda209, env)},
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k374, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k373(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k373" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k373, env) {
 if (env->num_vars == 1) {
  // ((bruijn escape-string 14 3) (close _V0print__literal__declaration_k374) (bruijn ##x.1545 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k374, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k373, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k372(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k372" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k372, env) {
 if (env->num_vars == 1) {
  // ((bruijn symbol->string 21 15) (close _V0print__literal__declaration_k373) (bruijn ##x.1546 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k373, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k372, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_lambda208(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_lambda208" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_lambda208, env) {
  // ((bruijn car 20 28) (close _V0print__literal__declaration_k372) (bruijn lit 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k372, env)}),
      VGetArg(env, 5, 1)
    );
 }
}
static void _V0print__literal__declaration_k371(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k371" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k371, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__literal__declaration_lambda208) (bruijn ##k.1529 4 0) (bruijn ##x.1547 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__literal__declaration_lambda208, env)},
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k371, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k370(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k370" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k370, env) {
 if (env->num_vars == 1) {
  // ((bruijn mangle-symbol 18 11) (close _V0print__literal__declaration_k371) (bruijn ##x.1548 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k371, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k370, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_lambda213(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_lambda213" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_lambda213, env) {
  // ((bruijn printf 29 29) (bruijn ##k.1558 0 0) (##string ##string.3757) (bruijn len 0 1) (bruijn mangled 7 1) (bruijn len 0 1) (bruijn escaped 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 29)),
      env->vars[0],
      VEncodePointer(&_V10string_D3757.sym, VPOINTER_OTHER),
      env->vars[1],
      VGetArg(env, 7, 1),
      env->vars[1],
      VGetArg(env, 4, 1)
    );
 }
}
static void _V0print__literal__declaration_k387(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k387" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k387, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__literal__declaration_lambda213) (bruijn ##k.1556 3 0) (bruijn ##x.1560 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__literal__declaration_lambda213, env)},
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k387, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k386(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k386" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k386, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 27 12) (close _V0print__literal__declaration_k387) (bruijn ##x.1561 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k387, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k386, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k385(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k385" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k385, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 26 13) (close _V0print__literal__declaration_k386) (bruijn ##x.1562 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k386, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k385, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_lambda212(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_lambda212" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_lambda212, env) {
  // ((bruijn car 25 28) (close _V0print__literal__declaration_k385) (bruijn lit 10 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k385, env)}),
      VGetArg(env, 10, 1)
    );
 }
}
static void _V0print__literal__declaration_k384(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k384" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k384, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__literal__declaration_lambda212) (bruijn ##k.1554 2 0) (bruijn ##x.1563 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__literal__declaration_lambda212, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k384, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k383(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k383" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k383, env) {
 if (env->num_vars == 1) {
  // ((bruijn escape-string 15 3) (close _V0print__literal__declaration_k384) (bruijn ##x.1564 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k384, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k383, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_lambda211(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_lambda211" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_lambda211, env) {
  // ((bruijn car 22 28) (close _V0print__literal__declaration_k383) (bruijn lit 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k383, env)}),
      VGetArg(env, 7, 1)
    );
 }
}
static void _V0print__literal__declaration_k382(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k382" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k382, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__literal__declaration_lambda211) (bruijn ##k.1529 6 0) (bruijn ##x.1565 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__literal__declaration_lambda211, env)},
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k382, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k381(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k381" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k381, env) {
 if (env->num_vars == 1) {
  // ((bruijn mangle-symbol 20 11) (close _V0print__literal__declaration_k382) (bruijn ##x.1566 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k382, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k381, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k380(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k380" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k380, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1551 0 0) ((bruijn cdr 19 27) (close _V0print__literal__declaration_k381) (bruijn lit 4 1)) ((bruijn error 19 34) (bruijn ##k.1529 4 0) (##string ##string.3758)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k381, env)}),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 34)),
      VGetArg(env, 4, 0),
      VEncodePointer(&_V10string_D3758.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k380, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k379(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k379" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k379, env) {
 if (env->num_vars == 1) {
  // ((bruijn string? 18 14) (close _V0print__literal__declaration_k380) (bruijn ##x.1569 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k380, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k379, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k369(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k369" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k369, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1531 0 0) ((bruijn car 17 28) (close _V0print__literal__declaration_k370) (bruijn lit 2 1)) ((bruijn car 17 28) (close _V0print__literal__declaration_k379) (bruijn lit 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k370, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k379, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k369, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_k368(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k368" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_k368, env) {
 if (env->num_vars == 1) {
  // ((bruijn symbol? 16 17) (close _V0print__literal__declaration_k369) (bruijn ##x.1570 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k369, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_k368, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__declaration_lambda207(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_lambda207" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__declaration_lambda207, env) {
 if (env->num_vars == 2) {
  // ((bruijn car 15 28) (close _V0print__literal__declaration_k368) (bruijn lit 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_k368, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__declaration_lambda207, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k74(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k74" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k74, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k75) (bruijn print-literal-declaration 6 7) (close _V0print__literal__declaration_lambda207))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k75, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__declaration_lambda207, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k74, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k391(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k391" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k391, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 18 29) (bruijn ##k.1571 4 0) (##string ##string.3761) (bruijn ##x.1586 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 29)),
      VGetArg(env, 4, 0),
      VEncodePointer(&_V10string_D3761.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal_k391, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k396(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k396" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k396, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 22 21) (bruijn ##k.1571 8 0) (##string ##string.3751))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 21)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D3751.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0print__literal_k396, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k395(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k395" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k395, env) {
 if (env->num_vars == 1) {
  // ((bruijn print-string 13 2) (close _V0print__literal_k396) (bruijn x 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k396, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0print__literal_k395, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k398(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k398" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k398, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 22 29) (bruijn ##k.1571 8 0) (##string ##string.3765) (bruijn ##x.1613 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 29)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D3765.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal_k398, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k397(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k397" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k397, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1610 0 0) ((bruijn mangle-symbol 21 11) (close _V0print__literal_k398) (bruijn x 7 1)) ((bruijn error 21 34) (bruijn ##k.1571 7 0) (##string ##string.3766) (bruijn x 7 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k398, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 34)),
      VGetArg(env, 7, 0),
      VEncodePointer(&_V10string_D3766.sym, VPOINTER_OTHER),
      VGetArg(env, 7, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0print__literal_k397, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k394(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k394" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k394, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1599 0 0) ((bruijn display 20 21) (close _V0print__literal_k395) (##string ##string.3764)) ((bruijn symbol? 20 17) (close _V0print__literal_k397) (bruijn x 6 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k395, env)}),
      VEncodePointer(&_V10string_D3764.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k397, env)}),
      VGetArg(env, 6, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0print__literal_k394, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k393(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k393" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k393, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1594 0 0) ((bruijn printf 19 29) (bruijn ##k.1571 5 0) (##string ##string.3763)) ((bruijn string? 19 14) (close _V0print__literal_k394) (bruijn x 5 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 29)),
      VGetArg(env, 5, 0),
      VEncodePointer(&_V10string_D3763.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k394, env)}),
      VGetArg(env, 5, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0print__literal_k393, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k392(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k392" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k392, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1589 0 0) ((bruijn printf 18 29) (bruijn ##k.1571 4 0) (##string ##string.3762)) ((bruijn eq? 18 7) (close _V0print__literal_k393) (bruijn x 4 1) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 29)),
      VGetArg(env, 4, 0),
      VEncodePointer(&_V10string_D3762.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k393, env)}),
      VGetArg(env, 4, 1),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0print__literal_k392, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k390(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k390" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k390, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1583 0 0) ((bruijn escape-char 9 4) (close _V0print__literal_k391) (bruijn x 3 1)) ((bruijn eq? 17 7) (close _V0print__literal_k392) (bruijn x 3 1) #t))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k391, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k392, env)}),
      env->up->up->up->vars[1],
      VEncodeBool(true)
    );
}
 } else {
  VError("Not enough arguments to _V0print__literal_k390, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k389(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k389" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k389, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1578 0 0) ((bruijn printf 16 29) (bruijn ##k.1571 2 0) (##string ##string.3760) (bruijn x 2 1)) ((bruijn char? 16 8) (close _V0print__literal_k390) (bruijn x 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 29)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D3760.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k390, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0print__literal_k389, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_k388(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_k388" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_k388, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1573 0 0) ((bruijn printf 15 29) (bruijn ##k.1571 1 0) (##string ##string.3759) (bruijn x 1 1)) ((bruijn number? 15 9) (close _V0print__literal_k389) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 29)),
      env->up->vars[0],
      VEncodePointer(&_V10string_D3759.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k389, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0print__literal_k388, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal_lambda214(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal_lambda214" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal_lambda214, env) {
 if (env->num_vars == 2) {
  // ((bruijn integer? 14 10) (close _V0print__literal_k388) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_k388, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__literal_lambda214, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k73(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k73" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k73, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k74) (bruijn print-literal 5 6) (close _V0print__literal_lambda214))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k74, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal_lambda214, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k73, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__string_k399(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__string_k399" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__string_k399, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 14 29) (bruijn ##k.1616 1 0) (##string ##string.3765) (bruijn ##x.1618 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 29)),
      env->up->vars[0],
      VEncodePointer(&_V10string_D3765.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__string_k399, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__literal__string_lambda215(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__literal__string_lambda215" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__literal__string_lambda215, env) {
 if (env->num_vars == 2) {
  // ((bruijn mangle-symbol 13 11) (close _V0print__literal__string_k399) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__string_k399, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__literal__string_lambda215, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k72(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k72" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k72, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k73) (bruijn print-literal-string 4 5) (close _V0print__literal__string_lambda215))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k73, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__literal__string_lambda215, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k72, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__char_k406(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__char_k406" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__char_k406, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1653 0 0) ((bruijn ##k.1621 7 0) (##string ##string.3772)) ((bruijn ##k.1621 7 0) (bruijn c 8 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VEncodePointer(&_V10string_D3772.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VGetArg(env, 8, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0escape__char_k406, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__char_k405(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__char_k405" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__char_k405, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1648 0 0) ((bruijn ##k.1621 6 0) (##string ##string.3771)) ((bruijn eqv? 19 6) (close _V0escape__char_k406) (bruijn ##x.118 6 1) (quote #\')))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodePointer(&_V10string_D3771.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__char_k406, env)}),
      VGetArg(env, 6, 1),
      VEncodeChar('\'')
    );
}
 } else {
  VError("Not enough arguments to _V0escape__char_k405, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__char_k404(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__char_k404" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__char_k404, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1643 0 0) ((bruijn ##k.1621 5 0) (##string ##string.3770)) ((bruijn eqv? 18 6) (close _V0escape__char_k405) (bruijn ##x.118 5 1) (quote #\\)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 0)),
      VEncodePointer(&_V10string_D3770.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__char_k405, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('\\')
    );
}
 } else {
  VError("Not enough arguments to _V0escape__char_k404, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__char_k403(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__char_k403" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__char_k403, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1638 0 0) ((bruijn ##k.1621 4 0) (##string ##string.3769)) ((bruijn eqv? 17 6) (close _V0escape__char_k404) (bruijn ##x.118 4 1) (quote #\return)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VEncodePointer(&_V10string_D3769.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__char_k404, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('\r')
    );
}
 } else {
  VError("Not enough arguments to _V0escape__char_k403, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__char_k402(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__char_k402" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__char_k402, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1633 0 0) ((bruijn ##k.1621 3 0) (##string ##string.3768)) ((bruijn eqv? 16 6) (close _V0escape__char_k403) (bruijn ##x.118 3 1) (quote #\newline)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodePointer(&_V10string_D3768.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__char_k403, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('\n')
    );
}
 } else {
  VError("Not enough arguments to _V0escape__char_k402, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__char_k401(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__char_k401" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__char_k401, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1628 0 0) ((bruijn ##k.1621 2 0) (##string ##string.3768)) ((bruijn eqv? 15 6) (close _V0escape__char_k402) (bruijn ##x.118 2 1) (quote #\tab)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodePointer(&_V10string_D3768.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__char_k402, env)}),
      env->up->up->vars[1],
      VEncodeChar('\t')
    );
}
 } else {
  VError("Not enough arguments to _V0escape__char_k401, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__char_k400(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__char_k400" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__char_k400, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1623 0 0) ((bruijn ##k.1621 1 0) (##string ##string.3767)) ((bruijn eqv? 14 6) (close _V0escape__char_k401) (bruijn ##x.118 1 1) (quote #\backspace)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodePointer(&_V10string_D3767.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__char_k401, env)}),
      env->up->vars[1],
      VEncodeChar('')
    );
}
 } else {
  VError("Not enough arguments to _V0escape__char_k400, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__char_lambda217(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__char_lambda217" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__char_lambda217, env) {
  // ((bruijn eqv? 13 6) (close _V0escape__char_k400) (bruijn ##x.118 0 1) (quote #\alarm))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__char_k400, env)}),
      env->vars[1],
      VEncodeChar('\a')
    );
 }
}
static void _V0escape__char_lambda216(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__char_lambda216" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__char_lambda216, env) {
 if (env->num_vars == 2) {
  // ((close _V0escape__char_lambda217) (bruijn ##k.1619 0 0) (bruijn c 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0escape__char_lambda217, env)},
      env->vars[0],
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0escape__char_lambda216, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k71(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k71" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k71, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k72) (bruijn escape-char 3 4) (close _V0escape__char_lambda216))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k72, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__char_lambda216, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k71, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__string_k409(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_k409" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_k409, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1671 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0escape__string_k409, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k420(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k420" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k420, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 28 21) (bruijn ##k.1685 9 0) (bruijn ##x.1723 0 0) (bruijn port 14 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 21)),
      VGetArg(env, 9, 0),
      env->vars[0],
      VGetArg(env, 14, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k420, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k419(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k419" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k419, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-ref 27 4) (close _V0loop_k420) (bruijn s 16 1) (bruijn i 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k420, env)}),
      VGetArg(env, 16, 1),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k419, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k421(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k421" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k421, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 27 21) (bruijn ##k.1685 8 0) (bruijn ##x.1726 0 0) (bruijn port 13 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 21)),
      VGetArg(env, 8, 0),
      env->vars[0],
      VGetArg(env, 13, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k421, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k424(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k424" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k424, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 29 21) (bruijn ##k.1685 10 0) (bruijn ##x.1723 0 0) (bruijn port 15 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 21)),
      VGetArg(env, 10, 0),
      env->vars[0],
      VGetArg(env, 15, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k424, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k423(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k423" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k423, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-ref 28 4) (close _V0loop_k424) (bruijn s 17 1) (bruijn i 12 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k424, env)}),
      VGetArg(env, 17, 1),
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k423, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k425(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k425" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k425, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 28 21) (bruijn ##k.1685 9 0) (bruijn ##x.1726 0 0) (bruijn port 14 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 21)),
      VGetArg(env, 9, 0),
      env->vars[0],
      VGetArg(env, 14, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k425, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k422(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k422" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k422, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1729 0 0) ((bruijn display 27 21) (close _V0loop_k423) #\\ (bruijn port 13 2)) ((bruijn string-ref 27 4) (close _V0loop_k425) (bruijn s 16 1) (bruijn i 11 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k423, env)}),
      VEncodeChar('\\'),
      VGetArg(env, 13, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k425, env)}),
      VGetArg(env, 16, 1),
      VGetArg(env, 11, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k422, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k418(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k418" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k418, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1727 0 0) (if (bruijn ##x.1727 0 0) ((bruijn display 26 21) (close _V0loop_k419) #\\ (bruijn port 12 2)) ((bruijn string-ref 26 4) (close _V0loop_k421) (bruijn s 15 1) (bruijn i 10 1))) ((bruijn eqv? 26 6) (close _V0loop_k422) (bruijn ##x.117 7 1) (quote #\\)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k419, env)}),
      VEncodeChar('\\'),
      VGetArg(env, 12, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k421, env)}),
      VGetArg(env, 15, 1),
      VGetArg(env, 10, 1)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k422, env)}),
      VGetArg(env, 7, 1),
      VEncodeChar('\\')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k418, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k417(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k417" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k417, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1712 0 0) ((bruijn display 25 21) (bruijn ##k.1685 6 0) (##string ##string.3774) (bruijn port 11 2)) ((bruijn eqv? 25 6) (close _V0loop_k418) (bruijn ##x.117 6 1) (quote #\")))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 21)),
      VGetArg(env, 6, 0),
      VEncodePointer(&_V10string_D3774.sym, VPOINTER_OTHER),
      VGetArg(env, 11, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k418, env)}),
      VGetArg(env, 6, 1),
      VEncodeChar('"')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k417, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k416(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k416" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k416, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1707 0 0) ((bruijn display 24 21) (bruijn ##k.1685 5 0) (##string ##string.3770) (bruijn port 10 2)) ((bruijn eqv? 24 6) (close _V0loop_k417) (bruijn ##x.117 5 1) (quote #\?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 21)),
      VGetArg(env, 5, 0),
      VEncodePointer(&_V10string_D3770.sym, VPOINTER_OTHER),
      VGetArg(env, 10, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k417, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('?')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k416, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k415(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k415" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k415, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1702 0 0) ((bruijn display 23 21) (bruijn ##k.1685 4 0) (##string ##string.3769) (bruijn port 9 2)) ((bruijn eqv? 23 6) (close _V0loop_k416) (bruijn ##x.117 4 1) (quote #\return)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 21)),
      VGetArg(env, 4, 0),
      VEncodePointer(&_V10string_D3769.sym, VPOINTER_OTHER),
      VGetArg(env, 9, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k416, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('\r')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k415, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k414(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k414" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k414, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1697 0 0) ((bruijn display 22 21) (bruijn ##k.1685 3 0) (##string ##string.3768) (bruijn port 8 2)) ((bruijn eqv? 22 6) (close _V0loop_k415) (bruijn ##x.117 3 1) (quote #\newline)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 21)),
      env->up->up->up->vars[0],
      VEncodePointer(&_V10string_D3768.sym, VPOINTER_OTHER),
      VGetArg(env, 8, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k415, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('\n')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k414, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k413(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k413" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k413, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1692 0 0) ((bruijn display 21 21) (bruijn ##k.1685 2 0) (##string ##string.3773) (bruijn port 7 2)) ((bruijn eqv? 21 6) (close _V0loop_k414) (bruijn ##x.117 2 1) (quote #\tab)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 21)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D3773.sym, VPOINTER_OTHER),
      VGetArg(env, 7, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k414, env)}),
      env->up->up->vars[1],
      VEncodeChar('\t')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k413, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k412(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k412" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k412, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1687 0 0) ((bruijn display 20 21) (bruijn ##k.1685 1 0) (##string ##string.3767) (bruijn port 6 2)) ((bruijn eqv? 20 6) (close _V0loop_k413) (bruijn ##x.117 1 1) (quote #\backspace)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 21)),
      env->up->vars[0],
      VEncodePointer(&_V10string_D3767.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k413, env)}),
      env->up->vars[1],
      VEncodeChar('')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k412, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda222(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda222" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda222, env) {
  // ((bruijn eqv? 19 6) (close _V0loop_k412) (bruijn ##x.117 0 1) (quote #\alarm))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k412, env)}),
      env->vars[1],
      VEncodeChar('\a')
    );
 }
}
static void _V0loop_k427(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k427" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k427, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.1676 4 0) (bruijn ##x.1684 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k427, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k426(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k426" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k426, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 19 12) (close _V0loop_k427) (bruijn i 3 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k427, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k426, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k411(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k411" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k411, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda222) (close _V0loop_k426) (bruijn ##x.1730 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda222, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k426, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k411, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k410(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k410" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k410, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1678 0 0) ((bruijn string-ref 17 4) (close _V0loop_k411) (bruijn s 6 1) (bruijn i 1 1)) ((bruijn ##k.1676 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k411, env)}),
      VGetArg(env, 6, 1),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k410, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda221(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda221" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda221, env) {
 if (env->num_vars == 2) {
  // ((bruijn < 16 5) (close _V0loop_k410) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k410, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda221, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__string_lambda220(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_lambda220" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_lambda220, env) {
  // (set! (close _V0escape__string_k409) (bruijn loop 0 1) (close _V0loop_lambda221))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__string_k409, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda221, env)})
    );
 }
}
static void _V0escape__string_k430(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_k430" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_k430, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1665 1 0) (bruijn ret 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0escape__string_k430, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__string_lambda223(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_lambda223" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_lambda223, env) {
  // ((bruijn close-port 17 3) (close _V0escape__string_k430) (bruijn port 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__string_k430, env)}),
      env->up->up->up->vars[2]
    );
 }
}
static void _V0escape__string_k429(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_k429" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_k429, env) {
 if (env->num_vars == 1) {
  // ((close _V0escape__string_lambda223) (bruijn ##k.1660 2 0) (bruijn ##x.1670 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0escape__string_lambda223, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0escape__string_k429, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__string_k428(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_k428" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_k428, env) {
 if (env->num_vars == 1) {
  // ((bruijn get-output-string 15 2) (close _V0escape__string_k429) (bruijn port 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__string_k429, env)}),
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0escape__string_k428, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__string_lambda219(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_lambda219" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_lambda219, env) {
  // ((close _V0escape__string_lambda220) (close _V0escape__string_k428) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0escape__string_lambda220, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__string_k428, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0escape__string_k408(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_k408" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_k408, env) {
 if (env->num_vars == 1) {
  // ((close _V0escape__string_lambda219) (bruijn ##k.1658 2 0) (bruijn ##x.1733 1 0) (bruijn ##x.1734 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0escape__string_lambda219, env)},
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0escape__string_k408, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__string_k407(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_k407" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_k407, env) {
 if (env->num_vars == 1) {
  // ((bruijn open-output-string 12 1) (close _V0escape__string_k408))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__string_k408, env)})
    );
 } else {
  VError("Not enough arguments to _V0escape__string_k407, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0escape__string_lambda218(VEnv * env) {
 static VDebugInfo dbg = { "_V0escape__string_lambda218" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0escape__string_lambda218, env) {
 if (env->num_vars == 2) {
  // ((bruijn string-length 11 13) (close _V0escape__string_k407) (bruijn s 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__string_k407, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0escape__string_lambda218, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k70(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k70" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k70, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k71) (bruijn escape-string 2 3) (close _V0escape__string_lambda218))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k71, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0escape__string_lambda218, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k70, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__string_k432(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__string_k432" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__string_k432, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1743 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0print__string_k432, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k444(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k444" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k444, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 26 21) (bruijn ##k.1757 9 0) (bruijn ##x.1795 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 21)),
      VGetArg(env, 9, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k444, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k443(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k443" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k443, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-ref 25 4) (close _V0loop_k444) (bruijn s 15 1) (bruijn i 12 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k444, env)}),
      VGetArg(env, 15, 1),
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k443, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k445(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k445" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k445, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 25 21) (bruijn ##k.1757 8 0) (bruijn ##x.1798 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 21)),
      VGetArg(env, 8, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k445, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k448(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k448" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k448, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 27 21) (bruijn ##k.1757 10 0) (bruijn ##x.1795 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 21)),
      VGetArg(env, 10, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k448, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k447(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k447" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k447, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-ref 26 4) (close _V0loop_k448) (bruijn s 16 1) (bruijn i 13 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k448, env)}),
      VGetArg(env, 16, 1),
      VGetArg(env, 13, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k447, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k449(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k449" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k449, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 26 21) (bruijn ##k.1757 9 0) (bruijn ##x.1798 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 21)),
      VGetArg(env, 9, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k449, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k446(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k446" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k446, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1801 0 0) ((bruijn display 25 21) (close _V0loop_k447) #\\) ((bruijn string-ref 25 4) (close _V0loop_k449) (bruijn s 15 1) (bruijn i 12 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k447, env)}),
      VEncodeChar('\\')
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k449, env)}),
      VGetArg(env, 15, 1),
      VGetArg(env, 12, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k446, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k442(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k442" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k442, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1799 0 0) (if (bruijn ##x.1799 0 0) ((bruijn display 24 21) (close _V0loop_k443) #\\) ((bruijn string-ref 24 4) (close _V0loop_k445) (bruijn s 14 1) (bruijn i 11 1))) ((bruijn eqv? 24 6) (close _V0loop_k446) (bruijn ##x.116 7 1) (quote #\\)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k443, env)}),
      VEncodeChar('\\')
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k445, env)}),
      VGetArg(env, 14, 1),
      VGetArg(env, 11, 1)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k446, env)}),
      VGetArg(env, 7, 1),
      VEncodeChar('\\')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k442, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k441(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k441" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k441, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1784 0 0) ((bruijn display 23 21) (bruijn ##k.1757 6 0) (##string ##string.3774)) ((bruijn eqv? 23 6) (close _V0loop_k442) (bruijn ##x.116 6 1) (quote #\")))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 21)),
      VGetArg(env, 6, 0),
      VEncodePointer(&_V10string_D3774.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k442, env)}),
      VGetArg(env, 6, 1),
      VEncodeChar('"')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k441, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k440(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k440" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k440, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1779 0 0) ((bruijn display 22 21) (bruijn ##k.1757 5 0) (##string ##string.3770)) ((bruijn eqv? 22 6) (close _V0loop_k441) (bruijn ##x.116 5 1) (quote #\?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 21)),
      VGetArg(env, 5, 0),
      VEncodePointer(&_V10string_D3770.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k441, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('?')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k440, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k439(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k439" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k439, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1774 0 0) ((bruijn display 21 21) (bruijn ##k.1757 4 0) (##string ##string.3769)) ((bruijn eqv? 21 6) (close _V0loop_k440) (bruijn ##x.116 4 1) (quote #\return)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 21)),
      VGetArg(env, 4, 0),
      VEncodePointer(&_V10string_D3769.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k440, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('\r')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k439, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k438(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k438" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k438, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1769 0 0) ((bruijn display 20 21) (bruijn ##k.1757 3 0) (##string ##string.3768)) ((bruijn eqv? 20 6) (close _V0loop_k439) (bruijn ##x.116 3 1) (quote #\newline)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 21)),
      env->up->up->up->vars[0],
      VEncodePointer(&_V10string_D3768.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k439, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('\n')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k438, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k437(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k437" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k437, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1764 0 0) ((bruijn display 19 21) (bruijn ##k.1757 2 0) (##string ##string.3773)) ((bruijn eqv? 19 6) (close _V0loop_k438) (bruijn ##x.116 2 1) (quote #\tab)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 21)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D3773.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k438, env)}),
      env->up->up->vars[1],
      VEncodeChar('\t')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k437, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k436(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k436" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k436, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1759 0 0) ((bruijn display 18 21) (bruijn ##k.1757 1 0) (##string ##string.3767)) ((bruijn eqv? 18 6) (close _V0loop_k437) (bruijn ##x.116 1 1) (quote #\backspace)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 21)),
      env->up->vars[0],
      VEncodePointer(&_V10string_D3767.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k437, env)}),
      env->up->vars[1],
      VEncodeChar('')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k436, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda227(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda227" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda227, env) {
  // ((bruijn eqv? 17 6) (close _V0loop_k436) (bruijn ##x.116 0 1) (quote #\alarm))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k436, env)}),
      env->vars[1],
      VEncodeChar('\a')
    );
 }
}
static void _V0loop_k451(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k451" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k451, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.1748 5 0) (bruijn ##x.1756 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k451, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k450(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k450" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k450, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 17 12) (close _V0loop_k451) (bruijn i 4 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k451, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k450, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k435(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k435" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k435, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda227) (close _V0loop_k450) (bruijn ##x.1802 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda227, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k450, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k435, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k434(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k434" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k434, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1750 0 0) ((bruijn string-ref 15 4) (close _V0loop_k435) (bruijn s 5 1) (bruijn i 2 1)) ((bruijn ##k.1748 2 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k435, env)}),
      VGetArg(env, 5, 1),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k434, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k433(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k433" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k433, env) {
 if (env->num_vars == 1) {
  // ((bruijn < 14 5) (close _V0loop_k434) (bruijn i 1 1) (bruijn ##x.1805 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k434, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k433, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda226(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda226" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda226, env) {
 if (env->num_vars == 2) {
  // ((bruijn string-length 13 13) (close _V0loop_k433) (bruijn s 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k433, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda226, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0print__string_lambda225(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__string_lambda225" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__string_lambda225, env) {
  // (set! (close _V0print__string_k432) (bruijn loop 0 1) (close _V0loop_lambda226))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__string_k432, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda226, env)})
    );
 }
}
static void _V0print__string_k452(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__string_k452" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__string_k452, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 12 21) (bruijn ##k.1735 2 0) #\")
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 21)),
      env->up->up->vars[0],
      VEncodeChar('"')
    );
 } else {
  VError("Not enough arguments to _V0print__string_k452, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__string_k431(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__string_k431" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__string_k431, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__string_lambda225) (close _V0print__string_k452) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__string_lambda225, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__string_k452, env)}),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0print__string_k431, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__string_lambda224(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__string_lambda224" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__string_lambda224, env) {
 if (env->num_vars == 2) {
  // ((bruijn display 10 21) (close _V0print__string_k431) #\")
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__string_k431, env)}),
      VEncodeChar('"')
    );
 } else {
  VError("Not enough arguments to _V0print__string_lambda224, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_k69(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_k69" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_k69, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0printout_k70) (bruijn print-string 1 2) (close _V0print__string_lambda224))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k70, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__string_lambda224, env)})
    );
 } else {
  VError("Not enough arguments to _V0printout_k69, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__global_k454(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__global_k454" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__global_k454, env) {
 if (env->num_vars == 1) {
  // ((bruijn printf 12 29) (bruijn ##k.1808 1 0) (##string ##string.3775) (bruijn ##x.1812 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 29)),
      env->up->vars[0],
      VEncodePointer(&_V10string_D3775.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__global_k454, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__global_lambda229(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__global_lambda229" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__global_lambda229, env) {
  // (if (bruijn builtin 0 1) ((bruijn lookup-intrinsic 11 19) (close _V0print__global_k454) (bruijn sym 2 1)) ((bruijn printf 11 29) (bruijn ##k.1808 0 0) (##string ##string.3776) (bruijn sym 2 1)))
if(VDecodeBool(
env->vars[1])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__global_k454, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 29)),
      env->vars[0],
      VEncodePointer(&_V10string_D3776.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
}
 }
}
static void _V0print__global_k453(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__global_k453" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__global_k453, env) {
 if (env->num_vars == 1) {
  // ((close _V0print__global_lambda229) (bruijn ##k.1806 1 0) (bruijn ##x.1815 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0print__global_lambda229, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0print__global_k453, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0print__global_lambda228(VEnv * env) {
 static VDebugInfo dbg = { "_V0print__global_lambda228" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0print__global_lambda228, env) {
 if (env->num_vars == 2) {
  // ((bruijn lookup-intrinsic 9 19) (close _V0print__global_k453) (bruijn sym 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__global_k453, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0print__global_lambda228, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0printout_lambda6(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_lambda6, env) {
  // (set! (close _V0printout_k69) (bruijn print-global 0 1) (close _V0print__global_lambda228))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_k69, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0print__global_lambda228, env)})
    );
 }
}
static void _V0printout_lambda5(VEnv * env) {
 static VDebugInfo dbg = { "_V0printout_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0printout_lambda5, env) {
 if (env->num_vars == 7) {
  // ((close _V0printout_lambda6) (bruijn ##k.223 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0printout_lambda6, env)},
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
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0printout_lambda5, got ~D~N"
  "-- expected 7~N"
  , env->num_vars);
 }
 }
}
static void transpile_k67(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k67" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k67, env) {
 if (env->num_vars == 1) {
  // (set! (close transpile_k68) (bruijn printout 5 6) (close _V0printout_lambda5))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k68, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0printout_lambda5, env)})
    );
 } else {
  VError("Not enough arguments to transpile_k67, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k468(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k468" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k468, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1875 0 0) ((bruijn ##k.113 3 1) (bruijn ##k.1870 1 0) 1) ((bruijn ##k.1870 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0to__functions_k468, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_lambda236(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda236" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda236, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 1)) ((bruijn equal? 25 24) (close _V0to__functions_k468) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.115 0 1))) ((bruijn ##k.1870 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k468, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__functions_k469(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k469" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k469, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.113 2 1) (bruijn ##k.1865 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k469, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_lambda235(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda235" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda235, env) {
  // ((close _V0to__functions_lambda236) (close _V0to__functions_k469) (bruijn ##input.114 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__functions_lambda236, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k469, env)}),
      env->vars[1]
    );
 }
}
static void _V0to__functions_lambda234(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda234" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda234, env) {
 if (env->num_vars == 2) {
  // ((close _V0to__functions_lambda235) (bruijn ##k.1863 0 0) (bruijn e 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__functions_lambda235, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0to__functions_lambda234, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_lambda233(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda233" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda233, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 22 25) (bruijn ##k.1861 0 0) (close _V0to__functions_lambda234))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_lambda234, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_lambda233, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_lambda232(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda232" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda232, env) {
 if (env->num_vars == 1) {
  // ((bruijn multi-partition 14 13) (bruijn ##k.1859 0 0) (close _V0to__functions_lambda233) 2 (bruijn exprs 15 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_lambda233, env)}),
      VEncodeInt(2l),
      VGetArg(env, 15, 1)
    );
 } else {
  VError("Not enough arguments to _V0to__functions_lambda232, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_lambda238(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda238" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda238, env) {
  // ((bruijn list 24 50) (bruijn ##k.1885 0 0) (bruijn literal-table 17 4) (bruijn functions 17 3) (bruijn declares 0 2) (bruijn toplevels 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 50)),
      env->vars[0],
      VGetArg(env, 17, 4),
      VGetArg(env, 17, 3),
      env->vars[2],
      env->vars[1]
    );
 }
}
static void _V0to__functions_k471(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k471" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k471, env) {
 if (env->num_vars == 1) {
  // ((close _V0to__functions_lambda238) (bruijn ##k.1883 2 0) (bruijn ##x.1887 1 0) (bruijn ##x.1888 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__functions_lambda238, env)},
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k471, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k470(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k470" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k470, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 22 51) (close _V0to__functions_k471) (bruijn iter-declare 15 10) (bruijn declares 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k471, env)}),
      VGetArg(env, 15, 10),
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k470, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_lambda239(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda239" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda239, env) {
 if (env->num_vars == 2) {
  // ((bruijn iter 15 9) (bruijn ##k.1889 0 0) (##string ##string.3777) (bruijn e 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 9)),
      env->vars[0],
      VEncodePointer(&_V10string_D3777.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0to__functions_lambda239, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_lambda237(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda237" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda237, env) {
 if (env->num_vars == 3) {
  // ((bruijn map 21 51) (close _V0to__functions_k470) (close _V0to__functions_lambda239) (bruijn globals 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k470, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_lambda239, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0to__functions_lambda237, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k467(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k467" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k467, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 20 18) (bruijn ##k.1818 13 0) (close _V0to__functions_lambda232) (close _V0to__functions_lambda237))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 18)),
      VGetArg(env, 13, 0),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_lambda232, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_lambda237, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k467, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0multi__partition_k473(VEnv * env) {
 static VDebugInfo dbg = { "_V0multi__partition_k473" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0multi__partition_k473, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (bruijn ##k.1893 2 0) (bruijn ##x.1898 0 0) (bruijn l 3 3))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->up->vars[0],
      env->vars[0],
      env->up->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0multi__partition_k473, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0multi__partition_k472(VEnv * env) {
 static VDebugInfo dbg = { "_V0multi__partition_k472" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0multi__partition_k472, env) {
 if (env->num_vars == 1) {
  // ((bruijn make-list 15 11) (close _V0multi__partition_k473) (bruijn n 2 2) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0multi__partition_k473, env)}),
      env->up->up->vars[2],
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0multi__partition_k472, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k475(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k475" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k475, env) {
 if (env->num_vars == 1) {
  // ((bruijn apply 24 46) (bruijn ##k.1899 2 0) (bruijn values 24 47) (bruijn ##x.1904 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 46)),
      env->up->up->vars[0],
      VGetArg(env, 24, 47),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k475, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k480(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k480" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k480, env) {
 if (env->num_vars == 1) {
  // ((bruijn list-set! 22 12) (bruijn ##k.1911 3 0) (bruijn ret 7 1) (bruijn split 3 1) (bruijn ##x.1913 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 12)),
      env->up->up->up->vars[0],
      VGetArg(env, 7, 1),
      env->up->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k480, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k479(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k479" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k479, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 28 48) (close _V0loop_k480) (bruijn ##x.1914 1 0) (bruijn ##x.1915 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k480, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k479, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k478(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k478" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k478, env) {
 if (env->num_vars == 1) {
  // ((bruijn list-ref 27 49) (close _V0loop_k479) (bruijn ret 5 1) (bruijn split 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 49)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k479, env)}),
      VGetArg(env, 5, 1),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k478, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda243(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda243" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda243, env) {
  // ((bruijn car 26 28) (close _V0loop_k478) (bruijn l 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k478, env)}),
      VGetArg(env, 4, 2)
    );
 }
}
static void _V0loop_k482(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k482" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k482, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.1899 5 0) (bruijn ret 5 1) (bruijn ##x.1910 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      VGetArg(env, 5, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k482, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k481(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k481" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k481, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 26 27) (close _V0loop_k482) (bruijn l 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k482, env)}),
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k481, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k477(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k477" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k477, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda243) (close _V0loop_k481) (bruijn ##x.1916 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda243, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k481, env)}),
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
 static VDebugInfo dbg = { "_V0loop_k476" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k476, env) {
 if (env->num_vars == 1) {
  // ((bruijn f 4 1) (close _V0loop_k477) (bruijn ##x.1917 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k477, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k476, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k474(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k474" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k474, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1901 0 0) ((bruijn map 23 51) (close _V0loop_k475) (bruijn reverse 23 37) (bruijn ret 1 1)) ((bruijn car 23 28) (close _V0loop_k476) (bruijn l 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k475, env)}),
      VGetArg(env, 23, 37),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k476, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k474, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda242(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda242" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda242, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 22 35) (close _V0loop_k474) (bruijn l 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k474, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda242, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0multi__partition_lambda241(VEnv * env) {
 static VDebugInfo dbg = { "_V0multi__partition_lambda241" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0multi__partition_lambda241, env) {
  // (set! (close _V0multi__partition_k472) (bruijn loop 0 1) (close _V0loop_lambda242))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0multi__partition_k472, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda242, env)})
    );
 }
}
static void _V0multi__partition_lambda240(VEnv * env) {
 static VDebugInfo dbg = { "_V0multi__partition_lambda240" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0multi__partition_lambda240, env) {
 if (env->num_vars == 4) {
  // ((close _V0multi__partition_lambda241) (bruijn ##k.1891 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0multi__partition_lambda241, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0multi__partition_lambda240, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k466(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k466" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k466, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k467) (bruijn multi-partition 12 13) (close _V0multi__partition_lambda240))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k467, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0multi__partition_lambda240, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k466, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list__set_B_k485(VEnv * env) {
 static VDebugInfo dbg = { "_V0list__set_B_k485" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0list__set_B_k485, env) {
 if (env->num_vars == 1) {
  // ((bruijn list-set! 15 12) (bruijn ##k.1918 3 0) (bruijn ##x.1925 1 0) (bruijn ##x.1926 0 0) (bruijn v 3 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 12)),
      env->up->up->up->vars[0],
      env->up->vars[0],
      env->vars[0],
      env->up->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0list__set_B_k485, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list__set_B_k484(VEnv * env) {
 static VDebugInfo dbg = { "_V0list__set_B_k484" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0list__set_B_k484, env) {
 if (env->num_vars == 1) {
  // ((bruijn - 21 44) (close _V0list__set_B_k485) (bruijn x 2 2) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 44)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list__set_B_k485, env)}),
      env->up->up->vars[2],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0list__set_B_k484, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list__set_B_k483(VEnv * env) {
 static VDebugInfo dbg = { "_V0list__set_B_k483" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0list__set_B_k483, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1920 0 0) ((bruijn set-car! 20 45) (bruijn ##k.1918 1 0) (bruijn l 1 1) (bruijn v 1 3)) ((bruijn cdr 20 27) (close _V0list__set_B_k484) (bruijn l 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 45)),
      env->up->vars[0],
      env->up->vars[1],
      env->up->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list__set_B_k484, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0list__set_B_k483, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list__set_B_lambda244(VEnv * env) {
 static VDebugInfo dbg = { "_V0list__set_B_lambda244" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0list__set_B_lambda244, env) {
 if (env->num_vars == 4) {
  // ((bruijn = 19 20) (close _V0list__set_B_k483) (bruijn x 0 2) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list__set_B_k483, env)}),
      env->vars[2],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0list__set_B_lambda244, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k465(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k465" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k465, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k466) (bruijn list-set! 11 12) (close _V0list__set_B_lambda244))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k466, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list__set_B_lambda244, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k465, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__list_k488(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__list_k488" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__list_k488, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 21 48) (bruijn ##k.1927 3 0) (bruijn k 3 2) (bruijn ##x.1934 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 48)),
      env->up->up->up->vars[0],
      env->up->up->up->vars[2],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__list_k488, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__list_k487(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__list_k487" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__list_k487, env) {
 if (env->num_vars == 1) {
  // ((bruijn make-list 13 11) (close _V0make__list_k488) (bruijn ##x.1935 0 0) (bruijn k 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__list_k488, env)}),
      env->vars[0],
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0make__list_k487, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__list_k486(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__list_k486" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__list_k486, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1929 0 0) ((bruijn ##k.1927 1 0) (quote ())) ((bruijn - 19 44) (close _V0make__list_k487) (bruijn n 1 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 44)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__list_k487, env)}),
      env->up->vars[1],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0make__list_k486, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__list_lambda245(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__list_lambda245" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__list_lambda245, env) {
 if (env->num_vars == 3) {
  // ((bruijn = 18 20) (close _V0make__list_k486) 0 (bruijn n 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__list_k486, env)}),
      VEncodeInt(0l),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0make__list_lambda245, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k464(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k464" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k464, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k465) (bruijn make-list 10 11) (close _V0make__list_lambda245))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k465, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__list_lambda245, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k464, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__declare_k492(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_k492" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_k492, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.108 10 1) (bruijn ##k.1965 3 0) (bruijn ##x.1970 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__declare_k492, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__declare_k491(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_k491" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_k491, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 27 48) (close _V0iter__declare_k492) (bruijn f 4 1) (bruijn ##x.1971 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__declare_k492, env)}),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__declare_k491, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__declare_k490(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_k490" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_k490, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 26 22) (close _V0iter__declare_k491) (bruijn ##x.1972 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__declare_k491, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__declare_k490, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__declare_lambda253(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda253" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_lambda253, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.112 1 1))) ((bruijn iter 18 9) (close _V0iter__declare_k490) (bruijn f 2 1) (bruijn l 0 1)) ((bruijn ##k.1965 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__declare_k490, env)}),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__declare_lambda252(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda252" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_lambda252, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 1)) ((close _V0iter__declare_lambda253) (bruijn ##k.1960 0 0) (##inline ##sys.car (bruijn ##expr.112 0 1))) ((bruijn ##k.1960 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__declare_lambda253, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__declare_lambda251(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda251" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_lambda251, env) {
  // ((close _V0iter__declare_lambda252) (bruijn ##k.1958 0 0) (##inline ##sys.cdr (bruijn ##expr.111 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__declare_lambda252, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__declare_lambda250(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda250" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_lambda250, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 1)) ((close _V0iter__declare_lambda251) (bruijn ##k.1953 0 0) (##inline ##sys.car (bruijn ##expr.111 0 1))) ((bruijn ##k.1953 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__declare_lambda251, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__declare_k489(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_k489" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_k489, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1950 0 0) ((close _V0iter__declare_lambda250) (bruijn ##k.1945 1 0) (##inline ##sys.cdr (bruijn ##expr.110 1 1))) ((bruijn ##k.1945 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__declare_lambda250, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__declare_k489, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__declare_lambda249(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda249" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_lambda249, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 1)) ((bruijn equal? 20 24) (close _V0iter__declare_k489) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.110 0 1))) ((bruijn ##k.1945 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__declare_k489, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__declare_k493(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_k493" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_k493, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 20 34) (bruijn ##k.1940 1 0) (##string ##string.3748))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 34)),
      env->up->vars[0],
      VEncodePointer(&_V10string_D3748.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0iter__declare_k493, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__declare_lambda248(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda248" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_lambda248, env) {
  // ((close _V0iter__declare_lambda249) (close _V0iter__declare_k493) (bruijn ##input.109 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__declare_lambda249, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__declare_k493, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter__declare_lambda247(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda247" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_lambda247, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter__declare_lambda248) (bruijn ##k.1938 0 0) (bruijn d 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__declare_lambda248, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__declare_lambda247, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__declare_lambda246(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda246" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__declare_lambda246, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 17 25) (bruijn ##k.1936 0 0) (close _V0iter__declare_lambda247))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__declare_lambda247, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter__declare_lambda246, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k463(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k463" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k463, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k464) (bruijn iter-declare 9 10) (close _V0iter__declare_lambda246))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k464, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__declare_lambda246, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k463, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k494(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k494" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k494, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2100 0 0) ((bruijn ##k.99 3 1) (bruijn ##k.2095 1 0) (bruijn expr 4 2)) ((bruijn ##k.2095 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k494, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda257(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda257" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda257, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn equal? 19 24) (close _V0iter_k494) (quote bruijn) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.2095 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k494, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k497(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k497" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k497, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.99 5 1) (bruijn ##k.2081 2 0) (bruijn ##x.2089 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k497, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k496(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k496" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k496, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2086 0 0) ((bruijn iter-atom 14 7) (close _V0iter_k497) (bruijn fun 5 1) (bruijn expr 5 2)) ((bruijn ##k.2081 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k497, env)}),
      VGetArg(env, 5, 1),
      VGetArg(env, 5, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k496, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda258(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda258" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda258, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.102 0 1)) ((bruijn equal? 20 24) (close _V0iter_k496) (quote lambda) (##inline ##sys.car (bruijn ##expr.102 0 1))) ((bruijn ##k.2081 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k496, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k500(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k500" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k500, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.99 6 1) (bruijn ##k.2067 2 0) (bruijn ##x.2075 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k500, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k499(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k499" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k499, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2072 0 0) ((bruijn iter-atom 15 7) (close _V0iter_k500) (bruijn fun 6 1) (bruijn expr 6 2)) ((bruijn ##k.2067 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k500, env)}),
      VGetArg(env, 6, 1),
      VGetArg(env, 6, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k499, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda259(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda259" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda259, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.103 0 1)) ((bruijn equal? 21 24) (close _V0iter_k499) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.103 0 1))) ((bruijn ##k.2067 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k499, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k503(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k503" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k503, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.99 7 1) (bruijn ##k.2053 2 0) (bruijn ##x.2061 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k503, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k502(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k502" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k502, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2058 0 0) ((bruijn iter-atom 16 7) (close _V0iter_k503) (bruijn fun 7 1) (bruijn expr 7 2)) ((bruijn ##k.2053 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k503, env)}),
      VGetArg(env, 7, 1),
      VGetArg(env, 7, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k502, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda260(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda260" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda260, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 1)) ((bruijn equal? 22 24) (close _V0iter_k502) (quote continuation) (##inline ##sys.car (bruijn ##expr.104 0 1))) ((bruijn ##k.2053 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k502, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k506(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k506" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k506, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.99 8 1) (bruijn ##k.2039 2 0) (bruijn ##x.2047 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k506, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k505(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k505" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k505, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2044 0 0) ((bruijn iter-atom 17 7) (close _V0iter_k506) (bruijn fun 8 1) (bruijn expr 8 2)) ((bruijn ##k.2039 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k506, env)}),
      VGetArg(env, 8, 1),
      VGetArg(env, 8, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k505, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda261(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda261" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda261, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 1)) ((bruijn equal? 23 24) (close _V0iter_k505) (quote quote) (##inline ##sys.car (bruijn ##expr.105 0 1))) ((bruijn ##k.2039 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k505, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k509(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k509" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k509, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.99 9 1) (bruijn ##k.2025 2 0) (bruijn ##x.2033 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k509, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k508(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k508" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k508, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2030 0 0) ((bruijn iter-atom 18 7) (close _V0iter_k509) (bruijn fun 9 1) (bruijn expr 9 2)) ((bruijn ##k.2025 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k509, env)}),
      VGetArg(env, 9, 1),
      VGetArg(env, 9, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k508, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda262(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda262" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda262, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.106 0 1)) ((bruijn equal? 24 24) (close _V0iter_k508) (quote ##inline) (##inline ##sys.car (bruijn ##expr.106 0 1))) ((bruijn ##k.2025 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k508, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k511(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k511" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k511, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.99 9 1) (bruijn ##k.2017 1 0) (bruijn ##x.2022 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k511, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda263(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda263" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda263, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.107 0 1)) ((bruijn iter-apply 18 8) (close _V0iter_k511) (bruijn fun 9 1) (bruijn expr 9 2)) ((bruijn ##k.2017 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k511, env)}),
      VGetArg(env, 9, 1),
      VGetArg(env, 9, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k513(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k513" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k513, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.99 9 1) (bruijn ##k.1993 8 0) (bruijn ##x.2016 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 8, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k513, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k512(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k512" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k512, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter-atom 18 7) (close _V0iter_k513) (bruijn fun 9 1) (bruijn expr 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k513, env)}),
      VGetArg(env, 9, 1),
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0iter_k512, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k510(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k510" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k510, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda263) (close _V0iter_k512) (bruijn ##input.100 6 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda263, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k512, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k510, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k507(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k507" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k507, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda262) (close _V0iter_k510) (bruijn ##input.100 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda262, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k510, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k507, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k504(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k504" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k504, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda261) (close _V0iter_k507) (bruijn ##input.100 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda261, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k507, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k504, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k501(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k501" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k501, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda260) (close _V0iter_k504) (bruijn ##input.100 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda260, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k504, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k501, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k498(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k498" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k498, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda259) (close _V0iter_k501) (bruijn ##input.100 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda259, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k501, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k498, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k495(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k495" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k495, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda258) (close _V0iter_k498) (bruijn ##input.100 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda258, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k498, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k495, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda256(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda256" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda256, env) {
  // ((close _V0iter_lambda257) (close _V0iter_k495) (bruijn ##input.100 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda257, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k495, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter_lambda255(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda255" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda255, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter_lambda256) (bruijn ##k.1991 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda256, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda255, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda254(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda254" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda254, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 16 25) (bruijn ##k.1989 0 0) (close _V0iter_lambda255))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda255, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda254, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k462(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k462" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k462, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k463) (bruijn iter 8 9) (close _V0iter_lambda254))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k463, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda254, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k462, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k517(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k517" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k517, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.70 12 1) (bruijn ##k.2481 3 0) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn k 7 1) (##inline ##sys.cons (bruijn ##x.2489 2 0) (##inline ##sys.cons (bruijn ##x.2491 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k517, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k516(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k516" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k516, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter-atom 20 7) (close _V0iter__apply_k517) (bruijn ##x.2492 0 0) (bruijn x 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k517, env)}),
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k516, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k515(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k515" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k515, env) {
 if (env->num_vars == 1) {
  // ((bruijn mangle-symbol 26 11) (close _V0iter__apply_k516) (bruijn y 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k516, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k515, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda273(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda273" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda273, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.75 1 1))) ((bruijn lift-literal 18 5) (close _V0iter__apply_k515) (bruijn y 2 1)) ((bruijn ##k.2481 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k515, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda272(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda272" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda272, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.75 0 1)) ((close _V0iter__apply_lambda273) (bruijn ##k.2476 0 0) (##inline ##sys.car (bruijn ##expr.75 0 1))) ((bruijn ##k.2476 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda273, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda271(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda271" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda271, env) {
  // ((close _V0iter__apply_lambda272) (bruijn ##k.2474 0 0) (##inline ##sys.cdr (bruijn ##expr.74 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda272, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__apply_lambda270(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda270" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda270, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.74 0 1)) ((close _V0iter__apply_lambda271) (bruijn ##k.2469 0 0) (##inline ##sys.car (bruijn ##expr.74 0 1))) ((bruijn ##k.2469 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda271, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda269(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda269" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda269, env) {
  // ((close _V0iter__apply_lambda270) (bruijn ##k.2467 0 0) (##inline ##sys.cdr (bruijn ##expr.73 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda270, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__apply_lambda268(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda268" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda268, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.73 0 1)) ((close _V0iter__apply_lambda269) (bruijn ##k.2462 0 0) (##inline ##sys.car (bruijn ##expr.73 0 1))) ((bruijn ##k.2462 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda269, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k514(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k514" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k514, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2459 0 0) ((close _V0iter__apply_lambda268) (bruijn ##k.2454 1 0) (##inline ##sys.cdr (bruijn ##expr.72 1 1))) ((bruijn ##k.2454 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda268, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__apply_k514, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda267(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda267" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda267, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 1)) ((bruijn equal? 18 24) (close _V0iter__apply_k514) (quote define) (##inline ##sys.car (bruijn ##expr.72 0 1))) ((bruijn ##k.2454 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k514, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k523(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k523" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k523, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.70 17 1) (bruijn ##k.2410 3 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn ##x.2417 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote bruijn) (##inline ##sys.cons (bruijn name 6 1) (bruijn rest 5 1))) (##inline ##sys.cons (bruijn ##x.2421 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
      VGetArg(env, 5, 1)
    )

    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k523, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k522(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k522" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k522, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter-atom 25 7) (close _V0iter__apply_k523) (bruijn ##x.2422 0 0) (bruijn x 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k523, env)}),
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k522, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k521(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k521" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k521, env) {
 if (env->num_vars == 1) {
  // ((bruijn mangle-symbol 31 11) (close _V0iter__apply_k522) (bruijn name 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k522, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k521, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda283(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda283" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda283, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.81 1 1))) ((bruijn iter-atom 23 7) (close _V0iter__apply_k521) (bruijn fun 15 1) (bruijn k 8 1)) ((bruijn ##k.2410 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k521, env)}),
      VGetArg(env, 15, 1),
      VGetArg(env, 8, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda282(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda282" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda282, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 1)) ((close _V0iter__apply_lambda283) (bruijn ##k.2405 0 0) (##inline ##sys.car (bruijn ##expr.81 0 1))) ((bruijn ##k.2405 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda283, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda281(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda281" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda281, env) {
  // ((close _V0iter__apply_lambda282) (bruijn ##k.2403 0 0) (##inline ##sys.cdr (bruijn ##expr.78 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda282, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )

    );
 }
}
static void _V0iter__apply_lambda280(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda280" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda280, env) {
  // ((close _V0iter__apply_lambda281) (bruijn ##k.2401 0 0) (##inline ##sys.cdr (bruijn ##expr.80 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda281, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__apply_lambda279(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda279" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda279, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 1)) ((close _V0iter__apply_lambda280) (bruijn ##k.2396 0 0) (##inline ##sys.car (bruijn ##expr.80 0 1))) ((bruijn ##k.2396 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda280, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k520(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k520" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k520, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2393 0 0) ((close _V0iter__apply_lambda279) (bruijn ##k.2388 1 0) (##inline ##sys.cdr (bruijn ##expr.79 1 1))) ((bruijn ##k.2388 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda279, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__apply_k520, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda278(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda278" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda278, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 1)) ((bruijn equal? 24 24) (close _V0iter__apply_k520) (quote bruijn) (##inline ##sys.car (bruijn ##expr.79 0 1))) ((bruijn ##k.2388 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k520, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda277(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda277" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda277, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.78 0 1)) ((close _V0iter__apply_lambda278) (bruijn ##k.2383 0 0) (##inline ##sys.car (bruijn ##expr.78 0 1))) ((bruijn ##k.2383 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda278, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda276(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda276" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda276, env) {
  // ((close _V0iter__apply_lambda277) (bruijn ##k.2381 0 0) (##inline ##sys.cdr (bruijn ##expr.77 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda277, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__apply_lambda275(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda275" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda275, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 1)) ((close _V0iter__apply_lambda276) (bruijn ##k.2376 0 0) (##inline ##sys.car (bruijn ##expr.77 0 1))) ((bruijn ##k.2376 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda276, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k519(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k519" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k519, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2373 0 0) ((close _V0iter__apply_lambda275) (bruijn ##k.2368 1 0) (##inline ##sys.cdr (bruijn ##expr.76 1 1))) ((bruijn ##k.2368 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda275, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__apply_k519, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda274(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda274" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda274, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 1)) ((bruijn equal? 19 24) (close _V0iter__apply_k519) (quote set!) (##inline ##sys.car (bruijn ##expr.76 0 1))) ((bruijn ##k.2368 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k519, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k529(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k529" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k529, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.70 15 1) (bruijn ##k.2335 4 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn ##x.2342 3 0) (##inline ##sys.cons (bruijn ##x.2344 2 0) (##inline ##sys.cons (bruijn ##x.2346 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VGetArg(env, 4, 0),
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[0],
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k529, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k528(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k528" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k528, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter-atom 23 7) (close _V0iter__apply_k529) (bruijn ##x.2347 0 0) (bruijn x 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k529, env)}),
      env->vars[0],
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k528, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k527(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k527" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k527, env) {
 if (env->num_vars == 1) {
  // ((bruijn mangle-symbol 29 11) (close _V0iter__apply_k528) (bruijn y 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k528, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k527, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k526(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k526" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k526, env) {
 if (env->num_vars == 1) {
  // ((bruijn lift-literal 21 5) (close _V0iter__apply_k527) (bruijn y 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k527, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k526, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda290(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda290" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda290, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.85 1 1))) ((bruijn iter-atom 20 7) (close _V0iter__apply_k526) (bruijn fun 12 1) (bruijn k 4 1)) ((bruijn ##k.2335 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k526, env)}),
      VGetArg(env, 12, 1),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda289(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda289" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda289, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 1)) ((close _V0iter__apply_lambda290) (bruijn ##k.2330 0 0) (##inline ##sys.car (bruijn ##expr.85 0 1))) ((bruijn ##k.2330 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda290, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda288(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda288" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda288, env) {
  // ((close _V0iter__apply_lambda289) (bruijn ##k.2328 0 0) (##inline ##sys.cdr (bruijn ##expr.84 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda289, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__apply_lambda287(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda287" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda287, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.84 0 1)) ((close _V0iter__apply_lambda288) (bruijn ##k.2323 0 0) (##inline ##sys.car (bruijn ##expr.84 0 1))) ((bruijn ##k.2323 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda288, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda286(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda286" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda286, env) {
  // ((close _V0iter__apply_lambda287) (bruijn ##k.2321 0 0) (##inline ##sys.cdr (bruijn ##expr.83 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda287, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__apply_lambda285(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda285" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda285, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 1)) ((close _V0iter__apply_lambda286) (bruijn ##k.2316 0 0) (##inline ##sys.car (bruijn ##expr.83 0 1))) ((bruijn ##k.2316 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda286, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k525(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k525" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k525, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2313 0 0) ((close _V0iter__apply_lambda285) (bruijn ##k.2308 1 0) (##inline ##sys.cdr (bruijn ##expr.82 1 1))) ((bruijn ##k.2308 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda285, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__apply_k525, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda284(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda284" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda284, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 1)) ((bruijn equal? 20 24) (close _V0iter__apply_k525) (quote set!) (##inline ##sys.car (bruijn ##expr.82 0 1))) ((bruijn ##k.2308 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k525, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k534(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k534" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k534, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.70 15 1) (bruijn ##k.2276 3 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn ##x.2283 2 0) (##inline ##sys.cons (bruijn ##x.2285 1 0) (##inline ##sys.cons (bruijn ##x.2287 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k534, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k533(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k533" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k533, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter-apply 23 8) (close _V0iter__apply_k534) (bruijn fun 15 1) (bruijn y 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k534, env)}),
      VGetArg(env, 15, 1),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k533, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k532(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k532" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k532, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter-apply 22 8) (close _V0iter__apply_k533) (bruijn fun 14 1) (bruijn x 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k533, env)}),
      VGetArg(env, 14, 1),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k532, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda297(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda297" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda297, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.89 1 1))) ((bruijn iter-atom 21 7) (close _V0iter__apply_k532) (bruijn fun 13 1) (bruijn p 4 1)) ((bruijn ##k.2276 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k532, env)}),
      VGetArg(env, 13, 1),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda296(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda296" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda296, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 1)) ((close _V0iter__apply_lambda297) (bruijn ##k.2271 0 0) (##inline ##sys.car (bruijn ##expr.89 0 1))) ((bruijn ##k.2271 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda297, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda295(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda295" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda295, env) {
  // ((close _V0iter__apply_lambda296) (bruijn ##k.2269 0 0) (##inline ##sys.cdr (bruijn ##expr.88 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda296, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__apply_lambda294(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda294" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda294, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 1)) ((close _V0iter__apply_lambda295) (bruijn ##k.2264 0 0) (##inline ##sys.car (bruijn ##expr.88 0 1))) ((bruijn ##k.2264 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda295, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda293(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda293" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda293, env) {
  // ((close _V0iter__apply_lambda294) (bruijn ##k.2262 0 0) (##inline ##sys.cdr (bruijn ##expr.87 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda294, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__apply_lambda292(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda292" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda292, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 1)) ((close _V0iter__apply_lambda293) (bruijn ##k.2257 0 0) (##inline ##sys.car (bruijn ##expr.87 0 1))) ((bruijn ##k.2257 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda293, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k531(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k531" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k531, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2254 0 0) ((close _V0iter__apply_lambda292) (bruijn ##k.2249 1 0) (##inline ##sys.cdr (bruijn ##expr.86 1 1))) ((bruijn ##k.2249 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda292, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__apply_k531, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda291(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda291" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda291, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 1)) ((bruijn equal? 21 24) (close _V0iter__apply_k531) (quote if) (##inline ##sys.car (bruijn ##expr.86 0 1))) ((bruijn ##k.2249 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k531, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k541(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k541" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k541, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2211 4 0) (##inline ##sys.cons (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 4 1) (quote ()))) (bruijn ##x.2217 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 1),
      VNULL
    )

    )
,
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k541, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda306(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda306" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda306, env) {
 if (env->num_vars == 2) {
  // ((bruijn iter-atom 28 7) (bruijn ##k.2218 0 0) (bruijn fun 20 1) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 7)),
      env->vars[0],
      VGetArg(env, 20, 1),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_lambda306, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k540(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k540" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k540, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 34 51) (close _V0iter__apply_k541) (close _V0iter__apply_lambda306) (bruijn xs 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k541, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_lambda306, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k540, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k539(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k539" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k539, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0iter__apply_k540) (bruijn functions 26 3) (bruijn ##x.2221 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k540, env)}),
      VEncodeInt(26l), VEncodeInt(3l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k539, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k538(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k538" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k538, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 32 48) (close _V0iter__apply_k539) (##inline ##sys.cons (bruijn lamb 1 1) (##inline ##sys.cons (quote #f) (##inline ##sys.cons (##inline ##sys.cons (bruijn n 6 1) (##inline ##sys.cons (bruijn ##x.2227 0 0) (quote ()))) (quote ())))) (bruijn functions 25 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k539, env)}),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VEncodeBool(false),
      VInlineCons(
VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(env, 25, 3)
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k538, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda305(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda305" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda305, env) {
  // ((bruijn iter-apply 24 8) (close _V0iter__apply_k538) (bruijn fun 16 1) (bruijn body 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k538, env)}),
      VGetArg(env, 16, 1),
      env->up->up->up->vars[1]
    );
 }
}
static void _V0iter__apply_k542(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k542" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k542, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.70 15 1) (bruijn ##k.2208 2 0) (bruijn ##x.2210 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k542, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k537(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k537" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k537, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__apply_lambda305) (close _V0iter__apply_k542) (bruijn ##x.2228 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda305, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k542, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k537, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda304(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda304" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda304, env) {
  // ((bruijn genlambda 22 1) (close _V0iter__apply_k537) (bruijn fun 14 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k537, env)}),
      VGetArg(env, 14, 1)
    );
 }
}
static void _V0iter__apply_lambda303(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda303" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda303, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.93 1 1))) ((close _V0iter__apply_lambda304) (bruijn ##k.2203 0 0) (##inline ##sys.cdr (bruijn ##expr.90 6 1))) ((bruijn ##k.2203 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda304, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda302(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda302" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda302, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 1)) ((close _V0iter__apply_lambda303) (bruijn ##k.2198 0 0) (##inline ##sys.car (bruijn ##expr.93 0 1))) ((bruijn ##k.2198 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda303, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda301(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda301" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda301, env) {
  // ((close _V0iter__apply_lambda302) (bruijn ##k.2196 0 0) (##inline ##sys.cdr (bruijn ##expr.92 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda302, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__apply_lambda300(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda300" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda300, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 1)) ((close _V0iter__apply_lambda301) (bruijn ##k.2191 0 0) (##inline ##sys.car (bruijn ##expr.92 0 1))) ((bruijn ##k.2191 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda301, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k536(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k536" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k536, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2188 0 0) ((close _V0iter__apply_lambda300) (bruijn ##k.2183 1 0) (##inline ##sys.cdr (bruijn ##expr.91 1 1))) ((bruijn ##k.2183 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda300, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__apply_k536, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda299(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda299" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda299, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 1)) ((bruijn equal? 23 24) (close _V0iter__apply_k536) (quote lambda) (##inline ##sys.car (bruijn ##expr.91 0 1))) ((bruijn ##k.2183 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k536, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda298(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda298" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda298, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 1)) ((close _V0iter__apply_lambda299) (bruijn ##k.2178 0 0) (##inline ##sys.car (bruijn ##expr.90 0 1))) ((bruijn ##k.2178 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda299, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k544(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k544" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k544, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.2138 1 0) (bruijn ##expr.94 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k544, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda314(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda314" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda314, env) {
  // ((bruijn ##k.97 1 1) (bruijn ##k.2156 0 0) (##inline ##sys.cdr (bruijn ##expr.98 5 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.95 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k548(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k548" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k548, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.96 8 1) (bruijn ##k.2150 2 0) (bruijn ##expr.98 6 1) (bruijn ##x.2155 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k548, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k547(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k547" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k547, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 32 37) (close _V0loop_k548) (bruijn ##xs.95 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k548, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k547, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda313(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda313" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda313, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda314) (close _V0loop_k547) (##inline ##sys.car (bruijn ##expr.98 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda314, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k547, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda313, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda312(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda312" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda312, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 30 25) (bruijn ##k.2148 0 0) (close _V0loop_lambda313))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda313, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda312, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k546(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k546" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k546, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 29 18) (bruijn ##k.2143 2 0) (close _V0loop_lambda312) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 18)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda312, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k546, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k545(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k545" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k545, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.96 3 1) (close _V0loop_k546) (bruijn ##expr.98 1 1) (bruijn ##x.2164 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k546, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k545, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda317(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda317" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda317, env) {
  // ((bruijn ##k.97 1 1) (bruijn ##k.2156 0 0) (##inline ##sys.cdr (bruijn ##expr.98 3 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.95 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k550(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k550" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k550, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.96 6 1) (bruijn ##k.2150 2 0) (bruijn ##expr.98 4 1) (bruijn ##x.2155 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k550, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k549(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k549" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k549, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 30 37) (close _V0loop_k550) (bruijn ##xs.95 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k550, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k549, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda316(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda316" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda316, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda317) (close _V0loop_k549) (##inline ##sys.car (bruijn ##expr.98 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda317, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k549, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda316, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda315(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda315" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda315, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 28 25) (bruijn ##k.2148 0 0) (close _V0loop_lambda316))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda316, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda315, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda311(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda311" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda311, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.98 0 1))) ((bruijn reverse 27 37) (close _V0loop_k545) (bruijn ##xs.95 0 2)) ((bruijn call-with-values 27 18) (bruijn ##k.2143 0 0) (close _V0loop_lambda315) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k545, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda315, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda311, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda310(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda310" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda310, env) {
  // (set! (close _V0iter__apply_k544) (bruijn loop 0 1) (close _V0loop_lambda311))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k544, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda311, env)})
    );
 }
}
static void _V0iter__apply_lambda309(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda309" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda309, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter__apply_lambda310) (bruijn ##k.2136 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda310, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_lambda309, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda308(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda308" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda308, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 24 25) (bruijn ##k.2134 0 0) (close _V0iter__apply_lambda309))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_lambda309, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_lambda308, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k551(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k551" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k551, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.70 9 1) (bruijn ##k.2168 1 0) (bruijn ##x.2173 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k551, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda319(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda319" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda319, env) {
 if (env->num_vars == 2) {
  // ((bruijn iter-atom 18 7) (bruijn ##k.2174 0 0) (bruijn fun 10 1) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 7)),
      env->vars[0],
      VGetArg(env, 10, 1),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_lambda319, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda318(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda318" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda318, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 24 51) (close _V0iter__apply_k551) (close _V0iter__apply_lambda319) (bruijn xs 0 2)) ((bruijn ##k.2168 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k551, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_lambda319, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__apply_lambda318, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda307(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda307" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda307, env) {
  // ((bruijn call-with-values 23 18) (bruijn ##k.2132 0 0) (close _V0iter__apply_lambda308) (close _V0iter__apply_lambda318))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_lambda308, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_lambda318, env)})
    );
 }
}
static void _V0iter__apply_k552(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k552" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k552, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 23 34) (bruijn ##k.2112 6 0) (##string ##string.3748))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 34)),
      VGetArg(env, 6, 0),
      VEncodePointer(&_V10string_D3748.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k552, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k543(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k543" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k543, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__apply_lambda307) (close _V0iter__apply_k552) (bruijn ##input.71 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda307, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k552, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k543, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k535(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k535" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k535, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__apply_lambda298) (close _V0iter__apply_k543) (bruijn ##input.71 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda298, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k543, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k535, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k530(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k530" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k530, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__apply_lambda291) (close _V0iter__apply_k535) (bruijn ##input.71 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda291, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k535, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k530, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k524(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k524" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k524, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__apply_lambda284) (close _V0iter__apply_k530) (bruijn ##input.71 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda284, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k530, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k524, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_k518(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_k518" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_k518, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__apply_lambda274) (close _V0iter__apply_k524) (bruijn ##input.71 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda274, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k524, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_k518, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda266(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda266" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda266, env) {
  // ((close _V0iter__apply_lambda267) (close _V0iter__apply_k518) (bruijn ##input.71 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda267, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_k518, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter__apply_lambda265(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda265" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda265, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter__apply_lambda266) (bruijn ##k.2110 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__apply_lambda266, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_lambda265, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__apply_lambda264(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda264" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__apply_lambda264, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 15 25) (bruijn ##k.2108 0 0) (close _V0iter__apply_lambda265))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_lambda265, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter__apply_lambda264, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k461(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k461" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k461, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k462) (bruijn iter-apply 7 8) (close _V0iter__apply_lambda264))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k462, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__apply_lambda264, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k461, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k553(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k553" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k553, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2834 0 0) ((bruijn ##k.52 3 1) (bruijn ##k.2829 1 0) (bruijn expr 4 2)) ((bruijn ##k.2829 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__atom_k553, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda323(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda323" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda323, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.54 0 1)) ((bruijn equal? 17 24) (close _V0iter__atom_k553) (quote bruijn) (##inline ##sys.car (bruijn ##expr.54 0 1))) ((bruijn ##k.2829 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k553, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k559(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k559" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k559, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2799 3 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k559, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k558(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k558" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k558, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0iter__atom_k559) (bruijn functions 20 3) (bruijn ##x.2805 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k559, env)}),
      VEncodeInt(20l), VEncodeInt(3l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k558, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k557(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k557" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k557, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 26 48) (close _V0iter__atom_k558) (##inline ##sys.cons (bruijn lamb 1 1) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (bruijn n 5 1) (##inline ##sys.cons (bruijn ##x.2811 0 0) (quote ()))) (quote ())))) (bruijn functions 19 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k558, env)}),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VEncodeBool(true),
      VInlineCons(
VInlineCons(
VGetArg(env, 5, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(env, 19, 3)
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k557, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda329(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda329" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda329, env) {
  // ((bruijn iter-apply 18 8) (close _V0iter__atom_k557) (bruijn fun 11 1) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k557, env)}),
      VGetArg(env, 11, 1),
      env->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k560(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k560" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k560, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 10 1) (bruijn ##k.2793 2 0) (bruijn ##x.2798 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k560, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k556(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k556" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k556, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda329) (close _V0iter__atom_k560) (bruijn ##x.2812 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda329, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k560, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k556, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda328(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda328" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda328, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.57 1 1))) ((bruijn genlambda 16 1) (close _V0iter__atom_k556) (bruijn fun 9 1)) ((bruijn ##k.2793 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k556, env)}),
      VGetArg(env, 9, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda327(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda327" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda327, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 1)) ((close _V0iter__atom_lambda328) (bruijn ##k.2788 0 0) (##inline ##sys.car (bruijn ##expr.57 0 1))) ((bruijn ##k.2788 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda328, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda326(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda326" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda326, env) {
  // ((close _V0iter__atom_lambda327) (bruijn ##k.2786 0 0) (##inline ##sys.cdr (bruijn ##expr.56 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda327, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__atom_lambda325(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda325" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda325, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 1)) ((close _V0iter__atom_lambda326) (bruijn ##k.2781 0 0) (##inline ##sys.car (bruijn ##expr.56 0 1))) ((bruijn ##k.2781 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda326, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k555(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k555" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k555, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2778 0 0) ((close _V0iter__atom_lambda325) (bruijn ##k.2773 1 0) (##inline ##sys.cdr (bruijn ##expr.55 1 1))) ((bruijn ##k.2773 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda325, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__atom_k555, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda324(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda324" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda324, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 1)) ((bruijn equal? 18 24) (close _V0iter__atom_k555) (quote lambda) (##inline ##sys.car (bruijn ##expr.55 0 1))) ((bruijn ##k.2773 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k555, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k567(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k567" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k567, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2736 3 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k567, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k566(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k566" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k566, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0iter__atom_k567) (bruijn functions 23 3) (bruijn ##x.2742 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k567, env)}),
      VEncodeInt(23l), VEncodeInt(3l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k566, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k565(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k565" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k565, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 29 48) (close _V0iter__atom_k566) (##inline ##sys.cons (bruijn lamb 1 1) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (bruijn n 7 1) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.2749 0 0) (quote ())))) (quote ())))) (bruijn functions 22 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k566, env)}),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VEncodeBool(true),
      VInlineCons(
VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(env, 22, 3)
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k565, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda336(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda336" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda336, env) {
  // ((bruijn iter-apply 21 8) (close _V0iter__atom_k565) (bruijn fun 14 1) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k565, env)}),
      VGetArg(env, 14, 1),
      env->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k568(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k568" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k568, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 13 1) (bruijn ##k.2730 2 0) (bruijn ##x.2735 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k568, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k564(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k564" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k564, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda336) (close _V0iter__atom_k568) (bruijn ##x.2750 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda336, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k568, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k564, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda335(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda335" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda335, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.61 1 1))) ((bruijn genlambda 19 1) (close _V0iter__atom_k564) (bruijn fun 12 1)) ((bruijn ##k.2730 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k564, env)}),
      VGetArg(env, 12, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda334(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda334" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda334, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 1)) ((close _V0iter__atom_lambda335) (bruijn ##k.2725 0 0) (##inline ##sys.car (bruijn ##expr.61 0 1))) ((bruijn ##k.2725 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda335, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k563(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k563" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k563, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2722 0 0) ((close _V0iter__atom_lambda334) (bruijn ##k.2717 1 0) (##inline ##sys.cdr (bruijn ##expr.60 1 1))) ((bruijn ##k.2717 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda334, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__atom_k563, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda333(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda333" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda333, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 1)) ((bruijn equal? 23 24) (close _V0iter__atom_k563) (quote +) (##inline ##sys.car (bruijn ##expr.60 0 1))) ((bruijn ##k.2717 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k563, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda332(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda332" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda332, env) {
  // ((close _V0iter__atom_lambda333) (bruijn ##k.2715 0 0) (##inline ##sys.cdr (bruijn ##expr.59 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda333, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__atom_lambda331(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda331" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda331, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 1)) ((close _V0iter__atom_lambda332) (bruijn ##k.2710 0 0) (##inline ##sys.car (bruijn ##expr.59 0 1))) ((bruijn ##k.2710 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda332, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k562(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k562" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k562, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2707 0 0) ((close _V0iter__atom_lambda331) (bruijn ##k.2702 1 0) (##inline ##sys.cdr (bruijn ##expr.58 1 1))) ((bruijn ##k.2702 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda331, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__atom_k562, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda330(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda330" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda330, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.58 0 1)) ((bruijn equal? 19 24) (close _V0iter__atom_k562) (quote lambda) (##inline ##sys.car (bruijn ##expr.58 0 1))) ((bruijn ##k.2702 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k562, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k574(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k574" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k574, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2683 3 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k574, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k573(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k573" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k573, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0iter__atom_k574) (bruijn functions 19 3) (bruijn ##x.2689 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k574, env)}),
      VEncodeInt(19l), VEncodeInt(3l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k573, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k572(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k572" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k572, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 25 48) (close _V0iter__atom_k573) (##inline ##sys.cons (bruijn lamb 1 1) (##inline ##sys.cons (quote #t) (bruijn ##x.2692 0 0))) (bruijn functions 18 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k573, env)}),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VEncodeBool(true),
      env->vars[0]
    )

    )
,
      VGetArg(env, 18, 3)
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k572, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda340(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda340" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda340, env) {
 if (env->num_vars == 2) {
  // ((bruijn iter-lambda 18 6) (bruijn ##k.2693 0 0) (bruijn fun 11 1) (bruijn e 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 6)),
      env->vars[0],
      VGetArg(env, 11, 1),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_lambda340, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda339(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda339" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda339, env) {
  // ((bruijn map 24 51) (close _V0iter__atom_k572) (close _V0iter__atom_lambda340) (bruijn cases 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k572, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_lambda340, env)}),
      env->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k575(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k575" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k575, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 9 1) (bruijn ##k.2680 2 0) (bruijn ##x.2682 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k575, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k571(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k571" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k571, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda339) (close _V0iter__atom_k575) (bruijn ##x.2695 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda339, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k575, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k571, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda338(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda338" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda338, env) {
  // ((bruijn genlambda 15 1) (close _V0iter__atom_k571) (bruijn fun 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k571, env)}),
      VGetArg(env, 8, 1)
    );
 }
}
static void _V0iter__atom_k570(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k570" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k570, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2677 0 0) ((close _V0iter__atom_lambda338) (bruijn ##k.2672 1 0) (##inline ##sys.cdr (bruijn ##expr.62 1 1))) ((bruijn ##k.2672 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda338, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__atom_k570, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda337(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda337" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda337, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 1)) ((bruijn equal? 20 24) (close _V0iter__atom_k570) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.62 0 1))) ((bruijn ##k.2672 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k570, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k581(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k581" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k581, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2642 3 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn k 3 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k581, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k580(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k580" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k580, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0iter__atom_k581) (bruijn functions 23 3) (bruijn ##x.2648 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k581, env)}),
      VEncodeInt(23l), VEncodeInt(3l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k580, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k579(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k579" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k579, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 29 48) (close _V0iter__atom_k580) (##inline ##sys.cons (bruijn k 1 1) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (bruijn n 5 1) (##inline ##sys.cons (bruijn ##x.2654 0 0) (quote ()))) (quote ())))) (bruijn functions 22 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k580, env)}),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VEncodeBool(true),
      VInlineCons(
VInlineCons(
VGetArg(env, 5, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(env, 22, 3)
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k579, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda346(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda346" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda346, env) {
  // ((bruijn iter-apply 21 8) (close _V0iter__atom_k579) (bruijn fun 14 1) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k579, env)}),
      VGetArg(env, 14, 1),
      env->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k582(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k582" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k582, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 13 1) (bruijn ##k.2636 2 0) (bruijn ##x.2641 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k582, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k578(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k578" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k578, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda346) (close _V0iter__atom_k582) (bruijn ##x.2655 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda346, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k582, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k578, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda345(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda345" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda345, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.65 1 1))) ((bruijn gencont 19 2) (close _V0iter__atom_k578) (bruijn fun 12 1)) ((bruijn ##k.2636 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k578, env)}),
      VGetArg(env, 12, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda344(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda344" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda344, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.65 0 1)) ((close _V0iter__atom_lambda345) (bruijn ##k.2631 0 0) (##inline ##sys.car (bruijn ##expr.65 0 1))) ((bruijn ##k.2631 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda345, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda343(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda343" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda343, env) {
  // ((close _V0iter__atom_lambda344) (bruijn ##k.2629 0 0) (##inline ##sys.cdr (bruijn ##expr.64 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda344, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__atom_lambda342(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda342" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda342, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.64 0 1)) ((close _V0iter__atom_lambda343) (bruijn ##k.2624 0 0) (##inline ##sys.car (bruijn ##expr.64 0 1))) ((bruijn ##k.2624 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda343, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k577(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k577" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k577, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2621 0 0) ((close _V0iter__atom_lambda342) (bruijn ##k.2616 1 0) (##inline ##sys.cdr (bruijn ##expr.63 1 1))) ((bruijn ##k.2616 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda342, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__atom_k577, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda341(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda341" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda341, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.63 0 1)) ((bruijn equal? 21 24) (close _V0iter__atom_k577) (quote continuation) (##inline ##sys.car (bruijn ##expr.63 0 1))) ((bruijn ##k.2616 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k577, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k585(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k585" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k585, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 11 1) (bruijn ##k.2596 1 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.2603 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k585, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda349(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda349" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda349, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 1 1))) ((bruijn lift-literal 18 5) (close _V0iter__atom_k585) (bruijn x 0 1)) ((bruijn ##k.2596 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k585, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda348(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda348" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda348, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 1)) ((close _V0iter__atom_lambda349) (bruijn ##k.2591 0 0) (##inline ##sys.car (bruijn ##expr.67 0 1))) ((bruijn ##k.2591 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda349, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k584(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k584" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k584, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2588 0 0) ((close _V0iter__atom_lambda348) (bruijn ##k.2583 1 0) (##inline ##sys.cdr (bruijn ##expr.66 1 1))) ((bruijn ##k.2583 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda348, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__atom_k584, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda347(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda347" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda347, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 1)) ((bruijn equal? 22 24) (close _V0iter__atom_k584) (quote quote) (##inline ##sys.car (bruijn ##expr.66 0 1))) ((bruijn ##k.2583 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k584, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k588(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k588" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k588, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 13 1) (bruijn ##k.2566 1 0) (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (bruijn f 2 1) (bruijn ##x.2570 0 0))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[1],
      env->vars[0]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k588, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda354(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda354" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda354, env) {
 if (env->num_vars == 2) {
  // ((bruijn iter-atom 21 7) (bruijn ##k.2571 0 0) (bruijn fun 14 1) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 7)),
      env->vars[0],
      VGetArg(env, 14, 1),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_lambda354, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda353(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda353" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda353, env) {
  // ((bruijn map 27 51) (close _V0iter__atom_k588) (close _V0iter__atom_lambda354) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k588, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_lambda354, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter__atom_lambda352(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda352" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda352, env) {
  // ((close _V0iter__atom_lambda353) (bruijn ##k.2564 0 0) (##inline ##sys.cdr (bruijn ##expr.69 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda353, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__atom_lambda351(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda351" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda351, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 1)) ((close _V0iter__atom_lambda352) (bruijn ##k.2559 0 0) (##inline ##sys.car (bruijn ##expr.69 0 1))) ((bruijn ##k.2559 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda352, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k587(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k587" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k587, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2556 0 0) ((close _V0iter__atom_lambda351) (bruijn ##k.2551 1 0) (##inline ##sys.cdr (bruijn ##expr.68 1 1))) ((bruijn ##k.2551 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda351, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__atom_k587, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda350(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda350" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda350, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 1)) ((bruijn equal? 23 24) (close _V0iter__atom_k587) (quote ##inline) (##inline ##sys.car (bruijn ##expr.68 0 1))) ((bruijn ##k.2551 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k587, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k591(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k591" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k591, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 11 1) (bruijn ##k.2543 2 0) (bruijn ##x.2550 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k591, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k590(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k590" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k590, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2546 0 0) ((bruijn ##k.52 10 1) (bruijn ##k.2543 1 0) (bruijn x 1 1)) ((bruijn lift-literal 18 5) (close _V0iter__atom_k591) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->vars[0],
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k591, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0iter__atom_k590, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda355(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda355" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda355, env) {
  // ((bruijn symbol? 24 17) (close _V0iter__atom_k590) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k590, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter__atom_k592(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k592" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k592, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 24 34) (bruijn ##k.2517 8 0) (##string ##string.3748))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 34)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D3748.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k592, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k589(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k589" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k589, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda355) (close _V0iter__atom_k592) (bruijn ##input.53 7 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda355, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k592, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k589, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k586(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k586" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k586, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda350) (close _V0iter__atom_k589) (bruijn ##input.53 6 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda350, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k589, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k586, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k583(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k583" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k583, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda347) (close _V0iter__atom_k586) (bruijn ##input.53 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda347, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k586, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k583, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k576(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k576" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k576, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda341) (close _V0iter__atom_k583) (bruijn ##input.53 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda341, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k583, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k576, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k569(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k569" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k569, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda337) (close _V0iter__atom_k576) (bruijn ##input.53 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda337, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k576, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k569, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k561(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k561" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k561, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda330) (close _V0iter__atom_k569) (bruijn ##input.53 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda330, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k569, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k561, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_k554(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_k554" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_k554, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__atom_lambda324) (close _V0iter__atom_k561) (bruijn ##input.53 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda324, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k561, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_k554, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda322(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda322" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda322, env) {
  // ((close _V0iter__atom_lambda323) (close _V0iter__atom_k554) (bruijn ##input.53 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda323, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_k554, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter__atom_lambda321(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda321" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda321, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter__atom_lambda322) (bruijn ##k.2515 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__atom_lambda322, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_lambda321, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__atom_lambda320(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda320" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__atom_lambda320, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 14 25) (bruijn ##k.2513 0 0) (close _V0iter__atom_lambda321))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_lambda321, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter__atom_lambda320, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k460(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k460" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k460, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k461) (bruijn iter-atom 6 7) (close _V0iter__atom_lambda320))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k461, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__atom_lambda320, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k460, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__lambda_k593(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_k593" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_k593, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.45 6 1) (bruijn ##k.2911 1 0) (##inline ##sys.cons (bruijn n 3 1) (##inline ##sys.cons (bruijn ##x.2918 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      VInlineCons(
env->up->up->up->vars[1],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__lambda_k593, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__lambda_lambda362(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda362" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda362, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.48 1 1))) ((bruijn iter-apply 12 8) (close _V0iter__lambda_k593) (bruijn fun 6 1) (bruijn body 0 1)) ((bruijn ##k.2911 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__lambda_k593, env)}),
      VGetArg(env, 6, 1),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_lambda361(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda361" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda361, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 1)) ((close _V0iter__lambda_lambda362) (bruijn ##k.2906 0 0) (##inline ##sys.car (bruijn ##expr.48 0 1))) ((bruijn ##k.2906 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda362, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_lambda360(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda360" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda360, env) {
  // ((close _V0iter__lambda_lambda361) (bruijn ##k.2904 0 0) (##inline ##sys.cdr (bruijn ##expr.47 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda361, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__lambda_lambda359(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda359" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda359, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 1)) ((close _V0iter__lambda_lambda360) (bruijn ##k.2899 0 0) (##inline ##sys.car (bruijn ##expr.47 0 1))) ((bruijn ##k.2899 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda360, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_k596(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_k596" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_k596, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.45 9 1) (bruijn ##k.2874 1 0) (##inline ##sys.cons (bruijn n 5 1) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.2882 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      VInlineCons(
VGetArg(env, 5, 1),
      VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter__lambda_k596, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__lambda_lambda367(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda367" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda367, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.51 1 1))) ((bruijn iter-apply 15 8) (close _V0iter__lambda_k596) (bruijn fun 9 1) (bruijn body 0 1)) ((bruijn ##k.2874 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__lambda_k596, env)}),
      VGetArg(env, 9, 1),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_lambda366(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda366" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda366, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 1)) ((close _V0iter__lambda_lambda367) (bruijn ##k.2869 0 0) (##inline ##sys.car (bruijn ##expr.51 0 1))) ((bruijn ##k.2869 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda367, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_k595(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_k595" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_k595, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2866 0 0) ((close _V0iter__lambda_lambda366) (bruijn ##k.2861 1 0) (##inline ##sys.cdr (bruijn ##expr.50 1 1))) ((bruijn ##k.2861 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda366, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__lambda_k595, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__lambda_lambda365(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda365" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda365, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 1)) ((bruijn equal? 19 24) (close _V0iter__lambda_k595) (quote +) (##inline ##sys.car (bruijn ##expr.50 0 1))) ((bruijn ##k.2861 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__lambda_k595, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_lambda364(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda364" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda364, env) {
  // ((close _V0iter__lambda_lambda365) (bruijn ##k.2859 0 0) (##inline ##sys.cdr (bruijn ##expr.49 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda365, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter__lambda_lambda363(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda363" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda363, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 1)) ((close _V0iter__lambda_lambda364) (bruijn ##k.2854 0 0) (##inline ##sys.car (bruijn ##expr.49 0 1))) ((bruijn ##k.2854 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda364, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_k597(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_k597" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_k597, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 17 34) (bruijn ##k.2846 2 0) (##string ##string.3748))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 34)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D3748.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0iter__lambda_k597, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__lambda_k594(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_k594" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_k594, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__lambda_lambda363) (close _V0iter__lambda_k597) (bruijn ##input.46 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda363, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__lambda_k597, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__lambda_k594, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__lambda_lambda358(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda358" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda358, env) {
  // ((close _V0iter__lambda_lambda359) (close _V0iter__lambda_k594) (bruijn ##input.46 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda359, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__lambda_k594, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter__lambda_lambda357(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda357" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda357, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter__lambda_lambda358) (bruijn ##k.2844 0 0) (bruijn lamb 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__lambda_lambda358, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0iter__lambda_lambda357, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__lambda_lambda356(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda356" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__lambda_lambda356, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 13 25) (bruijn ##k.2842 0 0) (close _V0iter__lambda_lambda357))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__lambda_lambda357, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter__lambda_lambda356, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k459(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k459" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k459, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k460) (bruijn iter-lambda 5 6) (close _V0iter__lambda_lambda356))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k460, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__lambda_lambda356, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k459, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k606(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k606" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k606, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2964 1 0) (##inline ##sys.cons (quote ##string) (##inline ##sys.cons (bruijn ##x.2969 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
VEncodePointer(&_V10string.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k606, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k611(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k611" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k611, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2964 5 0) (##inline ##sys.cons (quote ##string) (##inline ##sys.cons (bruijn ##x.2976 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 0)),
      VInlineCons(
VEncodePointer(&_V10string.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k611, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k610(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k610" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k610, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 25 42) (close _V0lift__literal_k611) (bruijn literal-table 18 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 42)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k611, env)}),
      VGetArg(env, 18, 4)
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k610, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k609(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k609" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k609, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0lift__literal_k610) (bruijn literal-table 17 4) (bruijn ##x.2977 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k610, env)}),
      VEncodeInt(17l), VEncodeInt(4l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k609, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k608(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k608" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k608, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 23 48) (close _V0lift__literal_k609) (bruijn ##x.2978 0 0) (bruijn literal-table 16 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k609, env)}),
      env->vars[0],
      VGetArg(env, 16, 4)
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k608, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k607(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k607" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k607, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 22 48) (close _V0lift__literal_k608) (bruijn x 10 1) (bruijn ##x.2979 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k608, env)}),
      VGetArg(env, 10, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k607, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_lambda369(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_lambda369" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_lambda369, env) {
  // (if (bruijn lookup 0 1) ((bruijn cdr 21 27) (close _V0lift__literal_k606) (bruijn lookup 0 1)) ((bruijn gensym 21 43) (close _V0lift__literal_k607) (##string ##string.3778)))
if(VDecodeBool(
env->vars[1])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k606, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 43)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k607, env)}),
      VEncodePointer(&_V10string_D3778.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lift__literal_k605(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k605" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k605, env) {
 if (env->num_vars == 1) {
  // ((close _V0lift__literal_lambda369) (bruijn ##k.2929 8 0) (bruijn ##x.2980 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0lift__literal_lambda369, env)},
      VGetArg(env, 8, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k605, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k617(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k617" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k617, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2929 13 0) (bruijn x 13 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 0)),
      VGetArg(env, 13, 1)
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k617, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k616(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k616" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k616, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0lift__literal_k617) (bruijn literal-table 17 4) (bruijn ##x.2992 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k617, env)}),
      VEncodeInt(17l), VEncodeInt(4l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k616, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k615(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k615" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k615, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 23 48) (close _V0lift__literal_k616) (bruijn ##x.2993 0 0) (bruijn literal-table 16 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k616, env)}),
      env->vars[0],
      VGetArg(env, 16, 4)
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k615, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k614(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k614" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k614, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2989 0 0) ((bruijn cons 22 48) (close _V0lift__literal_k615) (bruijn x 10 1) (quote ())) ((bruijn ##k.2929 10 0) (bruijn x 10 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k615, env)}),
      VGetArg(env, 10, 1),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 0)),
      VGetArg(env, 10, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0lift__literal_k614, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k613(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k613" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k613, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 21 36) (close _V0lift__literal_k614) (bruijn ##x.2996 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 36)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k614, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_k613, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k612(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k612" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k612, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2983 0 0) ((bruijn assv 20 40) (close _V0lift__literal_k613) (bruijn x 8 1) (bruijn literal-table 13 4)) ((bruijn error 20 34) (bruijn ##k.2929 8 0) (##string ##string.3766) (bruijn x 8 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 40)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k613, env)}),
      VGetArg(env, 8, 1),
      VGetArg(env, 13, 4)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 34)),
      VGetArg(env, 8, 0),
      VEncodePointer(&_V10string_D3766.sym, VPOINTER_OTHER),
      VGetArg(env, 8, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0lift__literal_k612, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k604(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k604" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k604, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2961 0 0) ((bruijn assoc 19 41) (close _V0lift__literal_k605) (bruijn x 7 1) (bruijn literal-table 12 4)) ((bruijn symbol? 19 17) (close _V0lift__literal_k612) (bruijn x 7 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 41)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k605, env)}),
      VGetArg(env, 7, 1),
      VGetArg(env, 12, 4)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k612, env)}),
      VGetArg(env, 7, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0lift__literal_k604, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k603(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k603" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k603, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2956 0 0) ((bruijn ##k.2929 6 0) (bruijn x 6 1)) ((bruijn string? 18 14) (close _V0lift__literal_k604) (bruijn x 6 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k604, env)}),
      VGetArg(env, 6, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0lift__literal_k603, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k602(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k602" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k602, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2951 0 0) ((bruijn ##k.2929 5 0) (bruijn x 5 1)) ((bruijn null? 17 35) (close _V0lift__literal_k603) (bruijn x 5 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 0)),
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k603, env)}),
      VGetArg(env, 5, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0lift__literal_k602, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k601(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k601" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k601, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2946 0 0) ((bruijn ##k.2929 4 0) (bruijn x 4 1)) ((bruijn eq? 16 7) (close _V0lift__literal_k602) (bruijn x 4 1) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k602, env)}),
      VGetArg(env, 4, 1),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0lift__literal_k601, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k600(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k600" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k600, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2941 0 0) ((bruijn ##k.2929 3 0) (bruijn x 3 1)) ((bruijn eq? 15 7) (close _V0lift__literal_k601) (bruijn x 3 1) #t))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k601, env)}),
      env->up->up->up->vars[1],
      VEncodeBool(true)
    );
}
 } else {
  VError("Not enough arguments to _V0lift__literal_k600, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k599(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k599" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k599, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2936 0 0) ((bruijn ##k.2929 2 0) (bruijn x 2 1)) ((bruijn char? 14 8) (close _V0lift__literal_k600) (bruijn x 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k600, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0lift__literal_k599, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_k598(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_k598" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_k598, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2931 0 0) ((bruijn ##k.2929 1 0) (bruijn x 1 1)) ((bruijn number? 13 9) (close _V0lift__literal_k599) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k599, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0lift__literal_k598, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lift__literal_lambda368(VEnv * env) {
 static VDebugInfo dbg = { "_V0lift__literal_lambda368" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lift__literal_lambda368, env) {
 if (env->num_vars == 2) {
  // ((bruijn integer? 12 10) (close _V0lift__literal_k598) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_k598, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0lift__literal_lambda368, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k458(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k458" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k458, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k459) (bruijn lift-literal 4 5) (close _V0lift__literal_lambda368))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k459, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lift__literal_lambda368, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k458, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k457(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k457" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k457, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k458) (bruijn literal-table 3 4) (quote ()))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k458, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k457, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k456(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k456" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k456, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k457) (bruijn functions 2 3) (quote ()))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k457, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k456, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gencont_k620(VEnv * env) {
 static VDebugInfo dbg = { "_V0gencont_k620" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0gencont_k620, env) {
 if (env->num_vars == 1) {
  // ((bruijn string->symbol 12 39) (bruijn ##k.2999 3 0) (bruijn ##x.3004 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 39)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0gencont_k620, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gencont_k619(VEnv * env) {
 static VDebugInfo dbg = { "_V0gencont_k619" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0gencont_k619, env) {
 if (env->num_vars == 1) {
  // ((bruijn sprintf 11 38) (close _V0gencont_k620) (##string ##string.3779) (bruijn fun 2 1) (bruijn curcont 10 4))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gencont_k620, env)}),
      VEncodePointer(&_V10string_D3779.sym, VPOINTER_OTHER),
      env->up->up->vars[1],
      VGetArg(env, 10, 4)
    );
 } else {
  VError("Not enough arguments to _V0gencont_k619, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gencont_k618(VEnv * env) {
 static VDebugInfo dbg = { "_V0gencont_k618" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0gencont_k618, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0gencont_k619) (bruijn curcont 9 4) (bruijn ##x.3005 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gencont_k619, env)}),
      VEncodeInt(9l), VEncodeInt(4l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0gencont_k618, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gencont_lambda370(VEnv * env) {
 static VDebugInfo dbg = { "_V0gencont_lambda370" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0gencont_lambda370, env) {
 if (env->num_vars == 2) {
  // ((bruijn + 9 12) (close _V0gencont_k618) (bruijn curcont 8 4) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gencont_k618, env)}),
      VGetArg(env, 8, 4),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0gencont_lambda370, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_k455(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_k455" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_k455, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__functions_k456) (bruijn gencont 1 2) (close _V0gencont_lambda370))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k456, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gencont_lambda370, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__functions_k455, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0genlambda_k623(VEnv * env) {
 static VDebugInfo dbg = { "_V0genlambda_k623" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0genlambda_k623, env) {
 if (env->num_vars == 1) {
  // ((bruijn string->symbol 11 39) (bruijn ##k.3006 3 0) (bruijn ##x.3011 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 39)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0genlambda_k623, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0genlambda_k622(VEnv * env) {
 static VDebugInfo dbg = { "_V0genlambda_k622" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0genlambda_k622, env) {
 if (env->num_vars == 1) {
  // ((bruijn sprintf 10 38) (close _V0genlambda_k623) (##string ##string.3780) (bruijn fun 2 1) (bruijn curlambda 9 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 38)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0genlambda_k623, env)}),
      VEncodePointer(&_V10string_D3780.sym, VPOINTER_OTHER),
      env->up->up->vars[1],
      VGetArg(env, 9, 3)
    );
 } else {
  VError("Not enough arguments to _V0genlambda_k622, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0genlambda_k621(VEnv * env) {
 static VDebugInfo dbg = { "_V0genlambda_k621" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0genlambda_k621, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0genlambda_k622) (bruijn curlambda 8 3) (bruijn ##x.3012 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0genlambda_k622, env)}),
      VEncodeInt(8l), VEncodeInt(3l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0genlambda_k621, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0genlambda_lambda371(VEnv * env) {
 static VDebugInfo dbg = { "_V0genlambda_lambda371" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0genlambda_lambda371, env) {
 if (env->num_vars == 2) {
  // ((bruijn + 8 12) (close _V0genlambda_k621) (bruijn curlambda 7 3) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0genlambda_k621, env)}),
      VGetArg(env, 7, 3),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0genlambda_lambda371, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__functions_lambda231(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda231" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda231, env) {
  // (set! (close _V0to__functions_k455) (bruijn genlambda 0 1) (close _V0genlambda_lambda371))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_k455, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0genlambda_lambda371, env)})
    );
 }
}
static void _V0to__functions_lambda230(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__functions_lambda230" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__functions_lambda230, env) {
 if (env->num_vars == 2) {
  // ((close _V0to__functions_lambda231) (bruijn ##k.1816 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__functions_lambda231, env)},
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
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0to__functions_lambda230, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void transpile_k66(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k66" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k66, env) {
 if (env->num_vars == 1) {
  // (set! (close transpile_k67) (bruijn to-functions 4 5) (close _V0to__functions_lambda230))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k67, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__functions_lambda230, env)})
    );
 } else {
  VError("Not enough arguments to transpile_k66, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k65(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k65" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k65, env) {
 if (env->num_vars == 1) {
  // (set! (close transpile_k66) (bruijn curcont 3 4) 0)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k66, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to transpile_k65, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k64(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k64" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k64, env) {
 if (env->num_vars == 1) {
  // (set! (close transpile_k65) (bruijn curlambda 2 3) 0)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k65, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to transpile_k64, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_k630(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k630" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_k630, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.40 8 1) (bruijn ##k.3060 1 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 3 1) (##inline ##sys.cons (bruijn ##x.3068 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_k630, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_lambda380(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda380" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_lambda380, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.44 1 1))) ((bruijn doit 13 5) (close _V0bruijn__ify_k630) (bruijn l 0 1)) ((bruijn ##k.3060 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_k630, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__ify_lambda379(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda379" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_lambda379, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 1)) ((close _V0bruijn__ify_lambda380) (bruijn ##k.3055 0 0) (##inline ##sys.car (bruijn ##expr.44 0 1))) ((bruijn ##k.3055 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__ify_lambda380, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__ify_lambda378(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda378" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_lambda378, env) {
  // ((close _V0bruijn__ify_lambda379) (bruijn ##k.3053 0 0) (##inline ##sys.cdr (bruijn ##expr.43 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__ify_lambda379, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0bruijn__ify_lambda377(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda377" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_lambda377, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 1)) ((close _V0bruijn__ify_lambda378) (bruijn ##k.3048 0 0) (##inline ##sys.car (bruijn ##expr.43 0 1))) ((bruijn ##k.3048 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__ify_lambda378, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__ify_k629(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k629" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_k629, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3045 0 0) ((close _V0bruijn__ify_lambda377) (bruijn ##k.3040 1 0) (##inline ##sys.cdr (bruijn ##expr.42 1 1))) ((bruijn ##k.3040 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__ify_lambda377, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0bruijn__ify_k629, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_lambda376(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda376" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_lambda376, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 1)) ((bruijn equal? 12 24) (close _V0bruijn__ify_k629) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.42 0 1))) ((bruijn ##k.3040 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_k629, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__ify_k632(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k632" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_k632, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.40 3 1) (bruijn ##k.3034 2 0) (bruijn ##x.3039 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_k632, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_k631(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k631" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_k631, env) {
 if (env->num_vars == 1) {
  // ((bruijn doit 8 5) (close _V0bruijn__ify_k632) (bruijn expr 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_k632, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_k631, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_lambda375(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda375" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_lambda375, env) {
  // ((close _V0bruijn__ify_lambda376) (close _V0bruijn__ify_k631) (bruijn ##input.41 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__ify_lambda376, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_k631, env)}),
      env->vars[1]
    );
 }
}
static void _V0bruijn__ify_lambda374(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda374" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_lambda374, env) {
 if (env->num_vars == 2) {
  // ((close _V0bruijn__ify_lambda375) (bruijn ##k.3032 0 0) (bruijn expr 7 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__ify_lambda375, env)},
      env->vars[0],
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_lambda374, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_k628(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k628" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_k628, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 9 25) (bruijn ##k.3015 5 0) (close _V0bruijn__ify_lambda374))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 25)),
      VGetArg(env, 5, 0),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_lambda374, env)})
    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_k628, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0doit_lambda381(VEnv * env) {
 static VDebugInfo dbg = { "_V0doit_lambda381" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0doit_lambda381, env) {
 if (env->num_vars == 2) {
  // ((bruijn iter 5 4) (bruijn ##k.3085 0 0) (quote ()) (bruijn expr 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 4)),
      env->vars[0],
      VNULL,
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0doit_lambda381, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_k627(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k627" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_k627, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0bruijn__ify_k628) (bruijn doit 4 5) (close _V0doit_lambda381))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_k628, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0doit_lambda381, env)})
    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_k627, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k634(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k634" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k634, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3382 1 0) (bruijn ##expr.17 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter_k634, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda394(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda394" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda394, env) {
  // ((bruijn ##k.20 1 1) (bruijn ##k.3400 0 0) (##inline ##sys.cdr (bruijn ##expr.21 5 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.18 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k638(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k638" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k638, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.19 8 1) (bruijn ##k.3394 2 0) (bruijn ##expr.21 6 1) (bruijn ##x.3399 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k638, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k637(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k637" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k637, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 23 37) (close _V0loop_k638) (bruijn ##xs.18 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k638, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k637, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda393(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda393" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda393, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda394) (close _V0loop_k637) (##inline ##sys.car (bruijn ##expr.21 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda394, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k637, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda393, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda392(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda392" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda392, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 21 25) (bruijn ##k.3392 0 0) (close _V0loop_lambda393))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda393, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda392, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k636(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k636" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k636, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 20 18) (bruijn ##k.3387 2 0) (close _V0loop_lambda392) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 18)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda392, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k636, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k635(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k635" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k635, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.19 3 1) (close _V0loop_k636) (bruijn ##expr.21 1 1) (bruijn ##x.3408 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k636, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k635, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda397(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda397" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda397, env) {
  // ((bruijn ##k.20 1 1) (bruijn ##k.3400 0 0) (##inline ##sys.cdr (bruijn ##expr.21 3 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.18 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k640(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k640" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k640, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.19 6 1) (bruijn ##k.3394 2 0) (bruijn ##expr.21 4 1) (bruijn ##x.3399 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k640, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k639(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k639" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k639, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 21 37) (close _V0loop_k640) (bruijn ##xs.18 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k640, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k639, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda396(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda396" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda396, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda397) (close _V0loop_k639) (##inline ##sys.car (bruijn ##expr.21 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda397, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k639, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda396, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda395(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda395" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda395, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 19 25) (bruijn ##k.3392 0 0) (close _V0loop_lambda396))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda396, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda395, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda391(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda391" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda391, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.21 0 1))) ((bruijn reverse 18 37) (close _V0loop_k635) (bruijn ##xs.18 0 2)) ((bruijn call-with-values 18 18) (bruijn ##k.3387 0 0) (close _V0loop_lambda395) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k635, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda395, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda391, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda390(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda390" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda390, env) {
  // (set! (close _V0iter_k634) (bruijn loop 0 1) (close _V0loop_lambda391))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k634, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda391, env)})
    );
 }
}
static void _V0iter_lambda389(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda389" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda389, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter_lambda390) (bruijn ##k.3380 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda390, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda389, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda388(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda388" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda388, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 15 25) (bruijn ##k.3378 0 0) (close _V0iter_lambda389))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda389, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda388, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k643(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k643" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k643, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 11 1) (bruijn ##k.3422 3 0) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.3429 2 0) (##inline ##sys.cons (bruijn ##x.3431 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k643, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k642(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k642" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k642, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 15 4) (close _V0iter_k643) (bruijn ##x.3432 0 0) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k643, env)}),
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k642, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k641(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k641" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k641, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 18 48) (close _V0iter_k642) (bruijn xs 3 2) (bruijn env 10 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k642, env)}),
      env->up->up->up->vars[2],
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k641, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda400(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda400" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda400, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn length 17 30) (close _V0iter_k641) (bruijn xs 2 2)) ((bruijn ##k.3422 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k641, env)}),
      env->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda399(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda399" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda399, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((close _V0iter_lambda400) (bruijn ##k.3417 0 0) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.3417 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda400, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda398(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda398" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda398, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0iter_lambda399) (bruijn ##k.3412 0 0) (##inline ##sys.cdr (bruijn ##expr.16 2 1))) ((bruijn ##k.3412 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda399, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_lambda398, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda387(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda387" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda387, env) {
  // ((bruijn call-with-values 14 18) (bruijn ##k.3376 0 0) (close _V0iter_lambda388) (close _V0iter_lambda398))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda388, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda398, env)})
    );
 }
}
static void _V0iter_lambda386(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda386" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda386, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 1)) ((close _V0iter_lambda387) (bruijn ##k.3371 0 0) (##inline ##sys.car (bruijn ##expr.16 0 1))) ((bruijn ##k.3371 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda387, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k633(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k633" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k633, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3368 0 0) ((close _V0iter_lambda386) (bruijn ##k.3363 1 0) (##inline ##sys.cdr (bruijn ##expr.15 1 1))) ((bruijn ##k.3363 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda386, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k633, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda385(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda385" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda385, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.15 0 1)) ((bruijn equal? 11 24) (close _V0iter_k633) (quote lambda) (##inline ##sys.car (bruijn ##expr.15 0 1))) ((bruijn ##k.3363 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k633, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k650(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k650" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k650, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3337 4 0) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.3340 2 0) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.3343 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k650, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k649(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k649" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k649, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 18 4) (close _V0iter_k650) (bruijn ##x.3344 0 0) (bruijn body 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k650, env)}),
      env->vars[0],
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k649, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k648(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k648" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k648, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 21 48) (close _V0iter_k649) (bruijn proper-xs 2 1) (bruijn env 13 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k649, env)}),
      env->up->up->vars[1],
      VGetArg(env, 13, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k648, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k647(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k647" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k647, env) {
 if (env->num_vars == 1) {
  // ((bruijn - 20 44) (close _V0iter_k648) (bruijn ##x.3345 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 44)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k648, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0iter_k647, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda406(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda406" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda406, env) {
  // ((bruijn length 19 30) (close _V0iter_k647) (bruijn proper-xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k647, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter_k651(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k651" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k651, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 10 1) (bruijn ##k.3331 2 0) (bruijn ##x.3336 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k651, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k646(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k646" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k646, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda406) (close _V0iter_k651) (bruijn ##x.3346 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda406, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k651, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k646, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda405(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda405" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda405, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.25 1 1))) ((bruijn undot 13 2) (close _V0iter_k646) (bruijn xs 2 1)) ((bruijn ##k.3331 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k646, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda404(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda404" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda404, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 1)) ((close _V0iter_lambda405) (bruijn ##k.3326 0 0) (##inline ##sys.car (bruijn ##expr.25 0 1))) ((bruijn ##k.3326 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda405, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda403(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda403" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda403, env) {
  // ((close _V0iter_lambda404) (bruijn ##k.3324 0 0) (##inline ##sys.cdr (bruijn ##expr.24 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda404, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda402(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda402" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda402, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.24 0 1)) ((close _V0iter_lambda403) (bruijn ##k.3319 0 0) (##inline ##sys.car (bruijn ##expr.24 0 1))) ((bruijn ##k.3319 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda403, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k645(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k645" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k645, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3316 0 0) ((close _V0iter_lambda402) (bruijn ##k.3311 1 0) (##inline ##sys.cdr (bruijn ##expr.23 1 1))) ((bruijn ##k.3311 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda402, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k645, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda401(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda401" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda401, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.23 0 1)) ((bruijn equal? 12 24) (close _V0iter_k645) (quote lambda) (##inline ##sys.car (bruijn ##expr.23 0 1))) ((bruijn ##k.3311 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k645, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k654(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k654" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k654, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 7 1) (bruijn ##k.3299 1 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.3302 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k654, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda409(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda409" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda409, env) {
 if (env->num_vars == 2) {
  // ((bruijn bruijn-lambda 12 3) (bruijn ##k.3303 0 0) (bruijn env 8 1) (bruijn e 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 3)),
      env->vars[0],
      VGetArg(env, 8, 1),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda409, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda408(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda408" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda408, env) {
  // ((bruijn map 15 51) (close _V0iter_k654) (close _V0iter_lambda409) (bruijn cases 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k654, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda409, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter_k653(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k653" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k653, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3296 0 0) ((close _V0iter_lambda408) (bruijn ##k.3291 1 0) (##inline ##sys.cdr (bruijn ##expr.26 1 1))) ((bruijn ##k.3291 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda408, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k653, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda407(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda407" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda407, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((bruijn equal? 13 24) (close _V0iter_k653) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.3291 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k653, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k659(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k659" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k659, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 14 1) (bruijn ##k.3258 3 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (quote 1) (##inline ##sys.cons (bruijn ##x.3266 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeInt(1l),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k659, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k658(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k658" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k658, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 18 4) (close _V0iter_k659) (bruijn ##x.3267 0 0) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k659, env)}),
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k658, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k657(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k657" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k657, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 21 48) (close _V0iter_k658) (bruijn ##x.3268 0 0) (bruijn env 13 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k658, env)}),
      env->vars[0],
      VGetArg(env, 13, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k657, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda415(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda415" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda415, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.30 1 1))) ((bruijn list 20 50) (close _V0iter_k657) (bruijn x 2 1)) ((bruijn ##k.3258 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 50)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k657, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda414(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda414" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda414, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 1)) ((close _V0iter_lambda415) (bruijn ##k.3253 0 0) (##inline ##sys.car (bruijn ##expr.30 0 1))) ((bruijn ##k.3253 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda415, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda413(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda413" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda413, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.29 1 1))) ((close _V0iter_lambda414) (bruijn ##k.3248 0 0) (##inline ##sys.cdr (bruijn ##expr.28 2 1))) ((bruijn ##k.3248 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda414, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda412(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda412" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda412, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 1)) ((close _V0iter_lambda413) (bruijn ##k.3243 0 0) (##inline ##sys.car (bruijn ##expr.29 0 1))) ((bruijn ##k.3243 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda413, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda411(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda411" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda411, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 1)) ((close _V0iter_lambda412) (bruijn ##k.3238 0 0) (##inline ##sys.car (bruijn ##expr.28 0 1))) ((bruijn ##k.3238 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda412, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k656(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k656" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k656, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3235 0 0) ((close _V0iter_lambda411) (bruijn ##k.3230 1 0) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.3230 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda411, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k656, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda410(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda410" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda410, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 14 24) (close _V0iter_k656) (quote continuation) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.3230 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k656, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k661(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k661" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k661, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3222 0 0) ((bruijn ##k.13 7 1) (bruijn ##k.3217 1 0) (bruijn expr 8 2)) ((bruijn ##k.3217 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->vars[0],
      VGetArg(env, 8, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k661, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda416(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda416" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda416, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 1)) ((bruijn equal? 15 24) (close _V0iter_k661) (quote quote) (##inline ##sys.car (bruijn ##expr.31 0 1))) ((bruijn ##k.3217 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k661, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k664(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k664" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k664, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 12 1) (bruijn ##k.3200 1 0) (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (bruijn f 2 1) (bruijn ##x.3204 0 0))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[1],
      env->vars[0]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k664, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda421(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda421" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda421, env) {
 if (env->num_vars == 2) {
  // ((bruijn iter 17 4) (bruijn ##k.3205 0 0) (bruijn env 13 1) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 4)),
      env->vars[0],
      VGetArg(env, 13, 1),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda421, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda420(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda420" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda420, env) {
  // ((bruijn map 20 51) (close _V0iter_k664) (close _V0iter_lambda421) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k664, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda421, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter_lambda419(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda419" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda419, env) {
  // ((close _V0iter_lambda420) (bruijn ##k.3198 0 0) (##inline ##sys.cdr (bruijn ##expr.33 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda420, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda418(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda418" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda418, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 1)) ((close _V0iter_lambda419) (bruijn ##k.3193 0 0) (##inline ##sys.car (bruijn ##expr.33 0 1))) ((bruijn ##k.3193 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda419, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k663(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k663" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k663, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3190 0 0) ((close _V0iter_lambda418) (bruijn ##k.3185 1 0) (##inline ##sys.cdr (bruijn ##expr.32 1 1))) ((bruijn ##k.3185 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda418, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k663, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda417(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda417" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda417, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((bruijn equal? 16 24) (close _V0iter_k663) (quote ##inline) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.3185 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k663, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k666(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k666" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k666, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3139 1 0) (bruijn ##expr.35 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter_k666, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda431(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda431" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda431, env) {
  // ((bruijn ##k.38 1 1) (bruijn ##k.3157 0 0) (##inline ##sys.cdr (bruijn ##expr.39 5 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.36 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k670(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k670" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k670, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.37 8 1) (bruijn ##k.3151 2 0) (bruijn ##expr.39 6 1) (bruijn ##x.3156 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k670, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k669(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k669" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k669, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 28 37) (close _V0loop_k670) (bruijn ##xs.36 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k670, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k669, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda430(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda430" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda430, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda431) (close _V0loop_k669) (##inline ##sys.car (bruijn ##expr.39 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda431, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k669, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda430, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda429(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda429" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda429, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 26 25) (bruijn ##k.3149 0 0) (close _V0loop_lambda430))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda430, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda429, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k668(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k668" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k668, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 25 18) (bruijn ##k.3144 2 0) (close _V0loop_lambda429) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 18)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda429, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k668, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k667(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k667" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k667, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.37 3 1) (close _V0loop_k668) (bruijn ##expr.39 1 1) (bruijn ##x.3165 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k668, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k667, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda434(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda434" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda434, env) {
  // ((bruijn ##k.38 1 1) (bruijn ##k.3157 0 0) (##inline ##sys.cdr (bruijn ##expr.39 3 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.36 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k672(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k672" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k672, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.37 6 1) (bruijn ##k.3151 2 0) (bruijn ##expr.39 4 1) (bruijn ##x.3156 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k672, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k671(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k671" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k671, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 26 37) (close _V0loop_k672) (bruijn ##xs.36 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k672, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k671, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda433(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda433" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda433, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda434) (close _V0loop_k671) (##inline ##sys.car (bruijn ##expr.39 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda434, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k671, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda433, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda432(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda432" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda432, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 24 25) (bruijn ##k.3149 0 0) (close _V0loop_lambda433))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda433, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda432, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda428(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda428" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda428, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.39 0 1))) ((bruijn reverse 23 37) (close _V0loop_k667) (bruijn ##xs.36 0 2)) ((bruijn call-with-values 23 18) (bruijn ##k.3144 0 0) (close _V0loop_lambda432) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k667, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda432, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda428, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda427(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda427" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda427, env) {
  // (set! (close _V0iter_k666) (bruijn loop 0 1) (close _V0loop_lambda428))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k666, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda428, env)})
    );
 }
}
static void _V0iter_lambda426(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda426" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda426, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter_lambda427) (bruijn ##k.3137 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda427, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda426, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda425(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda425" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda425, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 20 25) (bruijn ##k.3135 0 0) (close _V0iter_lambda426))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda426, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda425, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k675(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k675" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k675, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 14 1) (bruijn ##k.3169 3 0) (bruijn ##x.3174 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k675, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k674(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k674" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k674, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 22 48) (close _V0iter_k675) (bruijn ##x.3175 1 0) (bruijn ##x.3176 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k675, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k674, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda436(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda436" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda436, env) {
 if (env->num_vars == 2) {
  // ((bruijn iter 18 4) (bruijn ##k.3177 0 0) (bruijn env 14 1) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 4)),
      env->vars[0],
      VGetArg(env, 14, 1),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda436, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k673(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k673" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k673, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 21 51) (close _V0iter_k674) (close _V0iter_lambda436) (bruijn xs 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 51)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k674, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda436, env)}),
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0iter_k673, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda435(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda435" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda435, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn iter 16 4) (close _V0iter_k673) (bruijn env 12 1) (bruijn f 2 1)) ((bruijn ##k.3169 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k673, env)}),
      VGetArg(env, 12, 1),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_lambda435, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda424(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda424" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda424, env) {
  // ((bruijn call-with-values 19 18) (bruijn ##k.3133 0 0) (close _V0iter_lambda425) (close _V0iter_lambda435))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda425, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda435, env)})
    );
 }
}
static void _V0iter_lambda423(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda423" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda423, env) {
  // ((close _V0iter_lambda424) (bruijn ##k.3131 0 0) (##inline ##sys.cdr (bruijn ##expr.34 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda424, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda422(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda422" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda422, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 1)) ((close _V0iter_lambda423) (bruijn ##k.3126 0 0) (##inline ##sys.car (bruijn ##expr.34 0 1))) ((bruijn ##k.3126 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda423, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k678(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k678" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k678, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 11 1) (bruijn ##k.3118 2 0) (bruijn ##x.3123 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k678, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k677(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k677" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k677, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3121 0 0) ((bruijn lookup 15 1) (close _V0iter_k678) 0 (bruijn env 11 1) (bruijn x 1 1)) ((bruijn ##k.13 10 1) (bruijn ##k.3118 1 0) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k678, env)}),
      VEncodeInt(0l),
      VGetArg(env, 11, 1),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->vars[0],
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k677, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda437(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda437" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda437, env) {
  // ((bruijn symbol? 18 17) (close _V0iter_k677) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k677, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter_k680(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k680" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k680, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 10 1) (bruijn ##k.3091 9 0) (bruijn ##x.3117 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VGetArg(env, 9, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k680, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k679(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k679" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k679, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 18 34) (close _V0iter_k680) (##string ##string.3781) (bruijn expr 10 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 34)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k680, env)}),
      VEncodePointer(&_V10string_D3781.sym, VPOINTER_OTHER),
      VGetArg(env, 10, 2)
    );
 } else {
  VError("Not enough arguments to _V0iter_k679, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k676(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k676" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k676, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda437) (close _V0iter_k679) (bruijn ##input.14 7 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda437, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k679, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k676, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k665(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k665" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k665, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda422) (close _V0iter_k676) (bruijn ##input.14 6 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda422, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k676, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k665, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k662(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k662" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k662, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda417) (close _V0iter_k665) (bruijn ##input.14 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda417, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k665, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k662, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k660(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k660" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k660, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda416) (close _V0iter_k662) (bruijn ##input.14 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda416, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k662, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k660, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k655(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k655" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k655, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda410) (close _V0iter_k660) (bruijn ##input.14 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda410, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k660, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k655, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k652(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k652" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k652, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda407) (close _V0iter_k655) (bruijn ##input.14 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda407, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k655, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k652, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k644(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k644" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k644, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda401) (close _V0iter_k652) (bruijn ##input.14 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda401, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k652, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k644, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda384(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda384" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda384, env) {
  // ((close _V0iter_lambda385) (close _V0iter_k644) (bruijn ##input.14 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda385, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k644, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter_lambda383(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda383" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda383, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter_lambda384) (bruijn ##k.3089 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda384, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda383, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda382(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda382" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda382, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 8 25) (bruijn ##k.3087 0 0) (close _V0iter_lambda383))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda383, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda382, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_k626(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k626" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_k626, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0bruijn__ify_k627) (bruijn iter 3 4) (close _V0iter_lambda382))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_k627, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda382, env)})
    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_k626, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_k681(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k681" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k681, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3511 1 0) (bruijn ##expr.5 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k681, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda449(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda449" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda449, env) {
  // ((bruijn ##k.8 1 1) (bruijn ##k.3529 0 0) (##inline ##sys.cdr (bruijn ##expr.9 5 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.6 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k685(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k685" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k685, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.7 8 1) (bruijn ##k.3523 2 0) (bruijn ##expr.9 6 1) (bruijn ##x.3528 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k685, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k684(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k684" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k684, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 20 37) (close _V0loop_k685) (bruijn ##xs.6 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k685, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k684, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda448(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda448" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda448, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda449) (close _V0loop_k684) (##inline ##sys.car (bruijn ##expr.9 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda449, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k684, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda448, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda447(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda447" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda447, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 18 25) (bruijn ##k.3521 0 0) (close _V0loop_lambda448))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda448, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda447, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k683(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k683" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k683, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 17 18) (bruijn ##k.3516 2 0) (close _V0loop_lambda447) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 18)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda447, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k683, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k682(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k682" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k682, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.7 3 1) (close _V0loop_k683) (bruijn ##expr.9 1 1) (bruijn ##x.3537 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k683, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k682, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda452(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda452" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda452, env) {
  // ((bruijn ##k.8 1 1) (bruijn ##k.3529 0 0) (##inline ##sys.cdr (bruijn ##expr.9 3 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.6 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k687(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k687" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k687, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.7 6 1) (bruijn ##k.3523 2 0) (bruijn ##expr.9 4 1) (bruijn ##x.3528 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k687, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k686(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k686" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k686, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 18 37) (close _V0loop_k687) (bruijn ##xs.6 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k687, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k686, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda451(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda451" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda451, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda452) (close _V0loop_k686) (##inline ##sys.car (bruijn ##expr.9 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda452, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k686, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda451, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda450(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda450" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda450, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 16 25) (bruijn ##k.3521 0 0) (close _V0loop_lambda451))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda451, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda450, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda446(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda446" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda446, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.9 0 1))) ((bruijn reverse 15 37) (close _V0loop_k682) (bruijn ##xs.6 0 2)) ((bruijn call-with-values 15 18) (bruijn ##k.3516 0 0) (close _V0loop_lambda450) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 37)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k682, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda450, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda446, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_lambda445(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda445" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda445, env) {
  // (set! (close _V0bruijn__lambda_k681) (bruijn loop 0 1) (close _V0loop_lambda446))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k681, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda446, env)})
    );
 }
}
static void _V0bruijn__lambda_lambda444(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda444" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda444, env) {
 if (env->num_vars == 2) {
  // ((close _V0bruijn__lambda_lambda445) (bruijn ##k.3509 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda445, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_lambda444, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_lambda443(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda443" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda443, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 12 25) (bruijn ##k.3507 0 0) (close _V0bruijn__lambda_lambda444))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda444, env)})
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_lambda443, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_k690(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k690" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k690, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2 9 1) (bruijn ##k.3551 3 0) (##inline ##sys.cons (bruijn ##x.3557 2 0) (##inline ##sys.cons (bruijn ##x.3559 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k690, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_k689(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k689" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k689, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 12 4) (close _V0bruijn__lambda_k690) (bruijn ##x.3560 0 0) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k690, env)}),
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k689, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_k688(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k688" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k688, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 15 48) (close _V0bruijn__lambda_k689) (bruijn xs 3 2) (bruijn env 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k689, env)}),
      env->up->up->up->vars[2],
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k688, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_lambda455(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda455" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda455, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 1 1))) ((bruijn length 14 30) (close _V0bruijn__lambda_k688) (bruijn xs 2 2)) ((bruijn ##k.3551 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k688, env)}),
      env->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_lambda454(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda454" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda454, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 1)) ((close _V0bruijn__lambda_lambda455) (bruijn ##k.3546 0 0) (##inline ##sys.car (bruijn ##expr.10 0 1))) ((bruijn ##k.3546 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda455, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_lambda453(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda453" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda453, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0bruijn__lambda_lambda454) (bruijn ##k.3541 0 0) (##inline ##sys.cdr (bruijn ##expr.4 2 1))) ((bruijn ##k.3541 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda454, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_lambda453, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_lambda442(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda442" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda442, env) {
  // ((bruijn call-with-values 11 18) (bruijn ##k.3505 0 0) (close _V0bruijn__lambda_lambda443) (close _V0bruijn__lambda_lambda453))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda443, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda453, env)})
    );
 }
}
static void _V0bruijn__lambda_lambda441(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda441" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda441, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 1)) ((close _V0bruijn__lambda_lambda442) (bruijn ##k.3500 0 0) (##inline ##sys.car (bruijn ##expr.4 0 1))) ((bruijn ##k.3500 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda442, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_k696(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k696" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k696, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3481 4 0) (##inline ##sys.cons (bruijn ##x.3483 2 0) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.3486 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k696, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_k695(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k695" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k695, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 15 4) (close _V0bruijn__lambda_k696) (bruijn ##x.3487 0 0) (bruijn body 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k696, env)}),
      env->vars[0],
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k695, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_k694(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k694" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k694, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 18 48) (close _V0bruijn__lambda_k695) (bruijn proper-xs 2 1) (bruijn env 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 48)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k695, env)}),
      env->up->up->vars[1],
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k694, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_k693(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k693" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k693, env) {
 if (env->num_vars == 1) {
  // ((bruijn - 17 44) (close _V0bruijn__lambda_k694) (bruijn ##x.3488 0 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 44)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k694, env)}),
      env->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k693, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_lambda460(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda460" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda460, env) {
  // ((bruijn length 16 30) (close _V0bruijn__lambda_k693) (bruijn proper-xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k693, env)}),
      env->vars[1]
    );
 }
}
static void _V0bruijn__lambda_k697(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k697" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k697, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2 8 1) (bruijn ##k.3475 2 0) (bruijn ##x.3480 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k697, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_k692(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k692" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k692, env) {
 if (env->num_vars == 1) {
  // ((close _V0bruijn__lambda_lambda460) (close _V0bruijn__lambda_k697) (bruijn ##x.3489 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda460, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k697, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k692, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_lambda459(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda459" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda459, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.12 1 1))) ((bruijn undot 10 2) (close _V0bruijn__lambda_k692) (bruijn xs 2 1)) ((bruijn ##k.3475 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k692, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_lambda458(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda458" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda458, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.12 0 1)) ((close _V0bruijn__lambda_lambda459) (bruijn ##k.3470 0 0) (##inline ##sys.car (bruijn ##expr.12 0 1))) ((bruijn ##k.3470 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda459, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_lambda457(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda457" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda457, env) {
  // ((close _V0bruijn__lambda_lambda458) (bruijn ##k.3468 0 0) (##inline ##sys.cdr (bruijn ##expr.11 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda458, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0bruijn__lambda_lambda456(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda456" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda456, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 1)) ((close _V0bruijn__lambda_lambda457) (bruijn ##k.3463 0 0) (##inline ##sys.car (bruijn ##expr.11 0 1))) ((bruijn ##k.3463 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda457, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_k698(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k698" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k698, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 11 34) (bruijn ##k.3455 2 0) (##string ##string.3748))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 34)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D3748.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k698, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_k691(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k691" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_k691, env) {
 if (env->num_vars == 1) {
  // ((close _V0bruijn__lambda_lambda456) (close _V0bruijn__lambda_k698) (bruijn ##input.3 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda456, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k698, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_k691, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_lambda440(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda440" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda440, env) {
  // ((close _V0bruijn__lambda_lambda441) (close _V0bruijn__lambda_k691) (bruijn ##input.3 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda441, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_k691, env)}),
      env->vars[1]
    );
 }
}
static void _V0bruijn__lambda_lambda439(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda439" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda439, env) {
 if (env->num_vars == 2) {
  // ((close _V0bruijn__lambda_lambda440) (bruijn ##k.3453 0 0) (bruijn lamb 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda440, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_lambda439, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__lambda_lambda438(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda438" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__lambda_lambda438, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 7 25) (bruijn ##k.3451 0 0) (close _V0bruijn__lambda_lambda439))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 25)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda439, env)})
    );
 } else {
  VError("Not enough arguments to _V0bruijn__lambda_lambda438, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_k625(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k625" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_k625, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0bruijn__ify_k626) (bruijn bruijn-lambda 2 3) (close _V0bruijn__lambda_lambda438))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_k626, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__lambda_lambda438, env)})
    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_k625, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0undot_k702(VEnv * env) {
 static VDebugInfo dbg = { "_V0undot_k702" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0undot_k702, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 10 48) (bruijn ##k.3573 4 0) (bruijn ##x.3578 2 0) (bruijn ##x.3579 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 48)),
      VGetArg(env, 4, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0undot_k702, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0undot_k701(VEnv * env) {
 static VDebugInfo dbg = { "_V0undot_k701" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0undot_k701, env) {
 if (env->num_vars == 1) {
  // ((bruijn undot 5 2) (close _V0undot_k702) (bruijn ##x.3580 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0undot_k702, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0undot_k701, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0undot_k700(VEnv * env) {
 static VDebugInfo dbg = { "_V0undot_k700" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0undot_k700, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 8 27) (close _V0undot_k701) (bruijn lst 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0undot_k701, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0undot_k700, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0undot_k703(VEnv * env) {
 static VDebugInfo dbg = { "_V0undot_k703" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0undot_k703, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3583 0 0) ((bruijn ##k.3573 2 0) (quote ())) ((bruijn cons 8 48) (bruijn ##k.3573 2 0) (bruijn lst 2 1) (quote ())))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 48)),
      env->up->up->vars[0],
      env->up->up->vars[1],
      VNULL
    );
}
 } else {
  VError("Not enough arguments to _V0undot_k703, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0undot_k699(VEnv * env) {
 static VDebugInfo dbg = { "_V0undot_k699" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0undot_k699, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3575 0 0) ((bruijn car 7 28) (close _V0undot_k700) (bruijn lst 1 1)) ((bruijn null? 7 35) (close _V0undot_k703) (bruijn lst 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0undot_k700, env)}),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0undot_k703, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0undot_k699, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0undot_lambda461(VEnv * env) {
 static VDebugInfo dbg = { "_V0undot_lambda461" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0undot_lambda461, env) {
 if (env->num_vars == 2) {
  // ((bruijn pair? 6 52) (close _V0undot_k699) (bruijn lst 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 52)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0undot_k699, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0undot_lambda461, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_k624(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k624" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_k624, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0bruijn__ify_k625) (bruijn undot 1 2) (close _V0undot_lambda461))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_k625, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0undot_lambda461, env)})
    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_k624, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup_lambda464(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup_lambda464" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup_lambda464, env) {
  // ((bruijn list 10 50) (bruijn ##k.3599 0 0) (quote bruijn) (bruijn x 5 3) (bruijn depth 5 1) (bruijn idx 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 50)),
      env->vars[0],
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 3),
      VGetArg(env, 5, 1),
      env->vars[1]
    );
 }
}
static void _V0lookup_k708(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup_k708" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup_k708, env) {
 if (env->num_vars == 1) {
  // ((bruijn lookup 7 1) (bruijn ##k.3595 2 0) (bruijn ##x.3603 1 0) (bruijn ##x.3604 0 0) (bruijn x 6 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 6, 3)
    );
 } else {
  VError("Not enough arguments to _V0lookup_k708, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup_k707(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup_k707" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup_k707, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 10 27) (close _V0lookup_k708) (bruijn env 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup_k708, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0lookup_k707, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup_lambda463(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup_lambda463" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup_lambda463, env) {
  // (if (bruijn ##x.1 0 1) ((close _V0lookup_lambda464) (bruijn ##k.3595 0 0) (bruijn ##x.1 0 1)) ((bruijn + 9 12) (close _V0lookup_k707) 1 (bruijn depth 4 1)))
if(VDecodeBool(
env->vars[1])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0lookup_lambda464, env)},
      env->vars[0],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup_k707, env)}),
      VEncodeInt(1l),
      VGetArg(env, 4, 1)
    );
}
 }
}
static void _V0lookup_k706(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup_k706" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup_k706, env) {
 if (env->num_vars == 1) {
  // ((close _V0lookup_lambda463) (bruijn ##k.3588 3 0) (bruijn ##x.3605 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0lookup_lambda463, env)},
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0lookup_k706, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup_lambda465(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup_lambda465" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup_lambda465, env) {
 if (env->num_vars == 2) {
  // ((bruijn eqv? 8 6) (bruijn ##k.3606 0 0) (bruijn x 3 3) (bruijn e 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 6)),
      env->vars[0],
      env->up->up->up->vars[3],
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0lookup_lambda465, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup_k705(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup_k705" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup_k705, env) {
 if (env->num_vars == 1) {
  // ((bruijn list-index 6 1) (close _V0lookup_k706) (close _V0lookup_lambda465) (bruijn ##x.3608 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup_k706, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup_lambda465, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0lookup_k705, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup_k704(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup_k704" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup_k704, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3590 0 0) ((bruijn ##k.3588 1 0) (bruijn x 1 3)) ((bruijn car 6 28) (close _V0lookup_k705) (bruijn env 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup_k705, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0lookup_k704, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup_lambda462(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup_lambda462" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup_lambda462, env) {
 if (env->num_vars == 4) {
  // ((bruijn null? 5 35) (close _V0lookup_k704) (bruijn env 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup_k704, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0lookup_lambda462, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0bruijn__ify_lambda373(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda373" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_lambda373, env) {
  // (set! (close _V0bruijn__ify_k624) (bruijn lookup 0 1) (close _V0lookup_lambda462))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_k624, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup_lambda462, env)})
    );
 }
}
static void _V0bruijn__ify_lambda372(VEnv * env) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda372" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0bruijn__ify_lambda372, env) {
 if (env->num_vars == 2) {
  // ((close _V0bruijn__ify_lambda373) (bruijn ##k.3013 0 0) #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0bruijn__ify_lambda373, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0bruijn__ify_lambda372, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void transpile_k63(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k63" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k63, env) {
 if (env->num_vars == 1) {
  // (set! (close transpile_k64) (bruijn bruijn-ify 1 2) (close _V0bruijn__ify_lambda372))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k64, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0bruijn__ify_lambda372, env)})
    );
 } else {
  VError("Not enough arguments to transpile_k63, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0list__index_k709(VEnv * env) {
 static VDebugInfo dbg = { "_V0list__index_k709" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0list__index_k709, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3611 1 0) (bruijn l 2 2) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[2],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0list__index_k709, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k714(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k714" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k714, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.3616 5 0) (bruijn ##x.3628 1 0) (bruijn ##x.3629 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k714, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k713(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k713" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k713, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 8 12) (close _V0loop_k714) (bruijn i 4 2) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k714, env)}),
      VGetArg(env, 4, 2),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k713, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k712(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k712" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k712, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3623 0 0) ((bruijn ##k.3616 3 0) (bruijn i 3 2)) ((bruijn cdr 7 27) (close _V0loop_k713) (bruijn l 3 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k713, env)}),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k712, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k711(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k711" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k711, env) {
 if (env->num_vars == 1) {
  // ((bruijn p 4 1) (close _V0loop_k712) (bruijn ##x.3630 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
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
 static VDebugInfo dbg = { "_V0loop_k710" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k710, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3618 0 0) ((bruijn ##k.3616 1 0) #f) ((bruijn car 5 28) (close _V0loop_k711) (bruijn l 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k711, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k710, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda468(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda468" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda468, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 4 35) (close _V0loop_k710) (bruijn l 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 35)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k710, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda468, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0list__index_lambda467(VEnv * env) {
 static VDebugInfo dbg = { "_V0list__index_lambda467" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0list__index_lambda467, env) {
  // (set! (close _V0list__index_k709) (bruijn loop 0 1) (close _V0loop_lambda468))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list__index_k709, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda468, env)})
    );
 }
}
static void _V0list__index_lambda466(VEnv * env) {
 static VDebugInfo dbg = { "_V0list__index_lambda466" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0list__index_lambda466, env) {
 if (env->num_vars == 3) {
  // ((close _V0list__index_lambda467) (bruijn ##k.3609 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0list__index_lambda467, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0list__index_lambda466, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void transpile_lambda4(VEnv * env) {
 static VDebugInfo dbg = { "transpile_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_lambda4, env) {
  // (set! (close transpile_k63) (bruijn list-index 0 1) (close _V0list__index_lambda466))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k63, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0list__index_lambda466, env)})
    );
 }
}
static void transpile_lambda3(VEnv * env) {
 static VDebugInfo dbg = { "transpile_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_lambda3, env) {
  // ((close transpile_lambda4) (bruijn ##k.196 0 0) #f #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(transpile_lambda4, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void transpile_k62(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k62" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k62, env) {
 if (env->num_vars == 1) {
  // ((close transpile_lambda3) (bruijn ##k.194 52 0) (bruijn ##x.3631 51 0) (bruijn ##x.3632 50 0) (bruijn ##x.3633 49 0) (bruijn ##x.3634 48 0) (bruijn ##x.3635 47 0) (bruijn ##x.3636 46 0) (bruijn ##x.3637 45 0) (bruijn ##x.3638 44 0) (bruijn ##x.3639 43 0) (bruijn ##x.3640 42 0) (bruijn ##x.3641 41 0) (bruijn ##x.3642 40 0) (bruijn ##x.3643 39 0) (bruijn ##x.3644 38 0) (bruijn ##x.3645 37 0) (bruijn ##x.3646 36 0) (bruijn ##x.3647 35 0) (bruijn ##x.3648 34 0) (bruijn ##x.3649 33 0) (bruijn ##x.3650 32 0) (bruijn ##x.3651 31 0) (bruijn ##x.3652 30 0) (bruijn ##x.3653 29 0) (bruijn ##x.3654 28 0) (bruijn ##x.3655 27 0) (bruijn ##x.3656 26 0) (bruijn ##x.3657 25 0) (bruijn ##x.3658 24 0) (bruijn ##x.3659 23 0) (bruijn ##x.3660 22 0) (bruijn ##x.3661 21 0) (bruijn ##x.3662 20 0) (bruijn ##x.3663 19 0) (bruijn ##x.3664 18 0) (bruijn ##x.3665 17 0) (bruijn ##x.3666 16 0) (bruijn ##x.3667 15 0) (bruijn ##x.3668 14 0) (bruijn ##x.3669 13 0) (bruijn ##x.3670 12 0) (bruijn ##x.3671 11 0) (bruijn ##x.3672 10 0) (bruijn ##x.3673 9 0) (bruijn ##x.3674 8 0) (bruijn ##x.3675 7 0) (bruijn ##x.3676 6 0) (bruijn ##x.3677 5 0) (bruijn ##x.3678 4 0) (bruijn ##x.3679 3 0) (bruijn ##x.3680 2 0) (bruijn ##x.3681 1 0) (bruijn ##x.3682 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(transpile_lambda3, env)},
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
  VError("Not enough arguments to transpile_k62, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k61(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k61" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k61, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 51 1) (close transpile_k62) (quote pair?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k62, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k61, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k60(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k60" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k60, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 50 1) (close transpile_k61) (quote map))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k61, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k60, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k59(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k59" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k59, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 49 1) (close transpile_k60) (quote list))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k60, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k59, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k58(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k58" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k58, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 48 1) (close transpile_k59) (quote list-ref))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k59, env)}),
      VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k58, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k57(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k57" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k57, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 47 1) (close transpile_k58) (quote cons))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 47, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k58, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k57, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k56(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k56" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k56, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 46 1) (close transpile_k57) (quote values))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k57, env)}),
      VEncodePointer(&_V0values.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k56, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k55(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k55" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k55, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 45 1) (close transpile_k56) (quote apply))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k56, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k55, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k54(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k54" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k54, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 44 1) (close transpile_k55) (quote set-car!))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k55, env)}),
      VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k54, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k53(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k53" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k53, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 43 1) (close transpile_k54) (quote -))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k54, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k53, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k52(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k52" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k52, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 42 1) (close transpile_k53) (quote gensym))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k53, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k52, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k51(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k51" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k51, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 41 1) (close transpile_k52) (quote cdar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k52, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k51, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k50(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k50" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k50, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 40 1) (close transpile_k51) (quote assoc))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k51, env)}),
      VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k50, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k49(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k49" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k49, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 39 1) (close transpile_k50) (quote assv))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k50, env)}),
      VEncodePointer(&_V0assv.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k49, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k48(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k48" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k48, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 38 1) (close transpile_k49) (quote string->symbol))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k49, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k48, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k47(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k47" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k47, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 37 1) (close transpile_k48) (quote sprintf))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k48, env)}),
      VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k47, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k46(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k46" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k46, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 36 1) (close transpile_k47) (quote reverse))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k47, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k46, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k45(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k45" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k45, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 35 1) (close transpile_k46) (quote not))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k46, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k45, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k44(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k44" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k44, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 34 1) (close transpile_k45) (quote null?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k45, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k44, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k43(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k43" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k43, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 33 1) (close transpile_k44) (quote error))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k44, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k43, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k42(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k42" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k42, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 32 1) (close transpile_k43) (quote for-each))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k43, env)}),
      VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k42, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k41(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k41" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k41, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 31 1) (close transpile_k42) (quote displayln))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k42, env)}),
      VEncodePointer(&_V0displayln.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k41, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k40(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k40" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k40, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 30 1) (close transpile_k41) (quote iota))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k41, env)}),
      VEncodePointer(&_V0iota.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k40, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k39(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k39" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k39, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 29 1) (close transpile_k40) (quote length))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k40, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k39, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k38(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k38" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k38, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 28 1) (close transpile_k39) (quote printf))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k39, env)}),
      VEncodePointer(&_V0printf.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k38, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k37(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k37" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k37, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 27 1) (close transpile_k38) (quote car))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k38, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k37, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k36(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k36" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k36, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 26 1) (close transpile_k37) (quote cdr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k37, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k36, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k35(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k35" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k35, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 25 1) (close transpile_k36) (quote caddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k36, env)}),
      VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k35, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k34(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k34" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k34, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 24 1) (close transpile_k35) (quote call/cc))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k35, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k34, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k33(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k33" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k33, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 23 1) (close transpile_k34) (quote equal?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k34, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k33, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k32(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k32" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k32, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 22 1) (close transpile_k33) (quote cddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k33, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k32, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k31(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k31" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k31, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 21 1) (close transpile_k32) (quote cadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k32, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k31, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k30(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k30" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k30, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 20 1) (close transpile_k31) (quote display))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k31, env)}),
      VEncodePointer(&_V0display.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k30, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k29(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k29" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k29, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 19 1) (close transpile_k30) (quote =))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k30, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k29, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k28(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k28" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k28, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 18 1) (close transpile_k29) (quote lookup-intrinsic))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k29, env)}),
      VEncodePointer(&_V0lookup__intrinsic.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k28, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k27(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k27" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k27, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 17 1) (close transpile_k28) (quote call-with-values))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k28, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k27, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k26(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k26" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k26, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 16 1) (close transpile_k27) (quote symbol?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k27, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k26, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k25(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k25" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k25, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 15 1) (close transpile_k26) (quote lookup-inline))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k26, env)}),
      VEncodePointer(&_V0lookup__inline.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k25, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k24(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k24" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k24, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 14 1) (close transpile_k25) (quote symbol->string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k25, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k24, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k23(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k23" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k23, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 13 1) (close transpile_k24) (quote string?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k24, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k23, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k22(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k22" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k22, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 12 1) (close transpile_k23) (quote string-length))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k23, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k21(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k21" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k21, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 11 1) (close transpile_k22) (quote +))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k22, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k21, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k20(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k20" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k20, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 10 1) (close transpile_k21) (quote mangle-symbol))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k21, env)}),
      VEncodePointer(&_V0mangle__symbol.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k20, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k19(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k19" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k19, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 9 1) (close transpile_k20) (quote integer?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k20, env)}),
      VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k19, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k18(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k18" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k18, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 8 1) (close transpile_k19) (quote number?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k19, env)}),
      VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k17(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k17" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k17, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 7 1) (close transpile_k18) (quote char?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k18, env)}),
      VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k17, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k16(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k16" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k16, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 6 1) (close transpile_k17) (quote eq?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k17, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k16, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k15(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k15" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k15, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 5 1) (close transpile_k16) (quote eqv?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k16, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k14(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k14" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k14, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 4 1) (close transpile_k15) (quote <))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k15, env)}),
      VEncodePointer(&_V0_L.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k14, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k13(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k13" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k13, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 3 1) (close transpile_k14) (quote string-ref))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k14, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k13, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k12(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k12" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k12, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 2 1) (close transpile_k13) (quote close-port))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k13, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k12, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k11(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k11" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k11, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 1 1) (close transpile_k12) (quote get-output-string))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k12, env)}),
      VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_lambda2(VEnv * env) {
 static VDebugInfo dbg = { "transpile_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_lambda2, env) {
  // ((bruijn ##vcore.import 0 1) (close transpile_k11) (quote open-output-string))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k11, env)}),
      VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k10(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k10" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k10, env) {
 if (env->num_vars == 1) {
  // ((close transpile_lambda2) (bruijn ##k.192 10 0) (bruijn ##x.3683 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(transpile_lambda2, env)},
      VGetArg(env, 10, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to transpile_k10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k9(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k9" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k9, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3684 8 0) (close transpile_k10) (##string ##string.3782) (bruijn ##x.3685 6 0) (bruijn ##x.3686 4 0) (bruijn ##x.3687 2 0) (bruijn ##x.3688 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k10, env)}),
      VEncodePointer(&_V10string_D3782.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 0),
      VGetArg(env, 4, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to transpile_k9, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k8(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k8" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k8, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3689 0 0) (close transpile_k9) (##string ##string.3783))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k9, env)}),
      VEncodePointer(&_V10string_D3783.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k7(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k7" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k7, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close transpile_k8) (##string ##string.3784))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k8, env)}),
      VEncodePointer(&_V10string_D3784.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k7, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k6(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k6" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k6, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3690 0 0) (close transpile_k7) (##string ##string.3785))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k7, env)}),
      VEncodePointer(&_V10string_D3785.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k6, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k5(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k5" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k5, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close transpile_k6) (##string ##string.3784))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k6, env)}),
      VEncodePointer(&_V10string_D3784.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k5, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k4(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k4" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k4, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3691 0 0) (close transpile_k5) (##string ##string.3786))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k5, env)}),
      VEncodePointer(&_V10string_D3786.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k4, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k3(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k3" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k3, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close transpile_k4) (##string ##string.3784))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k4, env)}),
      VEncodePointer(&_V10string_D3784.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k3, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k2(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k2" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k2, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3692 0 0) (close transpile_k3) (##string ##string.3787))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k3, env)}),
      VEncodePointer(&_V10string_D3787.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k2, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_k1(VEnv * env) {
 static VDebugInfo dbg = { "transpile_k1" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_k1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close transpile_k2) (##string ##string.3784))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k2, env)}),
      VEncodePointer(&_V10string_D3784.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_k1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void transpile_lambda1(VEnv * env) {
 static VDebugInfo dbg = { "transpile_lambda1" };
 VRecordCall(&dbg);
 V_GC_CHECK(transpile_lambda1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close transpile_k1) (##string ##string.3788))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(transpile_k1, env)}),
      VEncodePointer(&_V10string_D3788.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to transpile_lambda1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
void (*transpile)(VEnv*) = transpile_lambda1;
