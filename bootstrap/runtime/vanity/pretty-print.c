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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D223 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D222 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0pretty__print;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0pretty__print = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "pretty-print" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D221 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D220 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ". " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D219 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D218 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
VWEAK VWORD _V0let_S;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0let_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "let*" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D217 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D216 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D215 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D214 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static __attribute__((constructor)) void VDllMain1() {
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0max = VEncodePointer(VLookupConstant("_V0max", &_VW_V0max), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VLookupConstant("_V0newline", &_VW_V0newline), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0write = VEncodePointer(VLookupConstant("_V0write", &_VW_V0write), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
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
static void _V10_Dprint__indent_D23_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__indent_D23_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.201) ((##vcore.- (bruijn ##.i.31 3 1) 1)) ((bruijn ##.print-indent.23 4 0) (bruijn ##.k.79 3 0) (bruijn ##.reg.201 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dprint__indent_D23_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__indent_D23_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.80 0 0) ((bruijn ##.x.71 10 0) (close _V10_Dprint__indent_D23_k15) #\space) ((bruijn ##.k.79 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__indent_D23_k15, self)})),
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__indent_D23_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__indent_D23_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.75 5 0) (close _V10_Dprint__indent_D23_k14) (bruijn ##.i.31 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__indent_D23_k14, self)})),
      _var1,
      VEncodeInt(0l));
}
static void _V10_Datom_Q_D24_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Datom_Q_D24_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.83 0 0) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.32 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)));
}
static void _V10_Dlengthof__atom_D25_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.85 5 0) (bruijn ##.reg.202 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->vars[0]);
}
static void _V10_Dlengthof__atom_D25_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.202) ((##vcore.string-length (bruijn ##.x.88 1 0))) ((bruijn ##.x.78 6 0) (close _V10_Dlengthof__atom_D25_k19) (bruijn ##.port.34 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_k19, self)})),
      statics->up->up->vars[0]);
    }
}
static void _V10_Dlengthof__atom_D25_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.77 5 0) (close _V10_Dlengthof__atom_D25_k18) (bruijn ##.port.34 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_k18, self)})),
      statics->vars[0]);
}
static void _V10_Dlengthof__atom_D25_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 8 0) (close _V10_Dlengthof__atom_D25_k17) (bruijn ##.expr.33 1 1) (bruijn ##.port.34 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_k17, self)})),
      statics->vars[1],
      _var0);
}
static void _V10_Dlengthof__atom_D25_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.76 4 0) (close _V10_Dlengthof__atom_D25_k16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_k16, self)})));
}
static void _V10_Dloop_D42_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.203) ((##vcore.+ (bruijn ##.n.44 3 2) (bruijn ##.x.96 1 0) 3)) ((bruijn ##.k.92 3 0) (bruijn ##.reg.203 0 0)))
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
static void _V10_Dloop_D42_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.204) ((##vcore.+ (bruijn ##.n.44 3 2) (bruijn ##.x.99 1 0) 1)) ((bruijn ##.loop.42 4 0) (bruijn ##.k.92 3 0) (##inline ##vcore.cdr (bruijn ##.expr.43 3 1)) (bruijn ##.reg.204 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      statics->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      self->vars[0]);
    }
}
static void _V10_Dloop_D42_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.93 0 0) ((bruijn ##.return.38 5 1) (bruijn ##.k.92 1 0) #f) (if (##inline ##vcore.null? (bruijn ##.expr.43 1 1)) ((bruijn ##.k.92 1 0) (bruijn ##.n.44 1 2)) (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.43 1 1))) ((bruijn ##.lengthof.40 4 1) (close _V10_Dloop_D42_k21) (bruijn ##.expr.43 1 1)) ((bruijn ##.lengthof.40 4 1) (close _V10_Dloop_D42_k22) (##inline ##vcore.car (bruijn ##.expr.43 1 1))))))
if(VDecodeBool(
_var0)) {
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k21, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k22, self)})),
      VInlineCar2(runtime,
        statics->vars[1]));
}
}
}
}
static void _V10_Dloop_D42_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.75 10 0) (close _V10_Dloop_D42_k20) (bruijn ##.n.44 0 2) (bruijn ##.cutoff.37 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k20, self)})),
      _var2,
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dlengthof__list_D39_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__list_D39_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D42_lambda8)) ((bruijn ##.loop.42 0 0) (bruijn ##.k.91 1 0) (bruijn ##.expr.41 1 1) 1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_lambda8, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l));
    }
}
static void _V10_Dlengthof_D40_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.108 1 0) ((bruijn ##.k.109 0 0) 2) ((bruijn ##.k.109 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
static void _V10_Dlengthof_D40_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.205) ((##vcore.+ (bruijn ##.x.105 3 0) (bruijn ##.x.106 1 0))) ((bruijn ##.k.102 6 0) (bruijn ##.reg.205 0 0)))
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
static void _V10_Dlengthof_D40_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.lengthof.40 5 1) (close _V10_Dlengthof_D40_k28) (bruijn ##.x.107 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k28, self)})),
      _var0);
}
static void _V10_Dlengthof_D40_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.72 14 0) (close _V10_Dlengthof_D40_k27) (bruijn ##.expr.45 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k27, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dlengthof_D40_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlengthof_D40_k25) (close _V10_Dlengthof_D40_k26))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dlengthof_D40_k25, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k26, self)})));
}
static void _V10_Dlengthof_D40_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.104 0 0) (##vcore.eqv? (close _V10_Dlengthof_D40_k24) (##inline ##vcore.car (bruijn ##.expr.45 1 1)) 'unquote-splicing) ((bruijn ##.lengthof-list.39 2 0) (bruijn ##.k.102 1 0) (bruijn ##.expr.45 1 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k24, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      _V0unquote__splicing);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      statics->vars[1]);
}
}
static void _V10_Dlengthof_D40_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.45 0 1))) ((bruijn ##.lengthof-atom.25 4 2) (bruijn ##.k.102 0 0) (bruijn ##.expr.45 0 1)) ((bruijn ##.quotation?.27 4 4) (close _V10_Dlengthof_D40_k23) (bruijn ##.expr.45 0 1)))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      _var0,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k23, self)})),
      _var1);
}
}
static void _V10_Dshort_Q_D26_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dshort_Q_D26_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.112 0 0) ((bruijn ##.return.38 3 1) (bruijn ##.k.90 3 0) #f) ((bruijn ##.k.90 3 0) #t))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      statics->up->up->vars[0],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(true));
}
}
static void _V10_Dshort_Q_D26_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dshort_Q_D26_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.75 8 0) (close _V10_Dshort_Q_D26_k30) (bruijn ##.len.46 0 0) (bruijn ##.cutoff.37 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dshort_Q_D26_k30, self)})),
      _var0,
      statics->up->up->vars[2]);
}
static void _V10_Dshort_Q_D26_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dshort_Q_D26_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 2 ((close _V10_Dlengthof__list_D39_lambda7) (close _V10_Dlengthof_D40_lambda9)) ((bruijn ##.lengthof.40 0 1) (close _V10_Dshort_Q_D26_k29) (bruijn ##.expr.36 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__list_D39_lambda7, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_lambda9, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dshort_Q_D26_k29, self)})),
      statics->up->vars[1]);
    }
}
static void _V10_Dshort_Q_D26_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dshort_Q_D26_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.89 0 0) (close _V10_Dshort_Q_D26_lambda6))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dshort_Q_D26_lambda6, self)})));
}
static void _V10_Dquotation_Q_D27_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dquotation_Q_D27_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.48 0 0) ((bruijn ##.k.113 1 0) (##inline ##vcore.cdr (bruijn ##.ret.48 0 0))) ((bruijn ##.k.113 1 0) #f))
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
static void _V10_Dquotation_Q_D27_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dquotation_Q_D27_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.74 6 0) (close _V10_Dquotation_Q_D27_k31) (##inline ##vcore.car (bruijn ##.expr.47 0 1)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##.string.214)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##.string.215)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##.string.216)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##.string.217)) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dquotation_Q_D27_k31, self)})),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VEncodePointer(&_V10_Dstring_D214.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        VEncodePointer(&_V10_Dstring_D215.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote,
        VEncodePointer(&_V10_Dstring_D216.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VEncodePointer(&_V10_Dstring_D217.sym, VPOINTER_OTHER)),
        VNULL)))));
}
static void _V10_Dpretty__print_D28_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print_D28_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.70 11 0) (bruijn ##.k.123 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      statics->vars[0]);
}
static void _V10_Dpretty__print_D28_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print_D28_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pretty-print-impl.30 1 7) (close _V10_Dpretty__print_D28_k32) (bruijn ##.expr.49 0 1) 0 #t 40)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[7]), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print_D28_k32, self)})),
      _var1,
      VEncodeInt(0l),
      VEncodeBool(true),
      VEncodeInt(40l));
}
static void _V10_Djoin__line_Q_D29_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Djoin__line_Q_D29_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.51 0 0) ((bruijn ##.k.125 1 0) (##inline ##vcore.cdr (bruijn ##.ret.51 0 0))) ((bruijn ##.k.125 1 0) #f))
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
static void _V10_Djoin__line_Q_D29_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Djoin__line_Q_D29_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.74 6 0) (close _V10_Djoin__line_Q_D29_k33) (bruijn ##.form.50 0 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'define '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'set! '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'lambda '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'continuation '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'if '4) (##inline ##vcore.qcons (##inline ##vcore.qcons 'let '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'letrec '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'let* '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'letrec* '2) '()))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Djoin__line_Q_D29_k33, self)})),
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
static void _V10_Dpretty__print__impl_D30_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.indent-this?.54 1 3) ((bruijn ##.print-indent.23 2 0) (bruijn ##.k.198 0 0) (bruijn ##.indent.53 1 2)) ((bruijn ##.k.198 0 0) #f))
if(VDecodeBool(
statics->vars[3])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      _var0,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpretty__print__impl_D30_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.152 1 0) ((bruijn ##.k.153 0 0) 2) ((bruijn ##.k.153 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
static void _V10_Dpretty__print__impl_D30_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.206) ((##vcore.+ (bruijn ##.indent.53 8 2) (bruijn ##.x.151 1 0))) ((bruijn ##.pretty-print-impl.30 9 7) (bruijn ##.k.144 8 0) (bruijn ##.x.149 3 0) (bruijn ##.reg.206 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 2),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 7)), 5,
      VGetArg(statics, 8-1, 0),
      statics->up->up->vars[0],
      self->vars[0],
      VEncodeBool(false),
      VEncodeInt(40l));
    }
}
static void _V10_Dpretty__print__impl_D30_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpretty__print__impl_D30_k41) (close _V10_Dpretty__print__impl_D30_k42))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpretty__print__impl_D30_k41, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k42, self)})));
}
static void _V10_Dpretty__print__impl_D30_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Dpretty__print__impl_D30_k40) (##inline ##vcore.car (bruijn ##.expr.52 5 1)) 'unquote-splicing)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k40, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)),
      _V0unquote__splicing);
}
static void _V10_Dpretty__print__impl_D30_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.72 12 0) (close _V10_Dpretty__print__impl_D30_k39) (bruijn ##.expr.52 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k39, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dpretty__print__impl_D30_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.213) ((##vcore.+ 2 (bruijn ##.x.192 1 0))) ((bruijn ##.k.191 2 0) (bruijn ##.reg.213 0 0)))
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
static void _V10_Dpretty__print__impl_D30_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.join-line.58 1 0) ((bruijn ##.lengthof-atom.25 9 2) (close _V10_Dpretty__print__impl_D30_k47) (##inline ##vcore.car (bruijn ##.expr.52 8 1))) ((bruijn ##.k.191 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k47, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
static void _V10_Dpretty__print__impl_D30_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.join-line.58 2 0) ((bruijn ##.k.190 0 0) (bruijn ##.join-line.58 2 0)) ((bruijn ##.k.190 0 0) 1))
if(VDecodeBool(
statics->up->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D61_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.63 1 2) ((bruijn ##.k.182 0 0) (bruijn ##.join-line.58 5 0)) ((bruijn ##.k.182 0 0) #f))
if(VDecodeBool(
statics->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D61_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.180 1 0) ((bruijn ##.x.71 22 0) (bruijn ##.k.181 0 0) (##string ##.string.219)) ((bruijn ##.x.70 23 0) (bruijn ##.k.181 0 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D219.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      _var0);
}
}
static void _V10_Dloop_D61_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.63 3 2) ((bruijn ##.k.179 0 0) (bruijn ##.first-indent.59 6 0)) ((bruijn ##.k.179 0 0) (bruijn ##.new-indent.60 5 0)))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
}
static void _V10_Dloop_D61_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.63 4 2) ((bruijn ##.x.68 27 0) (bruijn ##.k.174 0 0) (##inline ##vcore.car (bruijn ##.expr.52 15 1)) (##inline ##vcore.qcons 'define (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation '())))) ((bruijn ##.k.174 0 0) #f))
if(VDecodeBool(
statics->up->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
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
static void _V10_Dloop_D61_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.170 1 0) (basic-block 2 2 (##.reg.209 ##.reg.210) ((##vcore.+ (bruijn ##.indent.53 17 2) (bruijn ##.new-indent.60 8 0)) (##vcore.- 80 (bruijn ##.reg.209 0 0))) ((bruijn ##.x.69 28 0) (bruijn ##.k.171 1 0) 40 (bruijn ##.reg.210 0 1))) ((bruijn ##.k.171 0 0) 40))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      statics->vars[0],
      VEncodeInt(40l),
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(40l));
}
}
static void _V10_Dloop_D61_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.63 7 2) ((bruijn ##.k.169 0 0) (bruijn ##.join-line.58 11 0)) ((bruijn ##.k.169 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D61_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.61 9 0) (bruijn ##.k.157 8 0) (##inline ##vcore.cdr (bruijn ##.rest.62 8 1)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      VGetArg(statics, 8-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)),
      VEncodeBool(false));
}
static void _V10_Dloop_D61_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.pretty-print-impl.30 19 7) (close _V10_Dloop_D61_k63) (##inline ##vcore.car (bruijn ##.rest.62 7 1)) (bruijn ##.reg.208 1 0) (##inline ##vcore.not (bruijn ##.x.168 0 0)) (bruijn ##.x.164 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 7)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k63, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)),
      statics->vars[0],
      VInlineNot2(runtime,
        _var0),
      statics->up->vars[0]);
}
static void _V10_Dloop_D61_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.208) ((##vcore.+ (bruijn ##.indent.53 17 2) (bruijn ##.x.163 3 0))) ((close _V10_Dloop_D61_k61) (close _V10_Dloop_D61_k62)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 17-1, 2),
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D61_k61, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k62, self)})));
    }
}
static void _V10_Dloop_D61_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D61_k59) (close _V10_Dloop_D61_k60))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D61_k59, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k60, self)})));
}
static void _V10_Dloop_D61_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D61_k57) (close _V10_Dloop_D61_k58))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D61_k57, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k58, self)})));
}
static void _V10_Dloop_D61_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D61_k55) (close _V10_Dloop_D61_k56))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D61_k55, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k56, self)})));
}
static void _V10_Dloop_D61_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D61_k53) (close _V10_Dloop_D61_k54))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D61_k53, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k54, self)})));
}
static void _V10_Dloop_D61_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.71 26 0) (bruijn ##.k.157 6 0) (##string ##.string.218))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D218.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D61_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.212) ((##vcore.+ (bruijn ##.indent.53 16 2) 3)) ((bruijn ##.pretty-print-impl.30 17 7) (close _V10_Dloop_D61_k67) (bruijn ##.rest.62 5 1) (bruijn ##.reg.212 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 16-1, 2),
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 7)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k67, self)})),
      VGetArg(statics, 5-1, 1),
      self->vars[0],
      VEncodeBool(false),
      VEncodeInt(40l));
    }
}
static void _V10_Dloop_D61_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.71 23 0) (close _V10_Dloop_D61_k66) (##string ##.string.220))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k66, self)})),
      VEncodePointer(&_V10_Dstring_D220.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D61_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.211) ((##vcore.+ (bruijn ##.indent.53 13 2) 1)) ((bruijn ##.print-indent.23 14 0) (close _V10_Dloop_D61_k65) (bruijn ##.reg.211 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 13-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k65, self)})),
      self->vars[0]);
    }
}
static void _V10_Dloop_D61_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.rest.62 0 1)) ((bruijn ##.x.71 20 0) (bruijn ##.k.157 0 0) (##string ##.string.218)) (if (##inline ##vcore.pair? (bruijn ##.rest.62 0 1)) ((close _V10_Dloop_D61_k51) (close _V10_Dloop_D61_k52)) ((bruijn ##.x.71 20 0) (close _V10_Dloop_D61_k64) #\newline)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D218.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D61_k51, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k52, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k64, self)})),
      VEncodeChar('\n'));
}
}
}
static void _V10_Dpretty__print__impl_D30_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D61_lambda14)) ((bruijn ##.loop.61 0 0) (bruijn ##.k.144 10 0) (##inline ##vcore.cdr (bruijn ##.expr.52 10 1)) #t))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_lambda14, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      VGetArg(statics, 10-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)),
      VEncodeBool(true));
    }
}
static void _V10_Dpretty__print__impl_D30_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpretty__print__impl_D30_k49) (close _V10_Dpretty__print__impl_D30_k50))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpretty__print__impl_D30_k49, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k50, self)})));
}
static void _V10_Dpretty__print__impl_D30_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpretty__print__impl_D30_k46) (close _V10_Dpretty__print__impl_D30_k48))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpretty__print__impl_D30_k46, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k48, self)})));
}
static void _V10_Dpretty__print__impl_D30_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.join-line?.29 7 6) (close _V10_Dpretty__print__impl_D30_k45) (##inline ##vcore.car (bruijn ##.expr.52 6 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 6)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k45, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
}
static void _V10_Dpretty__print__impl_D30_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.207) ((##vcore.+ (bruijn ##.indent.53 5 2) 1)) ((bruijn ##.pretty-print-impl.30 6 7) (close _V10_Dpretty__print__impl_D30_k44) (##inline ##vcore.car (bruijn ##.expr.52 5 1)) (bruijn ##.reg.207 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 7)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k44, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)),
      self->vars[0],
      VEncodeBool(false),
      VEncodeInt(40l));
    }
}
static void _V10_Dpretty__print__impl_D30_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.0.56 0 0) ((bruijn ##.x.71 12 0) (close _V10_Dpretty__print__impl_D30_k38) (bruijn ##.x.0.56 0 0)) ((bruijn ##.x.71 12 0) (close _V10_Dpretty__print__impl_D30_k43) (##string ##.string.221)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k38, self)})),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k43, self)})),
      VEncodePointer(&_V10_Dstring_D221.sym, VPOINTER_OTHER));
}
}
static void _V10_Dpretty__print__impl_D30_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.147 0 0) ((bruijn ##.x.73 9 0) (bruijn ##.k.144 2 0) (bruijn ##.expr.52 2 1)) ((bruijn ##.quotation?.27 3 4) (close _V10_Dpretty__print__impl_D30_k37) (bruijn ##.expr.52 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k37, self)})),
      statics->up->vars[1]);
}
}
static void _V10_Dpretty__print__impl_D30_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.52 1 1))) ((bruijn ##.x.73 8 0) (bruijn ##.k.144 1 0) (bruijn ##.expr.52 1 1)) ((bruijn ##.short?.26 2 3) (close _V10_Dpretty__print__impl_D30_k36) (bruijn ##.expr.52 1 1) (bruijn ##.short-threshold.55 1 4)))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k36, self)})),
      statics->vars[1],
      statics->vars[4]);
}
}
static void _V10_Dpretty__print__impl_D30_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_lambda13, got ~D~N"
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
  // ((close _V10_Dpretty__print__impl_D30_k34) (close _V10_Dpretty__print__impl_D30_k35))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpretty__print__impl_D30_k34, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k35, self)})));
}
static void _V0vanity_V0pretty__print_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 8 ((close _V10_Dprint__indent_D23_lambda2) (close _V10_Datom_Q_D24_lambda3) (close _V10_Dlengthof__atom_D25_lambda4) (close _V10_Dshort_Q_D26_lambda5) (close _V10_Dquotation_Q_D27_lambda10) (close _V10_Dpretty__print_D28_lambda11) (close _V10_Djoin__line_Q_D29_lambda12) (close _V10_Dpretty__print__impl_D30_lambda13)) ((bruijn ##.k.67 14 0) (##inline ##vcore.cons (##inline ##vcore.cons 'pretty-print (bruijn ##.pretty-print.28 0 5)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__indent_D23_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datom_Q_D24_lambda3, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_lambda4, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dshort_Q_D26_lambda5, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dquotation_Q_D27_lambda10, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print_D28_lambda11, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Djoin__line_Q_D29_lambda12, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_lambda13, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pretty__print,
        self->vars[5]),
        VNULL));
    }
}
static void _V0vanity_V0pretty__print_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 10 0) (close _V0vanity_V0pretty__print_V20_k13) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k13, self)})),
      _V0close__port);
}
static void _V0vanity_V0pretty__print_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 9 0) (close _V0vanity_V0pretty__print_V20_k12) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k12, self)})),
      _V0get__output__string);
}
static void _V0vanity_V0pretty__print_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 8 0) (close _V0vanity_V0pretty__print_V20_k11) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k11, self)})),
      _V0open__output__string);
}
static void _V0vanity_V0pretty__print_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 7 0) (close _V0vanity_V0pretty__print_V20_k10) '>)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k10, self)})),
      _V0_G);
}
static void _V0vanity_V0pretty__print_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 6 0) (close _V0vanity_V0pretty__print_V20_k9) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k9, self)})),
      _V0assv);
}
static void _V0vanity_V0pretty__print_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 5 0) (close _V0vanity_V0pretty__print_V20_k8) 'write)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k8, self)})),
      _V0write);
}
static void _V0vanity_V0pretty__print_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 4 0) (close _V0vanity_V0pretty__print_V20_k7) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k7, self)})),
      _V0cadr);
}
static void _V0vanity_V0pretty__print_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 3 0) (close _V0vanity_V0pretty__print_V20_k6) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k6, self)})),
      _V0display);
}
static void _V0vanity_V0pretty__print_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 2 0) (close _V0vanity_V0pretty__print_V20_k5) 'newline)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k5, self)})),
      _V0newline);
}
static void _V0vanity_V0pretty__print_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 1 0) (close _V0vanity_V0pretty__print_V20_k4) 'max)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k4, self)})),
      _V0max);
}
static void _V0vanity_V0pretty__print_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 0 0) (close _V0vanity_V0pretty__print_V20_k3) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k3, self)})),
      _V0memv);
}
static void _V0vanity_V0pretty__print_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0pretty__print_V20_k2) (##string ##.string.222) (bruijn ##.x.200 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D222.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0pretty__print_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0pretty__print_V20_k1) (##string ##.string.223))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D223.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0pretty__print_V20 = (VFunc)_V0vanity_V0pretty__print_V20_lambda1;
