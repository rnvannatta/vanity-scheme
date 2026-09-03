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

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D232 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D231 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
VWEAK VWORD _V0pretty__print;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0pretty__print = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "pretty-print" };
static VPair _V10_Dpair_D230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D225 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
static VPair _V10_Dpair_D224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D223 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D222 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D221 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static VPair _V10_Dpair_D220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D219 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static VPair _V10_Dpair_D218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D213 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D212 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
static VPair _V10_Dpair_D208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0let_S;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0let_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "let*" };
static VPair _V10_Dpair_D207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
static VPair _V10_Dpair_D206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
static VPair _V10_Dpair_D205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
static VPair _V10_Dpair_D204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static VPair _V10_Dpair_D201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D200 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D199 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ". " };
static VPair _V10_Dpair_D198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D195 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D194 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0print__indent, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0atom_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0lengthof__atom, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0quotation_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0join__line_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _var0, _var1, _var2, _var3, _var4);
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.indent-this?.33 1 3) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.30 2 7) (bruijn ##.%k.109 0 0) (bruijn ##.indent.32 1 2)) ((bruijn ##.%k.109 0 0) #f))
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
  // (if (bruijn ##.%p.151 1 1) ((bruijn ##.%k.75 0 0) 2) ((bruijn ##.%k.75 0 0) 1))
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
  // (basic-block 1 1 (##.%x.152) ((##vcore.+ (bruijn ##.indent.32 7 2) (bruijn ##.%x.73 1 0))) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 8 0) (bruijn ##.%k.68 7 0) (bruijn ##.%x.71 3 0) (bruijn ##.%x.152 0 0) #f 40))
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
  // (basic-block 2 2 (##.%x.150 ##.%p.151) ((##vcore.car (bruijn ##.expr.31 5 1)) (##vcore.eq? (bruijn ##.%x.150 0 0) 'unquote-splicing)) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10)))
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
  // ((bruijn ##.cadr.6 5 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8) (bruijn ##.expr.31 3 1))
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
  // (basic-block 1 1 (##.%r.169) ((##vcore.+ 2 (bruijn ##.%x.103 1 0))) ((bruijn ##.%k.102 3 0) (bruijn ##.%r.169 0 0)))
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
  // (if (bruijn ##.join-line.37 1 0) (basic-block 1 1 (##.%x.168) ((##vcore.car (bruijn ##.expr.31 8 1))) (##qualified-call (vanity pretty-print lengthof-atom) #t (bruijn ##.lengthof-atom.28 9 5) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15) (bruijn ##.%x.168 0 0))) ((bruijn ##.%k.102 0 0) 1))
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
  // (if (bruijn ##.join-line.37 2 0) ((bruijn ##.%k.101 0 0) (bruijn ##.join-line.37 2 0)) ((bruijn ##.%k.101 0 0) 1))
if(VDecodeBool(
statics->up->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.42 3 2) ((bruijn ##.%k.97 0 0) (bruijn ##.join-line.37 7 0)) ((bruijn ##.%k.97 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.95 1 0) ((bruijn ##.display.5 16 3) (bruijn ##.%k.96 0 0) (##string ##.string.195)) ((bruijn ##.newline.4 16 2) (bruijn ##.%k.96 0 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D195.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 1,
      _var0);
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.42 4 2) ((bruijn ##.%k.94 0 0) (bruijn ##.first-indent.38 7 0)) ((bruijn ##.%k.94 0 0) (bruijn ##.new-indent.39 6 0)))
if(VDecodeBool(
statics->up->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.first-elem.42 5 2) (basic-block 1 1 (##.%x.164) ((##vcore.car (bruijn ##.expr.31 16 1))) ((bruijn ##.memv.2 18 0) (bruijn ##.%k.92 1 0) (bruijn ##.%x.164 0 0) '(##pair ##.pair.198))) ((bruijn ##.%k.92 0 0) #f))
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
      VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.88 1 0) (basic-block 2 2 (##.%x.162 ##.%x.163) ((##vcore.+ (bruijn ##.indent.32 17 2) (bruijn ##.new-indent.39 9 0)) (##vcore.- 80 (bruijn ##.%x.162 0 0))) ((bruijn ##.max.3 19 1) (bruijn ##.%k.89 1 0) 40 (bruijn ##.%x.163 0 1))) ((bruijn ##.%k.89 0 0) 40))
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
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.42 8 2) ((bruijn ##.%k.87 0 0) (bruijn ##.join-line.37 12 0)) ((bruijn ##.%k.87 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 8-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.161) ((##vcore.cdr (bruijn ##.rest.41 10 1))) (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.40) #f (bruijn ##.loop.40 11 0) (bruijn ##.%k.77 10 0) (bruijn ##.%x.161 0 0) #f))
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
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.160) ((##vcore.not (bruijn ##.%x.86 1 0))) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 20 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k31) (bruijn ##.%x.158 2 0) (bruijn ##.%x.159 2 1) (bruijn ##.%x.160 0 0) (bruijn ##.short-threshold.82 3 0)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k31, self))));
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
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.158 ##.%x.159) ((##vcore.car (bruijn ##.rest.41 7 1)) (##vcore.+ (bruijn ##.indent.32 17 2) (bruijn ##.new-indent.81 3 0))) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30)))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30, self)))));
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k22, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.display.5 16 3) (bruijn ##.%k.77 4 0) (##string ##.string.194))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D194.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.166) ((##vcore.+ (bruijn ##.indent.32 14 2) 3)) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 15 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k35) (bruijn ##.rest.41 4 1) (bruijn ##.%x.166 0 0) #f 40))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k35, self))));
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
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.display.5 15 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k34) (##string ##.string.199))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k34, self)))),
      VEncodePointer(&_V10_Dstring_D199.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.165) ((##vcore.+ (bruijn ##.indent.32 13 2) 1)) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.30 14 7) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k33) (bruijn ##.%x.165 0 0)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k33, self))));
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
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.156) ((##vcore.null? (bruijn ##.rest.41 1 1))) (if (bruijn ##.%p.156 0 0) ((bruijn ##.display.5 13 3) (bruijn ##.%k.77 1 0) (##string ##.string.194)) (basic-block 1 1 (##.%p.157) ((##vcore.pair? (bruijn ##.rest.41 2 1))) (if (bruijn ##.%p.157 0 0) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20)) ((bruijn ##.display.5 14 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k32) #\newline)))))
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
      VEncodePointer(&_V10_Dstring_D194.sym, VPOINTER_OTHER));
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k32, self)))),
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
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40")) (basic-block 1 1 (##.%x.167) ((##vcore.cdr (bruijn ##.expr.31 10 1))) (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.40) #f (bruijn ##.loop.40 1 0) (bruijn ##.%k.68 10 0) (bruijn ##.%x.167 0 0) #t)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40, self))));
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
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
  // (basic-block 1 1 (##.%x.155) ((##vcore.car (bruijn ##.expr.31 5 1))) (##qualified-call (vanity pretty-print join-line?) #t (bruijn ##.join-line?.24 6 1) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13) (bruijn ##.%x.155 0 0)))
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
  // (basic-block 2 2 (##.%x.153 ##.%x.154) ((##vcore.car (bruijn ##.expr.31 4 1)) (##vcore.+ (bruijn ##.indent.32 4 2) 1)) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 5 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12) (bruijn ##.%x.153 0 0) (bruijn ##.%x.154 0 1) #f 40))
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
  // (if (bruijn ##.x.1.35 0 0) ((bruijn ##.display.5 5 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7) (bruijn ##.x.1.35 0 0)) ((bruijn ##.display.5 5 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11) (##string ##.string.200)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7, self)))),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D200.sym, VPOINTER_OTHER));
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
  // (if (bruijn ##.%p.70 0 0) ((bruijn ##.write.7 4 5) (bruijn ##.%k.68 2 0) (bruijn ##.expr.31 2 1)) (##qualified-call (vanity pretty-print quotation?) #t (bruijn ##.quotation?.26 3 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6) (bruijn ##.expr.31 2 1)))
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
  // (basic-block 2 2 (##.%x.148 ##.%p.149) ((##vcore.pair? (bruijn ##.expr.31 1 1)) (##vcore.not (bruijn ##.%x.148 0 0))) (if (bruijn ##.%p.149 0 1) ((bruijn ##.write.7 3 5) (bruijn ##.%k.68 1 0) (bruijn ##.expr.31 1 1)) (##qualified-call (vanity pretty-print short?) #t (bruijn ##.short?.27 2 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5) (bruijn ##.expr.31 1 1) (bruijn ##.short-threshold.34 1 4))))
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
  // (if (bruijn ##.ret.46 0 0) (basic-block 1 1 (##.%r.170) ((##vcore.cdr (bruijn ##.ret.46 1 0))) ((bruijn ##.%k.110 2 0) (bruijn ##.%r.170 0 0))) ((bruijn ##.%k.110 1 0) #f))
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
  // ((bruijn ##.assv.8 2 6) (close _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36) (bruijn ##.form.45 0 1) '(##pair ##.pair.218))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[6]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36, self)))),
      _var1,
      VEncodePointer(&_V10_Dpair_D218, VPOINTER_PAIR));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.newline.4 2 2) (bruijn ##.%k.111 0 0))
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
  // (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 1 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print_V0k37) (bruijn ##.expr.47 0 1) 0 #t 40)
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
  // (if (bruijn ##.ret.49 0 0) (basic-block 1 1 (##.%r.172) ((##vcore.cdr (bruijn ##.ret.49 1 0))) ((bruijn ##.%k.112 3 0) (bruijn ##.%r.172 0 0))) ((bruijn ##.%k.112 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
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
  // (basic-block 1 1 (##.%x.171) ((##vcore.car (bruijn ##.expr.48 1 1))) ((bruijn ##.assv.8 3 6) (close _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38) (bruijn ##.%x.171 0 0) '(##pair ##.pair.230)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D230, VPOINTER_PAIR));
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.177) ((##vcore.+ (bruijn ##.n.58 5 2) (bruijn ##.%x.121 1 0) 3)) ((bruijn ##.%k.117 5 0) (bruijn ##.%r.177 0 0)))
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
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.180) ((##vcore.+ (bruijn ##.n.58 6 2) (bruijn ##.%x.124 1 0) 1)) (##qualified-call (vanity pretty-print short? ##.lengthof-list.53 ##.loop.56) #f (bruijn ##.loop.56 7 0) (bruijn ##.%k.117 6 0) (bruijn ##.%x.178 2 0) (bruijn ##.%x.180 0 0)))
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
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.173) ((##vcore.> (bruijn ##.n.58 1 2) (bruijn ##.cutoff.51 6 2))) (if (bruijn ##.%p.173 0 0) ((bruijn ##.return.52 5 1) (bruijn ##.%k.117 1 0) #f) (basic-block 1 1 (##.%p.174) ((##vcore.null? (bruijn ##.expr.57 2 1))) (if (bruijn ##.%p.174 0 0) ((bruijn ##.%k.117 2 0) (bruijn ##.n.58 2 2)) (basic-block 2 2 (##.%x.175 ##.%p.176) ((##vcore.pair? (bruijn ##.expr.57 3 1)) (##vcore.not (bruijn ##.%x.175 0 0))) (if (bruijn ##.%p.176 0 1) (##qualified-call (vanity pretty-print short? ##.lengthof.54) #f (bruijn ##.lengthof.54 6 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39) (bruijn ##.expr.57 3 1)) (basic-block 2 2 (##.%x.178 ##.%x.179) ((##vcore.cdr (bruijn ##.expr.57 4 1)) (##vcore.car (bruijn ##.expr.57 4 1))) (##qualified-call (vanity pretty-print short? ##.lengthof.54) #f (bruijn ##.lengthof.54 7 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40) (bruijn ##.%x.179 0 1)))))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(runtime, _closure_env, 2, _arg0, _arg1);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(runtime, _closure_env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56")) (##qualified-call (vanity pretty-print short? ##.lengthof-list.53 ##.loop.56) #f (bruijn ##.loop.56 0 0) (bruijn ##.%k.116 1 0) (bruijn ##.expr.55 1 1) 1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56, self))));
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
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.184 1 1) ((bruijn ##.%k.134 0 0) 2) ((bruijn ##.%k.134 0 0) 1))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.185) ((##vcore.+ (bruijn ##.%x.130 3 0) (bruijn ##.%x.131 1 0))) ((bruijn ##.%k.127 7 0) (bruijn ##.%r.185 0 0)))
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
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity pretty-print short? ##.lengthof.54) #f (bruijn ##.lengthof.54 6 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45) (bruijn ##.%x.132 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.6 9 4) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44) (bruijn ##.expr.59 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.129 0 0) (basic-block 2 2 (##.%x.183 ##.%p.184) ((##vcore.car (bruijn ##.expr.59 3 1)) (##vcore.eq? (bruijn ##.%x.183 0 0) 'unquote-splicing)) ((close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43))) (##qualified-call (vanity pretty-print short? ##.lengthof-list.53) #f (bruijn ##.lengthof-list.53 3 0) (bruijn ##.%k.127 2 0) (bruijn ##.expr.59 2 1)))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43, self)))));
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
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.181 ##.%p.182) ((##vcore.pair? (bruijn ##.expr.59 1 1)) (##vcore.not (bruijn ##.%x.181 0 0))) (if (bruijn ##.%p.182 0 1) (##qualified-call (vanity pretty-print lengthof-atom) #t (bruijn ##.lengthof-atom.28 5 5) (bruijn ##.%k.127 1 0) (bruijn ##.expr.59 1 1)) (##qualified-call (vanity pretty-print quotation?) #t (bruijn ##.quotation?.26 5 3) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41) (bruijn ##.expr.59 1 1))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41, self))));
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
void _V50_V0vanity_V0pretty__print_V0short_Q_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.186) ((##vcore.> (bruijn ##.len.60 1 0) (bruijn ##.cutoff.51 4 2))) (if (bruijn ##.%p.186 0 0) ((bruijn ##.return.52 3 1) (bruijn ##.%k.115 3 0) #f) ((bruijn ##.%k.115 3 0) #t)))
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
  // (letrec 2 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53") (close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54")) (##qualified-call (vanity pretty-print short? ##.lengthof.54) #f (bruijn ##.lengthof.54 0 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0k46) (bruijn ##.expr.50 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0k46, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(runtime, _closure_env, 2, _arg0, _arg1);
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
  // (##vcore.call/cc (bruijn ##.%k.114 0 0) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0lambda3, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.138 3 0) (bruijn ##.len.187 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.len.187) ((##vcore.string-length (bruijn ##.%x.139 1 0))) ((bruijn ##.close-port.9 5 7) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50) (bruijn ##.port.62 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50, self)))),
      statics->up->vars[0]);
    }
}
static void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.get-output-string.10 3 8) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49) (bruijn ##.port.62 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49, self)))),
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.7 3 5) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48) (bruijn ##.expr.61 1 1) (bruijn ##.port.62 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48, self)))),
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
  // ((bruijn ##.open-output-string.11 2 9) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[9]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47, self)))));
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
  // (basic-block 2 2 (##.%x.188 ##.%r.189) ((##vcore.pair? (bruijn ##.expr.64 1 1)) (##vcore.not (bruijn ##.%x.188 0 0))) ((bruijn ##.%k.140 1 0) (bruijn ##.%r.189 0 1)))
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
static void _V50_V0vanity_V0pretty__print_V0print__indent_V0k51(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.191) ((##vcore.- (bruijn ##.i.65 2 1) 1)) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.30 3 7) (bruijn ##.%k.142 2 0) (bruijn ##.%x.191 0 0)))
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
  // (basic-block 1 1 (##.%p.190) ((##vcore.> (bruijn ##.i.65 1 1) 0)) (if (bruijn ##.%p.190 0 0) ((bruijn ##.display.5 3 3) (close _V50_V0vanity_V0pretty__print_V0print__indent_V0k51) #\space) ((bruijn ##.%k.142 1 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent_V0k51, self)))),
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V0vanity_V0pretty__print_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 if(argc != 10) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0lambda2, got ~D~N"
  "-- expected 10~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[10]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 10, 10, statics);
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
  // (##letrec (vanity pretty-print) 8 ((close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0join__line_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0pretty__print" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0quotation_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0short_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0lengthof__atom" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0atom_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0print__indent" (vanity pretty-print))) (basic-block 2 2 (##.%x.192 ##.%r.193) ((##vcore.cons 'pretty-print (bruijn ##.pretty-print.25 1 2)) (##vcore.cons (bruijn ##.%x.192 0 0) '())) ((bruijn ##.%k.67 5 0) (bruijn ##.%r.193 0 1))))
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0pretty__print_V20_V0lambda2) (##string ##.string.231) (bruijn ##.%x.146 0 0) 'memv 'max 'newline 'display 'cadr 'write 'assv 'close-port 'get-output-string 'open-output-string)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 13,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D231.sym, VPOINTER_OTHER),
      _var0,
      _V0memv,
      _V0max,
      _V0newline,
      _V0display,
      _V0cadr,
      _V0write,
      _V0assv,
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
  // (##vcore.vector (close _V0vanity_V0pretty__print_V20_V0k2) (bruijn ##.%x.147 0 0))
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
  // (##vcore.load-library (close _V0vanity_V0pretty__print_V20_V0k1) (##string ##.string.232))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D232.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0pretty__print_V20 = (VFunc)_V0vanity_V0pretty__print_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0open__output__string = VEncodePointer(VInternSymbol(1528859113, &_VW_V0open__output__string.sym), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VInternSymbol(-1094109327, &_VW_V0get__output__string.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
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
  _V10_Dpair_D230.first = VEncodePointer(&_V10_Dpair_D220, VPOINTER_PAIR);
  _V10_Dpair_D230.rest = VEncodePointer(&_V10_Dpair_D229, VPOINTER_PAIR);
  _V10_Dpair_D229.first = VEncodePointer(&_V10_Dpair_D222, VPOINTER_PAIR);
  _V10_Dpair_D229.rest = VEncodePointer(&_V10_Dpair_D228, VPOINTER_PAIR);
  _V10_Dpair_D228.first = VEncodePointer(&_V10_Dpair_D224, VPOINTER_PAIR);
  _V10_Dpair_D228.rest = VEncodePointer(&_V10_Dpair_D227, VPOINTER_PAIR);
  _V10_Dpair_D227.first = VEncodePointer(&_V10_Dpair_D226, VPOINTER_PAIR);
  _V10_Dpair_D227.rest = VNULL;
  _V10_Dpair_D226.first = _V0unquote__splicing;
  _V10_Dpair_D226.rest = VEncodePointer(&_V10_Dstring_D225.sym, VPOINTER_OTHER);
  _V10_Dpair_D224.first = _V0unquote;
  _V10_Dpair_D224.rest = VEncodePointer(&_V10_Dstring_D223.sym, VPOINTER_OTHER);
  _V10_Dpair_D222.first = _V0quasiquote;
  _V10_Dpair_D222.rest = VEncodePointer(&_V10_Dstring_D221.sym, VPOINTER_OTHER);
  _V10_Dpair_D220.first = _V0quote;
  _V10_Dpair_D220.rest = VEncodePointer(&_V10_Dstring_D219.sym, VPOINTER_OTHER);
  _V10_Dpair_D218.first = VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR);
  _V10_Dpair_D218.rest = VEncodePointer(&_V10_Dpair_D217, VPOINTER_PAIR);
  _V10_Dpair_D217.first = VEncodePointer(&_V10_Dpair_D202, VPOINTER_PAIR);
  _V10_Dpair_D217.rest = VEncodePointer(&_V10_Dpair_D216, VPOINTER_PAIR);
  _V10_Dpair_D216.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D216.rest = VEncodePointer(&_V10_Dpair_D215, VPOINTER_PAIR);
  _V10_Dpair_D215.first = VEncodePointer(&_V10_Dpair_D204, VPOINTER_PAIR);
  _V10_Dpair_D215.rest = VEncodePointer(&_V10_Dpair_D214, VPOINTER_PAIR);
  _V10_Dpair_D214.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D214.rest = VEncodePointer(&_V10_Dpair_D213, VPOINTER_PAIR);
  _V10_Dpair_D213.first = VEncodePointer(&_V10_Dpair_D206, VPOINTER_PAIR);
  _V10_Dpair_D213.rest = VEncodePointer(&_V10_Dpair_D212, VPOINTER_PAIR);
  _V10_Dpair_D212.first = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D212.rest = VEncodePointer(&_V10_Dpair_D211, VPOINTER_PAIR);
  _V10_Dpair_D211.first = VEncodePointer(&_V10_Dpair_D208, VPOINTER_PAIR);
  _V10_Dpair_D211.rest = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D210.first = VEncodePointer(&_V10_Dpair_D209, VPOINTER_PAIR);
  _V10_Dpair_D210.rest = VNULL;
  _V10_Dpair_D209.first = _V0letrec_S;
  _V10_Dpair_D209.rest = VEncodeInt(2l);
  _V10_Dpair_D208.first = _V0let_S;
  _V10_Dpair_D208.rest = VEncodeInt(2l);
  _V10_Dpair_D207.first = _V0letrec;
  _V10_Dpair_D207.rest = VEncodeInt(2l);
  _V10_Dpair_D206.first = _V0let;
  _V10_Dpair_D206.rest = VEncodeInt(2l);
  _V10_Dpair_D205.first = _V0if;
  _V10_Dpair_D205.rest = VEncodeInt(4l);
  _V10_Dpair_D204.first = _V0continuation;
  _V10_Dpair_D204.rest = VEncodeInt(2l);
  _V10_Dpair_D203.first = _V0lambda;
  _V10_Dpair_D203.rest = VEncodeInt(2l);
  _V10_Dpair_D202.first = _V0set_B;
  _V10_Dpair_D202.rest = VEncodeInt(2l);
  _V10_Dpair_D201.first = _V0define;
  _V10_Dpair_D201.rest = VEncodeInt(2l);
  _V10_Dpair_D198.first = _V0define;
  _V10_Dpair_D198.rest = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D197.first = _V0lambda;
  _V10_Dpair_D197.rest = VEncodePointer(&_V10_Dpair_D196, VPOINTER_PAIR);
  _V10_Dpair_D196.first = _V0continuation;
  _V10_Dpair_D196.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
