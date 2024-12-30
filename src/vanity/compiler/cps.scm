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
    (and (pair? x) (not (memv (car x) '(quote lambda continuation case-lambda ##foreign.function ##inline)))))
  (define (combination? x)
    (and (pair? x) (not (memv (car x) '(quote lambda continuation case-lambda ##foreign.function ##inline begin if or letrec)))))
  (define (to-cps expr)
    (define (iter-atom x)
      (define (iter-lambda args body)
        (let ((k (gensym "k")))
          `((,k . ,args) ,(iter2 body k))))
      (match x
        (('lambda args body)
         (cons 'lambda (iter-lambda args body)))
        (('case-lambda (args body) ...)
         (cons 'case-lambda (map iter-lambda args body)))
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
    (define (iter-letrec args body vals k)
      (let loop ((done-vals '()) (vals vals))
        (cond ((null? vals)
               `(letrec ,(map list args (reverse done-vals)) ,(iter2 body k)))
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
                 ; technically it's (continuation ignored (y ...)) not (continuation (ignored) (y ...))
                 ; but there's likely demons involving assuming continuations have 1 arg that I don't
                 ; feel like messing with atm
                 (iter2 x `(continuation (,(gensym "ignored")) ,(iter2 y cont)))
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
            (('letrec ((xs vals) ...) body)
             (iter-letrec xs body vals cont))
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

  (define (substitute x atom expr n)
    (define (iter expr)
      (if (= n 0)
          expr
          (match expr
            (('lambda args body)
             `(lambda ,args ,(iter body)))
            (('continuation args body)
             `(continuation ,args ,(iter body)))
            (('case-lambda (args body) ...)
             (cons 'case-lambda (map (lambda (args body) `(,args ,(iter body))) args body)))
            (('##foreign.function . _) expr)
            (('quote x) expr)
            (('letrec ((args vals) ...) body)
             `(letrec ,(map list args (map (lambda (val) (iter val)) vals))
                      ,(iter body)))
            ((f . xs) (cons (iter f) (iter xs)))
            (y
             (if (eqv? x y)
                 (begin
                   (set! n (- n 1))
                   atom)
                 y)))))
    (iter expr))

  ; things that are still considered 'applications' for the purposes of CPS
  ; `if` is considered an application because it's of the form (if p (f args) (g args))
  ; right now and and or compile to `if` statements:
  ;   (and a b) to (if a (k b) #f)
  ;   (or a b) to (if a (k a) (k b))
  (define (special-apply? tok)
    (memv tok '(if letrec)))
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
        (('##foreign.function . _) #f)
        (('##inline . xs)
         (for-each count-refs-atom xs))

        (('lambda _ body) (count-refs-apply body))
        (('continuation _ body) (count-refs-apply body))
        (('case-lambda (_ body) ...)
         (for-each (lambda (body) (count-refs-apply body)) body))
        (else expr
          (if (symbol? expr)
              (hash-table-set! count-table expr (+ 1 (hash-table-ref count-table expr (lambda () 0))))))))
    (define (count-refs-apply expr)
      (match expr
        ; Simplifying ((continuation (x) (x args ...)) y) to (y args)
        (('letrec ((_ vals) ...) body)
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
        ((f . xs)
         (count-refs-atom f)
         (for-each count-refs-atom xs))
        (else (compiler-error "count-refs: malformed application" expr))))
    (if (application? expr)
        (count-refs-apply expr)
        (count-refs-atom expr))
    (values count-table impure-table))

  #;(define (add-frees expr)
    (define (copy-and-remove frees xs)
      (let ((copy (hash-table-copy frees)))
        (let loop ((xs xs))
          (cond ((pair? xs)
                 (hash-table-delete! copy (car xs))
                 (loop (cdr xs)))
                ((null? xs)
                 copy)
                (else
                 (hash-table-delete! copy xs)
                 copy)))))
    (define (add-frees-atom frees expr)
      (match expr
        (('quote . _) #f)
        (('##foreign.function . _) #f)
        (('##inline . xs)
         (map (lambda (x) (add-frees-atom frees x)) xs))

        (('lambda xs body)
         ; TODO
         (let ((body (add-frees-apply frees body)))
           `(lambda ,xs ,(copy-and-remove frees xs) ,body)))
        (('continuation xs body)
         (let ((body (add-frees-apply frees body)))
           `(lambda ,xs ,(copy-and-remove frees xs) ,body)))
        (('case-lambda (xs body) ...)
         (map
           (lambda (xs body)
             (let ((body (add-frees-apply frees body)))
               `(,xs ,(copy-and-remove frees xs) ,body)))
           xs
           body))
        (else expr
          (if (symbol? expr)
              (begin
                (hash-table-set! frees expr #t)
                expr)))))
    (define (add-frees-apply frees expr)
      (match expr
        ; Simplifying ((continuation (x) (x args ...)) y) to (y args)
        (('letrec ((_ vals) ...) body)
         ; TODO
         (map (lambda (x) (add-frees-atom frees x)) vals)
         (add-frees-apply frees body))

        (('if p a b)
         `(if
           ,(add-frees-atom frees p)
           ,(add-frees-apply frees a)
           ,(add-frees-apply frees b)))
        (('set! k y val)
         `(set
            ,(add-frees-atom frees k)
            ,(add-frees-atom frees y)
            ,(add-frees-atom frees val)))
        ((f . xs)
         (cons (add-frees-atom frees f) (map (lambda (x) (add-frees-atom frees x)) xs)))
        (else (compiler-error "add-frees: malformed application" expr))))
    (if (application? expr)
        (add-frees-apply (make-hash-table eqv?) expr)
        (add-frees-atom (make-hash-table eqv?) expr)))

  ; need to rewrite the optimize-impl to be more like an evaluator
  ; it's a crappy normal order evaluator rn
  ; so the expression ((if p f g) x) doesn't fully simplify without 2 invocations
  ; because in a (continuation (x) (k x)) k isn't a symbol yet but a lambda term
  ; FIXME split this into optimize-apply and optimize-atom
  (define (optimize-impl expr inlining?)
    (define (optimize-lambda expr)
      (match expr
        ((lamb xs body)
         `(,lamb ,xs ,(optimize-apply body))
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
        (else (compiler-error "optimize-lambda: malformed lambda" expr))))

    #;(define (inline-let expr done-ys done-xs ys xs)
      (if (null? ys)
          (if (null? done-ys)
              (optimize-apply expr)
              `(,(optimize-atom `(lambda ,(reverse done-ys) ,expr)) . ,(reverse done-xs)))
          (let* ((y (car ys)) (x (car xs)) (ys (cdr ys)) (xs (cdr xs)))
            (let ((refs (hash-table-ref ref-table y (lambda () 0)))
                  (pure (not (hash-table-ref impure-table y (lambda () #f)))))
              (cond ((= refs 0) (inline-let expr done-ys done-xs ys xs))
                    ; we don't care whether the data the variable addresses is pure, just whether
                    ; the variable is pure, which can be determined statically.
                    ; ... and now that I think about it, any variable which is impure is used twice
                    ; or can be eliminated, but eliminating that variable requires eliminating the
                    ; set! expressions
                    ((and (or (atom? x) (eqv? (car x) 'quote) (eqv? (car x) '##foreign.function) (= refs 1))
                          ; there's a bug with doing this with lambdas:
                          ; (let ((f (lambda (y) x))) (let ((x 0)) (f 2)))
                          ; we need complete alpha conversion to avoid this bug
                          ; was probs the bug I had...
                          (not (and (pair? x) (memv (car x) '(lambda continuation case-lambda))))
                          pure)
                     
                     (if (not (= refs 1))
                         (let ()
                           (define-values (xrefs xpure) (count-refs x))
                           (add-refs! ref-table xrefs (- refs 1))))
                     (hash-table-set! ref-table y 0)
                     (inline-let (substitute y x expr refs) done-ys done-xs ys xs))
                    (else (inline-let expr (cons y done-ys) (cons x done-xs) ys xs)))))))
    (define (optimize-let let-expr)
      (match let-expr
        ((('continuation (y) expr) x)
         (let ((x (optimize-atom x))
               (refs (hash-table-ref ref-table y (lambda () 0)))
               (pure (not (hash-table-ref impure-table y (lambda () #f)))))
          (cond ((= refs 0) (optimize-apply expr))
                ; we don't care whether the data the variable addresses is pure, just whether
                ; the variable is pure, which can be determined statically.
                ; ... and now that I think about it, any variable which is impure is used twice
                ; or can be eliminated, but eliminating that variable requires eliminating the
                ; set! expressions
                ((and (or (atom? x) (eqv? (car x) 'quote) (eqv? (car x) '##foreign.function) (= refs 1))
                      (not (and (pair? x) (memv (car x) '(lambda continuation case-lambda))))
                      pure)
                 (if (not (= refs 1))
                     (let ()
                       (define-values (xrefs xpure) (count-refs x))
                       (add-refs! ref-table xrefs (- refs 1))))
                 (hash-table-set! ref-table y 0)
                 (optimize-apply (substitute y x expr refs)))
                (else `(,(optimize-atom `(continuation (,y) ,expr)) ,x)))))
        ((('lambda () expr))
         (optimize-apply expr))
        ((('lambda (ys ...) expr) xs ...)
         (if (not (= (length ys) (length xs))) (compiler-error "Not enough arguments to lambda"))
         (map optimize-atom let-expr)
         ; There is a bug somewhere in this inline-let which is extremely subtle
         ; as it causes a miscompile that only rears its head after a few bootstrap iterations
         #;(inline-let expr '() '() ys (map optimize-atom xs)))
        ((('continuation () body))
         (optimize-apply body))
        ((('lambda ys expr) . xs)
         (if (not (<= (taillength ys) (length xs))) (compiler-error "Not enough arguments to lambda"))
         `(,(optimize-atom `(lambda ,ys ,expr)) . ,(map optimize-atom xs)))
        ((('continuation . _) . _) (compiler-error "Not enough arguments to continuation. Codegen bug."))
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

        (('letrec . _) (optimize-letrec expr))

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

        ; Inlining builtins
        ; TODO: this doesn't take into account 'cost'. TODO account for function cost to avoid
        ; inlining so many functions that the garbage collect fails. One thing we could do is
        ; switch to manually inserting GC points based on estimated cost, then all optimizations
        ; of this form would always save stack space. Well cdr and car never alloc so its a win
        ; but cons allocs
        ((f k . xs)
         (if (and inlining? (symbol? f) (lookup-inline-name f))
             (optimize-apply `(,(optimize-atom k) (##inline ,f . ,(map optimize-atom xs))))
             (cons (optimize-atom f) (cons (optimize-atom k) (map optimize-atom xs)))))
        (else (compiler-error "optimize-apply: malformed application" expr))))
    (define (optimize-atom expr)
      (match expr
        (('quote . _) expr)
        (('##foreign.function . _) expr)
        (('##inline . _) expr)

        (('lambda . _) (optimize-lambda expr))
        (('continuation . _) (optimize-lambda expr))
        (('case-lambda (args body) ...)
         `(case-lambda . ,(map (lambda (args body) `(,args ,(optimize-apply body))) args body)))
        (else expr)))
    (define-values (ref-table impure-table) (count-refs expr))
    ;(displayln ref-table (current-error-port))
    ; In order to maintain CPS, atoms have to map to atoms, and applications have to map to applications
    ; applications consist of applying a set of atoms together, applications do not apply applications
    (match expr
      (('quote . _) expr)
      (('##foreign.function . _) expr)
      (('##inline . _) expr)
      (('lambda . _) (optimize-lambda expr))
      (('continuation . _) (optimize-lambda expr))
      ((_ . _) (optimize-apply expr))
      (else expr)))
  (define (optimize expr inlining?)
    (let ((expr expr))
      (match expr
          (('##foreign.declare . _) expr)
          (('##vcore.declare f l)
           `(##vcore.declare ,f ,(optimize-impl l inlining?)))
          (else (optimize-impl expr inlining?)))))
)
