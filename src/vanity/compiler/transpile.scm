; Copyright 2023-2024 Richard N Van Natta
;
; This file is part of the Vanity Scheme Compiler.
;
; The Vanity Scheme Compiler is free software: you can redistribute it
; and/or modify it under the terms of the GNU General Public License as
; published by the Free Software Foundation, either version 2 of the
; License, or (at your option) any later version.
; 
; The Vanity Scheme Compiler is distributed in the hope that it will be
; useful, but WITHOUT ANY WARRANTY; without even the implied warranty
; of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
; General Public License for more details.
;
; You should have received a copy of the GNU General Public
; License along with the Vanity Scheme Compiler.
;
; If not, see <https://www.gnu.org/licenses/>.
;
; This work is published with additional permission, the Vanity Scheme
; Runtime Library Exceptions, which should have been included with the
; Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

(define-library (vanity compiler transpile)
  (import (vanity core) (vanity list) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity compiler ffi) (vanity intrinsics))
  (export printout2)
  (define gendllmain
    (let ((x 0))
      (lambda ()
        (set! x (+ x 1))
        (sprintf "VDllMain~A" x))))
  (define (printout2 main purec? debug? shared? literal-table foreign-functions functions declares toplevels)
    (define (print-global sym)
      (let ((builtin (lookup-intrinsic-name sym)))
        (if builtin
            ; thank u for the parens clang
            (printf "(VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})))" builtin)
            (printf "VLookupGlobalVarFast2(runtime, \"~A\")" sym))))
    (define (escape-octal-char c)
      (let ((i (char->integer c)))
        (if (< i 32)
            (sprintf "\\0~A~A" (quotient i 8) (remainder i 8))
            c)))
    (define (escape-string s)
      (let ((len (string-length s))
            (port (open-output-string)))
        (let loop ((i 0))
          (if (< i len)
              (let ((c (string-ref s i)))
                (case c
                  ((#\alarm) (display "\\a" port))
                  ((#\backspace) (display "\\b" port))
                  ((#\delete) (display "\\177" port))
                  ((#\tab) (display "\\t" port))
                  ((#\newline) (display "\\n" port))
                  ((#\return) (display "\\r" port))
                  ((#\?) (display "\\?" port)) ; stupid trigraphs
                  ((#\" #\\) (display #\\ port) (display c port))
                  (else (display (escape-octal-char c) port)))
                (loop (+ i 1)))))
        (let ((ret (get-output-string port)))
          (close-port port)
          ret)))
    (define (escape-char c)
      (case c
        ((#\alarm) "\\a")
        ((#\backspace) "\\b")
        ((#\delete) "\\177")
        ((#\tab) "\\t")
        ((#\newline) "\\n")
        ((#\return) "\\r")
        ((#\\) "\\\\")
        ((#\') "\\'")
        (else (escape-octal-char c))))
    (define (print-literal-string x)
      (printf "VEncodePointer(&~A.sym, VPOINTER_OTHER)" (mangle-symbol x)))
    (define (print-intrinsic x)
       (printf "_V40~A" (mangle-symbol x)))
    (define (print-literal x)
      (cond ((integer? x) (printf "VEncodeInt(~Al)" x))
            ((number? x) (printf "VEncodeNumber(~A)" x))
            ((##vcore.void? x) (printf "VVOID"))
            ((##vcore.nullptr? x) (printf "VNULLPTR"))
            ((char? x) (printf "VEncodeChar('~A')" (escape-char x)))
            ((eq? x #t) (printf "VEncodeBool(true)"))
            ((eq? x #f) (printf "VEncodeBool(false)"))
            ((symbol? x)
             (display (mangle-symbol x)))
            (else (compiler-error "print-literal: unknown literal type" x))))
    (define (print-literal-declaration lit)
      (cond ((symbol? (car lit))
             (let* ((mangled (mangle-symbol (car lit)))
                    (escaped (escape-string (symbol->string (car lit))))
                    (len (+ (string-length (symbol->string (car lit))) 1)))
               (begin
                 (printf "VWEAK VWORD ~A;" mangled)
                 (printf "VWEAK struct { VBlob sym; char bytes[~A]; } _VW~A = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, ~A }, \"~A\" };~N"
                  len mangled len escaped))))
            ((string? (car lit))
             (let* ((mangled (mangle-symbol (cdr lit)))
                    (escaped (escape-string (car lit)))
                    (len (+ (string-length (car lit)) 1)))
               ; strings use a gensym name, so no weak attributes here
               (printf "static struct { VBlob sym; char bytes[~A]; } ~A = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, ~A }, \"~A\" };~N"
                len mangled len escaped)))
            ; of shape (('##intrinsic intrin) . c-function)
            ((and (pair? (car lit)) (eqv? (caar lit) '##intrinsic))
             (let ((mangled (mangle-symbol (cadar lit))))
               (begin
                 (printf "VWEAK VWORD _V40~A;" mangled)
                 (printf "VWEAK VClosure _VW_V40~A = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)~A, NULL };~N"
                   mangled
                   (cdr lit)))))
            (else (compiler-error "print-literal-table: unknown entry in literal table" lit))))
    (define (print-dllmain literals)
      (define (print-init lit)
        (cond ((symbol? (car lit))
               (let* ((mangled (mangle-symbol (car lit))))
                 (printf "  ~A = VEncodePointer(VLookupConstant(\"~A\", &_VW~A), VPOINTER_OTHER);~N" mangled mangled mangled)))
              ((and (pair? (car lit)) (eqv? (caar lit) '##intrinsic))
               (let ((mangled (mangle-symbol (cadar lit))))
                 (printf "  _V40~A = VEncodePointer(VLookupConstant(\"_V40~A\", &_VW_V40~A), VPOINTER_CLOSURE);~N" mangled mangled mangled)))
              (else #f)))
      (printf "static __attribute__((constructor)) void ~A() {~N" (gendllmain))
      (for-each print-init literals)
      (printf "}~N"))
    (define (closes? expr)
      (match expr
        (('close fun) #t)

        (('quote . _) #f)
        (('bruijn . _) #f)
        (('##string . _) #f)
        (('##intrinsic . _) #f)
        (('if p a b)
         (or (closes? p) (closes? a) (closes? b)))
        (('set! k y x) #t)
        (('define k y x) #t)
        (('##inline f . xs)
         (closes? xs))
        (('letrec . _) #t)
        ; FIXME!!! not always true
        (('basic-block . _) #t)
        ((f) (closes? f))
        ((f . xs)
         (or (closes? f) (closes? xs)))
        (x #f)
        (else (compiler-error "closes?: unknown form" expr))))
    (define (print-basic-expr expr args)
      (let ((name (lookup-intrinsic-name (car expr))))
        (if (not name) (compiler-error "basic expression that isn't an intrinsic call" expr))
        (printf "_VBasic_~A(runtime, NULL" name))
      (for-each
        (lambda (x)
          (printf ",~N      ")
          (print-expr x args))
        (cdr expr))
      (printf ")"))
    (define (print-expr expr args)
      (define (print-builtin-apply f xs tail-call?)
        (if purec?
            (printf "    V_CALL_FUNC((VFunc)~A, self, runtime" (lookup-intrinsic-name f))
            (printf "    VCallFuncWithGC(runtime, (VFunc)~A, ~A" (lookup-intrinsic-name f) (length xs)))
        (for-each
          (lambda (x)
           (printf ",~N      ")
           (print-expr x args))
          xs)
        (printf ");~N"))
      (define (print-closure-apply f xs tail-call?)
        (match f
          (('close fun)
           (if purec?
               (printf "    V_CALL_FUNC((VFunc)~A, self, runtime" fun)
               ; FIXME yucky! let's find a way to avoid creating this stack data
               (printf "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)~A, .env = self }, }, ~A" fun (length xs)))
           )
          (else
            (if purec?
                (begin
                  (display "    V_CALL(")
                  (print-expr f args)
                  (printf ", runtime")
                )
                (begin
                  (display "    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, ")
                  (print-expr f args)
                  (printf "), ~A" (length xs))))))
        (for-each
          (lambda (x)
           (printf ",~N      ")
           (print-expr x args))
          xs)
        (printf ");~N"))
      (define (print-letrec n xs body args)
        (displayln "    {")
        (displayln "    VEnv * statics = self;")
        (if purec? ; bug in emscripten
          (printf  "    self = alloca(sizeof(VEnv)+sizeof(VWORD[~A]));~N" n)
          (begin
            (printf "    struct { VEnv self; VWORD argv[~A]; } container;~N" n)
            (printf "    self = &container.self;~N")))
        (printf "    VInitEnv(self, ~A, ~A, statics);~N" n n)
        (let ((args (map (lambda (i) (sprintf "self->vars[~A]" i)) (iota n))))
          (for-each
            (lambda (x i)
              (printf "    self->vars[~A] = " i)
              (print-expr x args)
              (displayln ";"))
            xs
            (iota n))
          (print-expr body args))
        (displayln "    }"))
      (define (print-basic-block cost n xs vals body)
        (displayln "    {")
        (displayln "    VEnv * statics = self;")
        (if purec? ; bug in emscripten
          (printf  "    self = alloca(sizeof(VEnv)+sizeof(VWORD[~A]));~N" n)
          (begin
            (printf "    struct { VEnv self; VWORD argv[~A]; } container;~N" n)
            (printf "    self = &container.self;~N")))
        (printf "    VInitEnv(self, ~A, ~A, statics);~N" n n)
        (let ((args (map (lambda (i) (sprintf "self->vars[~A]" i)) (iota n))))
          (for-each
            (lambda (x i)
              (printf "    self->vars[~A] = " i)
              (print-basic-expr x args)
              (displayln ";"))
            vals
            (iota n))
          (print-expr body args))
        (displayln "    }"))
      
      (define (print-define-global k y x tail-call?)
        (if purec?
            (printf "    V_CALL_FUNC(VDefineGlobalVar2, NULL, runtime,~N      ")
            (printf "    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,~N      "))
        (print-expr k args)
        (printf ",~N      ")
        (print-literal y)
        (printf ",~N      " )
        (print-expr x args)
        (printf "~N    );~N"))
      (define (print-set k y x tail-call?)
        (match y
          (('bruijn name up right)
           (if purec?
               (printf "    V_CALL((VEncodeClosure(((VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }))), runtime,~N      ")
               (printf "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,~N      "))
           (print-expr k args)
           (printf ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " up right)
           (print-expr x args)
           (printf "~N    );~N"))
          (sym
           (if (symbol? sym)
               (begin
                 (if purec?
                     (printf "    V_CALL_FUNC(VSetGlobalVar2, NULL, runtime,~N      ")
                     (printf "    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,~N      "))
                 (print-expr k args)
                 (printf ",~N      ")
                 (print-literal sym)
                 (printf ",~N      " )
                 (print-expr x args)
                 (printf "~N    );~N")
               )
               (compiler-error "set!'s first argument is not a symbol")))
              (else (compiler-error "print-set: unknown form" y))))
      (define (print-inline f xs)
        (let ((inline (lookup-inline-name f)))
          (if (not inline) (compiler-error "unknown inline" f))
          (printf "~A(runtime,~N        " inline)
          (if (not (null? xs))
              (begin
                (print-expr (car xs) args)
                (for-each
                  (lambda (x)
                   (printf ",~N        ")
                   (print-expr x args))
                  (cdr xs))))
          (printf ")")))
      (match expr
        (('quote ()) (display "VNULL"))
        ; FIXME
        (('quote ('##string x)) (print-literal-string x))
        (('quote x) (print-literal x))
        (('close fun) (printf "(VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, self)}))" fun))
        (('bruijn name up right)
         (cond ((= up 0) (display (list-ref args right)))
               ((= up 1) (printf "statics->vars[~A]" right))
               ((= up 2) (printf "statics->up->vars[~A]" right))
               ((= up 3) (printf "statics->up->up->vars[~A]" right))
               ((= up 4) (printf "statics->up->up->up->vars[~A]" right))
               (else (printf "VGetArg(statics, ~A-1, ~A)" up right))))
        (('if p a b)
         (displayln "if(VDecodeBool(") (print-expr p args) (displayln ")) {") 
         (print-expr a args)
         (displayln "} else {")
         (print-expr b args)
         (displayln "}"))
        (('set! k y x)
         (print-set k y x #f))
        (('define k y x)
         (print-define-global k y x #f))
        (('##inline f . xs)
         (print-inline f xs))
        (('##string x)
         (print-literal-string x))
        (('##intrinsic x)
         (print-intrinsic x))
        (('##foreign.function x)
         (printf "(VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})))" x))
        (('letrec n xs body)
         (print-letrec n xs body args))
        (('basic-block cost n xs vals body)
         (print-basic-block cost n xs vals body))
        ((f xs ...)
         (cond ((lookup-intrinsic-name f) (print-builtin-apply f xs #f))
               ((and (pair? f) (eqv? (car f) '##intrinsic))
                (print-builtin-apply (cadr f) xs #f))
               (else (print-closure-apply f xs #f))))
        (x (if (symbol? x) (print-global x) (print-literal x)))
        (else (compiler-error "print-expr: malformed expression" expr))))
     (define (print-fun-single name check-args? num variadic? body needs-used?)
      (define (gen-args num)
        (map (lambda (e) (sprintf "_var~A" e)) (iota num)))
      (let ((args (gen-args num)))
        (if needs-used? (printf "__attribute__((used)) "))
        (if purec?
            (begin
              (printf "static V_BEGIN_FUNC~A(~A, \"~A\", ~A" (if variadic? "_MIN" "") name name num)
              (for-each (lambda (arg) (printf ", ~A" arg)) args)
              (printf ")~N"))
            (begin
              (printf "static void ~A(VRuntime * runtime, VEnv * statics, int argc" name)
              (for-each (lambda (arg) (printf ", VWORD ~A" arg)) args)
              (if variadic? (printf ", ..."))
              (printf ") {~N")))
        (if debug?
          (begin
            (printf " static VDebugInfo dbg = { \"~A\" };~N" name)
            (printf " VRecordCall2(runtime, &dbg);~N")))
        (if (and (not purec?) check-args?)
            (if variadic?
                (begin
                  (printf " if(argc < ~A) {~N" num)
                  (printf "  VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" name)
                  (printf "  \"-- expected ~A or more~~N\"~N" num)
                  (printf "  , argc);~N")
                  (printf " }~N"))
                (begin
                  (printf " if(argc != ~A) {~N" num)
                  (printf "  VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" name)
                  (printf "  \"-- expected ~A~~N\"~N" num)
                  (printf "  , argc);~N")
                  (printf " }~N"))))
        (if variadic?
            (if purec?
                (begin
                  (printf " VWORD _varargs = VNULL;~N")
                  (printf " V_GATHER_VARARGS_PUREC(&_varargs, ~A, argc);~N" num)
                  (printf " self->vars[~A] = _varargs;~N" num))
                (begin
                  (printf " VWORD _varargs = VNULL;~N")
                  (printf " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" num (if (= num 0) "argc" (list-ref args (- num 1)))))))
        (if (and (not purec?) (closes? body))
            (begin
              (printf "  struct { VEnv self; VWORD argv[~A]; } container;~N" (if variadic? (+ num 1) num))
              (printf "  VEnv * self = &container.self;~N")
              (let ((nargs (if variadic? (+ num 1) num)))
                (printf "  VInitEnv(self, ~A, ~A, statics);~N" nargs nargs))
              (for-each
                (lambda (i arg)
                  (printf "  self->vars[~A] = ~A;~N" i arg))
                (iota num)
                args)
              (if variadic? (printf "  self->vars[~A] = _varargs;~N" num))))

       (printf "  // ~S~N" body)
       (print-expr body (if variadic? (append args '("_varargs")) args))
       (printf "}~N")))
    (define (print-fun-case fun)
      (let* ((name (car fun))
             (cases (cddr fun))
             (cases (map (lambda (i e) `(,(sprintf "_V20Case~A_~A" i name) #f ,e)) (iota (length cases)) cases)))
       (if purec?
           (printf "__attribute__((used)) static V_BEGIN_FUNC_MIN(_V20CaseError_~A, \"_V20CaseError_~A\", 0)~N" name name)
           (printf "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * statics, int argc, ...) {~N" name))
       (printf " // ~S~N" fun)
       (printf " VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" name)
       (for-each
         (lambda (e)
          (match e
            ((name _ (num '+ _))
             (printf " \"-- expected ~A or more~~N\"~N" num))
            ((_ _ (num _))
             (printf " \"-- expected ~A~~N\"~N" num))))
         cases)
         (printf " , argc);~N")
       (printf "}~N")

       (for-each
         (lambda (e)
          (match e
            ((name _ (num '+ body))
             (print-fun-single name #f num #t body #t))
            ((name _ (num body))
             (print-fun-single name #f num #f body #t))))
         cases)

       (if purec?
           (begin
             (printf "V_BEGIN_FUNC_MIN(~A, \"~A\", 0)~N" name name)
             (printf "  VFunc func = (VFunc)_V20CaseError_~A;~N" name)
             (printf "  if(0)~N")
             (printf "    /*dummy*/;~N")
             (for-each
               (lambda (e)
                (match e
                  ((name _ (num '+ _))
                   (printf "  else if(argc >= ~A)~N" num)
                   (printf "    func = (VFunc)~A;~N" name))
                  ((name _ (num _))
                   (printf "  else if(argc == ~A)~N" num)
                   (printf "    func = (VFunc)~A;~N" name))))
               cases)
             (printf "  func(runtime, statics, argc, self);~N")
             (printf "}~N"))
           (begin
             ; while this declaration is nonstatic, the definition lacks the .globl directive so it's still a static function
             ; it's a compiler error to forward declare a static func without an implementation, compiler isn't aware of asm
             (printf "void ~A(VRuntime * runtime, VEnv * statics, int argc, ...);~N" name)
             (printf "asm(~N")
             (printf "\".intel_syntax noprefix\\n\"~N")

             (printf "#ifdef __linux__~N")
             (printf "\".type ~A, @function\\n\"~N" name)
             (printf "#endif~N")

             (printf "\"~A:\\n\"~N" name)
             (for-each
               (lambda (e)
                (match e
                  ((name _ (num '+ _))
                   (printf "\"    cmp \" ARGC_REG \", ~A\\n\"~N" num)
                   (printf "\"    jge ~A\\n\"~N" name))
                  ((name _ (num _))
                   (printf "\"    cmp \" ARGC_REG \", ~A\\n\"~N" num)
                   (printf "\"    je ~A\\n\"~N" name))))
               cases)
             (printf "\"    jmp _V20CaseError_~A\\n\"~N" name)
             (printf ");~N")))))
    (define (print-fun fun)
      (match fun
       ((name check-args? (num body))
        (print-fun-single name check-args? num #f body #f))
       ((name check-args? (num '+ body))
        (print-fun-single name check-args? num #t body #f))
       (else (print-fun-case fun))))

    (define (print-toplevel i expr)
      (if purec?
          (begin
            (printf "static V_BEGIN_FUNC(toplevel~A, \"toplevel~A\", 1, _k)~N" i i)
            (displayln "    self = NULL;")
            (print-expr `(,expr (bruijn k 0 0)) '("_k"))
            (displayln "}"))
          (begin
            (printf "static void toplevel~A(V_CORE_ARGS, VWORD _k) {~N" i)
            (displayln "    VEnv * self = NULL;")
            (print-expr `(,expr (bruijn k 0 0)) '("_k"))
            (displayln "}"))))

    ; Kind of gross to do it this way but whatever
    (define (print-foreign-declare declare)
      (match declare
        (('##foreign.declare d) (displayln d))
        (('##vcore.declare f v) #f)
        (else (compiler-error "print-foreign-declare: unknown form" declare))))
    (define (print-declare declare)
      (match declare
        (('##foreign.declare d) #f)
        (('##vcore.declare f v) 
         (printf "VFunc ~A = (VFunc)~A;~N" f v))
        (else (compiler-error "print-declare: unknown form" declare))))
    (define (print-declaretable declares)
      (printf "__attribute__((constructor)) static void VRegisterAllDeclares() {~N")
      (for-each
        (lambda (declare)
          (match declare
            (('##foreign.declare d) #f)
            (('##vcore.declare f v) 
             (printf "  VRegisterSym(\"~A\", &~A);~N" f f))
            (else (compiler-error "print-declaretable: unknown form" declare))))
        declares)
      (printf "}~N"))

    (define (print-toplevels toplevels)
      (for-each (cut print-toplevel <> <>) (iota (length toplevels)) toplevels)

      (printf "VClosure VanityToplevels[] = {~N")
      (for-each (lambda (i) (printf "  { .base.tag = VCLOSURE, .func = (VFunc)toplevel~A~N, .env = NULL }," i)) (iota (length toplevels)))
      (printf "};~N")
      (printf "int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;~N"))
    (define (print-main-standard main)
      (displayln "#include <stdlib.h>")
      (displayln "int VanityCurToplevel;")
      (displayln "VRuntime * VanityRuntime;")
      (displayln "int VanityStatus;")
      (displayln "void VanityMainLoop() {")
      (displayln "  if(VanityStatus == VEXITED)")
      (displayln "    return;")
      (displayln "  bool dotoplevel = VanityCurToplevel < VanityToplevelCount;")
      (displayln "  VClosure * thunk = dotoplevel ? &VanityToplevels[VanityCurToplevel]")
      (displayln "                                : (VClosure[]){VMakeClosure2((VFunc)VExit2, NULL)};")
      (displayln "  VanityStatus = VExecute(VanityRuntime, thunk);")
      (displayln "  if(VanityStatus == VEXITED) {")
      (displayln "    int ret = VDecodeExitCode(VGetExitCode(VanityRuntime));")
      (displayln "    VDestroyRuntime(VanityRuntime);")
      (displayln "    exit(ret);")
      (displayln "  }")
      (displayln "  if(VanityStatus == VFINISHED)")
      (displayln "    VanityCurToplevel++;")
      (displayln "}")
      (displayln "")
      (cond ((equal? main "none")
             #f)
            ((equal? main "emscripten-loop")
             (displayln "#include <emscripten/emscripten.h>")
             (displayln "int main(int argc, char ** argv) {")
             (displayln "  VInitRuntime2(&VanityRuntime, argc, argv);")
             (displayln "  emscripten_set_main_loop(VanityMainLoop, 0, 1);")
             (displayln "}"))
            ((equal? main "winmain")
             (displayln "int __stdcall WinMain(void* hInstance, void* hPrevInstance, char* lpCmdLine, int nShowCmd) {")
             (displayln "  VInitRuntime2(&VanityRuntime, __argc, __argv);")
             (displayln "  while(1) VanityMainLoop();")
             (displayln "}"))
            (else
             (displayln "int main(int argc, char ** argv) {")
             (displayln "  VInitRuntime2(&VanityRuntime, argc, argv);")
             (displayln "  while(1) VanityMainLoop();")
             (displayln "}"))
             ))

    (let ((print-main? (not (null? toplevels)))
          (functions (reverse functions)))
      (displayln "#include \"vscheme/vruntime.h\"")
      (displayln "#include \"vscheme/vlibrary.h\"")
      (displayln "#include \"vscheme/vinlines.h\"")
      (displayln "#include <stdarg.h>")
      (for-each print-literal-declaration literal-table)
      (print-dllmain literal-table)
      (for-each print-foreign-declare declares)
      (for-each (lambda (e) (print-foreign-function purec? e)) foreign-functions)
      (for-each print-fun functions)
      (for-each print-declare declares)
      (if purec? (print-declaretable declares))

      (if (and shared? print-main?)
          (compiler-error "shared library has toplevel expressions or defines" toplevels))
      (if print-main?
          (begin
            (print-toplevels toplevels)
            (print-main-standard main)))
      print-main?))
)
