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

VWEAK VWORD _V0pretty__print;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0pretty__print = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "pretty-print" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D203 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D202 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D201 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D200 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
VWEAK VWORD _V0let_S;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0let_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "let*" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D199 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D198 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ". " };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D197 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D196 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D195 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
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
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D194 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
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
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0print__indent, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0atom_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0lengthof__atom, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0quotation_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0join__line_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _var0, _var1, _var2, _var3, _var4);
static void _V0vanity_V0pretty__print_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.67 2 0) (##string ##.string.194) (bruijn ##.x.68 0 0) 'memv 'max 'newline 'display 'cadr 'write 'assv 'close-port 'get-output-string 'open-output-string)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 13,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D194.sym, VPOINTER_OTHER),
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
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0pretty__print_V20_V0k2) (bruijn ##.x.69 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0pretty__print_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0pretty__print_V20_V0k1) (##string ##.string.195))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D195.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.indent-this?.32 1 3) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.29 2 7) (bruijn ##.k.115 0 0) (bruijn ##.indent.31 1 2)) ((bruijn ##.k.115 0 0) #f))
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.30 4 1)) 'unquote-splicing) ((bruijn ##.k.78 0 0) 2) ((bruijn ##.k.78 0 0) 1))
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[1]),
        _V0unquote__splicing))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.178) ((##vcore.+ (bruijn ##.indent.31 5 2) (bruijn ##.x.76 1 0))) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.22 6 0) (bruijn ##.k.71 5 0) (bruijn ##.x.74 2 0) (bruijn ##.reg.178 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cadr.5 4 5) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8) (bruijn ##.expr.30 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.185) ((##vcore.+ 2 (bruijn ##.x.109 1 0))) ((bruijn ##.k.108 2 0) (bruijn ##.reg.185 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(2l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.join-line.36 1 0) (##qualified-call (vanity pretty-print lengthof-atom) #t (bruijn ##.lengthof-atom.27 6 5) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15) (##inline ##vcore.car (bruijn ##.expr.30 5 1))) ((bruijn ##.k.108 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0lengthof__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.join-line.36 2 0) ((bruijn ##.k.107 0 0) (bruijn ##.join-line.36 2 0)) ((bruijn ##.k.107 0 0) 1))
if(VDecodeBool(
statics->up->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.41 1 2) ((bruijn ##.k.103 0 0) (bruijn ##.join-line.36 5 0)) ((bruijn ##.k.103 0 0) #f))
if(VDecodeBool(
statics->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.101 1 0) ((bruijn ##.display.4 12 4) (bruijn ##.k.102 0 0) (##string ##.string.197)) ((bruijn ##.newline.3 12 3) (bruijn ##.k.102 0 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D197.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 1,
      _var0);
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.41 2 2) ((bruijn ##.k.100 0 0) (bruijn ##.first-indent.37 5 0)) ((bruijn ##.k.100 0 0) (bruijn ##.new-indent.38 4 0)))
if(VDecodeBool(
statics->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.41 3 2) ((bruijn ##.memv.1 13 1) (bruijn ##.k.95 0 0) (##inline ##vcore.car (bruijn ##.expr.30 11 1)) (##inline ##vcore.qcons 'define (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation '())))) ((bruijn ##.k.95 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)),
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VNULL))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.91 1 0) (basic-block 2 2 (##.reg.181 ##.reg.182) ((##vcore.+ (bruijn ##.indent.31 13 2) (bruijn ##.new-indent.38 7 0)) (##vcore.- 80 (bruijn ##.reg.181 0 0))) ((bruijn ##.max.2 15 2) (bruijn ##.k.92 1 0) 40 (bruijn ##.reg.182 0 1))) ((bruijn ##.k.92 0 0) 40))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 13-1, 2),
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VEncodeInt(80l),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      statics->vars[0],
      VEncodeInt(40l),
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(40l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.41 6 2) ((bruijn ##.k.90 0 0) (bruijn ##.join-line.36 10 0)) ((bruijn ##.k.90 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 6-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.39) #f (bruijn ##.loop.39 7 0) (bruijn ##.k.80 6 0) (##inline ##vcore.cdr (bruijn ##.rest.40 6 1)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    VWORD _arg2 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.22 15 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k31) (##inline ##vcore.car (bruijn ##.rest.40 6 1)) (bruijn ##.reg.180 1 0) (##inline ##vcore.not (bruijn ##.x.89 0 0)) (bruijn ##.x.85 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k31, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1));
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VInlineNot2(runtime,
        _var0);
    VWORD _arg4 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.180) ((##vcore.+ (bruijn ##.indent.31 13 2) (bruijn ##.x.84 3 0))) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k29) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k30)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 13-1, 2),
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k30, self)))));
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k27) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k28))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k28, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k25) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k26))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k25, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k26, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k23) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k24))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k24, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k21) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k22, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.display.4 12 4) (bruijn ##.k.80 2 0) (##string ##.string.196))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D196.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.184) ((##vcore.+ (bruijn ##.indent.31 10 2) 3)) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.22 11 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k35) (bruijn ##.rest.40 2 1) (bruijn ##.reg.184 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 10-1, 2),
      VEncodeInt(3l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k35, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
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
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.display.4 11 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k34) (##string ##.string.198))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k34, self)))),
      VEncodePointer(&_V10_Dstring_D198.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.183) ((##vcore.+ (bruijn ##.indent.31 9 2) 1)) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.29 10 7) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k33) (bruijn ##.reg.183 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k33, self))));
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
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.rest.40 0 1)) ((bruijn ##.display.4 10 4) (bruijn ##.k.80 0 0) (##string ##.string.196)) (if (##inline ##vcore.pair? (bruijn ##.rest.40 0 1)) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k19) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k20)) ((bruijn ##.display.4 10 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k32) #\newline)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D196.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k20, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39_V0k32, self)))),
      VEncodeChar('\n'));
}
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39")) (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.39) #f (bruijn ##.loop.39 0 0) (bruijn ##.k.71 7 0) (##inline ##vcore.cdr (bruijn ##.expr.30 7 1)) #t))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1));
    VWORD _arg2 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D39(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16" };
 VRecordCall2(runtime, &dbg);
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13" };
 VRecordCall2(runtime, &dbg);
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
  // (##qualified-call (vanity pretty-print join-line?) #t (bruijn ##.join-line?.23 4 1) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13) (##inline ##vcore.car (bruijn ##.expr.30 3 1)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0join__line_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.179) ((##vcore.+ (bruijn ##.indent.31 3 2) 1)) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.22 4 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12) (##inline ##vcore.car (bruijn ##.expr.30 3 1)) (bruijn ##.reg.179 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[1]);
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
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.0.34 0 0) ((bruijn ##.display.4 4 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7) (bruijn ##.x.0.34 0 0)) ((bruijn ##.display.4 4 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11) (##string ##.string.199)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7, self)))),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D199.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.73 0 0) ((bruijn ##.write.6 3 6) (bruijn ##.k.71 1 0) (bruijn ##.expr.30 1 1)) (##qualified-call (vanity pretty-print quotation?) #t (bruijn ##.quotation?.25 2 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6) (bruijn ##.expr.30 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6, self))));
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
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k4(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.30 0 1))) ((bruijn ##.write.6 2 6) (bruijn ##.k.71 0 0) (bruijn ##.expr.30 0 1)) (##qualified-call (vanity pretty-print short?) #t (bruijn ##.short?.26 1 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5) (bruijn ##.expr.30 0 1) (bruijn ##.short-threshold.33 0 4)))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        self->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[6]), 2,
      self->vars[0],
      self->vars[1]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q, _V60_V0vanity_V0pretty__print)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl" };
 VRecordCall2(runtime, &dbg);
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.45 0 0) ((bruijn ##.k.116 1 0) (##inline ##vcore.cdr (bruijn ##.ret.45 0 0))) ((bruijn ##.k.116 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0join__line_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0join__line_Q" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.assv.7 2 7) (close _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36) (bruijn ##.form.44 0 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'define '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'set! '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'lambda '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'continuation '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'if '4) (##inline ##vcore.qcons (##inline ##vcore.qcons 'let '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'letrec '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'let* '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'letrec* '2) '()))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36, self)))),
      _var1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0define,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set_B,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0continuation,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VEncodeInt(4l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0letrec,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let_S,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0letrec_S,
        VEncodeInt(2l)),
        VNULL))))))))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.newline.3 2 3) (bruijn ##.k.135 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0pretty__print(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print" };
 VRecordCall2(runtime, &dbg);
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
  // (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.22 1 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print_V0k37) (bruijn ##.expr.46 0 1) 0 #t 40)
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.48 0 0) ((bruijn ##.k.136 1 0) (##inline ##vcore.cdr (bruijn ##.ret.48 0 0))) ((bruijn ##.k.136 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0quotation_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0quotation_Q" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.assv.7 2 7) (close _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38) (##inline ##vcore.car (bruijn ##.expr.47 0 1)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##.string.200)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##.string.201)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##.string.202)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##.string.203)) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38, self)))),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VEncodePointer(&_V10_Dstring_D200.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        VEncodePointer(&_V10_Dstring_D201.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote,
        VEncodePointer(&_V10_Dstring_D202.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VEncodePointer(&_V10_Dstring_D203.sym, VPOINTER_OTHER)),
        VNULL)))));
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.187) ((##vcore.+ (bruijn ##.n.57 3 2) (bruijn ##.x.153 1 0) 3)) ((bruijn ##.k.149 3 0) (bruijn ##.reg.187 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      statics->vars[0],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.188) ((##vcore.+ (bruijn ##.n.57 3 2) (bruijn ##.x.156 1 0) 1)) (##qualified-call (vanity pretty-print short? ##.lengthof-list.52 ##.loop.55) #f (bruijn ##.loop.55 4 0) (bruijn ##.k.149 3 0) (##inline ##vcore.cdr (bruijn ##.expr.56 3 1)) (bruijn ##.reg.188 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      statics->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.186) ((##vcore.> (bruijn ##.n.57 1 2) (bruijn ##.cutoff.50 6 2))) (if (bruijn ##.reg.186 0 0) ((bruijn ##.return.51 5 1) (bruijn ##.k.149 1 0) #f) (if (##inline ##vcore.null? (bruijn ##.expr.56 1 1)) ((bruijn ##.k.149 1 0) (bruijn ##.n.57 1 2)) (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.56 1 1))) (##qualified-call (vanity pretty-print short? ##.lengthof.53) #f (bruijn ##.lengthof.53 4 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k39) (bruijn ##.expr.56 1 1)) (##qualified-call (vanity pretty-print short? ##.lengthof.53) #f (bruijn ##.lengthof.53 4 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k40) (##inline ##vcore.car (bruijn ##.expr.56 1 1)))))))
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
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k39, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55_V0k40, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
}
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55")) (##qualified-call (vanity pretty-print short? ##.lengthof-list.52 ##.loop.55) #f (bruijn ##.loop.55 0 0) (bruijn ##.k.148 1 0) (bruijn ##.expr.54 1 1) 1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55, self))));
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
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52_V10_Dloop_D55(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.58 2 1)) 'unquote-splicing) ((bruijn ##.k.166 0 0) 2) ((bruijn ##.k.166 0 0) 1))
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _V0unquote__splicing))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.189) ((##vcore.+ (bruijn ##.x.162 3 0) (bruijn ##.x.163 1 0))) ((bruijn ##.k.159 5 0) (bruijn ##.reg.189 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity pretty-print short? ##.lengthof.53) #f (bruijn ##.lengthof.53 4 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k45) (bruijn ##.x.164 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k45, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.5 7 5) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k44) (bruijn ##.expr.58 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k44, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.161 0 0) ((close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k42) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k43)) (##qualified-call (vanity pretty-print short? ##.lengthof-list.52) #f (bruijn ##.lengthof-list.52 2 0) (bruijn ##.k.159 1 0) (bruijn ##.expr.58 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k43, self)))));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.58 0 1))) (##qualified-call (vanity pretty-print lengthof-atom) #t (bruijn ##.lengthof-atom.27 4 5) (bruijn ##.k.159 0 0) (bruijn ##.expr.58 0 1)) (##qualified-call (vanity pretty-print quotation?) #t (bruijn ##.quotation?.25 4 3) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k41) (bruijn ##.expr.58 0 1)))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)))) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53_V0k41, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0quotation_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.190) ((##vcore.> (bruijn ##.len.59 1 0) (bruijn ##.cutoff.50 4 2))) (if (bruijn ##.reg.190 0 0) ((bruijn ##.return.51 3 1) (bruijn ##.k.147 3 0) #f) ((bruijn ##.k.147 3 0) #t)))
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
void _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 2 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52") (close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53")) (##qualified-call (vanity pretty-print short? ##.lengthof.53) #f (bruijn ##.lengthof.53 0 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0k46) (bruijn ##.expr.49 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D52, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53, self))));
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
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D53(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.call/cc (bruijn ##.k.146 0 0) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.170 3 0) (bruijn ##.reg.191 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.191) ((##vcore.string-length (bruijn ##.x.171 1 0))) ((bruijn ##.close-port.8 5 8) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50) (bruijn ##.port.61 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50, self)))),
      statics->up->vars[0]);
    }
}
static void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.get-output-string.9 3 9) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49) (bruijn ##.port.61 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49, self)))),
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.6 3 6) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48) (bruijn ##.expr.60 1 1) (bruijn ##.port.61 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0lengthof__atom" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.open-output-string.10 2 10) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47, self)))));
}
void _V50_V0vanity_V0pretty__print_V0atom_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0atom_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0atom_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.172 0 0) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.63 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)));
}
static void _V50_V0vanity_V0pretty__print_V0print__indent_V0k51(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.193) ((##vcore.- (bruijn ##.i.64 2 1) 1)) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.29 3 7) (bruijn ##.k.174 2 0) (bruijn ##.reg.193 0 0)))
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0print__indent" };
 VRecordCall2(runtime, &dbg);
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
  // (basic-block 1 1 (##.reg.192) ((##vcore.> (bruijn ##.i.64 1 1) 0)) (if (bruijn ##.reg.192 0 0) ((bruijn ##.display.4 3 4) (close _V50_V0vanity_V0pretty__print_V0print__indent_V0k51) #\space) ((bruijn ##.k.174 1 0) #f)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent_V0k51, self)))),
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V0vanity_V0pretty__print_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 11) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity pretty-print) 8 ((close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl" "_V60_V0vanity_V0pretty__print") (close "_V50_V0vanity_V0pretty__print_V0join__line_Q" "_V60_V0vanity_V0pretty__print") (close "_V50_V0vanity_V0pretty__print_V0pretty__print" "_V60_V0vanity_V0pretty__print") (close "_V50_V0vanity_V0pretty__print_V0quotation_Q" "_V60_V0vanity_V0pretty__print") (close "_V50_V0vanity_V0pretty__print_V0short_Q" "_V60_V0vanity_V0pretty__print") (close "_V50_V0vanity_V0pretty__print_V0lengthof__atom" "_V60_V0vanity_V0pretty__print") (close "_V50_V0vanity_V0pretty__print_V0atom_Q" "_V60_V0vanity_V0pretty__print") (close "_V50_V0vanity_V0pretty__print_V0print__indent" "_V60_V0vanity_V0pretty__print")) ((bruijn ##.k.70 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'pretty-print (bruijn ##.pretty-print.24 0 2)) '())))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pretty__print,
        self->vars[2]),
        VNULL));
    }
}
static void _V0vanity_V0pretty__print_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.66 0 0) (close _V0vanity_V0pretty__print_V20_V0lambda2) (close _V0vanity_V0pretty__print_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0pretty__print_V20 = (VFunc)_V0vanity_V0pretty__print_V20_V0lambda1;
