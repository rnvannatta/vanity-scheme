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
  (define (printout2 debug? shared? literal-table foreign-functions functions declares toplevels)
    (define (print-global sym)
      (let ((builtin (lookup-intrinsic-name sym)))
        (if builtin
            (printf "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})" builtin)
            (printf "VLookupGlobalVarFast2(runtime, \"~A\")" sym))))
    (define (print-string s)
      (display #\")
      (let loop ((i 0))
        (if (< i (string-length s))
            (begin
              (case (string-ref s i)
                ((#\alarm) (display "\\a"))
                ((#\backspace) (display "\\b"))
                ((#\tab) (display "\\t"))
                ((#\newline) (display "\\n"))
                ((#\return) (display "\\r"))
                ((#\?) (display "\\?")) ; stupid trigraphs
                ((#\" #\\) (display #\\) (display (string-ref s i)))
                (else (display (string-ref s i))))
              (loop (+ i 1)))))
      (display #\"))
    (define (escape-string s)
      (let ((len (string-length s))
            (port (open-output-string)))
        (let loop ((i 0))
          (if (< i len)
              (begin
                (case (string-ref s i)
                  ((#\alarm) (display "\\a" port))
                  ((#\backspace) (display "\\b" port))
                  ((#\tab) (display "\\t" port))
                  ((#\newline) (display "\\n" port))
                  ((#\return) (display "\\r" port))
                  ((#\?) (display "\\?" port)) ; stupid trigraphs
                  ((#\" #\\) (display #\\ port) (display (string-ref s i) port))
                  (else (display (string-ref s i) port)))
                (loop (+ i 1)))))
        (let ((ret (get-output-string port)))
          (close-port port)
          ret)))
    (define (escape-char c)
      (case c
        ((#\alarm) "\\a")
        ((#\backspace) "\\t")
        ((#\tab) "\\t")
        ((#\newline) "\\n")
        ((#\return) "\\r")
        ((#\\) "\\\\")
        ((#\') "\\'")
        (else c)))
    (define (print-literal-string x)
      (printf "VEncodePointer(&~A.sym, VPOINTER_OTHER)" (mangle-symbol x)))
    (define (print-intrinsic x)
       (printf "_V40~A" (mangle-symbol x)))
    (define (print-literal x)
      (cond ((integer? x) (printf "VEncodeInt(~Al)" x)) ; FIXME bounds check
            ((number? x) (printf "VEncodeNumber(~A)" x))
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
        ((f) (closes? f))
        ((f . xs)
         (or (closes? f) (closes? xs)))
        (x #f)
        (else (compiler-error "closes?: unknown form" expr))))
    (define (print-expr expr args)
      (define (print-builtin-apply f xs tail-call?)
        (printf "    V_CALL_FUNC(~A, NULL, runtime" (lookup-intrinsic-name f))
        (for-each
          (lambda (x)
           (printf ",~N      ")
           (print-expr x args))
          xs)
        (printf ");~N"))
      (define (print-closure-apply f xs tail-call?)
        (match f
          (('close fun) (printf "    V_CALL_FUNC(~A, env" fun))
          (else
            (display "    V_CALL(")
            (print-expr f args)))
        (printf ", runtime")
        (for-each
          (lambda (x)
           (printf ",~N      ")
           (print-expr x args))
          xs)
        (printf ");~N"))
      (define (print-letrec n xs body args)
        (printf "    // OH NO A LETREC!~N")
        (displayln "    {")
        (displayln "    VEnv * upenv = env;")
        (printf "    struct { VEnv env; VWORD argv[~A]; } container;~N" n)
        (printf "    VEnv * env = &container.env;~N")
        (printf "    VInitEnv(env, ~A, ~A, upenv);~N" n n)
        (let ((args (map (lambda (i) (sprintf "env->vars[~A]" i)) (iota n))))
          (for-each
            (lambda (x i)
              (printf "    env->vars[~A] = " i)
              (print-expr x args)
              (displayln ";"))
            xs
            (iota n))
          (print-expr body args))
        (displayln "    }"))
      
      ; should always be a tail call eh
      (define (print-define-global k y x tail-call?)
        (printf "    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,~N      ")
        (print-expr k args)
        (printf ",~N      ")
        (print-literal y)
        (printf ",~N      " )
        (print-expr x args)
        (printf "~N    );~N"))
      (define (print-set k y x tail-call?)
        (match y
          (('bruijn name up right)
           (printf "    V_CALL_FUNC(VSetEnvVar2, env, runtime,~N      ")
           (print-expr k args)
           (printf ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " up right)
           (print-expr x args)
           (printf "~N    );~N"))
          (sym
           (if (symbol? sym)
               (begin
                 (printf "    V_CALL_FUNC(VSetGlobalVar2, env, runtime,~N      ")
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
        (('close fun) (printf "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, env)})" fun))
        (('bruijn name up right)
         (cond ((= up 0) (display (list-ref args right)))
               ((= up 1) (printf "upenv->vars[~A]" right))
               ((= up 2) (printf "upenv->up->vars[~A]" right))
               ((= up 3) (printf "upenv->up->up->vars[~A]" right))
               ((= up 4) (printf "upenv->up->up->up->vars[~A]" right))
               (else (printf "VGetArg(upenv, ~A-1, ~A)" up right))))
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
         (printf "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})" x))
        (('letrec n xs body)
         (print-letrec n xs body args))
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
        (printf "static void ~A(VRuntime * runtime, VEnv * upenv, int argc" name)
        (for-each (lambda (arg) (printf ", VWORD ~A" arg)) args)
        (if variadic? (printf ", ..."))
        (printf ") {~N")
        (if debug?
          (begin
            (printf " static VDebugInfo dbg = { \"~A\" };~N" name)
            (printf " VRecordCall2(runtime, &dbg);~N")))
        (if check-args?
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
            (begin
              (printf " VWORD _varargs = VNULL;~N")
              (printf " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" num (if (= num 0) "argc" (list-ref args (- num 1))))))
        (printf " V_GC_CHECK2_VARARGS((VFunc)~A, runtime, upenv, ~A, argc" name num)
        (for-each (lambda (arg) (printf ", ~A" arg)) args)
        (if variadic?
            (printf ", _varargs) {~N")
            (printf ") {~N"))
        (if (closes? body)
            (begin
              (printf "  struct { VEnv env; VWORD argv[~A]; } container;~N" (if variadic? (+ num 1) num))
              (printf "  VEnv * env = &container.env;~N")
              (let ((nargs (if variadic? (+ num 1) num)))
                (printf "  VInitEnv(env, ~A, ~A, upenv);~N" nargs nargs))
              (for-each
                (lambda (i arg)
                  (printf "  env->vars[~A] = ~A;~N" i arg))
                (iota num)
                args)
              (if variadic? (printf "  env->vars[~A] = _varargs;~N" num))))

       (printf "  // ~S~N" body)
       (print-expr body (if variadic? (append args '("_varargs")) args))
       (printf " }~N")
       (printf "}~N")))
    (define (print-fun-case fun)
      (let* ((name (car fun))
             (cases (cddr fun))
             (cases (map (lambda (i e) `(,(sprintf "_V20Case~A_~A" i name) #f ,e)) (iota (length cases)) cases)))
       (printf "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * upenv, int argc, ...) {~N" name)
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

       ; while this declaration is nonstatic, the definition lacks the .globl directive so it's still a static function
       (printf "void ~A(VRuntime * runtime, VEnv * upenv, int argc, ...);~N" name)
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
       (printf ");~N")))
    (define (print-fun fun)
      (match fun
       ((name check-args? (num body))
        (print-fun-single name check-args? num #f body #f))
       ((name check-args? (num '+ body))
        (print-fun-single name check-args? num #t body #f))
       (else (print-fun-case fun))))

    (define (print-toplevel i expr)
      (printf "void toplevel~A(V_CORE_ARGS, VWORD _k) {~N" i)
      (displayln "    VEnv * env = NULL;")
      (print-expr `(,expr (bruijn k 0 0)) '("_k"))
      (displayln "}"))

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

    (define (print-main toplevels)
      (for-each (cut print-toplevel <> <>) (iota (length toplevels)) toplevels)

      (printf "int main(int argc, char ** argv) {~N")
      (printf "  VThunk toplevels[] = {~N")
      (for-each (lambda (i) (printf "    toplevel~A," i)) (iota (length toplevels)))
      (printf "~N  };~N")
      (displayln "  VRuntime * runtime;")
      (displayln "  VInitRuntime2(&runtime, argc, argv);")
      (printf "  return VDecodeExitCode(VStart2(runtime, sizeof toplevels / sizeof *toplevels, toplevels));~N")
      (displayln "}"))

    (let ((print-main? (not (null? toplevels)))
          (functions (reverse functions)))
      (displayln "#include \"vscheme/vruntime.h\"")
      (displayln "#include \"vscheme/vlibrary.h\"")
      (displayln "#include \"vscheme/vinlines.h\"")
      (displayln "#include <stdarg.h>")
      (for-each print-literal-declaration literal-table)
      (print-dllmain literal-table)
      (for-each print-foreign-declare declares)
      (for-each print-foreign-function foreign-functions)
      (for-each print-fun functions)
      (for-each print-declare declares)

      (if (and shared? print-main?)
          (compiler-error "shared library has toplevel expressions or defines" toplevels))
      (if print-main?
          (print-main toplevels))
      print-main?))
)
