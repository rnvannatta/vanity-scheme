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

(define-library (vanity compiler cps)
  (import (vanity core) (vanity list) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity intrinsics) (vanity pretty-print))
  (export to-cps optimize)
  (define (application? x)
    (and (pair? x) (not (memv (car x) '(quote lambda ##qualified-lambda ##qualified-case-lambda continuation case-lambda ##intrinsic ##basic-intrinsic ##foreign.function ##inline)))))
  (define (combination? x)
    (and (pair? x) (not (memv (car x) '(quote lambda ##qualified-lambda ##qualified-case-lambda continuation case-lambda ##intrinsic ##basic-intrinsic ##foreign.function ##inline begin if or letrec ##letrec)))))
  (define (to-cps expr)
    (define (iter-atom x)
      (define (iter-lambda args body)
        (let ((k (gensym "k")))
          `((,k . ,args) ,(iter2 body k))))
      (match x
        (('lambda args body)
         (cons 'lambda (iter-lambda args body)))
        (('##qualified-lambda name static? args body)
         `(##qualified-lambda ,name ,static? . ,(iter-lambda args body)))
        (('case-lambda (args body) ...)
         (cons 'case-lambda (map iter-lambda args body)))
        (('##qualified-case-lambda name static? (args body) ...)
         `(##qualified-case-lambda ,name ,static? . ,(map iter-lambda args body)))
        (('##intrinsic . _) x)
        (('##basic-intrinsic . _) x)
        (('##foreign.function . _) x)
        (('quote _) x)
        (() (compiler-error "stray () in program"))
        (else x)))
    (define (iter-let args body vals k)
      (let loop ((appl '()) (vals vals))
       (cond
         ((null? vals)
          (let ((appl (reverse appl)))
            `((lambda ,args ,(iter2 body k)) . ,appl)))
         ((application? (car vals))
          (let ((x (gensym "x")))
               (iter2 (car vals) `(continuation (,x) ,(loop (cons x appl) (cdr vals))))))
         (else (loop (cons (iter-atom (car vals)) appl) (cdr vals))))))
    (define (iter-letrec path args body vals k)
      (let loop ((done-vals '()) (vals vals))
        (cond ((null? vals)
               (if path
                   `(##letrec ,path ,(map list args (reverse done-vals)) ,(iter2 body k))
                   `(letrec ,(map list args (reverse done-vals)) ,(iter2 body k))))
              ((application? (car vals))
               (let ((x (gensym "x")))
                 (iter2 (car vals) `(continuation (,x) ,(loop (cons x done-vals) (cdr vals))))))
              (else (loop (cons (iter-atom (car vals)) done-vals) (cdr vals))))))
    (define (iter-combination args cont)
      (let loop ((appl '()) (args args))
       (cond
         ((null? args)
          (let ((appl (reverse appl)))
            `(,(car appl) ,cont . ,(cdr appl))))
         ((application? (car args))
          (let ((x (gensym "x")))
               (iter2 (car args) `(continuation (,x) ,(loop (cons x appl) (cdr args))))))
         (else (loop (cons (iter-atom (car args)) appl) (cdr args))))))
    (define (iter2 expr cont)
      (if (application? expr)
          (match expr
            (('begin x y) 
             (if (application? x)
                 (iter2 x `(continuation ,(iter2 y cont)))
                 (iter2 y cont)))
            (('if p x y)
             (cond ((application? p)
                    (let ((sym (gensym "p")))
                      (iter2 p `(continuation (,sym) ,(iter2 `(if ,sym ,x ,y) cont)))))
                   ((symbol? p)
                    ; I originally didn't make the extra let binding when cont was a lambda, but it caused
                    ; exponential growth of the code lol
                    ;
                    ; There are probably times where you want to inline the cont instead of binding it to a
                    ; let, but idk
                    ;
                    ; Not inlining the lambda does produce a slower exe I believe, but the compile time is
                    ; soooooooo much faster
                    ;
                    ; well, the exe is also smaller so better icache? transpile.scm was a 200,000 line C
                    ; file without the let binding. and with it it's 20,000 lines
                    ;
                    ; One thing we could do better is that if both halfs of an if are not applications
                    ; we can instead compile it as (k (atom-if p a b)) instead of (if p (k a) (k b))
                    (if (symbol? cont)
                        `(if ,p ,(iter2 x cont) ,(iter2 y cont))
                        (let ((k (gensym "k")))
                          `((continuation (,k) (if ,p ,(iter2 x k) ,(iter2 y k))) ,cont))))
                   ((eq? p #f) (iter2 y cont))
                   (else (iter2 x cont))))
            (('or x y)
             (cond ((application? x)
                    (let ((sym (gensym "p")))
                     (iter2 x `(continuation (,sym) ,(iter2 `(or ,sym ,y) cont)))))
                   (else (iter2 `(if ,x ,x ,y) cont))))
            ((('lambda (x) body) val)
             (if (application? val)
                 (iter2 val `(continuation (,x) ,(iter2 body cont)))
                 (iter-let (list x) body (list val) cont)))
            ((('lambda args body) . vals)
             (iter-let args body vals cont))
            ((('##qualified-lambda name static? (x) body) val)
             (if (application? val)
                 (iter2 val `(continuation (,x) ,(iter2 body cont)))
                 (iter-let (list x) body (list val) cont)))
            ((('##qualified-lambda name static? args body) . vals)
             (iter-let args body vals cont))
            (('letrec ((xs vals) ...) body)
             (iter-letrec #f xs body vals cont))
            (('##letrec path ((xs vals) ...) body)
             (iter-letrec path xs body vals cont))
            (else (iter-combination expr cont)))
          `(,cont ,(iter-atom expr))))

    (define (to-cps-impl expr)
      (let ((next (gensym "next")))
        `(lambda (,next)
          ,(iter2 expr next))))
    (match expr
      (('##foreign.declare . _) expr)
      (('##vcore.declare f l)
       `(##vcore.declare ,f ,(cadr (caddr (to-cps-impl l)))))
      (('import lib)
       (to-cps-impl `(##vcore.multidefine (##vcore.load-library ,(mangle-library lib)))))
      (else (to-cps-impl expr))))

  (define (substitute x atom atom-frees expr n)
    (define (iter expr)
      (if (= n 0)
          expr
          (match expr
            (('lambda args free body)
             (if (memq x free)
                 `(lambda ,args ,(lset-union free atom-frees) ,(iter body))
                 expr))
            (('##qualified-lambda name static? args free body)
             (if (memq x free)
                 `(##qualified-lambda ,name ,static? ,args ,(lset-union free atom-frees) ,(iter body))
                 expr))
            (('continuation args free body)
             (if (memq x free)
                 `(continuation ,args ,(lset-union free atom-frees) ,(iter body))
                 expr))
            (('continuation free body)
             (if (memq x free)
                 `(continuation ,(lset-union free atom-frees) ,(iter body))
                 expr))
            (('case-lambda (args free body) ...)
             (cons 'case-lambda
               (map
                 (lambda (args free body)
                   (if (memq x free)
                       `(,args ,(lset-union free atom-frees) ,(iter body))
                       `(,args ,free ,body)))
                 args free body)))
            (('##qualified-case-lambda name static? (args free body) ...)
             `(##qualified-case-lambda ,name ,static?
               . ,(map
                    (lambda (args free body)
                     (if (memq x free)
                         `(,args ,(lset-union free atom-frees) ,(iter body))
                         `(,args ,free ,body)))
                    args free body)))
            (('##intrinsic . _) expr)
            (('##basic-intrinsic . _) expr)
            (('##foreign.function . _) expr)
            (('quote x) expr)
            (('letrec ((args vals) ...) body)
             `(letrec ,(map list args (map iter vals))
                      ,(iter body)))
            (('##letrec path ((args vals) ...) body)
             `(##letrec ,path
                ,(map list args (map iter vals))
                ,(iter body)))
            (('basic-block cost (regs applies) ... cont)
             `(basic-block ,cost
                ,@(map list regs (map iter applies))
                ,(iter cont)))
            ((f . xs) (cons (iter f) (iter xs)))
            (y
             (if (eqv? x y)
                 (begin
                   (set! n (- n 1))
                   atom)
                 y)))))
    (iter expr))

  (define (lset-union a b)
    (cond
      ((null? b) a)
      ((memq (car b) a) (lset-union a (cdr b)))
      (else (lset-union (cons (car b) a) (cdr b)))))
  (define (lset-difference a b)
    (cond
      ((null? a) '())
      ((memq (car a) b) (lset-difference (cdr a) b))
      (else (cons (car a) (lset-difference (cdr a) b)))))
  (define (undot xs)
    (cond ((pair? xs) (cons (car xs) (undot (cdr xs))))
          ((null? xs) '())
          (else (cons xs '()))))

  (define (free-variables-cps expr)
    (define (iter-combination xs)
      (if (null? xs)
          '()
          (let ()
            (define x-free-vars (iter-atom (car xs)))
            (define rest-free-vars (iter-combination (cdr xs)))
            (lset-union rest-free-vars x-free-vars))))
    (define (iter-letrec xs vals body)
      (define vals-free (iter-combination vals))
      (define body-free (iter-apply body))
      (lset-difference (lset-union vals-free body-free) xs))
    (define (iter-apply expr)
      (match expr
        (('letrec ((xs vals) ...) body)
         (iter-letrec xs vals body))
        (('##letrec path ((xs vals) ...) body)
         (iter-letrec xs vals body))
        (('basic-block cost (regs applies) ... cont)
         (define applies-free (iter-combination applies))
         (define cont-free (iter-apply cont))
         (lset-difference (lset-union applies-free cont-free) regs))
        (('if p a b)
         (define p-free (iter-atom p))
         (define a-free (iter-apply a))
         (define b-free (iter-apply b))
         (lset-union (lset-union a-free b-free) p-free))
        (else
         (iter-combination expr))))
    (define (iter-atom expr)
      (match expr
        (('##inline . xs)
         (iter-combination xs))
        (('lambda args free body)
         free)
        (('continuation args free body)
         free)
        (('##qualified-lambda name static? args free body)
         free)
        (('case-lambda (args free body) ...)
         (fold lset-union '() free))
        (('##qualified-case-lambda name static? (args free body) ...)
         (fold lset-union '() free))
        (('continuation free body)
         free)

        ; not needed, since they're not a symbol
        ;(('##intrinsic . _) (values expr '()))
        ;(('##basic-intrinsic . _) (values expr '()))
        ;(('##foreign.function . _) (values expr '()))
        ;(('quote x) (values expr '()))
        (else
         (if (and (symbol? expr) (not (lookup-intrinsic-name expr)))
             `(,expr)
             '()))))
    (if (application? expr)
        (iter-apply expr)
        (iter-atom expr)))
  (define (annotate-free-vars expr)
    (define (iter-combination xs)
      (if (null? xs)
          (values '() '())
          (let ()
            (define-values (x x-free-vars) (iter-atom (car xs)))
            (define-values (rest rest-free-vars) (iter-combination (cdr xs)))
            (values
              (cons x rest)
              (lset-union rest-free-vars x-free-vars)))))
    (define (iter-letrec xs vals body)
      (define-values (vals-new vals-free) (iter-combination vals))
      (define-values (body-new body-free) (iter-apply body))
      (values
        `(,(map list xs vals-new) ,body-new)
        (lset-difference (lset-union vals-free body-free) xs)))
    (define (iter-apply expr)
      (match expr
        (('letrec ((xs vals) ...) body)
         (define-values (letrec-new letrec-free) (iter-letrec xs vals body) )
         (values
           `(letrec . ,letrec-new)
           letrec-free))
        (('##letrec path ((xs vals) ...) body)
         (define-values (letrec-new letrec-free) (iter-letrec xs vals body) )
         (values
           `(##letrec ,path . ,letrec-new)
           letrec-free))
        (('basic-block cost (regs applies) ... cont)
         (define-values (applies-new applies-free) (begin #;(displayln "basic block" (current-error-port)) (iter-combination applies)))
         (define-values (cont-new cont-free) (iter-apply cont))
         (values
           `(basic-block ,cost
              ,@(map list regs applies-new)
              cont-new)
           (lset-difference (lset-union applies-free cont-free) regs)))
        (('if p a b)
         (define-values (p-new p-free) (iter-atom p))
         (define-values (a-new a-free) (iter-apply a))
         (define-values (b-new b-free) (iter-apply b))
         (values
           `(if ,p-new ,a-new ,b-new)
           (lset-union (lset-union a-free b-free) p-free)))
        (else
         ;(displayln xs (current-error-port))
         ;(displayln "combination" (current-error-port))
         (iter-combination expr))))
    (define (iter-lambda args body)
       (define-values (new-body free-vars) (iter-apply body))
       `(,args ,(lset-difference free-vars (undot args)) ,new-body))
    (define (iter-atom expr)
      (match expr
        (('##inline . xs)
         (define-values (xs-new xs-free) (iter-combination xs))
         (values
           `(##inline . ,xs-new)
           xs-free))
        (('lambda args body)
         (define lamb-new (iter-lambda args body))
         (values `(lambda . ,lamb-new) (cadr lamb-new)))
        (('continuation args body)
         (define lamb-new (iter-lambda args body))
         (values `(continuation . ,lamb-new) (cadr lamb-new)))
        (('##qualified-lambda name static? args body)
         (define lamb-new (iter-lambda args body))
         (values `(##qualified-lambda ,name ,static? . ,lamb-new) (cadr lamb-new)))
        (('case-lambda (args body) ...)
         (define lamb-new (map iter-lambda args body))
         (values `(case-lambda . ,lamb-new) (fold lset-union '() (map cadr lamb-new))))
        (('##qualified-case-lambda name static? (args body) ...)
         (define lamb-new (map iter-lambda args body))
         (values `(##qualified-case-lambda ,name ,static? . ,lamb-new) (fold lset-union '() (map cadr lamb-new))))
        (('continuation body)
         (define-values (body-new free-vars) (iter-apply body))
         (values `(continuation ,free-vars ,body-new) free-vars))

        ; not needed, since they're not a symbol
        ;(('##intrinsic . _) (values expr '()))
        ;(('##basic-intrinsic . _) (values expr '()))
        ;(('##foreign.function . _) (values expr '()))
        ;(('quote x) (values expr '()))
        (else
         (if (and (symbol? expr) (not (lookup-intrinsic-name expr)))
             (values expr `(,expr))
             (values expr '())))))
    (if (application? expr)
        (let ()
          (define-values (expr-new free) (iter-apply expr))
          expr-new)
        (let ()
          (define-values (expr-new free) (iter-atom expr))
          expr-new)))
  (define (deannotate-free-vars expr)
    (define (iter-apply expr)
      (match expr
        (('letrec ((xs vals) ...) body)
         `(letrec ,(map list xs (map iter-atom vals)) ,(iter-apply body)))
        (('##letrec path ((xs vals) ...) body)
         `(##letrec ,path ,(map list xs (map iter-atom vals)) ,(iter-apply body)))
        (('basic-block cost (regs applies) ... cont)
         `(basic-block ,cost ,@(map list regs (map iter-apply applies)) ,(iter-apply cont)))
        (('if p a b)
         `(if ,(iter-atom p) ,(iter-apply a) ,(iter-apply b)))
        (else
         (map iter-atom expr))))
    (define (iter-atom expr)
      (match expr
        (('##inline . xs)
         `(##inline . ,(map iter-atom xs)))
        (('lambda args _ body)
         `(lambda ,args ,(iter-apply body)))
        (('continuation args _ body)
         `(continuation ,args ,(iter-apply body)))
        (('##qualified-lambda name static? args _ body)
         `(##qualified-lambda ,name ,static? ,args ,(iter-apply body)))
        (('case-lambda (args _ body) ...)
         `(case-lambda . ,(map list args (map iter-apply body))))
        (('##qualified-case-lambda name static? (args _ body) ...)
         `(##qualified-case-lambda ,name ,static? . ,(map list args (map iter-apply body))))
        (('continuation _ body)
         `(continuation ,(iter-apply body)))
        ;(('##intrinsic . _) expr)
        ;(('##basic-intrinsic . _) expr)
        ;(('##foreign.function . _) expr)
        ;(('quote x) (values expr '()))
        (else expr)))
    (if (application? expr)
        (iter-apply expr)
        (iter-atom expr)))

  ; things that are still considered 'applications' for the purposes of CPS
  ; `if` is considered an application because it's of the form (if p (f args) (g args))
  ; right now and and or compile to `if` statements:
  ;   (and a b) to (if a (k b) #f)
  ;   (or a b) to (if a (k a) (k b))
  (define (special-apply? tok)
    (memv tok '(if letrec ##letrec)))
  (define (taillength lst)
    (let loop ((lst lst) (len 0))
      (if (pair? lst)
          (loop (cdr lst) (+ len 1))
          len)))

  (define (add-ref! refs x n)
    (let ((n0 (hash-table-ref refs x (lambda () 0))))
      (hash-table-set! refs x (+ n0 n))))
  (define (sub-ref! refs x n)
    (let ((n0 (hash-table-ref refs x (lambda () 0))))
      (if (> n n0) (error "internal compiler error: negative variable refcount" x n0 n))
      (hash-table-set! refs x (- n0 n))))
  (define add-refs!
    (case-lambda
      ((arefs brefs)
       (add-refs! arefs brefs 1))
      ((arefs brefs n)
       (for-each
        (lambda (keyval) (add-ref! arefs (car keyval) (* n (cdr keyval))))
        (hash-table->alist brefs)))))
  (define (sub-refs! arefs brefs)
    (for-each
      (lambda (keyval) (sub-ref! arefs (car keyval) (cdr keyval)))
      (hash-table->alist brefs)))
  (define (count-refs expr)
    (define count-table (make-hash-table eqv?))
    (define impure-table (make-hash-table eqv?))
    (define (count-refs-atom expr)
      (match expr
        (('quote . _) #f)
        (('##intrinsic . _) #f)
        (('##basic-intrinsic . _) #f)
        (('##foreign.function . _) #f)
        (('##inline . xs)
         (for-each count-refs-atom xs))

        (('lambda _ free body) (count-refs-apply body))
        (('##qualified-lambda _ _ _ free body) (count-refs-apply body))
        (('continuation _ free body) (count-refs-apply body))
        (('continuation free body) (count-refs-apply body))
        (('case-lambda (_ free body) ...)
         (for-each (lambda (body) (count-refs-apply body)) body))
        (('##qualified-case-lambda _ _ (_ free body) ...)
         (for-each (lambda (body) (count-refs-apply body)) body))
        (else expr
          (if (symbol? expr)
              (hash-table-set! count-table expr (+ 1 (hash-table-ref count-table expr (lambda () 0))))))))
    (define (count-refs-apply expr)
      (match expr
        (('letrec ((_ vals) ...) body)
         (for-each count-refs-atom vals)
         (count-refs-apply body))
        (('##letrec path ((_ vals) ...) body)
         (for-each count-refs-atom vals)
         (count-refs-apply body))

        (('if p a b)
         (count-refs-atom p)
         (count-refs-apply a)
         (count-refs-apply b))
        (('set! k y val)
         (count-refs-atom k)
         (count-refs-atom y)
         (count-refs-atom val)

         (hash-table-set! impure-table y #t))
        (('basic-block cost (_ applies) ... cont)
         (for-each count-refs-apply applies)
         (count-refs-apply cont))
        ((f . xs)
         (count-refs-atom f)
         (for-each count-refs-atom xs))
        (else (compiler-error "count-refs: malformed application" expr))))
    (if (application? expr)
        (count-refs-apply expr)
        (count-refs-atom expr))
    (values count-table impure-table))

  ; need to rewrite the optimize-impl to be more like an evaluator
  ; it's a crappy normal order evaluator rn
  ; so the expression ((if p f g) x) doesn't fully simplify without 2 invocations
  ; because in a (continuation (x) (k x)) k isn't a symbol yet but a lambda term
  ; FIXME split this into optimize-apply and optimize-atom
  (define (optimize-impl expr inlining?)
    (define (optimize-lambda expr)
      (match expr
        ((qlamb name static? xs free body)
         `(,qlamb ,name ,static? ,xs ,free ,(optimize-apply body)))
        ((lamb xs free body)
         `(,lamb ,xs ,free ,(optimize-apply body))
         #;(match (optimize-apply body)
           ; eta conversion... when does this happen? it used to happen regularly before I
           ; upgraded my cps routine. but it still rarely happens

           ; eta conversion causes a miscompile with (letrec ((loop (lambda () (loop)))) (loop))
           ; because 'technically' the lambda is eta equivalent to loop. In general
           ; eta conversion should probably only be applied to continuation lambdas
           #;((f . ys)
            (if (and (not (special-apply? f))
                     (equal? xs ys)
                     ; ie if the lambda is (lambda (x) (x x)), we need to not optimize that
                     (= 0 (fold + 0 (map (lambda (x) (ref-count x f)) xs))))
                f
                `(,lamb ,xs (,f . ,ys))))
           (opt-body `(,lamb ,xs ,opt-body))))
        (('continuation free body)
         `(continuation ,free ,(optimize-apply body)))
        (else (compiler-error "optimize-lambda: malformed lambda" expr))))

    (define (inline-let free expr done-ys done-xs ys xs)
      (if (null? ys)
          (if (null? done-ys)
              (optimize-apply expr)
              `(,(optimize-atom `(lambda ,(reverse done-ys) ,free ,expr)) . ,(reverse done-xs)))
          (let* ((y (car ys)) (x (car xs)) (ys (cdr ys)) (xs (cdr xs)))
            (let ((refs (hash-table-ref ref-table y (lambda () 0))))
              (cond ((= refs 0) (inline-let free expr done-ys done-xs ys xs))
                    ((and (or (atom? x)
                              (eqv? (car x) 'quote)
                              (eqv? (car x) '##intrinsic)
                              (eqv? (car x) '##basic-intrinsic)
                              (eqv? (car x) '##foreign.function)
                              (= refs 1))
                          ; there's a bug with doing this with lambdas:
                          ; (let ((f (lambda (y) x))) (let ((x 0)) (f 2)))
                          ; we need complete alpha conversion to avoid this bug
                          ; was probs the bug I had...
                          ; well we have that now.
                          (not (and (pair? x)
                                    (memv (car x) '(lambda continuation case-lambda ##qualified-lambda ##qualified-case-lambda))))
                          ; we don't care whether the data the variable addresses is pure, just whether
                          ; the variable is pure, which can be determined statically.
                          ; ... and now that I think about it, any variable which is impure is used twice
                          ; or can be eliminated, but eliminating that variable requires eliminating the
                          ; set! expressions
                          (not (hash-table-ref impure-table y (lambda () #f)))
                          ; the value needs to be pure too. simplest demonstration why:
                          ; (let* ((x 0) (y x)) (set! x 1) y)
                          ; if we replace y for x here, since y is pure, we'll geta miscompile
                          ; how I yearn for SSA
                          (not (hash-table-ref impure-table x (lambda () #f))))
                     (if (not (= refs 1))
                         (let ()
                           (define-values (xrefs xpure) (count-refs x))
                           (add-refs! ref-table xrefs (- refs 1))))
                     (hash-table-set! ref-table y 0)
                     (let ((x-free (free-variables-cps x)))
                       (inline-let (lset-union free x-free) (substitute y x x-free expr refs) done-ys done-xs ys xs)))
                    (else (inline-let free expr (cons y done-ys) (cons x done-xs) ys xs)))))))
    (define (optimize-let let-expr)
      (match let-expr
        ((('continuation (y) free expr) x)
         (let ((x (optimize-atom x))
               (refs (hash-table-ref ref-table y (lambda () 0))))
          (cond ((= refs 0) (optimize-apply expr))
                ((and (or (atom? x)
                          (eqv? (car x) 'quote)
                          (eqv? (car x) '##intrinsic)
                          (eqv? (car x) '##basic-intrinsic)
                          (eqv? (car x) '##foreign.function)
                          (= refs 1))
                      (not (and (pair? x) (memv (car x) '(lambda continuation case-lambda ##qualified-lambda ##qualified-case-lambda))))
                      (not (hash-table-ref impure-table y (lambda () #f)))
                      (not (hash-table-ref impure-table x (lambda () #f))))
                 (if (not (= refs 1))
                     (let ()
                       (define-values (xrefs xpure) (count-refs x))
                       (add-refs! ref-table xrefs (- refs 1))))
                 (hash-table-set! ref-table y 0)
                 (optimize-apply (substitute y x (free-variables-cps x) expr refs)))
                (else `(,(optimize-atom `(continuation (,y) ,free ,expr)) ,x)))))
        ((('lambda () free expr))
         (optimize-apply expr))
        ((('##qualified-lambda name static? () free expr))
         (optimize-apply expr))
        ((('lambda (ys ...) free expr) xs ...)
         (if (not (= (length ys) (length xs))) (compiler-error "Not enough arguments to lambda"))
         ; TODO switch based on optimization level
         #;(map optimize-atom let-expr)
         (inline-let free expr '() '() ys (map optimize-atom xs)))
        ((('##qualified-lambda name static? (ys ...) free expr) xs ...)
         (if (not (= (length ys) (length xs))) (compiler-error "Not enough arguments to lambda"))
         ; TODO switch based on optimization level
         #;(map optimize-atom let-expr)
         (inline-let free expr '() '() ys (map optimize-atom xs)))
        ((('continuation () free body))
         (optimize-apply body))
        ((('continuation free body) . rest)
         (define-values (restcount restpure) (count-refs rest))
         (sub-refs! ref-table restcount)
         (optimize-apply body))
        ((('lambda ys free expr) . xs)
         (if (not (<= (taillength ys) (length xs))) (compiler-error "Not enough arguments to lambda"))
         `(,(optimize-atom `(lambda ,ys ,free ,expr)) . ,(map optimize-atom xs)))
        ((('##qualified-lambda name static? ys free expr) . xs)
         (if (not (<= (taillength ys) (length xs))) (compiler-error "Not enough arguments to lambda"))
         `(,(optimize-atom `(lambda ,ys ,free ,expr)) . ,(map optimize-atom xs)))
        ((('continuation . _) . _) (compiler-error "Not enough arguments to continuation. Codegen bug." let-expr))
        (else (compiler-error "optimize-let: malformed let statement"))))
    (define (optimize-letrec letrec-expr)
      ; we could potentially inline letrec stuff but that's pretty hard and inlining normal lets is bugged
      (match letrec-expr
        (('letrec ((args vals) ...) expr)
         `(letrec ,(map list args (map optimize-atom vals)) ,(optimize-apply expr)))))
    ; only optimizes 'applications', ie (f x y). But due to how codegen works, (if p (f a) (y b)) is also an application
    (define (optimize-apply expr)
      (match expr
        ; Simplifying ((continuation (x) (x args ...)) y) to (y args)
        ((('continuation . _) . _) (optimize-let expr))
        ((('lambda . _) . _) (optimize-let expr))
        ((('##qualified-lambda . _) . _) (optimize-let expr))
        ; TODO case-lambda here

        (('letrec . _) (optimize-letrec expr))
        (('##letrec path . rest)
         (append `(##letrec ,path)
          (cdr (optimize-letrec `(letrec . ,rest)))))

        (('if #t a b)
         (let ()
           (define-values (bcount bpure) (count-refs b))
           (sub-refs! ref-table bcount)
           (optimize-apply a)))
        (('if #f a b)
         (let ()
           (define-values (acount apure) (count-refs a))
           (sub-refs! ref-table acount)
           (optimize-apply b)))
        (('if p a b)
         `(if ,p ,(optimize-apply a) ,(optimize-apply b)))

        (('basic-block . _)
         ; nothing to optimize: the applies are all intrinsics and have been optimized
         ; and the cont has been optimized
         ; we'll need to add basic-block fusion somewhere. probs when the basic block is
         ; generated.
         expr)
        ; Inlining builtins
        ; TODO account for cost with regards to ##inline cons
        ; but ##inline cons needs a rethinking tbh
        ((f k . xs)
         (cond ((and inlining? (symbol? f) (lookup-inline-name f))
                (optimize-apply `(,(optimize-atom k) (##inline ,f . ,(map optimize-atom xs)))))
               ((and inlining? (or (and (symbol? f) (is-basic-intrinsic? f))
                                   (and (pair? f)
                                        (or
                                          (eqv? (car f) '##basic-intrinsic)
                                          (eqv? (car f) '##foreign.function)))))
                (let ((reg (gensym "reg")))
                  (add-ref! ref-table reg 1)
                  (let ((reg `(,reg (,f . ,(map optimize-atom xs))))
                        (appl (optimize-apply `(,k ,reg))))
                    (match appl
                      (('basic-block next-cost next-regs ... next-appl)
                       ; since appl has been optimized, we don't need to chain here. it has already chained.
                       ; what's a good max cost?? probably needs to be low-ish for wasm's sake.
                       (if (> next-cost 4095)
                           ; the cost is too high, deliberately wrap appl in an empty let to introduce a gc point
                           `(basic-block 1 ,reg ((lambda () ,appl)))
                           `(basic-block ,(+ next-cost 1)
                              ,reg
                              ,@next-regs
                              ,next-appl)))
                      (else
                        `(basic-block 1 ,reg ,appl))))))
                #;(let ((reg (gensym "reg")))
                  (add-ref! ref-table reg 1)
                  `(basic-block 1
                     (,reg (,f ,(map optimize-atom xs)))
                     ,(optimize-apply `(,k ,reg))))
               (else (cons (optimize-atom f) (cons (optimize-atom k) (map optimize-atom xs))))))
        (else (compiler-error "optimize-apply: malformed application" expr))))
    (define (optimize-atom expr)
      (match expr
        (('quote . _) expr)
        (('##intrinsic . _) expr)
        (('##basic-intrinsic . _) expr)
        (('##foreign.function . _) expr)
        (('##inline . _) expr)

        (('lambda . _) (optimize-lambda expr))
        (('##qualified-lambda . _) (optimize-lambda expr))
        (('continuation . _) (optimize-lambda expr))
        (('case-lambda (args free body) ...)
         `(case-lambda . ,(map (lambda (args free body) `(,args ,free ,(optimize-apply body))) args free body)))
        (('##qualified-case-lambda name static? (args free body) ...)
         `(##qualified-case-lambda ,name ,static? . ,(map (lambda (args free body) `(,args ,free ,(optimize-apply body))) args free body)))
        (else expr)))
    (define-values (ref-table impure-table) (count-refs expr))
    ;(displayln ref-table (current-error-port))
    ; In order to maintain CPS, atoms have to map to atoms, and applications have to map to applications
    ; applications consist of applying a set of atoms together, applications do not apply applications
    (match expr
      (('quote . _) expr)
      (('##intrinsic . _) expr)
      (('##basic-intrinsic . _) expr)
      (('##foreign.function . _) expr)
      (('##inline . _) expr)
      (('lambda . _) (optimize-lambda expr))
      (('##qualified-lambda . _) (optimize-lambda expr))
      (('continuation . _) (optimize-lambda expr))
      ((_ . _) (optimize-apply expr))
      (else expr)))
  (define (optimize expr inlining?)
    (let ((expr expr))
      (match expr
          (('##foreign.declare . _) expr)
          (('##vcore.declare f l)
           `(##vcore.declare ,f ,(deannotate-free-vars (optimize-impl (annotate-free-vars l) inlining?))))
          (else (deannotate-free-vars (optimize-impl (annotate-free-vars expr) inlining?))))))
)
