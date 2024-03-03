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
  (import (vanity core) (vanity list) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity compiler ffi))
  (export bruijn-ify to-functions printout2)
; Strips the names from bound variables and replaces them with indices
; free variables are assumed to be builtin functions
  (define (list-index p l)
    (let loop ((l l) (i 0))
      (cond ((null? l) #f)
            ((p (car l)) i)
            (else (loop (cdr l) (+ i 1))))))

  (define (bruijn-ify expr)
    (define (lookup depth env x)
      (cond
        ((null? env) x)
        ((list-index (lambda (e) (eqv? x e)) (car env)) => (lambda (idx) (list 'bruijn x depth idx)))
        (else (lookup (+ 1 depth) (cdr env) x))))
    (define (undot lst)
      (if (pair? lst)
          (cons (car lst)
                (undot (cdr lst)))
          (if (null? lst) '()
              (cons lst '()))))
    (define (bruijn-lambda env lamb)
      (match lamb
        (((xs ...) body) `(,(length xs) ,(iter (cons xs env) body)))
        ((xs body)
         (let ((proper-xs (undot xs)))
          `(,(- (length proper-xs) 1) + ,(iter (cons proper-xs env) body))))
        (else (compiler-error "bruijnify-pass: No matching lambda"))))
    (define (iter env expr)
      (match expr
        (('lambda (xs ...) body)
         `(lambda ,(length xs) ,(iter (cons xs env) body)))
        (('lambda xs body)
         (let ((proper-xs (undot xs)))
          `(lambda ,(- (length proper-xs) 1) + ,(iter (cons proper-xs env) body))))
        (('case-lambda . cases)
         `(case-lambda . ,(map (lambda (e) (bruijn-lambda env e)) cases)))
        (('continuation (x) body)
         `(continuation 1 ,(iter (cons (list x) env) body)))
        (('letrec ((xs vals) ...) body)
         `(letrec ,(length xs) ,(map (lambda (e) (iter (cons xs env) e)) vals) ,(iter (cons xs env) body)))
        (('##foreign.function . _) expr)
        (('quote . _) expr)
        (('##inline f . xs)
         `(##inline ,f . ,(map (lambda (x) (iter env x)) xs)))
        ((f xs ...)
         (cons (iter env f) (map (lambda (x) (iter env x)) xs)))
        (x
         (if (symbol? x) (lookup 0 env x) x))
        (else (compiler-error "bruijnify-pass: No matching case" expr))))
    (define (doit expr)
      (iter '() expr))
    (match expr
      (('##foreign.declare . _) expr)
      (('##vcore.declare f l)
       `(##vcore.declare ,f ,(doit l)))
      (else (doit expr))))

  ; replaces lambdas and defines with explicit close statements on functions, and
  ; gathers the functions into a list, and gathers literals into a list and replaces
  ; with references
  (define curlambda 0)
  (define curcont 0)
  (define (to-functions exprs)
    (define (genlambda fun)
        (set! curlambda (+ curlambda 1))
        (string->symbol (sprintf "~A_lambda~A" fun curlambda)))
    (define (gencont fun)
        (set! curcont (+ curcont 1))
        (string->symbol (sprintf "~A_k~A" fun curcont)))
    (define foreign-functions '())
    (define functions '())
    (define literal-table '())
    (define (lift-intrinsic sym intrin)
      ; FIXME ASSOC DETECTED
      (let* ((key (list '##intrinsic sym))
             (lookup (assoc key literal-table)))
        (if lookup
            (car lookup)
            (let ((lookup (cons key intrin)))
              (set! literal-table (cons lookup literal-table))
              (car lookup)))))
    ; TODO drop the unnecessary quotes from nonsymbols, ie turn '"foo" into just "foo"
    ; then split out lift-symbol into a seperate function
    (define (lift-literal x)
      (cond ((integer? x) x)
            ((number? x) x)
            ((char? x) x)
            ((eq? x #t) x)
            ((eq? x #f) x)
            ((null? x) x)
            ((string? x)
             ; FIXME ASSOC DETECTED
             (let ((lookup (assoc x literal-table)))
               (if lookup `(##string ,(cdr lookup))
                   (begin
                     (set! literal-table (cons (cons x (gensym "string")) literal-table))
                     `(##string ,(cdar literal-table))))))
            ((symbol? x)
             ; FIXME ASSOC DETECTED
             (if (not (assv x literal-table))
                 (set! literal-table (cons (cons x '()) literal-table)))
             x)
            (else (compiler-error "literal-lifting: unknown literal type" x))))
    (define (iter-lambda fun lamb) 
      (match lamb
        ((n body)
         `(,n ,(iter-apply fun body)))
        ((n '+ body)
         `(,n + ,(iter-apply fun body)))))
    (define (iter-atom fun expr func-position?)
      (match expr
        (('bruijn . _) expr)
        (('lambda n body)
         (let ((lamb (genlambda fun)))
           (set! functions (cons `(,lamb #t (,n ,(iter-apply fun body))) functions))
           `(close ,lamb)))
        (('lambda n '+ body)
         (let ((lamb (genlambda fun)))
           (set! functions (cons `(,lamb #t (,n + ,(iter-apply fun body))) functions))
           `(close ,lamb)))
        (('case-lambda . cases)
         (let ((lamb (genlambda fun)))
           (set! functions (cons `(,lamb #t . ,(map (lambda (e) (iter-lambda fun e)) cases)) functions))
           `(close ,lamb)))
        (('continuation n body)
         (let ((k (gencont fun)))
           (set! functions (cons `(,k #t (,n ,(iter-apply fun body))) functions))
           `(close ,k)))
        ; TODO replace lang with C
        (('##foreign.function lang decl ret name . args)
         (let ((mangled (mangle-foreign-function name)))
           ; FIXME ASSOC DETECTED
           (if (not (assoc mangled foreign-functions))
               (set! foreign-functions (cons expr foreign-functions)))
           `(##foreign.function ,mangled)))
        (('quote x)
         `(quote ,(lift-literal x)))
        (('##inline f . xs)
         `(##inline ,f . ,(map (lambda (x) (iter-atom fun x #f)) xs)))
        (x (if (symbol? x)
               ; we don't need to create static storage for intrinsics
               ; that are directly applied, only for intrinsics that are passed
               ; as directly applied intrinsics never create null closures
               (if func-position?
                   x
                   (let ((intrin (lookup-intrinsic2 x)))
                     (if (not intrin)
                         x
                         (lift-intrinsic x intrin))))
               (lift-literal x)))))
    (define (iter-apply fun expr)
      (match expr
        (('define k y x)
         `(define ,k ,(lift-literal y) ,(iter-atom (mangle-symbol y) x #f)))
        (('set! k ('bruijn name . rest) x)
         `(set! ,(iter-atom fun k #f) (bruijn ,name . ,rest) ,(iter-atom (mangle-symbol name) x #f)))
        (('set! k y x)
         `(set! ,(iter-atom fun k #f) ,(lift-literal y) ,(iter-atom (mangle-symbol y) x #f)))
        (('if p x y)
         `(if ,(iter-atom fun p #f) ,(iter-apply fun x) ,(iter-apply fun y)))
        ((('lambda n body) . xs)
         (let ((lamb (genlambda fun)))
           (set! functions (cons `(,lamb #f (,n ,(iter-apply fun body))) functions))
           `((close ,lamb) . ,(map (lambda (x) (iter-atom fun x #f)) xs))))
        (('letrec n xs body)
         `(letrec ,n ,(map (lambda (x) (iter-atom fun x #f)) xs)
            ,(iter-apply fun body)))
        ((f xs ...)
         (cons (iter-atom fun f #t)
               (map (lambda (x) (iter-atom fun x #f)) xs)))))
    (define (iter fun expr) (match expr
        (('bruijn . _) expr)
        (('lambda . _) (iter-atom fun expr #f))
        (('case-lambda . _) (iter-atom fun expr #f))
        (('continuation . _) (iter-atom fun expr #f))
        (('quote . _) (iter-atom fun expr #f))
        (('##inline . _) (iter-atom fun expr #f))
        ((_ . _) (iter-apply fun expr))
        (else (iter-atom fun expr #f))))
    (define (iter-declare d)
      (match d
        (('##foreign.declare . _) d)
        (('##vcore.declare f l)
         (list '##vcore.declare  f (cadr (iter f l))))))
    ; TODO lift these three up and out
    (define (make-list n k)
      (if (= 0 n)
          '()
          (cons k (make-list (- n 1) k))))
    (define (list-set! l x v)
      (if (= x 0)
          (set-car! l v)
          (list-set! (cdr l) (- x 1) v)))
    (define (multi-partition f n l)
      (let loop ((ret (make-list n '())) (l l))
        (if (null? l)
            (apply values (map reverse ret))
            (begin
              (let ((split (f (car l))))
                (list-set! ret split (cons (car l) (list-ref ret split))))
              (loop ret (cdr l))))))
    (call-with-values
      (lambda ()
        (multi-partition
          (lambda (e)
            (match e
              (('##foreign.declare . _) 1)
              (('##vcore.declare . _) 1)
              (else 0)))
          2 exprs))
      (lambda (globals declares)
        (let ((toplevels (map (lambda (e) (iter "global" e)) globals))
              (declares (map iter-declare declares)))
          (list literal-table foreign-functions functions declares toplevels)))))




  (define gendllmain
    (let ((x 0))
      (lambda ()
        (set! x (+ x 1))
        (sprintf "VDllMain~A" x))))
  (define (printout2 debug? shared? literal-table foreign-functions functions declares toplevels)
    (define (print-global sym)
      (let ((builtin (lookup-intrinsic2 sym)))
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
        (printf "    V_CALL_FUNC(~A, NULL, runtime" (lookup-intrinsic2 f))
        (for-each
          (lambda (x)
           (printf ",~N      ")
           (print-expr x args))
          xs)
        (printf ");~N"))
      (define (print-closure-apply f xs tail-call?)
        (match f
          (('close fun) (printf "V_CALL_FUNC(~A, env" fun))
          (else
            (display "V_CALL(")
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
        (let ((inline (lookup-inline f)))
          (if (not inline) (compiler-error "unknown inline" f))
          (printf "~A(~N        " inline)
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
         (cond ((lookup-intrinsic2 f) (print-builtin-apply f xs #f))
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
                  (printf "  VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" name)
                  (printf "  \"-- expected ~A or more~~N\"~N" num)
                  (printf "  , argc);~N")
                  (printf " }~N"))
                (begin
                  (printf " if(argc != ~A) {~N" num)
                  (printf "  VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" name)
                  (printf "  \"-- expected ~A~~N\"~N" num)
                  (printf "  , argc);~N")
                  (printf " }~N"))))
        (if variadic?
            (begin
              (printf " VWORD _varargs = VNULL;~N")
              (printf " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" num (list-ref args (- num 1)))))
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
       (printf " VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" name)
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
      ; One source of ick here is that the expr is hardcoded to use VNext rather than
      ; just using a continuation. That's something to consider to fix to make this better.
      ; Maybe it's fine. It's probably fine.
      (print-expr expr '())
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
          (compiler-error "shared library has toplevel expressions or defines"))
      (if print-main?
          (print-main toplevels))
      print-main?))
)
