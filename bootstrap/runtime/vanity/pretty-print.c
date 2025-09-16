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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D225 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D224 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0pretty__print;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0pretty__print = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "pretty-print" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D223 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D222 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ". " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D221 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D220 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
VWEAK VWORD _V0let_S;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0let_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "let*" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D219 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D218 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D217 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D216 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static __attribute__((constructor)) void VDllMain1() {
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0write = VEncodePointer(VLookupConstant("_V0write", &_VW_V0write), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VLookupConstant("_V0newline", &_VW_V0newline), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0max = VEncodePointer(VLookupConstant("_V0max", &_VW_V0max), VPOINTER_OTHER);
  _V0pretty__print = VEncodePointer(VLookupConstant("_V0pretty__print", &_VW_V0pretty__print), VPOINTER_OTHER);
  _V0letrec_S = VEncodePointer(VLookupConstant("_V0letrec_S", &_VW_V0letrec_S), VPOINTER_OTHER);
  _V0let_S = VEncodePointer(VLookupConstant("_V0let_S", &_VW_V0let_S), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0let = VEncodePointer(VLookupConstant("_V0let", &_VW_V0let), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VLookupConstant("_V0continuation", &_VW_V0continuation), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VLookupConstant("_V0unquote", &_VW_V0unquote), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VLookupConstant("_V0quasiquote", &_VW_V0quasiquote), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0unquote__splicing = VEncodePointer(VLookupConstant("_V0unquote__splicing", &_VW_V0unquote__splicing), VPOINTER_OTHER);
}
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0join__line_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0quotation_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0lengthof__atom, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0atom_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0print__indent, _var0, _var1);
void _V50_V0vanity_V0pretty__print_V0print__indent_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0print__indent_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.201) ((##vcore.- (bruijn ##.i.31 3 1) 1)) (##qualified-call (vanity pretty-print print-indent) (bruijn ##.print-indent.23 4 0) (bruijn ##.k.78 3 0) (bruijn ##.reg.201 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0print__indent(runtime, _closure->env, 2, _arg0, _arg1);
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
  // (basic-block 1 1 (##.reg.200) ((##vcore.> (bruijn ##.i.31 1 1) 0)) (if (bruijn ##.reg.200 0 0) ((bruijn ##.x.68 12 0) (close _V50_V0vanity_V0pretty__print_V0print__indent_V0k13) #\space) ((bruijn ##.k.78 1 0) #f)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent_V0k13, self)))),
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0pretty__print_V0atom_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0atom_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.82 0 0) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.32 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)));
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.84 5 0) (bruijn ##.reg.202 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.202) ((##vcore.string-length (bruijn ##.x.87 1 0))) ((bruijn ##.x.69 14 0) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k17) (bruijn ##.port.34 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k17, self)))),
      statics->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.70 11 0) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k16) (bruijn ##.port.34 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k16, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.71 9 0) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k15) (bruijn ##.expr.33 1 1) (bruijn ##.port.34 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k15, self)))),
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
  // ((bruijn ##.x.72 7 0) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k14))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k14, self)))));
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.204) ((##vcore.+ (bruijn ##.n.44 3 2) (bruijn ##.x.95 1 0) 3)) ((bruijn ##.k.91 3 0) (bruijn ##.reg.204 0 0)))
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
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.205) ((##vcore.+ (bruijn ##.n.44 3 2) (bruijn ##.x.98 1 0) 1)) (##qualified-call (vanity pretty-print short? ##.lengthof-list.39 ##.loop.42) (bruijn ##.loop.42 4 0) (bruijn ##.k.91 3 0) (##inline ##vcore.cdr (bruijn ##.expr.43 3 1)) (bruijn ##.reg.205 0 0)))
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
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.203) ((##vcore.> (bruijn ##.n.44 1 2) (bruijn ##.cutoff.37 6 2))) (if (bruijn ##.reg.203 0 0) ((bruijn ##.return.38 5 1) (bruijn ##.k.91 1 0) #f) (if (##inline ##vcore.null? (bruijn ##.expr.43 1 1)) ((bruijn ##.k.91 1 0) (bruijn ##.n.44 1 2)) (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.43 1 1))) (##qualified-call (vanity pretty-print short? ##.lengthof.40) (bruijn ##.lengthof.40 4 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42_V0k18) (bruijn ##.expr.43 1 1)) (##qualified-call (vanity pretty-print short? ##.lengthof.40) (bruijn ##.lengthof.40 4 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42_V0k19) (##inline ##vcore.car (bruijn ##.expr.43 1 1)))))))
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
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42_V0k18, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42_V0k19, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
}
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42")) (##qualified-call (vanity pretty-print short? ##.lengthof-list.39 ##.loop.42) (bruijn ##.loop.42 0 0) (bruijn ##.k.90 1 0) (bruijn ##.expr.41 1 1) 1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(1l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39_V10_Dloop_D42(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.107 1 0) ((bruijn ##.k.108 0 0) 2) ((bruijn ##.k.108 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.206) ((##vcore.+ (bruijn ##.x.104 3 0) (bruijn ##.x.105 1 0))) ((bruijn ##.k.101 6 0) (bruijn ##.reg.206 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity pretty-print short? ##.lengthof.40) (bruijn ##.lengthof.40 5 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k25) (bruijn ##.x.106 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k25, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 12 0) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k24) (bruijn ##.expr.45 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k24, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k22) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k23))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k22, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k23, self)))));
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.103 0 0) (##vcore.eqv? (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k21) (##inline ##vcore.car (bruijn ##.expr.45 1 1)) 'unquote-splicing) (##qualified-call (vanity pretty-print short? ##.lengthof-list.39) (bruijn ##.lengthof-list.39 2 0) (bruijn ##.k.101 1 0) (bruijn ##.expr.45 1 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k21, self)))),
      VInlineCar2(runtime,
        statics->vars[1]),
      _V0unquote__splicing);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.45 0 1))) (##qualified-call (vanity pretty-print lengthof-atom) (bruijn ##.lengthof-atom.25 4 2) (bruijn ##.k.101 0 0) (bruijn ##.expr.45 0 1)) (##qualified-call (vanity pretty-print quotation?) (bruijn ##.quotation?.27 4 4) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k20) (bruijn ##.expr.45 0 1)))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0lengthof__atom(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[4]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40_V0k20, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0quotation_Q(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.207) ((##vcore.> (bruijn ##.len.46 1 0) (bruijn ##.cutoff.37 4 2))) (if (bruijn ##.reg.207 0 0) ((bruijn ##.return.38 3 1) (bruijn ##.k.89 3 0) #f) ((bruijn ##.k.89 3 0) #t)))
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
void _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 2 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39") (close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40")) (##qualified-call (vanity pretty-print short? ##.lengthof.40) (bruijn ##.lengthof.40 0 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0k26) (bruijn ##.expr.36 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D39, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0k26, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D40(runtime, _closure->env, 2, _arg0, _arg1);
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
  // (##vcore.call/cc (bruijn ##.k.88 0 0) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda2))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0lambda2, self)))));
}
void _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.48 0 0) ((bruijn ##.k.112 1 0) (##inline ##vcore.cdr (bruijn ##.ret.48 0 0))) ((bruijn ##.k.112 1 0) #f))
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
  // ((bruijn ##.x.74 5 0) (close _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k27) (##inline ##vcore.car (bruijn ##.expr.47 0 1)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##.string.216)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##.string.217)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##.string.218)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##.string.219)) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k27, self)))),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VEncodePointer(&_V10_Dstring_D216.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        VEncodePointer(&_V10_Dstring_D217.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote,
        VEncodePointer(&_V10_Dstring_D218.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VEncodePointer(&_V10_Dstring_D219.sym, VPOINTER_OTHER)),
        VNULL)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.75 5 0) (bruijn ##.k.122 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->vars[0]);
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
  // (##qualified-call (vanity pretty-print pretty-print-impl) (bruijn ##.pretty-print-impl.30 1 7) (close _V50_V0vanity_V0pretty__print_V0pretty__print_V0k28) (bruijn ##.expr.49 0 1) 0 #t 40)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[7]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print_V0k28, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      VEncodeBool(true);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.51 0 0) ((bruijn ##.k.124 1 0) (##inline ##vcore.cdr (bruijn ##.ret.51 0 0))) ((bruijn ##.k.124 1 0) #f))
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
  // ((bruijn ##.x.74 5 0) (close _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k29) (bruijn ##.form.50 0 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'define '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'set! '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'lambda '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'continuation '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'if '4) (##inline ##vcore.qcons (##inline ##vcore.qcons 'let '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'letrec '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'let* '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'letrec* '2) '()))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q_V0k29, self)))),
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
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.indent-this?.54 1 3) (##qualified-call (vanity pretty-print print-indent) (bruijn ##.print-indent.23 2 0) (bruijn ##.k.197 0 0) (bruijn ##.indent.53 1 2)) ((bruijn ##.k.197 0 0) #f))
if(VDecodeBool(
statics->vars[3])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0print__indent(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.151 1 0) ((bruijn ##.k.152 0 0) 2) ((bruijn ##.k.152 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.208) ((##vcore.+ (bruijn ##.indent.53 8 2) (bruijn ##.x.150 1 0))) (##qualified-call (vanity pretty-print pretty-print-impl) (bruijn ##.pretty-print-impl.30 9 7) (bruijn ##.k.143 8 0) (bruijn ##.x.148 3 0) (bruijn ##.reg.208 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 2),
      statics->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k37) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k38))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k37, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k38, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k36) (##inline ##vcore.car (bruijn ##.expr.52 5 1)) 'unquote-splicing)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k36, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)),
      _V0unquote__splicing);
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 10 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k35) (bruijn ##.expr.52 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k35, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.215) ((##vcore.+ 2 (bruijn ##.x.191 1 0))) ((bruijn ##.k.190 2 0) (bruijn ##.reg.215 0 0)))
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
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.join-line.58 1 0) (##qualified-call (vanity pretty-print lengthof-atom) (bruijn ##.lengthof-atom.25 9 2) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k43) (##inline ##vcore.car (bruijn ##.expr.52 8 1))) ((bruijn ##.k.190 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 2));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k43, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0lengthof__atom(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.join-line.58 2 0) ((bruijn ##.k.189 0 0) (bruijn ##.join-line.58 2 0)) ((bruijn ##.k.189 0 0) 1))
if(VDecodeBool(
statics->up->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.63 1 2) ((bruijn ##.k.181 0 0) (bruijn ##.join-line.58 5 0)) ((bruijn ##.k.181 0 0) #f))
if(VDecodeBool(
statics->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.179 1 0) ((bruijn ##.x.68 24 0) (bruijn ##.k.180 0 0) (##string ##.string.221)) ((bruijn ##.x.75 17 0) (bruijn ##.k.180 0 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D221.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      _var0);
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.63 3 2) ((bruijn ##.k.178 0 0) (bruijn ##.first-indent.59 6 0)) ((bruijn ##.k.178 0 0) (bruijn ##.new-indent.60 5 0)))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.63 4 2) ((bruijn ##.x.76 18 0) (bruijn ##.k.173 0 0) (##inline ##vcore.car (bruijn ##.expr.52 15 1)) (##inline ##vcore.qcons 'define (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation '())))) ((bruijn ##.k.173 0 0) #f))
if(VDecodeBool(
statics->up->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 1)),
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
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.169 1 0) (basic-block 2 2 (##.reg.211 ##.reg.212) ((##vcore.+ (bruijn ##.indent.53 17 2) (bruijn ##.new-indent.60 8 0)) (##vcore.- 80 (bruijn ##.reg.211 0 0))) ((bruijn ##.x.77 19 0) (bruijn ##.k.170 1 0) 40 (bruijn ##.reg.212 0 1))) ((bruijn ##.k.170 0 0) 40))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 17-1, 2),
      VGetArg(statics, 8-1, 0));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VEncodeInt(80l),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      statics->vars[0],
      VEncodeInt(40l),
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(40l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.63 7 2) ((bruijn ##.k.168 0 0) (bruijn ##.join-line.58 11 0)) ((bruijn ##.k.168 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.61) (bruijn ##.loop.61 9 0) (bruijn ##.k.156 8 0) (##inline ##vcore.cdr (bruijn ##.rest.62 8 1)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity pretty-print pretty-print-impl) (bruijn ##.pretty-print-impl.30 19 7) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k59) (##inline ##vcore.car (bruijn ##.rest.62 7 1)) (bruijn ##.reg.210 1 0) (##inline ##vcore.not (bruijn ##.x.167 0 0)) (bruijn ##.x.163 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k59, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1));
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VInlineNot2(runtime,
        _var0);
    VWORD _arg4 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.210) ((##vcore.+ (bruijn ##.indent.53 17 2) (bruijn ##.x.162 3 0))) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k57) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k58)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 17-1, 2),
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k58, self)))));
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k55) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k56))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k55, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k56, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k53) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k54))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k53, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k54, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k51) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k52))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k52, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k49) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k50))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k49, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k50, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.68 28 0) (bruijn ##.k.156 6 0) (##string ##.string.220))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D220.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.214) ((##vcore.+ (bruijn ##.indent.53 16 2) 3)) (##qualified-call (vanity pretty-print pretty-print-impl) (bruijn ##.pretty-print-impl.30 17 7) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k63) (bruijn ##.rest.62 5 1) (bruijn ##.reg.214 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 16-1, 2),
      VEncodeInt(3l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k63, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.68 25 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k62) (##string ##.string.222))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k62, self)))),
      VEncodePointer(&_V10_Dstring_D222.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.213) ((##vcore.+ (bruijn ##.indent.53 13 2) 1)) (##qualified-call (vanity pretty-print print-indent) (bruijn ##.print-indent.23 14 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k61) (bruijn ##.reg.213 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 13-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k61, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0print__indent(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.rest.62 0 1)) ((bruijn ##.x.68 22 0) (bruijn ##.k.156 0 0) (##string ##.string.220)) (if (##inline ##vcore.pair? (bruijn ##.rest.62 0 1)) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k47) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k48)) ((bruijn ##.x.68 22 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k60) #\newline)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D220.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k47, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k48, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61_V0k60, self)))),
      VEncodeChar('\n'));
}
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61")) (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.61) (bruijn ##.loop.61 0 0) (bruijn ##.k.143 10 0) (##inline ##vcore.cdr (bruijn ##.expr.52 10 1)) #t))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D61(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k45) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k46))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k46, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k42) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k44))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k44, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity pretty-print join-line?) (bruijn ##.join-line?.29 7 6) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k41) (##inline ##vcore.car (bruijn ##.expr.52 6 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 6));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k41, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0join__line_Q(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.209) ((##vcore.+ (bruijn ##.indent.53 5 2) 1)) (##qualified-call (vanity pretty-print pretty-print-impl) (bruijn ##.pretty-print-impl.30 6 7) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k40) (##inline ##vcore.car (bruijn ##.expr.52 5 1)) (bruijn ##.reg.209 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k40, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1));
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.0.56 0 0) ((bruijn ##.x.68 14 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k34) (bruijn ##.x.0.56 0 0)) ((bruijn ##.x.68 14 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k39) (##string ##.string.223)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k34, self)))),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k39, self)))),
      VEncodePointer(&_V10_Dstring_D223.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.146 0 0) ((bruijn ##.x.71 10 0) (bruijn ##.k.143 2 0) (bruijn ##.expr.52 2 1)) (##qualified-call (vanity pretty-print quotation?) (bruijn ##.quotation?.27 3 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k33) (bruijn ##.expr.52 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[4]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k33, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0quotation_Q(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.52 1 1))) ((bruijn ##.x.71 9 0) (bruijn ##.k.143 1 0) (bruijn ##.expr.52 1 1)) (##qualified-call (vanity pretty-print short?) (bruijn ##.short?.26 2 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k32) (bruijn ##.expr.52 1 1) (bruijn ##.short-threshold.55 1 4)))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[3]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k32, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[4];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
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
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k30) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k31))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k30, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k31, self)))));
}
static void _V0vanity_V0pretty__print_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 8 ((close "_V50_V0vanity_V0pretty__print_V0print__indent") (close "_V50_V0vanity_V0pretty__print_V0atom_Q") (close "_V50_V0vanity_V0pretty__print_V0lengthof__atom") (close "_V50_V0vanity_V0pretty__print_V0short_Q") (close "_V50_V0vanity_V0pretty__print_V0quotation_Q") (close "_V50_V0vanity_V0pretty__print_V0pretty__print") (close "_V50_V0vanity_V0pretty__print_V0join__line_Q") (close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl")) ((bruijn ##.k.67 13 0) (##inline ##vcore.cons (##inline ##vcore.cons 'pretty-print (bruijn ##.pretty-print.28 0 5)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0atom_Q, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pretty__print,
        self->vars[5]),
        VNULL));
    }
}
static void _V0vanity_V0pretty__print_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 9 0) (close _V0vanity_V0pretty__print_V20_V0k12) 'max)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k12, self)))),
      _V0max);
}
static void _V0vanity_V0pretty__print_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 8 0) (close _V0vanity_V0pretty__print_V20_V0k11) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k11, self)))),
      _V0memv);
}
static void _V0vanity_V0pretty__print_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 7 0) (close _V0vanity_V0pretty__print_V20_V0k10) 'newline)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k10, self)))),
      _V0newline);
}
static void _V0vanity_V0pretty__print_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 6 0) (close _V0vanity_V0pretty__print_V20_V0k9) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k9, self)))),
      _V0assv);
}
static void _V0vanity_V0pretty__print_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 5 0) (close _V0vanity_V0pretty__print_V20_V0k8) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k8, self)))),
      _V0cadr);
}
static void _V0vanity_V0pretty__print_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 4 0) (close _V0vanity_V0pretty__print_V20_V0k7) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k7, self)))),
      _V0open__output__string);
}
static void _V0vanity_V0pretty__print_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 3 0) (close _V0vanity_V0pretty__print_V20_V0k6) 'write)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k6, self)))),
      _V0write);
}
static void _V0vanity_V0pretty__print_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 2 0) (close _V0vanity_V0pretty__print_V20_V0k5) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k5, self)))),
      _V0get__output__string);
}
static void _V0vanity_V0pretty__print_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 1 0) (close _V0vanity_V0pretty__print_V20_V0k4) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k4, self)))),
      _V0close__port);
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
  // ((bruijn ##..vcore.import.1 0 0) (close _V0vanity_V0pretty__print_V20_V0k3) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k3, self)))),
      _V0display);
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
  // (##vcore.make-import (close _V0vanity_V0pretty__print_V20_V0k2) (##string ##.string.224) (bruijn ##.x.199 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D224.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0pretty__print_V20_V0k1) (##string ##.string.225))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D225.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0pretty__print_V20 = (VFunc)_V0vanity_V0pretty__print_V20_V0lambda1;
