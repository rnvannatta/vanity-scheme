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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D37 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D36 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "_V0vanity_V0assert_V20" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0assert__equal;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0assert__equal = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "assert-equal" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D35 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "Assertion failed: ~A is not equal to ~A\n" };
static __attribute__((constructor)) void VDllMain1() {
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0assert__equal = VEncodePointer(VInternSymbol(1192061083, &_VW_V0assert__equal.sym), VPOINTER_OTHER);
}
V_DECLARE_FUNC(_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0assert_V0assert__equal);
static void _V10_Dassert__equal_D9_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassert__equal_D9_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.exit (bruijn ##.k.21 3 0) 1)
    VCallFuncWithGC(runtime, (VFunc)VExit2, 2,
      statics->up->up->vars[0],
      VEncodeInt(1l));
}
static void _V10_Dassert__equal_D9_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassert__equal_D9_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.19 5 0) (close _V10_Dassert__equal_D9_V0k8) (bruijn ##.x.24 0 0) (##string ##.string.35) (bruijn ##.x.10 2 1) (bruijn ##.y.11 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassert__equal_D9_V0k8, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D35.sym, VPOINTER_OTHER),
      statics->up->vars[1],
      statics->up->vars[2]);
}
static void _V10_Dassert__equal_D9_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassert__equal_D9_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.25 0 0)) ((bruijn ##.x.18 5 0) (close _V10_Dassert__equal_D9_V0k7)) ((bruijn ##.k.21 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassert__equal_D9_V0k7, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity assert assert-equal ##.loop.14) (bruijn ##.loop.14 2 0) (bruijn ##.k.27 1 0) (##inline ##vcore.cdr (bruijn ##.rest.15 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.rest.15 0 1))) (##qualified-call (vanity assert assert-equal) (bruijn ##.assert-equal.9 3 0) (close _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14_V0k9) (bruijn ##.x.12 2 1) (##inline ##vcore.car (bruijn ##.rest.15 0 1))) ((bruijn ##.k.27 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14_V0k9, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0assert_V0assert__equal(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0assert_V0assert__equal(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0assert_V0assert__equal" #t (3 ((bruijn ##.x.20 2 0) (close _V10_Dassert__equal_D9_V0k6) (bruijn ##.x.10 0 1) (bruijn ##.y.11 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14")) (##qualified-call (vanity assert assert-equal ##.loop.14) (bruijn ##.loop.14 0 0) (bruijn ##.k.26 1 0) (bruijn ##.rest.13 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0assert_V0assert__equal, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0assert_V0assert__equal(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.20 2 0) (close _V10_Dassert__equal_D9_V0k6) (bruijn ##.x.10 0 1) (bruijn ##.y.11 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassert__equal_D9_V0k6, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0assert_V0assert__equal(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14")) (##qualified-call (vanity assert assert-equal ##.loop.14) (bruijn ##.loop.14 0 0) (bruijn ##.k.26 1 0) (bruijn ##.rest.13 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0assert_V0assert__equal(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0assert_V0assert__equal, @function\n"
#endif
".globl _V50_V0vanity_V0assert_V0assert__equal\n"
"_V50_V0vanity_V0assert_V0assert__equal:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0assert_V0assert__equal\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case1__V50_V0vanity_V0assert_V0assert__equal\n"
"    jmp _V20CaseError__V50_V0vanity_V0assert_V0assert__equal\n"
);
static void _V0vanity_V0assert_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0assert_V0assert__equal")) ((bruijn ##.k.17 6 0) (##inline ##vcore.cons (##inline ##vcore.cons 'assert-equal (bruijn ##.assert-equal.9 0 0)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0assert_V0assert__equal, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assert__equal,
        self->vars[0]),
        VNULL));
    }
}
static void _V0vanity_V0assert_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0assert_V20_V0k5) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0assert_V20_V0k5, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0assert_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0assert_V20_V0k4) 'format)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0assert_V20_V0k4, self)))),
      _V0format);
}
static void _V0vanity_V0assert_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0assert_V20_V0k3) 'current-error-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0assert_V20_V0k3, self)))),
      _V0current__error__port);
}
static void _V0vanity_V0assert_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0assert_V20_V0k2) (##string ##.string.36) (bruijn ##.x.34 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0assert_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D36.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0assert_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0assert_V20_V0k1) (##string ##.string.37))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0assert_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D37.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0assert_V20 = (VFunc)_V0vanity_V0assert_V20_V0lambda1;
