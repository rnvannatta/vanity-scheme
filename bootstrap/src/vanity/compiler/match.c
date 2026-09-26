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

VEnv * _V60_V0vanity_V0compiler_V0match;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0typevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0typevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "typevector\?" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
VWEAK VWORD _V0transform__match;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0transform__match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "transform-match" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "input" };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "match expression contains too many ellipses" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "match expressions such as (x ... y ...) or (x ... . y) are ill formed" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "unknown form in match pattern" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed quote" };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "typevectors in matches not supported" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vectors in matches not implemented yet" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "kk" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "expr" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "tail-expr" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
VWEAK VWORD _V10vcore_Dcall_Wcc;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dcall_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.call/cc" };
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "head" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "tail" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10vcore_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.call-with-values" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V10vcore_D_L;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.<" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
static VPair _V10_Dpair_D701 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_D_D_D;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0_D_D_D = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "..." };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0gather__variables, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0check__pattern, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 10 10 (##.%x.440 ##.%x.441 ##.%x.442 ##.%x.443 ##.%x.444 ##.%x.445 ##.%x.446 ##.%x.447 ##.%x.448 ##.%r.449) ((##vcore.cons (bruijn ##.%x.89 1 0) '()) (##vcore.cons (bruijn ##.%x.433 2 14) (bruijn ##.%x.440 0 0)) (##vcore.cons 'lambda (bruijn ##.%x.441 0 1)) (##vcore.cons (bruijn ##.%x.442 0 2) '()) (##vcore.cons (bruijn ##.%x.431 2 12) (bruijn ##.%x.443 0 3)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.444 0 4)) (##vcore.cons (bruijn ##.%x.445 0 5) '()) (##vcore.cons '#f (bruijn ##.%x.446 0 6)) (##vcore.cons (bruijn ##.%x.424 2 5) (bruijn ##.%x.447 0 7)) (##vcore.cons 'if (bruijn ##.%x.448 0 8))) ((bruijn ##.%k.75 10 0) (bruijn ##.%r.449 0 9)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[10]; } container;
    self = &container.self;
    VInitEnv(self, 10, 10, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[14],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[12],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[5],
      self->vars[7]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[8]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[9]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 21 21 (##.%x.419 ##.%x.420 ##.%x.421 ##.%x.422 ##.%x.423 ##.%x.424 ##.%x.425 ##.%x.426 ##.%x.427 ##.%x.428 ##.%x.429 ##.%x.430 ##.%x.431 ##.%x.432 ##.%x.433 ##.%x.434 ##.%x.435 ##.%x.436 ##.%x.437 ##.%x.438 ##.%x.439) ((##vcore.car (bruijn ##.expr-stack.35 8 1)) (##vcore.cons (bruijn ##.%x.419 0 0) '()) (##vcore.cons 'num-pairs (bruijn ##.%x.420 0 1)) (##vcore.cons (bruijn ##.len.40 4 0) '()) (##vcore.cons (bruijn ##.%x.421 0 2) (bruijn ##.%x.422 0 3)) (##vcore.cons '##vcore.< (bruijn ##.%x.423 0 4)) (##vcore.car (bruijn ##.expr-stack.35 8 1)) (##vcore.cons (bruijn ##.len.40 4 0) '()) (##vcore.cons (bruijn ##.%x.425 0 6) (bruijn ##.%x.426 0 7)) (##vcore.cons 'split-at-right (bruijn ##.%x.427 0 8)) (##vcore.cons (bruijn ##.%x.428 0 9) '()) (##vcore.cons '() (bruijn ##.%x.429 0 10)) (##vcore.cons 'lambda (bruijn ##.%x.430 0 11)) (##vcore.cons (bruijn ##.tail.42 1 0) '()) (##vcore.cons (bruijn ##.head.41 2 0) (bruijn ##.%x.432 0 13)) (##vcore.cdr (bruijn ##.expr-stack.35 8 1)) (##vcore.cons (bruijn ##.tail.42 1 0) (bruijn ##.%x.434 0 15)) (##vcore.cons (bruijn ##.head.41 2 0) (bruijn ##.%x.435 0 16)) (##vcore.cdr (bruijn ##.pattern-stack.36 8 2)) (##vcore.cons (bruijn ##.tail-pattern.39 5 0) (bruijn ##.%x.437 0 18)) (##vcore.cons (bruijn ##.head-pattern.417 6 0) (bruijn ##.%x.438 0 19))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 9 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9) (bruijn ##.%x.436 0 17) (bruijn ##.%x.439 0 20) (bruijn ##.success-expr.37 8 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[21]; } container;
    self = &container.self;
    VInitEnv(self, 21, 21, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0num__pairs,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_D_L,
      self->vars[4]);
    self->vars[6] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[7]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0split__at__right,
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      VNULL);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      self->vars[10]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[13]);
    self->vars[15] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[16]);
    self->vars[18] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[18]);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[19]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9, self))));
    VWORD _arg1 = 
      self->vars[17];
    VWORD _arg2 = 
      self->vars[20];
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 10 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8) (##string ##.string.702))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D702.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.503 ##.%x.504 ##.%x.505 ##.%x.506 ##.%x.507 ##.%r.508) ((##vcore.cons (bruijn ##.%x.115 1 0) '()) (##vcore.cons (bruijn ##.%x.499 2 27) (bruijn ##.%x.503 0 0)) (##vcore.cons 'lambda (bruijn ##.%x.504 0 1)) (##vcore.cons (bruijn ##.%x.505 0 2) '()) (##vcore.cons (bruijn ##.%x.498 2 26) (bruijn ##.%x.506 0 3)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.507 0 4))) ((bruijn ##.%k.75 30 0) (bruijn ##.%r.508 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[27],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[26],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 31 31 (##.%x.472 ##.%x.473 ##.%x.474 ##.%x.475 ##.%x.476 ##.%x.477 ##.%x.478 ##.%x.479 ##.%x.480 ##.%x.481 ##.%x.482 ##.%x.483 ##.%x.484 ##.%x.485 ##.%x.486 ##.%x.487 ##.%x.488 ##.%x.489 ##.%x.490 ##.%x.491 ##.%x.492 ##.%x.493 ##.%x.494 ##.%x.495 ##.%x.496 ##.%x.497 ##.%x.498 ##.%x.499 ##.%x.500 ##.%x.501 ##.%x.502) ((##vcore.cons (bruijn ##.expr.50 14 0) (bruijn ##.%x.150 1 0)) (##vcore.cons (bruijn ##.k.48 16 0) (bruijn ##.%x.472 0 0)) (##vcore.cons (bruijn ##.%x.473 0 1) '()) (##vcore.cons (bruijn ##.%x.146 2 0) (bruijn ##.%x.474 0 2)) (##vcore.cons (bruijn ##.%x.465 8 5) (bruijn ##.%x.475 0 3)) (##vcore.cons 'lambda (bruijn ##.%x.476 0 4)) (##vcore.cons (bruijn ##.%x.477 0 5) '()) (##vcore.cons '##vcore.call/cc (bruijn ##.%x.478 0 6)) (##vcore.cons (bruijn ##.%x.479 0 7) '()) (##vcore.cons '() (bruijn ##.%x.480 0 8)) (##vcore.cons 'lambda (bruijn ##.%x.481 0 9)) (##vcore.cons 'loop '()) (##vcore.cons (bruijn ##.%x.482 0 10) (bruijn ##.%x.483 0 11)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.484 0 12)) (##vcore.cons (bruijn ##.%x.485 0 13) '()) (##vcore.cons (bruijn ##.%x.464 8 4) (bruijn ##.%x.486 0 14)) (##vcore.cons (bruijn ##.%x.455 10 0) (bruijn ##.%x.487 0 15)) (##vcore.cons 'loop (bruijn ##.%x.488 0 16)) (##vcore.cons 'let (bruijn ##.%x.489 0 17)) (##vcore.cons (bruijn ##.%x.490 0 18) '()) (##vcore.cons (bruijn ##.%x.451 12 0) (bruijn ##.%x.491 0 19)) (##vcore.cons 'lambda (bruijn ##.%x.492 0 20)) (##vcore.cons (bruijn ##.%x.493 0 21) '()) (##vcore.cons '##vcore.call/cc (bruijn ##.%x.494 0 22)) (##vcore.cons (bruijn ##.%x.495 0 23) '()) (##vcore.cons '() (bruijn ##.%x.496 0 24)) (##vcore.cons 'lambda (bruijn ##.%x.497 0 25)) (##vcore.cons (bruijn ##.tail-expr.51 13 0) (bruijn ##.variables.46 18 0)) (##vcore.cdr (bruijn ##.expr-stack.35 28 1)) (##vcore.cons (bruijn ##.tail-expr.51 13 0) (bruijn ##.%x.500 0 28)) (##vcore.cons (bruijn ##.tail-pattern.44 21 0) (bruijn ##.pattern-stack.450 20 0))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 29 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k26) (bruijn ##.%x.501 0 29) (bruijn ##.%x.502 0 30) (bruijn ##.success-expr.37 28 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[31]; } container;
    self = &container.self;
    VInitEnv(self, 31, 31, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 16-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 5),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall_Wcc,
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0loop,
      VNULL);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      VNULL);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 4),
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0loop,
      self->vars[16]);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[17]);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      self->vars[18],
      VNULL);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 12-1, 0),
      self->vars[19]);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[20]);
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      self->vars[21],
      VNULL);
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall_Wcc,
      self->vars[22]);
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      self->vars[23],
      VNULL);
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      self->vars[24]);
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[25]);
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      VGetArg(statics, 18-1, 0));
    self->vars[28] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 28-1, 1));
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[28]);
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 21-1, 0),
      VGetArg(statics, 20-1, 0));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 29-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k26, self))));
    VWORD _arg1 = 
      self->vars[29];
    VWORD _arg2 = 
      self->vars[30];
    VWORD _arg3 = 
      VGetArg(statics, 28-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.509 ##.%r.510) ((##vcore.cons (bruijn ##.sym.56 1 1) '()) (##vcore.cons 'reverse (bruijn ##.%x.509 0 0))) ((bruijn ##.%k.151 1 0) (bruijn ##.%r.510 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0reverse,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.14 30 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda3) (bruijn ##.syms.47 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda3, self)))),
      VGetArg(statics, 15-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.470 ##.%x.471) ((##vcore.cons (bruijn ##.%x.469 2 1) (bruijn ##.%x.158 1 0)) (##vcore.cons (bruijn ##.k2.49 12 0) (bruijn ##.%x.470 0 0))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 26 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24) (bruijn ##.%x.153 4 0) (bruijn ##.%x.154 3 0) (bruijn ##.%x.471 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 12-1, 0),
      self->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[0];
    VWORD _arg3 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.%x.511 ##.%x.512 ##.%r.513) ((##vcore.cons (bruijn ##.sym.55 1 2) '()) (##vcore.cons (bruijn ##.var.54 1 1) (bruijn ##.%x.511 0 0)) (##vcore.cons '##vcore.cons (bruijn ##.%x.512 0 1))) ((bruijn ##.%k.159 1 0) (bruijn ##.%r.513 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcons,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.468 ##.%x.469) ((##vcore.cons (bruijn ##.expr.50 9 0) '()) (##vcore.cons '##vcore.cdr (bruijn ##.%x.468 0 0))) ((bruijn ##.map.14 27 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4) (bruijn ##.variables.46 13 0) (bruijn ##.syms.47 12 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcdr,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 13)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4, self)))),
      VGetArg(statics, 13-1, 0),
      VGetArg(statics, 12-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.4 25 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22) (bruijn ##.pattern.43 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22, self)))),
      VGetArg(statics, 15-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.460 ##.%x.461 ##.%x.462 ##.%x.463 ##.%x.464 ##.%x.465 ##.%x.466 ##.%x.467) ((##vcore.cons (bruijn ##.expr.50 6 0) (bruijn ##.%x.170 1 0)) (##vcore.cons (bruijn ##.k.48 8 0) (bruijn ##.%x.460 0 0)) (##vcore.cons (bruijn ##.%x.461 0 1) '()) (##vcore.cons (bruijn ##.%x.459 2 4) (bruijn ##.%x.462 0 2)) (##vcore.cons 'if (bruijn ##.%x.463 0 3)) (##vcore.cons (bruijn ##.k2.49 7 0) '()) (##vcore.cons (bruijn ##.expr.50 6 0) '()) (##vcore.cons '##vcore.car (bruijn ##.%x.466 0 6))) ((bruijn ##.list.4 24 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21) (bruijn ##.%x.467 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcar,
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21, self)))),
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.514 ##.%r.515) ((##vcore.cons (bruijn ##.sym.53 1 1) '()) (##vcore.cons 'reverse (bruijn ##.%x.514 0 0))) ((bruijn ##.%k.171 1 0) (bruijn ##.%r.515 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0reverse,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.455 ##.%x.456 ##.%x.457 ##.%x.458 ##.%x.459) ((##vcore.cons (bruijn ##.%x.454 2 3) (bruijn ##.%x.177 1 0)) (##vcore.cons (bruijn ##.expr.50 4 0) '()) (##vcore.cons '##vcore.pair? (bruijn ##.%x.456 0 1)) (##vcore.cons (bruijn ##.%x.457 0 2) '()) (##vcore.cons '##vcore.not (bruijn ##.%x.458 0 3))) ((bruijn ##.map.14 22 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5) (bruijn ##.syms.47 7 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[3],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dpair_Q,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dnot,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5, self)))),
      VGetArg(statics, 7-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 4 4 (##.%x.516 ##.%x.517 ##.%x.518 ##.%r.519) ((##vcore.cons '() '()) (##vcore.cons 'quote (bruijn ##.%x.516 0 0)) (##vcore.cons (bruijn ##.%x.517 0 1) '()) (##vcore.cons (bruijn ##.sym.52 1 1) (bruijn ##.%x.518 0 2))) ((bruijn ##.%k.178 1 0) (bruijn ##.%r.519 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0quote,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.451 ##.%x.452 ##.%x.453 ##.%x.454) ((##vcore.cons (bruijn ##.k.48 4 0) '()) (##vcore.car (bruijn ##.expr-stack.35 16 1)) (##vcore.cons (bruijn ##.%x.452 0 1) '()) (##vcore.cons (bruijn ##.expr.50 2 0) (bruijn ##.%x.453 0 2))) ((bruijn ##.map.14 20 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6) (bruijn ##.syms.47 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6, self)))),
      VGetArg(statics, 5-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 18 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18) (##string ##.string.704))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18, self)))),
      VEncodePointer(&_V10_Dstring_D704.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 17 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17) (##string ##.string.705))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17, self)))),
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 16 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16) (##string ##.string.706))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16, self)))),
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 15 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15) (##string ##.string.706))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15, self)))),
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.14 14 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14) (bruijn ##.gensym.7 14 6) (bruijn ##.variables.46 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14, self)))),
      VGetArg(statics, 14-1, 6),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 12 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13) (bruijn ##.%x.184 0 0) (bruijn ##.eqv?.32 11 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.pattern-stack.450) ((##vcore.cdr (bruijn ##.pattern-stack.36 8 2))) ((bruijn ##.list.4 12 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12) (bruijn ##.pattern.43 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12, self)))),
      statics->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddar.13 10 12) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11) (bruijn ##.pattern-stack.36 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.418) ((##vcore.> (bruijn ##.len.40 1 0) 0)) (if (bruijn ##.%p.418 0 0) ((bruijn ##.gensym.7 9 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7) (##string ##.string.703)) ((bruijn ##.caar.3 9 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10) (bruijn ##.pattern-stack.36 5 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D703.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10, self)))),
      VGetArg(statics, 5-1, 2));
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.num-pairs.12 7 11) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6) (bruijn ##.tail-pattern.39 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.head-pattern.417) ((##vcore.cons (bruijn ##.%x.185 1 0) '(##pair ##.pair.701))) ((bruijn ##.cddar.13 6 12) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5) (bruijn ##.pattern-stack.36 2 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5, self)))),
      statics->up->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.caar.3 4 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4) (bruijn ##.pattern-stack.36 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.533 ##.%x.534 ##.%r.535) ((##vcore.cons (bruijn ##.%x.195 1 0) '()) (##vcore.cons (bruijn ##.%x.530 2 4) (bruijn ##.%x.533 0 0)) (##vcore.cons 'let (bruijn ##.%x.534 0 1))) ((bruijn ##.%k.186 7 0) (bruijn ##.%r.535 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.548 ##.%x.549 ##.%r.550) ((##vcore.cons (bruijn ##.%x.210 1 0) '()) (##vcore.cons (bruijn ##.%x.545 2 2) (bruijn ##.%x.548 0 0)) (##vcore.cons 'if (bruijn ##.%x.549 0 1))) ((bruijn ##.%k.186 11 0) (bruijn ##.%r.550 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.566 ##.%x.567 ##.%r.568) ((##vcore.cons (bruijn ##.%x.219 1 0) '()) (##vcore.cons (bruijn ##.%x.563 2 10) (bruijn ##.%x.566 0 0)) (##vcore.cons 'if (bruijn ##.%x.567 0 1))) ((bruijn ##.%k.186 12 0) (bruijn ##.%r.568 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[10],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.577 ##.%x.578 ##.%r.579) ((##vcore.cons (bruijn ##.%x.236 1 0) '()) (##vcore.cons (bruijn ##.%x.574 2 4) (bruijn ##.%x.577 0 0)) (##vcore.cons 'if (bruijn ##.%x.578 0 1))) ((bruijn ##.%k.186 14 0) (bruijn ##.%r.579 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.32 16 2) (bruijn ##.%k.308 1 0) (bruijn ##.%x.309 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.581 1 1) ((bruijn ##.caar.3 17 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35) (bruijn ##.pattern-stack.58 13 2)) ((bruijn ##.%k.308 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35, self)))),
      VGetArg(statics, 13-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.595 ##.%r.596) ((##vcore.null? (bruijn ##.%x.261 1 0)) (##vcore.not (bruijn ##.%x.595 0 0))) ((bruijn ##.%k.259 2 0) (bruijn ##.%r.596 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.583 1 1) ((bruijn ##.%k.259 0 0) (bruijn ##.%p.583 1 1)) ((bruijn ##.cddar.13 20 12) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39) (bruijn ##.pattern-stack.58 16 2)))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39, self)))),
      VGetArg(statics, 16-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.256 1 0) ((bruijn ##.compiler-error.11 21 10) (bruijn ##.%k.257 0 0) (##string ##.string.709)) ((bruijn ##.%k.257 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 10)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D709.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.592 ##.%x.593 ##.%r.594) ((##vcore.cons (bruijn ##.%x.247 1 0) '()) (##vcore.cons (bruijn ##.%x.589 2 5) (bruijn ##.%x.592 0 0)) (##vcore.cons 'if (bruijn ##.%x.593 0 1))) ((bruijn ##.%k.186 20 0) (bruijn ##.%r.594 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[5],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.584 ##.%x.585 ##.%x.586 ##.%x.587 ##.%x.588 ##.%x.589 ##.%x.590 ##.%x.591) ((##vcore.cons (bruijn ##.%x.255 1 0) '()) (##vcore.cons 'quote (bruijn ##.%x.584 0 0)) (##vcore.car (bruijn ##.expr-stack.57 18 1)) (##vcore.cons (bruijn ##.%x.586 0 2) '()) (##vcore.cons (bruijn ##.%x.585 0 1) (bruijn ##.%x.587 0 3)) (##vcore.cons '##vcore.eq? (bruijn ##.%x.588 0 4)) (##vcore.cdr (bruijn ##.expr-stack.57 18 1)) (##vcore.cdr (bruijn ##.pattern-stack.58 18 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 19 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44) (bruijn ##.%x.590 0 6) (bruijn ##.%x.591 0 7) (bruijn ##.success-expr.59 18 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0quote,
      self->vars[0]);
    self->vars[2] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Deq_Q,
      self->vars[4]);
    self->vars[6] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    self->vars[7] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44, self))));
    VWORD _arg1 = 
      self->vars[6];
    VWORD _arg2 = 
      self->vars[7];
    VWORD _arg3 = 
      VGetArg(statics, 18-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cadar.10 20 9) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43) (bruijn ##.pattern-stack.58 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43, self)))),
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k41) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k42))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k41, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k42, self)))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.582 ##.%p.583) ((##vcore.pair? (bruijn ##.%x.263 1 0)) (##vcore.not (bruijn ##.%x.582 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.32 20 2) (bruijn ##.%k.302 3 0) (bruijn ##.%x.304 0 0) '...)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 3,
      statics->up->up->vars[0],
      _var0,
      _V0_D_D_D);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.633) ((##vcore.pair? (bruijn ##.%x.305 1 0))) (if (bruijn ##.%p.633 0 0) ((bruijn ##.cadar.10 21 9) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47) (bruijn ##.pattern-stack.58 17 2)) ((bruijn ##.%k.302 2 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47, self)))),
      VGetArg(statics, 17-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.598 1 1) ((bruijn ##.cdar.2 19 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46) (bruijn ##.pattern-stack.58 15 2)) ((bruijn ##.%k.302 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46, self)))),
      VGetArg(statics, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.605 ##.%x.606 ##.%r.607) ((##vcore.cons (bruijn ##.%x.268 1 0) '()) (##vcore.cons (bruijn ##.%x.602 2 3) (bruijn ##.%x.605 0 0)) (##vcore.cons 'let (bruijn ##.%x.606 0 1))) ((bruijn ##.%k.186 19 0) (bruijn ##.%r.607 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[3],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.599 ##.%x.600 ##.%x.601 ##.%x.602 ##.%x.603 ##.%x.604) ((##vcore.car (bruijn ##.expr-stack.57 17 1)) (##vcore.cons (bruijn ##.%x.599 0 0) '()) (##vcore.cons (bruijn ##.sym.60 1 0) (bruijn ##.%x.600 0 1)) (##vcore.cons (bruijn ##.%x.601 0 2) '()) (##vcore.cdr (bruijn ##.expr-stack.57 17 1)) (##vcore.cons (bruijn ##.sym.60 1 0) (bruijn ##.%x.603 0 4))) (##qualified-call (vanity compiler match transform-match ##.match-ellipses.33) #f (bruijn ##.match-ellipses.33 18 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50) (bruijn ##.%x.604 0 5) (bruijn ##.pattern-stack.58 17 2) (bruijn ##.success-expr.59 17 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[4]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50, self))));
    VWORD _arg1 = 
      self->vars[5];
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 17-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.626 ##.%x.627 ##.%x.628 ##.%x.629 ##.%x.630 ##.%r.631) ((##vcore.cons (bruijn ##.%x.282 1 0) '()) (##vcore.cons (bruijn ##.%x.615 5 5) (bruijn ##.%x.626 0 0)) (##vcore.cons 'if (bruijn ##.%x.627 0 1)) (##vcore.cons (bruijn ##.%x.628 0 2) '()) (##vcore.cons (bruijn ##.%x.613 5 3) (bruijn ##.%x.629 0 3)) (##vcore.cons 'let (bruijn ##.%x.630 0 4))) ((bruijn ##.%k.186 23 0) (bruijn ##.%r.631 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 5),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 3),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.623 ##.%x.624 ##.%x.625) ((##vcore.cdr (bruijn ##.pattern-stack.58 21 2)) (##vcore.cons (bruijn ##.%x.287 1 0) (bruijn ##.%x.623 0 0)) (##vcore.cons (bruijn ##.%x.285 2 0) (bruijn ##.%x.624 0 1))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 22 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k54) (bruijn ##.%x.622 3 12) (bruijn ##.%x.625 0 2) (bruijn ##.success-expr.59 21 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 21-1, 2));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k54, self))));
    VWORD _arg1 = 
      statics->up->up->vars[12];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      VGetArg(statics, 21-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.2 23 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53) (bruijn ##.pattern-stack.58 19 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53, self)))),
      VGetArg(statics, 19-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 13 13 (##.%x.610 ##.%x.611 ##.%x.612 ##.%x.613 ##.%x.614 ##.%x.615 ##.%x.616 ##.%x.617 ##.%x.618 ##.%x.619 ##.%x.620 ##.%x.621 ##.%x.622) ((##vcore.car (bruijn ##.expr-stack.57 18 1)) (##vcore.cons (bruijn ##.%x.610 0 0) '()) (##vcore.cons (bruijn ##.sym.61 1 0) (bruijn ##.%x.611 0 1)) (##vcore.cons (bruijn ##.%x.612 0 2) '()) (##vcore.cons (bruijn ##.sym.61 1 0) '()) (##vcore.cons '##vcore.pair? (bruijn ##.%x.614 0 4)) (##vcore.cons (bruijn ##.sym.61 1 0) '()) (##vcore.cons '##vcore.car (bruijn ##.%x.616 0 6)) (##vcore.cons (bruijn ##.sym.61 1 0) '()) (##vcore.cons '##vcore.cdr (bruijn ##.%x.618 0 8)) (##vcore.cdr (bruijn ##.expr-stack.57 18 1)) (##vcore.cons (bruijn ##.%x.619 0 9) (bruijn ##.%x.620 0 10)) (##vcore.cons (bruijn ##.%x.617 0 7) (bruijn ##.%x.621 0 11))) ((bruijn ##.caar.3 22 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52) (bruijn ##.pattern-stack.58 18 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dpair_Q,
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcar,
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcdr,
      self->vars[8]);
    self->vars[10] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[10]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[11]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52, self)))),
      VGetArg(statics, 18-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.264 0 0) ((bruijn ##.gensym.7 19 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49) (##string ##.string.705)) (basic-block 2 2 (##.%x.608 ##.%p.609) ((##vcore.car (bruijn ##.pattern-stack.58 16 2)) (##vcore.pair? (bruijn ##.%x.608 0 0))) (if (bruijn ##.%p.609 0 1) ((bruijn ##.gensym.7 20 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51) (##string ##.string.705)) (basic-block 1 1 (##.%x.632) ((##vcore.car (bruijn ##.pattern-stack.58 17 2))) ((bruijn ##.compiler-error.11 21 10) (bruijn ##.%k.186 17 0) (##string ##.string.710) (bruijn ##.%x.632 0 0))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49, self)))),
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51, self)))),
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 10)), 3,
      VGetArg(statics, 17-1, 0),
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.243 0 0) ((bruijn ##.cdar.2 17 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37) (bruijn ##.pattern-stack.58 13 2)) (basic-block 2 2 (##.%x.597 ##.%p.598) ((##vcore.car (bruijn ##.pattern-stack.58 14 2)) (##vcore.pair? (bruijn ##.%x.597 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37, self)))),
      VGetArg(statics, 13-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.232 0 0) (basic-block 7 7 (##.%x.570 ##.%x.571 ##.%x.572 ##.%x.573 ##.%x.574 ##.%x.575 ##.%x.576) ((##vcore.car (bruijn ##.pattern-stack.58 12 2)) (##vcore.car (bruijn ##.expr-stack.57 12 1)) (##vcore.cons (bruijn ##.%x.571 0 1) '()) (##vcore.cons (bruijn ##.%x.570 0 0) (bruijn ##.%x.572 0 2)) (##vcore.cons '##vcore.eq? (bruijn ##.%x.573 0 3)) (##vcore.cdr (bruijn ##.expr-stack.57 12 1)) (##vcore.cdr (bruijn ##.pattern-stack.58 12 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 13 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33) (bruijn ##.%x.575 0 5) (bruijn ##.%x.576 0 6) (bruijn ##.success-expr.59 12 3))) (basic-block 2 2 (##.%x.580 ##.%p.581) ((##vcore.car (bruijn ##.pattern-stack.58 12 2)) (##vcore.pair? (bruijn ##.%x.580 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Deq_Q,
      self->vars[3]);
    self->vars[5] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[6] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33, self))));
    VWORD _arg1 = 
      self->vars[5];
    VWORD _arg2 = 
      self->vars[6];
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.204 0 0) (basic-block 1 1 (##.%x.540) ((##vcore.car (bruijn ##.pattern-stack.58 8 2))) ((bruijn ##.compiler-error.11 12 10) (bruijn ##.%k.186 8 0) (##string ##.string.708) (bruijn ##.%x.540 0 0))) (basic-block 2 2 (##.%x.541 ##.%p.542) ((##vcore.car (bruijn ##.pattern-stack.58 8 2)) (##vcore.null? (bruijn ##.%x.541 0 0))) (if (bruijn ##.%p.542 0 1) (basic-block 5 5 (##.%x.543 ##.%x.544 ##.%x.545 ##.%x.546 ##.%x.547) ((##vcore.car (bruijn ##.expr-stack.57 9 1)) (##vcore.cons (bruijn ##.%x.543 0 0) '()) (##vcore.cons '##vcore.null? (bruijn ##.%x.544 0 1)) (##vcore.cdr (bruijn ##.expr-stack.57 9 1)) (##vcore.cdr (bruijn ##.pattern-stack.58 9 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 10 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30) (bruijn ##.%x.546 0 3) (bruijn ##.%x.547 0 4) (bruijn ##.success-expr.59 9 3))) (basic-block 2 2 (##.%x.551 ##.%p.552) ((##vcore.car (bruijn ##.pattern-stack.58 9 2)) (##vcore.string? (bruijn ##.%x.551 0 0))) (if (bruijn ##.%p.552 0 1) (basic-block 13 13 (##.%x.553 ##.%x.554 ##.%x.555 ##.%x.556 ##.%x.557 ##.%x.558 ##.%x.559 ##.%x.560 ##.%x.561 ##.%x.562 ##.%x.563 ##.%x.564 ##.%x.565) ((##vcore.car (bruijn ##.expr-stack.57 10 1)) (##vcore.cons (bruijn ##.%x.553 0 0) '()) (##vcore.cons '##vcore.string? (bruijn ##.%x.554 0 1)) (##vcore.car (bruijn ##.pattern-stack.58 10 2)) (##vcore.car (bruijn ##.expr-stack.57 10 1)) (##vcore.cons (bruijn ##.%x.557 0 4) '()) (##vcore.cons (bruijn ##.%x.556 0 3) (bruijn ##.%x.558 0 5)) (##vcore.cons '##vcore.blob=? (bruijn ##.%x.559 0 6)) (##vcore.cons (bruijn ##.%x.560 0 7) '()) (##vcore.cons (bruijn ##.%x.555 0 2) (bruijn ##.%x.561 0 8)) (##vcore.cons 'and (bruijn ##.%x.562 0 9)) (##vcore.cdr (bruijn ##.expr-stack.57 10 1)) (##vcore.cdr (bruijn ##.pattern-stack.58 10 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 11 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31) (bruijn ##.%x.564 0 11) (bruijn ##.%x.565 0 12) (bruijn ##.success-expr.59 10 3))) (basic-block 1 1 (##.%x.569) ((##vcore.car (bruijn ##.pattern-stack.58 10 2))) ((bruijn ##.atom?.9 14 8) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32) (bruijn ##.%x.569 0 0))))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 3,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D708.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dnull_Q,
      self->vars[1]);
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30, self))));
    VWORD _arg1 = 
      self->vars[3];
    VWORD _arg2 = 
      self->vars[4];
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dstring_Q,
      self->vars[1]);
    self->vars[3] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    self->vars[4] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dblob_E_Q,
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0and,
      self->vars[9]);
    self->vars[11] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[12] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31, self))));
    VWORD _arg1 = 
      self->vars[11];
    VWORD _arg2 = 
      self->vars[12];
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32, self)))),
      self->vars[0]);
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.188 0 0) (basic-block 2 2 (##.%x.522 ##.%x.523) ((##vcore.cdr (bruijn ##.expr-stack.57 4 1)) (##vcore.cdr (bruijn ##.pattern-stack.58 4 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 5 1) (bruijn ##.%k.186 4 0) (bruijn ##.%x.522 0 0) (bruijn ##.%x.523 0 1) (bruijn ##.success-expr.59 4 3))) (basic-block 2 2 (##.%x.524 ##.%p.525) ((##vcore.car (bruijn ##.pattern-stack.58 4 2)) (##vcore.symbol? (bruijn ##.%x.524 0 0))) (if (bruijn ##.%p.525 0 1) (basic-block 7 7 (##.%x.526 ##.%x.527 ##.%x.528 ##.%x.529 ##.%x.530 ##.%x.531 ##.%x.532) ((##vcore.car (bruijn ##.pattern-stack.58 5 2)) (##vcore.car (bruijn ##.expr-stack.57 5 1)) (##vcore.cons (bruijn ##.%x.527 0 1) '()) (##vcore.cons (bruijn ##.%x.526 0 0) (bruijn ##.%x.528 0 2)) (##vcore.cons (bruijn ##.%x.529 0 3) '()) (##vcore.cdr (bruijn ##.expr-stack.57 5 1)) (##vcore.cdr (bruijn ##.pattern-stack.58 5 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 6 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28) (bruijn ##.%x.531 0 5) (bruijn ##.%x.532 0 6) (bruijn ##.success-expr.59 5 3))) (basic-block 2 2 (##.%x.536 ##.%p.537) ((##vcore.car (bruijn ##.pattern-stack.58 5 2)) (##vcore.vector? (bruijn ##.%x.536 0 0))) (if (bruijn ##.%p.537 0 1) (basic-block 1 1 (##.%x.538) ((##vcore.car (bruijn ##.pattern-stack.58 6 2))) ((bruijn ##.compiler-error.11 10 10) (bruijn ##.%k.186 6 0) (##string ##.string.707) (bruijn ##.%x.538 0 0))) (basic-block 1 1 (##.%x.539) ((##vcore.car (bruijn ##.pattern-stack.58 6 2))) ((bruijn ##.typevector?.8 10 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29) (bruijn ##.%x.539 0 0))))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VSymbolP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[6] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28, self))));
    VWORD _arg1 = 
      self->vars[5];
    VWORD _arg2 = 
      self->vars[6];
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VVectorP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D707.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29, self)))),
      self->vars[0]);
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.520) ((##vcore.null? (bruijn ##.pattern-stack.58 1 2))) (if (bruijn ##.%p.520 0 0) ((bruijn ##.%k.186 1 0) (bruijn ##.success-expr.59 1 3)) (basic-block 1 1 (##.%x.521) ((##vcore.car (bruijn ##.pattern-stack.58 2 2))) ((bruijn ##.eqv?.32 4 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27) (bruijn ##.%x.521 0 0) '_))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27, self)))),
      self->vars[0],
      _V0_U);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.642 ##.%x.643 ##.%x.644 ##.%x.645 ##.%x.646 ##.%r.647) ((##vcore.cons '() (bruijn ##.%x.339 1 0)) (##vcore.cons 'lambda (bruijn ##.%x.642 0 0)) (##vcore.cons (bruijn ##.k.318 11 0) '()) (##vcore.cons (bruijn ##.%x.643 0 1) (bruijn ##.%x.644 0 2)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.645 0 3)) (##vcore.cons (bruijn ##.%x.646 0 4) '())) ((bruijn ##.%k.329 5 0) (bruijn ##.%r.647 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[5]);
    }
}
static void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.compiler-warning.5 18 4) (bruijn ##.%k.354 1 0) (##string ##.string.712))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.compiler-warning.5 18 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k65) (##string ##.string.713) (bruijn ##.%x.355 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k65, self)))),
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.648 1 0) ((bruijn ##.caar.3 17 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k64) (bruijn ##.patterns.65 7 1)) ((bruijn ##.%k.354 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k64, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.656) ((##vcore.cons (bruijn ##.%x.340 3 0) (bruijn ##.%x.341 1 0))) ((bruijn ##.%k.329 15 0) (bruijn ##.%r.656 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.655) ((##vcore.cdr (bruijn ##.patterns.65 13 1))) (##qualified-call (vanity compiler match transform-match ##.loop.64) #f (bruijn ##.loop.64 14 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k72) (bruijn ##.%x.655 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k72, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.649 ##.%x.650 ##.%x.651 ##.%x.652 ##.%x.653 ##.%x.654) ((##vcore.cons '() (bruijn ##.%x.351 1 0)) (##vcore.cons 'lambda (bruijn ##.%x.649 0 0)) (##vcore.cons (bruijn ##.k.318 17 0) '()) (##vcore.cons (bruijn ##.%x.650 0 1) (bruijn ##.%x.651 0 2)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.652 0 3)) (##vcore.cons (bruijn ##.%x.653 0 4) '())) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 18 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k71) (bruijn ##.%x.343 4 0) (bruijn ##.%x.344 2 0) (bruijn ##.%x.654 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 17-1, 0),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k71, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[0];
    VWORD _arg3 = 
      self->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.2 19 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k70) (bruijn ##.patterns.65 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k70, self)))),
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.4 18 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k69) (bruijn ##.%x.352 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k69, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caar.3 17 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k68) (bruijn ##.patterns.65 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k68, self)))),
      VGetArg(statics, 7-1, 1));
}
static void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.list.4 16 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k67) (bruijn ##.input.319 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k67, self)))),
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.648) ((##vcore.not (bruijn ##.%x.356 1 0))) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k63) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k66)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k66, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match check-pattern) #t (bruijn ##.check-pattern.29 13 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k62) (bruijn ##.%x.357 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k62, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.333 0 0) ((bruijn ##.cdar.2 13 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k60) (bruijn ##.patterns.65 3 1)) ((bruijn ##.caar.3 13 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k61) (bruijn ##.patterns.65 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k60, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k61, self)))),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.eqv?.32 10 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k59) (bruijn ##.%x.358 0 0) 'else)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k59, self)))),
      _var0,
      _V0else);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.638) ((##vcore.null? (bruijn ##.patterns.65 1 1))) (if (bruijn ##.%p.638 0 0) (basic-block 3 3 (##.%x.639 ##.%x.640 ##.%r.641) ((##vcore.cons '(##string ##.string.711) '()) (##vcore.cons 'error (bruijn ##.%x.639 0 0)) (##vcore.cons (bruijn ##.%x.640 0 1) '())) ((bruijn ##.%k.329 2 0) (bruijn ##.%r.641 0 2))) ((bruijn ##.caar.3 11 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k58) (bruijn ##.patterns.65 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D711.sym, VPOINTER_OTHER),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0error,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64_V0k58, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.657 ##.%x.658 ##.%x.659 ##.%x.660 ##.%x.661 ##.%x.662 ##.%r.663) ((##vcore.cons (bruijn ##.%x.637 4 2) (bruijn ##.%x.328 1 0)) (##vcore.cons 'let (bruijn ##.%x.657 0 0)) (##vcore.cons (bruijn ##.%x.658 0 1) '()) (##vcore.cons (bruijn ##.%x.634 6 0) (bruijn ##.%x.659 0 2)) (##vcore.cons 'lambda (bruijn ##.%x.660 0 3)) (##vcore.cons (bruijn ##.%x.661 0 4) '()) (##vcore.cons '##vcore.call/cc (bruijn ##.%x.662 0 5))) ((bruijn ##.%k.74 10 0) (bruijn ##.%r.663 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall_Wcc,
      self->vars[5]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.loop.64) #f (bruijn ##.loop.64 1 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k74) (bruijn ##.%x.359 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k74, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.635 ##.%x.636 ##.%x.637) ((##vcore.cons (bruijn ##.%x.362 1 0) '()) (##vcore.cons (bruijn ##.input.319 3 0) (bruijn ##.%x.635 0 0)) (##vcore.cons (bruijn ##.%x.636 0 1) '())) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64")) ((bruijn ##.cddr.6 9 5) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73) (bruijn ##.expr.31 7 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D64, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73, self)))),
      VGetArg(statics, 7-1, 1));
    }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.634) ((##vcore.cons (bruijn ##.k.318 2 0) '())) ((bruijn ##.cadr.1 6 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k57) (bruijn ##.expr.31 4 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k57, self)))),
      statics->up->up->up->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 4 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56) (##string ##.string.714))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[6]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56, self)))),
      VEncodePointer(&_V10_Dstring_D714.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33") (close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34")) ((bruijn ##.gensym.7 3 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55) (##string ##.string.706)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55, self)))),
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.675) ((##vcore.eq? (bruijn ##.%x.378 1 0) '...)) ((bruijn ##.%k.376 3 0) (bruijn ##.%r.675 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0_D_D_D);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.666 1 0) (basic-block 2 2 (##.%x.673 ##.%p.674) ((##vcore.cdr (bruijn ##.pattern.68 4 1)) (##vcore.pair? (bruijn ##.%x.673 0 0))) (if (bruijn ##.%p.674 0 1) ((bruijn ##.cadr.1 8 0) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k76) (bruijn ##.pattern.68 4 1)) ((bruijn ##.%k.376 1 0) #f))) ((bruijn ##.%k.376 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k76, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.668) ((##vcore.+ (bruijn ##.infinites.69 7 2) 1)) (##qualified-call (vanity compiler match check-pattern ##.iter.67) #f (bruijn ##.iter.67 8 0) (bruijn ##.%k.364 7 0) (bruijn ##.%x.368 1 0) (bruijn ##.%x.668 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.367 0 0) ((bruijn ##.cddr.6 9 5) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k79) (bruijn ##.pattern.68 5 1)) ((bruijn ##.%k.364 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k79, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.372 0 0) (basic-block 1 1 (##.%x.671) ((##vcore.cdr (bruijn ##.pattern.68 7 1))) (##qualified-call (vanity compiler match check-pattern ##.iter.67) #f (bruijn ##.iter.67 8 0) (bruijn ##.%k.364 7 0) (bruijn ##.%x.671 0 0) (bruijn ##.infinites.69 7 2))) ((bruijn ##.%k.364 6 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.366 0 0) (basic-block 1 1 (##.%x.667) ((##vcore.car (bruijn ##.pattern.68 4 1))) (##qualified-call (vanity compiler match check-pattern) #t (bruijn ##.check-pattern.29 7 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k78) (bruijn ##.%x.667 0 0))) (basic-block 1 1 (##.%p.669) ((##vcore.pair? (bruijn ##.pattern.68 4 1))) (if (bruijn ##.%p.669 0 0) (basic-block 1 1 (##.%x.670) ((##vcore.car (bruijn ##.pattern.68 5 1))) (##qualified-call (vanity compiler match check-pattern) #t (bruijn ##.check-pattern.29 8 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k80) (bruijn ##.%x.670 0 0))) (basic-block 1 1 (##.%r.672) ((##vcore.<= (bruijn ##.infinites.69 5 2) 1)) ((bruijn ##.%k.364 5 0) (bruijn ##.%r.672 0 0))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k78, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k80, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.664) ((##vcore.symbol? (bruijn ##.pattern.68 1 1))) (if (bruijn ##.%p.664 0 0) (basic-block 1 1 (##.%r.665) ((##vcore.<= (bruijn ##.infinites.69 2 2) 0)) ((bruijn ##.%k.364 2 0) (bruijn ##.%r.665 0 0))) (basic-block 1 1 (##.%p.666) ((##vcore.pair? (bruijn ##.pattern.68 2 1))) ((close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k75) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k77)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67_V0k77, self)))));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67")) (##qualified-call (vanity compiler match check-pattern ##.iter.67) #f (bruijn ##.iter.67 0 0) (bruijn ##.%k.363 1 0) (bruijn ##.pattern.66 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D67(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.685) ((##vcore.cons (bruijn ##.%x.683 2 0) (bruijn ##.%x.388 1 0))) ((bruijn ##.%k.380 9 0) (bruijn ##.%r.685 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.71 14 2) (bruijn ##.%k.404 1 0) (bruijn ##.%x.405 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.694 1 1) ((bruijn ##.caar.3 15 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87) (bruijn ##.pattern.70 13 1)) ((bruijn ##.%k.404 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.696 ##.%x.697 ##.%x.698) ((##vcore.cdr (bruijn ##.pattern.70 16 1)) (##vcore.cons (bruijn ##.%x.401 1 0) (bruijn ##.%x.696 0 0)) (##vcore.cons (bruijn ##.%x.399 2 0) (bruijn ##.%x.697 0 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 17 2) (bruijn ##.%k.380 16 0) (bruijn ##.%x.698 0 2) (bruijn ##.eqv?.71 16 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 16-1, 0);
    VWORD _arg1 = 
      self->vars[2];
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.2 16 1) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k90) (bruijn ##.pattern.70 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k90, self)))),
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.396 0 0) (basic-block 1 1 (##.%x.695) ((##vcore.cdr (bruijn ##.pattern.70 14 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 15 2) (bruijn ##.%k.380 14 0) (bruijn ##.%x.695 0 0) (bruijn ##.eqv?.71 14 2))) ((bruijn ##.caar.3 15 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89) (bruijn ##.pattern.70 13 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89, self)))),
      VGetArg(statics, 13-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.394 0 0) (basic-block 1 1 (##.%x.692) ((##vcore.cdr (bruijn ##.pattern.70 12 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 13 2) (bruijn ##.%k.380 12 0) (bruijn ##.%x.692 0 0) (bruijn ##.eqv?.71 12 2))) (basic-block 2 2 (##.%x.693 ##.%p.694) ((##vcore.car (bruijn ##.pattern.70 12 1)) (##vcore.pair? (bruijn ##.%x.693 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 12-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.392 0 0) (basic-block 1 1 (##.%x.690) ((##vcore.car (bruijn ##.pattern.70 10 1))) ((bruijn ##.compiler-error.11 12 10) (bruijn ##.%k.380 10 0) (##string ##.string.708) (bruijn ##.%x.690 0 0))) (basic-block 1 1 (##.%x.691) ((##vcore.car (bruijn ##.pattern.70 10 1))) ((bruijn ##.atom?.9 12 8) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85) (bruijn ##.%x.691 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 3,
      VGetArg(statics, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D708.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.384 0 0) (basic-block 1 1 (##.%x.680) ((##vcore.cdr (bruijn ##.pattern.70 6 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 7 2) (bruijn ##.%k.380 6 0) (bruijn ##.%x.680 0 0) (bruijn ##.eqv?.71 6 2))) (basic-block 2 2 (##.%x.681 ##.%p.682) ((##vcore.car (bruijn ##.pattern.70 6 1)) (##vcore.symbol? (bruijn ##.%x.681 0 0))) (if (bruijn ##.%p.682 0 1) (basic-block 2 2 (##.%x.683 ##.%x.684) ((##vcore.car (bruijn ##.pattern.70 7 1)) (##vcore.cdr (bruijn ##.pattern.70 7 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 8 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83) (bruijn ##.%x.684 0 1) (bruijn ##.eqv?.71 7 2))) (basic-block 2 2 (##.%x.686 ##.%p.687) ((##vcore.car (bruijn ##.pattern.70 7 1)) (##vcore.vector? (bruijn ##.%x.686 0 0))) (if (bruijn ##.%p.687 0 1) (basic-block 1 1 (##.%x.688) ((##vcore.car (bruijn ##.pattern.70 8 1))) ((bruijn ##.compiler-error.11 10 10) (bruijn ##.%k.380 8 0) (##string ##.string.707) (bruijn ##.%x.688 0 0))) (basic-block 1 1 (##.%x.689) ((##vcore.car (bruijn ##.pattern.70 8 1))) ((bruijn ##.typevector?.8 10 7) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84) (bruijn ##.%x.689 0 0))))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VSymbolP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VVectorP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 3,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D707.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84, self)))),
      self->vars[0]);
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.382 0 0) (basic-block 1 1 (##.%x.678) ((##vcore.cdr (bruijn ##.pattern.70 4 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 5 2) (bruijn ##.%k.380 4 0) (bruijn ##.%x.678 0 0) (bruijn ##.eqv?.71 4 2))) (basic-block 1 1 (##.%x.679) ((##vcore.car (bruijn ##.pattern.70 4 1))) ((bruijn ##.eqv?.71 4 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82) (bruijn ##.%x.679 0 0) '...)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82, self)))),
      self->vars[0],
      _V0_D_D_D);
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.676) ((##vcore.null? (bruijn ##.pattern.70 1 1))) (if (bruijn ##.%p.676 0 0) ((bruijn ##.%k.380 1 0) '()) (basic-block 1 1 (##.%x.677) ((##vcore.car (bruijn ##.pattern.70 2 1))) ((bruijn ##.eqv?.71 2 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81) (bruijn ##.%x.677 0 0) '_))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81, self)))),
      self->vars[0],
      _V0_U);
    }
}
    }
}
static void _V0vanity_V0compiler_V0match_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13) {
 if(argc != 14) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0lambda2, got ~D~N"
  "-- expected 14~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[14]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 14, 14, statics);
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
  self->vars[11] = _var11;
  self->vars[12] = _var12;
  self->vars[13] = _var13;
  // (##letrec (vanity compiler match) 3 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match" (vanity compiler match)) (close "_V50_V0vanity_V0compiler_V0match_V0check__pattern" (vanity compiler match)) (close "_V50_V0vanity_V0compiler_V0match_V0gather__variables" (vanity compiler match))) (basic-block 2 2 (##.%x.699 ##.%r.700) ((##vcore.cons 'transform-match (bruijn ##.transform-match.28 1 0)) (##vcore.cons (bruijn ##.%x.699 0 0) '())) ((bruijn ##.%k.73 6 0) (bruijn ##.%r.700 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0match = self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match, _V60_V0vanity_V0compiler_V0match))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0match_V20", &_V60_V0vanity_V0compiler_V0match);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0transform__match,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0compiler_V0match_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0match_V20_V0lambda2) (##string ##.string.715) (bruijn ##.%x.414 0 0) 'cadr 'cdar 'caar 'list 'compiler-warning 'cddr 'gensym 'typevector? 'atom? 'cadar 'compiler-error 'num-pairs 'cddar 'map)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 17,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D715.sym, VPOINTER_OTHER),
      _var0,
      _V0cadr,
      _V0cdar,
      _V0caar,
      _V0list,
      _V0compiler__warning,
      _V0cddr,
      _V0gensym,
      _V0typevector_Q,
      _V0atom_Q,
      _V0cadar,
      _V0compiler__error,
      _V0num__pairs,
      _V0cddar,
      _V0map);
}
static void _V0vanity_V0compiler_V0match_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0match_V20_V0k3) (bruijn ##.%x.415 1 0) (bruijn ##.%x.416 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0match_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_V0k2) (##string ##.string.716))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0match_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_V0k1) (##string ##.string.717))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D717.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VInternSymbol(-1851430374, &_VW_V0cddar.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VInternSymbol(2133063198, &_VW_V0atom_Q.sym), VPOINTER_OTHER);
  _V0typevector_Q = VEncodePointer(VInternSymbol(1566825028, &_VW_V0typevector_Q.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VInternSymbol(245497745, &_VW_V0compiler__warning.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0transform__match = VEncodePointer(VInternSymbol(-834638833, &_VW_V0transform__match.sym), VPOINTER_OTHER);
  _V0else = VEncodePointer(VInternSymbol(1332432884, &_VW_V0else.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V10vcore_Deq_Q = VEncodePointer(VInternSymbol(434979212, &_VW_V10vcore_Deq_Q.sym), VPOINTER_OTHER);
  _V0and = VEncodePointer(VInternSymbol(-2136794974, &_VW_V0and.sym), VPOINTER_OTHER);
  _V10vcore_Dblob_E_Q = VEncodePointer(VInternSymbol(36075437, &_VW_V10vcore_Dblob_E_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dstring_Q = VEncodePointer(VInternSymbol(-1296233363, &_VW_V10vcore_Dstring_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dnull_Q = VEncodePointer(VInternSymbol(-577062031, &_VW_V10vcore_Dnull_Q.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V10vcore_Dcall_Wcc = VEncodePointer(VInternSymbol(482979242, &_VW_V10vcore_Dcall_Wcc.sym), VPOINTER_OTHER);
  _V10vcore_Dcdr = VEncodePointer(VInternSymbol(-1160051211, &_VW_V10vcore_Dcdr.sym), VPOINTER_OTHER);
  _V10vcore_Dcar = VEncodePointer(VInternSymbol(976741304, &_VW_V10vcore_Dcar.sym), VPOINTER_OTHER);
  _V10vcore_Dnot = VEncodePointer(VInternSymbol(904118690, &_VW_V10vcore_Dnot.sym), VPOINTER_OTHER);
  _V10vcore_Dpair_Q = VEncodePointer(VInternSymbol(-2140366458, &_VW_V10vcore_Dpair_Q.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V10vcore_Dcall__with__values = VEncodePointer(VInternSymbol(1537217383, &_VW_V10vcore_Dcall__with__values.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VInternSymbol(-1001750904, &_VW_V0split__at__right.sym), VPOINTER_OTHER);
  _V10vcore_D_L = VEncodePointer(VInternSymbol(1686200305, &_VW_V10vcore_D_L.sym), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VInternSymbol(67164350, &_VW_V0num__pairs.sym), VPOINTER_OTHER);
  _V0_D_D_D = VEncodePointer(VInternSymbol(-1484744521, &_VW_V0_D_D_D.sym), VPOINTER_OTHER);
  _V10_Dpair_D701.first = _V0_D_D_D;
  _V10_Dpair_D701.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
