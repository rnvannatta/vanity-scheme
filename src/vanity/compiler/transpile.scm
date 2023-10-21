; Copyright 2023 Richard N Van Natta
;
; This file is part of the Vanity Scheme Compiler.
;
; The Vanity Scheme Compiler is free software: you can redistribute it
; and/or modify it under the terms of the GNU General Public License as
; published by the Free Software Foundation, either version 3 of the
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
; This work is published with additional permission under GNU GPL
; Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
; should have been included with the Vanity Scheme Compiler.
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
          `(,(- (length proper-xs) 1) + ,(iter (cons proper-xs env) body))))))
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
                     `(##string ,(cdar literal-table))
                   )
               )))
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
    (define (iter-atom fun expr)
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
         `(##inline ,f . ,(map (lambda (x) (iter-atom fun x)) xs)))
        (x (if (symbol? x) x (lift-literal x)))))
    (define (iter-apply fun expr)
      (match expr
        (('define k y x)
         `(define ,k ,(lift-literal y) ,(iter-atom (mangle-symbol y) x)))
        (('set! k ('bruijn name . rest) x)
         `(set! ,(iter-atom fun k) (bruijn ,name . ,rest) ,(iter-atom (mangle-symbol name) x)))
        (('set! k y x)
         `(set! ,(iter-atom fun k) ,(lift-literal y) ,(iter-atom (mangle-symbol y) x)))
        (('if p x y)
         `(if ,(iter-atom fun p) ,(iter-apply fun x) ,(iter-apply fun y)))
        ((('lambda n body) . xs)
         (let ((lamb (genlambda fun)))
           (set! functions (cons `(,lamb #f (,n ,(iter-apply fun body))) functions))
           `((close ,lamb) . ,(map (lambda (x) (iter-atom fun x)) xs))))
        ((xs ...)
         (map (lambda (x) (iter-atom fun x)) xs))))
    (define (iter fun expr) (match expr
        (('bruijn . _) expr)
        (('lambda . _) (iter-atom fun expr))
        (('case-lambda . _) (iter-atom fun expr))
        (('continuation . _) (iter-atom fun expr))
        (('quote . _) (iter-atom fun expr))
        (('##inline . _) (iter-atom fun expr))
        ((_ . _) (iter-apply fun expr))
        (else (iter-atom fun expr))))
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




    (define (printout2 debug? shared? literal-table foreign-functions functions declares toplevels)
    (define (print-global sym)
      (let ((builtin (lookup-intrinsic2 sym)))
        (if builtin
            (printf "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})" builtin)
            (printf "VLookupGlobalVarFast(\"~A\")" sym))))
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
    (define (print-literal x)
      (cond ((integer? x) (printf "VEncodeInt(~Al)" x)) ; FIXME bounds check
            ((number? x) (printf "VEncodeNumber(~A)" x)); FIXME fractions
            ((char? x) (printf "VEncodeChar('~A')" (escape-char x)))
            ((eq? x #t) (printf "VEncodeBool(true)"))
            ((eq? x #f) (printf "VEncodeBool(false)"))
            ((symbol? x)
             (printf "VEncodePointer(&~A.sym, VPOINTER_OTHER)" (mangle-symbol x)))
            (else (compiler-error "print-literal: unknown literal type" x))))
    (define (print-literal-declaration lit)
      (cond ((symbol? (car lit))
             (let* ((mangled (mangle-symbol (car lit)))
                    (escaped (escape-string (symbol->string (car lit))))
                    (len (+ (string-length (symbol->string (car lit))) 1)))
               (printf "static struct { VBlob sym; char bytes[~A]; } ~A = { { VSYMBOL, ~A }, \"~A\" };~N"
                len mangled len escaped)))
            ((string? (car lit))
             (let* ((mangled (mangle-symbol (cdr lit)))
                    (escaped (escape-string (car lit)))
                    (len (+ (string-length (car lit)) 1)))
               (printf "static struct { VBlob sym; char bytes[~A]; } ~A = { { VSTRING, ~A }, \"~A\" };~N"
                len mangled len escaped)))
            (else (compiler-error "print-literal-table: unknown entry in literal table" lit))))
    (define (closes? expr)
      (match expr
        (('close fun) #t)

        (('quote . _) #f)
        (('bruijn . _) #f)
        (('##string . _) #f)
        (('if p a b)
         (or (closes? p) (closes? a) (closes? b)))
        (('set! k y x) #t)
        (('define k y x) #t)
        (('##inline f . xs)
         (closes? xs))
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
        (printf "~N    );~N"))
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
        (printf "~N    );~N"))
      
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
          (printf "~A(~N" inline)
          (if (not (null? xs))
              (begin
                (print-expr (car xs) args)
                (for-each
                  (lambda (x)
                   (printf ",~N      ")
                   (print-expr x args))
                  (cdr xs))))
          (printf "~N    )~N")))
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
        (('##foreign.function x)
         (printf "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})" x))
        ((f xs ...)
         (if (lookup-intrinsic2 f)
             (print-builtin-apply f xs #f)
             (print-closure-apply f xs #f)))
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
            (printf " VRecordCall(&dbg);~N")))
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
                (printf "  env->tag = VENV; env->num_vars = ~A; env->var_len = ~A; env->up = upenv;~N" nargs nargs))
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
             (printf "\"    cmp edx, ~A\\n\"~N" num)
             (printf "\"    jge ~A\\n\"~N" name))
            ((name _ (num _))
             (printf "\"    cmp edx, ~A\\n\"~N" num)
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
      (printf "void toplevel~A() {~N" i)
      (displayln "    VEnv * env = NULL;")
      (displayln "    VRuntime * runtime = NULL;")
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
      (printf "  void (*toplevels[])() = {~N")
      (for-each (lambda (i) (printf "    toplevel~A," i)) (iota (length toplevels)))
      (printf "  ~N};~N")
      (printf "  VArgc = argc; VArgv = argv;")
      (printf "  return VStart(sizeof toplevels / sizeof *toplevels, toplevels);~N")
      (displayln "}"))

    (let ((print-main? (not (null? toplevels)))
          (functions (reverse functions)))
      (displayln "#include \"vscheme/vruntime.h\"")
      (displayln "#include \"vscheme/vlibrary.h\"")
      (displayln "#include \"vscheme/vinlines.h\"")
      (displayln "#include <stdarg.h>")
      (for-each print-literal-declaration literal-table)
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
