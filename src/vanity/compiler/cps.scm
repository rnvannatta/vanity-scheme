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
  (import (vanity core) (vanity list) (vanity compiler utils) (vanity compiler match) (vanity compiler variables))
  (export to-cps optimize alpha-convert annotate-lambdas deannotate-lambdas)
  (define (to-cps expr)
    (define (application? x)
      (and (pair? x) (not (memv (car x) '(quote lambda case-lambda ##foreign.function)))))
    (define (combination? x)
      (and (pair? x) (not (memv (car x) '(quote lambda case-lambda ##foreign.function begin if or letrec)))))
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
      (iter2 expr '##sys.next))
    (match expr
      (('##foreign.declare . _) expr)
      (('##vcore.declare f l)
       ; (to-cps-impl l) returns (##sys.next (lambda ...)) because lambda expressions are atoms
       `(##vcore.declare ,f ,(cadr (to-cps-impl l))))
      (else (to-cps-impl expr))))

  ; like member but checks dotted lists. not semipredicate safe
  ; but doesn't matter for checking lambda dotted lists

  ; Not general purpose: for manipulating lists of symbols
  ; uses eqv operation
  (define (memtail x lst)
      (if (pair? lst)
          (if (equal? x (car lst)) lst
              (memtail x (cdr lst)))
          (if (equal? x lst) lst #f)))
  (define (annotate-lambdas expr) expr)

  (define (deannotate-lambdas expr)
    expr)


  (define (ref-count-lambda x args body)
    (if (memtail x args)
        0
        (ref-count x body)))
  (define (ref-count x expr)
    (match expr
      (('lambda args body)
       (ref-count-lambda x args body))
      (('continuation args body)
       (ref-count-lambda x args body))
      (('case-lambda (args body) ...)
       (apply + (map (lambda (args body) (ref-count-lambda x args body)) args body)))
      (('##foreign.function . _) 0)
      (('quote x) 0)
      (('letrec ((args vals) ...) body)
       (if (memtail x args)
           0
           (fold + (ref-count x body) (map (lambda (val) (ref-count x val)) vals))))
      ((f . xs) (+ (ref-count x f) (ref-count x xs)))
      (y (if (eqv? x y) 1 0))))
  (define (pure-in-lambda? x args body)
    (if (memtail x args) #t
        (pure-in? x body)))
  (define (pure-in? x expr)
    (match expr
      (('lambda args body)
       (pure-in-lambda? x args body))
      (('continuation args body)
       (pure-in-lambda? x args body))
      (('case-lambda (args body) ...)
       (fold (lambda (a b) (and a b)) #t (map (lambda (args body) (pure-in-lambda? x args body)) args body)))
      (('##foreign.function . _) #t)
      (('quote x) #t)
      (('set! k y . body)
       (if (eqv? x y) #f
           (and (pure-in? x k) (pure-in? x body))))
      (('letrec ((args vals) ...) body)
       (if (memtail x args)
           #t
           (fold (lambda (a b) (and a b)) (pure-in? x body) (map (lambda (val) (pure-in? x val)) vals))))
      ((f . xs) (and (pure-in? x f) (pure-in? x xs)))
      (else #t)))
  (define (substitute-lambda x atom args body)
    (if (memtail x args) `(,args ,body)
        `(,args ,(substitute x atom body))))
  (define (substitute x atom expr)
    (match expr
      (('lambda args body)
       (cons 'lambda (substitute-lambda x atom args body)))
      (('continuation args body)
       (cons 'continuation (substitute-lambda x atom args body)))
      (('case-lambda (args body) ...)
       (cons 'case-lambda (map (lambda (args body) (substitute-lambda x atom args body)) args body)))
      (('##foreign.function . _) expr)
      (('quote x) expr)
      (('letrec ((args vals) ...) body)
       (if (memtail x args)
           expr
           `(letrec ,(map list args (map (lambda (val) (substitute x atom val)) vals))
              ,(substitute x atom body))))
      ((f . xs) (cons (substitute x atom f) (substitute x atom xs)))
      (y (if (eqv? x y) atom y))))

  (define (alpha-convert expr) expr)

  ; things that are still considered 'applications' for the purposes of CPS
  ; `if` is considered an application because it's of the form (if p (f args) (g args))
  ; right now and and or compile to `if` statements:
  ;   (and a b) to (if a (k b) #f)
  ;   (or a b) to (if a (k a) (k b))
  (define (special-apply? tok)
    (memv tok '(if letrec)))
  (define (optimize-lambda expr)
    (match expr
      ((lamb xs body)
       (match (optimize-apply body)
         ; eta conversion... when does this happen? it used to happen regularly before I
         ; upgraded my cps routine. but it still rarely happens
         ((f . ys)
          (if (and (not (special-apply? f))
                   (equal? xs ys)
                   ; ie if the lambda is (lambda (x) (x x)), we need to not optimize that
                   (= 0 (fold + 0 (map (lambda (x) (ref-count x f)) xs))))
              f
              `(,lamb ,xs (,f . ,ys))))
         (opt-body `(,lamb ,xs ,opt-body))))
      (else (compiler-error "optimize-lambda: malformed lambda" expr))))
  (define (taillength lst)
    (let loop ((lst lst) (len 0))
      (if (pair? lst)
          (loop (cdr lst) (+ len 1))
          len)))

  ; There is a bug somewhere in here...
  (define (inline-let expr done-ys done-xs ys xs)
    (if (null? ys)
        (if (null? done-ys)
            (optimize-apply expr)
            `(,(optimize-atom `(lambda ,(reverse done-ys) ,expr)) . ,(reverse done-xs)))
        (let* ((y (car ys)) (x (car xs)) (ys (cdr ys)) (xs (cdr xs)))
          (let ((refs (ref-count y expr)))
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
                        (pure-in? y expr))
                   (inline-let (substitute y x expr) done-ys done-xs ys xs))
                  (else (inline-let expr (cons y done-ys) (cons x done-xs) ys xs)))))))
  (define (optimize-let let-expr)
    (match let-expr
      ((('continuation (y) expr) x)
       (let ((refs (ref-count y expr)))
         
         (cond ((= refs 0) (optimize-apply expr))
               ; we don't care whether the data the variable addresses is pure, just whether
               ; the variable is pure, which can be determined statically.
               ; ... and now that I think about it, any variable which is impure is used twice
               ; or can be eliminated, but eliminating that variable requires eliminating the
               ; set! expressions
               ((and (or (atom? x) (eqv? (car x) 'quote) (eqv? (car x) '##foreign.function) (= refs 1))
                     ; there's a bug with doing this with lambdas:
                     ; (let ((f (lambda (y) x))) (let ((x 0)) (f 2)))
                     ; we need complete alpha conversion to avoid this bug
                     (not (and (pair? x) (memv (car x) '(lambda continuation case-lambda))))
                     (pure-in? y expr))
                (optimize-apply (substitute y x expr)))
               (else `(,(optimize-atom `(continuation (,y) ,expr)) ,(optimize-atom x))))))
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

      (('if #t a b) (optimize-apply a))
      (('if #f a b) (optimize-apply b))
      (('if p a b)
       `(if ,p ,(optimize-apply a) ,(optimize-apply b)))

      ; Inlining builtins
      ; TODO: this doesn't take into account 'cost'. TODO account for function cost to avoid
      ; inlining so many functions that the garbage collect fails. One thing we could do is
      ; switch to manually inserting GC points based on estimated cost, then all optimizations
      ; of this form would always save stack space. Well cdr and car never alloc so its a win
      ; but cons allocs
      ((f k . xs)
       (if (and (symbol? f) (lookup-inline f))
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
  ; need to rewrite the optimize-impl to be more like an evaluator
  ; it's a crappy normal order evaluator rn
  ; so the expression ((if p f g) x) doesn't fully simplify without 2 invocations
  ; because in a (continuation (x) (k x)) k isn't a symbol yet but a lambda term
  ; FIXME split this into optimize-apply and optimize-atom
  (define (optimize-impl expr)
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
  (define (optimize expr)
    (let ((expr expr))
      (match expr
          (('##foreign.declare . _) expr)
          (('##vcore.declare f l)
           `(##vcore.declare ,f ,(optimize-impl l)))
          (else (optimize-impl expr)))))
)
