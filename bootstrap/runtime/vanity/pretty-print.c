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

VEnv * _V60_V0vanity_V0pretty__print;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D241 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D240 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
VWEAK VWORD _V0pretty__print;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0pretty__print = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "pretty-print" };
static VPair _V10_Dpair_D239 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D238 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D234 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
static VPair _V10_Dpair_D233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D232 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D230 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static VPair _V10_Dpair_D229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D228 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static VPair _V10_Dpair_D227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D223 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D222 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D221 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
static VPair _V10_Dpair_D217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0let_S;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0let_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "let*" };
static VPair _V10_Dpair_D216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
static VPair _V10_Dpair_D215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
static VPair _V10_Dpair_D214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
static VPair _V10_Dpair_D213 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D212 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static VPair _V10_Dpair_D210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D209 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D208 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ". " };
static VPair _V10_Dpair_D207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D204 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D203 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0print__indent, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0atom_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0lengthof__atom, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0quotation_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0join__line_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _var0, _var1, _var2, _var3, _var4);
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.indent-this?.34 1 3) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.31 2 7) (bruijn ##.%k.110 0 0) (bruijn ##.indent.33 1 2)) ((bruijn ##.%k.110 0 0) #f))
if(VDecodeBool(
statics->vars[3])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0print__indent(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.157 1 1) ((bruijn ##.%k.76 0 0) 2) ((bruijn ##.%k.76 0 0) 1))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.158) ((##vcore.+ (bruijn ##.indent.33 7 2) (bruijn ##.%x.74 1 0))) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.24 8 0) (bruijn ##.%k.69 7 0) (bruijn ##.%x.72 3 0) (bruijn ##.%x.158 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.156 ##.%p.157) ((##vcore.car (bruijn ##.expr.32 5 1)) (##vcore.eq? (bruijn ##.%x.156 0 0) 'unquote-splicing)) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0unquote__splicing);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10, self)))));
    }
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cadr.6 5 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8) (bruijn ##.expr.32 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.175) ((##vcore.+ 2 (bruijn ##.%x.104 1 0))) ((bruijn ##.%k.103 3 0) (bruijn ##.%r.175 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(2l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.join-line.38 1 0) (basic-block 1 1 (##.%x.174) ((##vcore.car (bruijn ##.expr.32 8 1))) (##qualified-call (vanity pretty-print lengthof-atom) #t (bruijn ##.lengthof-atom.29 9 5) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15) (bruijn ##.%x.174 0 0))) ((bruijn ##.%k.103 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0lengthof__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.join-line.38 2 0) ((bruijn ##.%k.102 0 0) (bruijn ##.join-line.38 2 0)) ((bruijn ##.%k.102 0 0) 1))
if(VDecodeBool(
statics->up->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.43 3 2) ((bruijn ##.%k.98 0 0) (bruijn ##.join-line.38 7 0)) ((bruijn ##.%k.98 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.96 1 0) ((bruijn ##.display.5 16 3) (bruijn ##.%k.97 0 0) (##string ##.string.204)) ((bruijn ##.newline.4 16 2) (bruijn ##.%k.97 0 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D204.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 1,
      _var0);
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.43 4 2) ((bruijn ##.%k.95 0 0) (bruijn ##.first-indent.39 7 0)) ((bruijn ##.%k.95 0 0) (bruijn ##.new-indent.40 6 0)))
if(VDecodeBool(
statics->up->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.first-elem.43 5 2) (basic-block 1 1 (##.%x.170) ((##vcore.car (bruijn ##.expr.32 16 1))) ((bruijn ##.memv.2 18 0) (bruijn ##.%k.93 1 0) (bruijn ##.%x.170 0 0) '(##pair ##.pair.207))) ((bruijn ##.%k.93 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 5-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      statics->vars[0],
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.89 1 0) (basic-block 2 2 (##.%x.168 ##.%x.169) ((##vcore.+ (bruijn ##.indent.33 17 2) (bruijn ##.new-indent.40 9 0)) (##vcore.- 80 (bruijn ##.%x.168 0 0))) ((bruijn ##.max.3 19 1) (bruijn ##.%k.90 1 0) 40 (bruijn ##.%x.169 0 1))) ((bruijn ##.%k.90 0 0) 40))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 17-1, 2),
      VGetArg(statics, 9-1, 0));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VEncodeInt(80l),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 1)), 3,
      statics->vars[0],
      VEncodeInt(40l),
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(40l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.43 8 2) ((bruijn ##.%k.88 0 0) (bruijn ##.join-line.38 12 0)) ((bruijn ##.%k.88 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 8-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.167) ((##vcore.cdr (bruijn ##.rest.42 10 1))) (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.41) #f (bruijn ##.loop.41 11 0) (bruijn ##.%k.78 10 0) (bruijn ##.%x.167 0 0) #f))
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
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.166) ((##vcore.not (bruijn ##.%x.87 1 0))) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.24 20 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k31) (bruijn ##.%x.164 2 0) (bruijn ##.%x.165 2 1) (bruijn ##.%x.166 0 0) (bruijn ##.short-threshold.83 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k31, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      self->vars[0];
    VWORD _arg4 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.164 ##.%x.165) ((##vcore.car (bruijn ##.rest.42 7 1)) (##vcore.+ (bruijn ##.indent.33 17 2) (bruijn ##.new-indent.82 3 0))) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k29) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k30)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 17-1, 2),
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k30, self)))));
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k27) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k28))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k28, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k25) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k26))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k25, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k26, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k23) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k24))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k24, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k21) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k22, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.display.5 16 3) (bruijn ##.%k.78 4 0) (##string ##.string.203))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D203.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.172) ((##vcore.+ (bruijn ##.indent.33 14 2) 3)) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.24 15 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k35) (bruijn ##.rest.42 4 1) (bruijn ##.%x.172 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 14-1, 2),
      VEncodeInt(3l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k35, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.display.5 15 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k34) (##string ##.string.208))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k34, self)))),
      VEncodePointer(&_V10_Dstring_D208.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.171) ((##vcore.+ (bruijn ##.indent.33 13 2) 1)) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.31 14 7) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k33) (bruijn ##.%x.171 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 13-1, 2),
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k33, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0print__indent(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.162) ((##vcore.null? (bruijn ##.rest.42 1 1))) (if (bruijn ##.%p.162 0 0) ((bruijn ##.display.5 13 3) (bruijn ##.%k.78 1 0) (##string ##.string.203)) (basic-block 1 1 (##.%p.163) ((##vcore.pair? (bruijn ##.rest.42 2 1))) (if (bruijn ##.%p.163 0 0) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k19) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k20)) ((bruijn ##.display.5 14 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k32) #\newline)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D203.sym, VPOINTER_OTHER));
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k20, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41_V0k32, self)))),
      VEncodeChar('\n'));
}
    }
}
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41")) (basic-block 1 1 (##.%x.173) ((##vcore.cdr (bruijn ##.expr.32 10 1))) (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.41) #f (bruijn ##.loop.41 1 0) (bruijn ##.%k.69 10 0) (bruijn ##.%x.173 0 0) #t)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D41(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.161) ((##vcore.car (bruijn ##.expr.32 5 1))) (##qualified-call (vanity pretty-print join-line?) #t (bruijn ##.join-line?.25 6 1) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13) (bruijn ##.%x.161 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0join__line_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.159 ##.%x.160) ((##vcore.car (bruijn ##.expr.32 4 1)) (##vcore.+ (bruijn ##.indent.33 4 2) 1)) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.24 5 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12) (bruijn ##.%x.159 0 0) (bruijn ##.%x.160 0 1) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.1.36 0 0) ((bruijn ##.display.5 5 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7) (bruijn ##.x.1.36 0 0)) ((bruijn ##.display.5 5 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11) (##string ##.string.209)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7, self)))),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D209.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.71 0 0) ((bruijn ##.write.7 4 5) (bruijn ##.%k.69 2 0) (bruijn ##.expr.32 2 1)) (##qualified-call (vanity pretty-print quotation?) #t (bruijn ##.quotation?.27 3 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6) (bruijn ##.expr.32 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[5]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0quotation_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k4(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.154 ##.%p.155) ((##vcore.pair? (bruijn ##.expr.32 1 1)) (##vcore.not (bruijn ##.%x.154 0 0))) (if (bruijn ##.%p.155 0 1) ((bruijn ##.write.7 3 5) (bruijn ##.%k.69 1 0) (bruijn ##.expr.32 1 1)) (##qualified-call (vanity pretty-print short?) #t (bruijn ##.short?.28 2 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5) (bruijn ##.expr.32 1 1) (bruijn ##.short-threshold.35 1 4))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q, _V60_V0vanity_V0pretty__print)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl, got ~D~N"
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
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k4))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k4, self)))));
}
void _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ret.47 0 0) (basic-block 1 1 (##.%r.176) ((##vcore.cdr (bruijn ##.ret.47 1 0))) ((bruijn ##.%k.111 2 0) (bruijn ##.%r.176 0 0))) ((bruijn ##.%k.111 1 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0join__line_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0join__line_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.assv.8 2 6) (close _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36) (bruijn ##.form.46 0 1) '(##pair ##.pair.227))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[6]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36, self)))),
      _var1,
      VEncodePointer(&_V10_Dpair_D227, VPOINTER_PAIR));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.newline.4 2 2) (bruijn ##.%k.112 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0pretty__print(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.24 1 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print_V0k37) (bruijn ##.expr.48 0 1) 0 #t 40)
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print_V0k37, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      VEncodeBool(true);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.181) ((##vcore.null? (bruijn ##.%x.118 1 0))) ((bruijn ##.%k.117 2 0) (bruijn ##.%r.181 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.178 1 1) ((bruijn ##.cddr.9 4 7) (close _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k39) (bruijn ##.expr.49 2 1)) ((bruijn ##.%k.117 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k39, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ret.50 0 0) (basic-block 1 1 (##.%r.180) ((##vcore.cdr (bruijn ##.ret.50 1 0))) ((bruijn ##.%k.113 5 0) (bruijn ##.%r.180 0 0))) ((bruijn ##.%k.113 4 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.114 0 0) (basic-block 1 1 (##.%x.179) ((##vcore.car (bruijn ##.expr.49 3 1))) ((bruijn ##.assv.8 5 6) (close _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k41) (bruijn ##.%x.179 0 0) '(##pair ##.pair.239))) ((bruijn ##.%k.113 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k41, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D239, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0quotation_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0quotation_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.177 ##.%p.178) ((##vcore.cdr (bruijn ##.expr.49 1 1)) (##vcore.pair? (bruijn ##.%x.177 0 0))) ((close _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38) (close _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k40)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k40, self)))));
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.186) ((##vcore.+ (bruijn ##.n.59 5 2) (bruijn ##.%x.127 1 0) 3)) ((bruijn ##.%k.123 5 0) (bruijn ##.%r.186 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      statics->vars[0],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.189) ((##vcore.+ (bruijn ##.n.59 6 2) (bruijn ##.%x.130 1 0) 1)) (##qualified-call (vanity pretty-print short? ##.lengthof-list.54 ##.loop.57) #f (bruijn ##.loop.57 7 0) (bruijn ##.%k.123 6 0) (bruijn ##.%x.187 2 0) (bruijn ##.%x.189 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.182) ((##vcore.> (bruijn ##.n.59 1 2) (bruijn ##.cutoff.52 6 2))) (if (bruijn ##.%p.182 0 0) ((bruijn ##.return.53 5 1) (bruijn ##.%k.123 1 0) #f) (basic-block 1 1 (##.%p.183) ((##vcore.null? (bruijn ##.expr.58 2 1))) (if (bruijn ##.%p.183 0 0) ((bruijn ##.%k.123 2 0) (bruijn ##.n.59 2 2)) (basic-block 2 2 (##.%x.184 ##.%p.185) ((##vcore.pair? (bruijn ##.expr.58 3 1)) (##vcore.not (bruijn ##.%x.184 0 0))) (if (bruijn ##.%p.185 0 1) (##qualified-call (vanity pretty-print short? ##.lengthof.55) #f (bruijn ##.lengthof.55 6 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57_V0k42) (bruijn ##.expr.58 3 1)) (basic-block 2 2 (##.%x.187 ##.%x.188) ((##vcore.cdr (bruijn ##.expr.58 4 1)) (##vcore.car (bruijn ##.expr.58 4 1))) (##qualified-call (vanity pretty-print short? ##.lengthof.55) #f (bruijn ##.lengthof.55 7 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57_V0k43) (bruijn ##.%x.188 0 1)))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[2],
      VGetArg(statics, 6-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      statics->vars[0],
      VEncodeBool(false));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57_V0k42, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57_V0k43, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55(runtime, _closure_env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57")) (##qualified-call (vanity pretty-print short? ##.lengthof-list.54 ##.loop.57) #f (bruijn ##.loop.57 0 0) (bruijn ##.%k.122 1 0) (bruijn ##.expr.56 1 1) 1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(1l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54_V10_Dloop_D57(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.193 1 1) ((bruijn ##.%k.140 0 0) 2) ((bruijn ##.%k.140 0 0) 1))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.194) ((##vcore.+ (bruijn ##.%x.136 3 0) (bruijn ##.%x.137 1 0))) ((bruijn ##.%k.133 7 0) (bruijn ##.%r.194 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity pretty-print short? ##.lengthof.55) #f (bruijn ##.lengthof.55 6 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k48) (bruijn ##.%x.138 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k48, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.6 9 4) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k47) (bruijn ##.expr.60 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k47, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.135 0 0) (basic-block 2 2 (##.%x.192 ##.%p.193) ((##vcore.car (bruijn ##.expr.60 3 1)) (##vcore.eq? (bruijn ##.%x.192 0 0) 'unquote-splicing)) ((close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k45) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k46))) (##qualified-call (vanity pretty-print short? ##.lengthof-list.54) #f (bruijn ##.lengthof-list.54 3 0) (bruijn ##.%k.133 2 0) (bruijn ##.expr.60 2 1)))
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
      _V0unquote__splicing);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k46, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.190 ##.%p.191) ((##vcore.pair? (bruijn ##.expr.60 1 1)) (##vcore.not (bruijn ##.%x.190 0 0))) (if (bruijn ##.%p.191 0 1) (##qualified-call (vanity pretty-print lengthof-atom) #t (bruijn ##.lengthof-atom.29 5 5) (bruijn ##.%k.133 1 0) (bruijn ##.expr.60 1 1)) (##qualified-call (vanity pretty-print quotation?) #t (bruijn ##.quotation?.27 5 3) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k44) (bruijn ##.expr.60 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0lengthof__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55_V0k44, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0quotation_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.195) ((##vcore.> (bruijn ##.len.61 1 0) (bruijn ##.cutoff.52 4 2))) (if (bruijn ##.%p.195 0 0) ((bruijn ##.return.53 3 1) (bruijn ##.%k.121 3 0) #f) ((bruijn ##.%k.121 3 0) #t)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      statics->up->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      statics->up->up->vars[0],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(true));
}
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 2 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54") (close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55")) (##qualified-call (vanity pretty-print short? ##.lengthof.55) #f (bruijn ##.lengthof.55 0 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0k49) (bruijn ##.expr.51 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D54, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0k49, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D55(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.120 0 0) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0lambda3, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k53(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.144 3 0) (bruijn ##.len.196 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.len.196) ((##vcore.string-length (bruijn ##.%x.145 1 0))) ((bruijn ##.close-port.10 5 8) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k53) (bruijn ##.port.63 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k53, self)))),
      statics->up->vars[0]);
    }
}
static void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k51(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.get-output-string.11 3 9) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k52) (bruijn ##.port.63 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k52, self)))),
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.7 3 5) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k51) (bruijn ##.expr.62 1 1) (bruijn ##.port.63 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k51, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.open-output-string.12 2 10) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50, self)))));
}
void _V50_V0vanity_V0pretty__print_V0atom_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0atom_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.197 ##.%r.198) ((##vcore.pair? (bruijn ##.expr.65 1 1)) (##vcore.not (bruijn ##.%x.197 0 0))) ((bruijn ##.%k.146 1 0) (bruijn ##.%r.198 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
static void _V50_V0vanity_V0pretty__print_V0print__indent_V0k54(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.200) ((##vcore.- (bruijn ##.i.66 2 1) 1)) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.31 3 7) (bruijn ##.%k.148 2 0) (bruijn ##.%x.200 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0print__indent(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0print__indent(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0print__indent, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.199) ((##vcore.> (bruijn ##.i.66 1 1) 0)) (if (bruijn ##.%p.199 0 0) ((bruijn ##.display.5 3 3) (close _V50_V0vanity_V0pretty__print_V0print__indent_V0k54) #\space) ((bruijn ##.%k.148 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent_V0k54, self)))),
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V0vanity_V0pretty__print_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 if(argc != 11) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0lambda2, got ~D~N"
  "-- expected 11~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[11]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 11, 11, statics);
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
  // (##letrec (vanity pretty-print) 8 ((close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0join__line_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0pretty__print" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0quotation_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0short_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0lengthof__atom" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0atom_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0print__indent" (vanity pretty-print))) (basic-block 2 2 (##.%x.201 ##.%r.202) ((##vcore.cons 'pretty-print (bruijn ##.pretty-print.26 1 2)) (##vcore.cons (bruijn ##.%x.201 0 0) '())) ((bruijn ##.%k.68 5 0) (bruijn ##.%r.202 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    _V60_V0vanity_V0pretty__print = self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q, _V60_V0vanity_V0pretty__print))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print, _V60_V0vanity_V0pretty__print))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q, _V60_V0vanity_V0pretty__print))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q, _V60_V0vanity_V0pretty__print))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom, _V60_V0vanity_V0pretty__print))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0atom_Q, _V60_V0vanity_V0pretty__print))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, _V60_V0vanity_V0pretty__print))));
    VRegisterStaticEnv("_V0vanity_V0pretty__print_V20", &_V60_V0vanity_V0pretty__print);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0pretty__print,
      statics->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0pretty__print_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0pretty__print_V20_V0lambda2) (##string ##.string.240) (bruijn ##.%x.152 0 0) 'memv 'max 'newline 'display 'cadr 'write 'assv 'cddr 'close-port 'get-output-string 'open-output-string)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 14,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D240.sym, VPOINTER_OTHER),
      _var0,
      _V0memv,
      _V0max,
      _V0newline,
      _V0display,
      _V0cadr,
      _V0write,
      _V0assv,
      _V0cddr,
      _V0close__port,
      _V0get__output__string,
      _V0open__output__string);
}
static void _V0vanity_V0pretty__print_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0pretty__print_V20_V0k2) (bruijn ##.%x.153 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0pretty__print_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0pretty__print_V20_V0k1) (##string ##.string.241))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D241.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0pretty__print_V20 = (VFunc)_V0vanity_V0pretty__print_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0open__output__string = VEncodePointer(VInternSymbol(1528859113, &_VW_V0open__output__string.sym), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VInternSymbol(-1094109327, &_VW_V0get__output__string.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0write = VEncodePointer(VInternSymbol(-1997196379, &_VW_V0write.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VInternSymbol(830312827, &_VW_V0newline.sym), VPOINTER_OTHER);
  _V0max = VEncodePointer(VInternSymbol(-606210272, &_VW_V0max.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0pretty__print = VEncodePointer(VInternSymbol(-2038099419, &_VW_V0pretty__print.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VInternSymbol(-1666054212, &_VW_V0quasiquote.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0letrec_S = VEncodePointer(VInternSymbol(2021638346, &_VW_V0letrec_S.sym), VPOINTER_OTHER);
  _V0let_S = VEncodePointer(VInternSymbol(-1235035137, &_VW_V0let_S.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VInternSymbol(871318520, &_VW_V0continuation.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0unquote__splicing = VEncodePointer(VInternSymbol(-922270485, &_VW_V0unquote__splicing.sym), VPOINTER_OTHER);
  _V10_Dpair_D239.first = VEncodePointer(&_V10_Dpair_D229, VPOINTER_PAIR);
  _V10_Dpair_D239.rest = VEncodePointer(&_V10_Dpair_D238, VPOINTER_PAIR);
  _V10_Dpair_D238.first = VEncodePointer(&_V10_Dpair_D231, VPOINTER_PAIR);
  _V10_Dpair_D238.rest = VEncodePointer(&_V10_Dpair_D237, VPOINTER_PAIR);
  _V10_Dpair_D237.first = VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR);
  _V10_Dpair_D237.rest = VEncodePointer(&_V10_Dpair_D236, VPOINTER_PAIR);
  _V10_Dpair_D236.first = VEncodePointer(&_V10_Dpair_D235, VPOINTER_PAIR);
  _V10_Dpair_D236.rest = VNULL;
  _V10_Dpair_D235.first = _V0unquote__splicing;
  _V10_Dpair_D235.rest = VEncodePointer(&_V10_Dstring_D234.sym, VPOINTER_OTHER);
  _V10_Dpair_D233.first = _V0unquote;
  _V10_Dpair_D233.rest = VEncodePointer(&_V10_Dstring_D232.sym, VPOINTER_OTHER);
  _V10_Dpair_D231.first = _V0quasiquote;
  _V10_Dpair_D231.rest = VEncodePointer(&_V10_Dstring_D230.sym, VPOINTER_OTHER);
  _V10_Dpair_D229.first = _V0quote;
  _V10_Dpair_D229.rest = VEncodePointer(&_V10_Dstring_D228.sym, VPOINTER_OTHER);
  _V10_Dpair_D227.first = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D227.rest = VEncodePointer(&_V10_Dpair_D226, VPOINTER_PAIR);
  _V10_Dpair_D226.first = VEncodePointer(&_V10_Dpair_D211, VPOINTER_PAIR);
  _V10_Dpair_D226.rest = VEncodePointer(&_V10_Dpair_D225, VPOINTER_PAIR);
  _V10_Dpair_D225.first = VEncodePointer(&_V10_Dpair_D212, VPOINTER_PAIR);
  _V10_Dpair_D225.rest = VEncodePointer(&_V10_Dpair_D224, VPOINTER_PAIR);
  _V10_Dpair_D224.first = VEncodePointer(&_V10_Dpair_D213, VPOINTER_PAIR);
  _V10_Dpair_D224.rest = VEncodePointer(&_V10_Dpair_D223, VPOINTER_PAIR);
  _V10_Dpair_D223.first = VEncodePointer(&_V10_Dpair_D214, VPOINTER_PAIR);
  _V10_Dpair_D223.rest = VEncodePointer(&_V10_Dpair_D222, VPOINTER_PAIR);
  _V10_Dpair_D222.first = VEncodePointer(&_V10_Dpair_D215, VPOINTER_PAIR);
  _V10_Dpair_D222.rest = VEncodePointer(&_V10_Dpair_D221, VPOINTER_PAIR);
  _V10_Dpair_D221.first = VEncodePointer(&_V10_Dpair_D216, VPOINTER_PAIR);
  _V10_Dpair_D221.rest = VEncodePointer(&_V10_Dpair_D220, VPOINTER_PAIR);
  _V10_Dpair_D220.first = VEncodePointer(&_V10_Dpair_D217, VPOINTER_PAIR);
  _V10_Dpair_D220.rest = VEncodePointer(&_V10_Dpair_D219, VPOINTER_PAIR);
  _V10_Dpair_D219.first = VEncodePointer(&_V10_Dpair_D218, VPOINTER_PAIR);
  _V10_Dpair_D219.rest = VNULL;
  _V10_Dpair_D218.first = _V0letrec_S;
  _V10_Dpair_D218.rest = VEncodeInt(2l);
  _V10_Dpair_D217.first = _V0let_S;
  _V10_Dpair_D217.rest = VEncodeInt(2l);
  _V10_Dpair_D216.first = _V0letrec;
  _V10_Dpair_D216.rest = VEncodeInt(2l);
  _V10_Dpair_D215.first = _V0let;
  _V10_Dpair_D215.rest = VEncodeInt(2l);
  _V10_Dpair_D214.first = _V0if;
  _V10_Dpair_D214.rest = VEncodeInt(4l);
  _V10_Dpair_D213.first = _V0continuation;
  _V10_Dpair_D213.rest = VEncodeInt(2l);
  _V10_Dpair_D212.first = _V0lambda;
  _V10_Dpair_D212.rest = VEncodeInt(2l);
  _V10_Dpair_D211.first = _V0set_B;
  _V10_Dpair_D211.rest = VEncodeInt(2l);
  _V10_Dpair_D210.first = _V0define;
  _V10_Dpair_D210.rest = VEncodeInt(2l);
  _V10_Dpair_D207.first = _V0define;
  _V10_Dpair_D207.rest = VEncodePointer(&_V10_Dpair_D206, VPOINTER_PAIR);
  _V10_Dpair_D206.first = _V0lambda;
  _V10_Dpair_D206.rest = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D205.first = _V0continuation;
  _V10_Dpair_D205.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
