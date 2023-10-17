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

(define-library (vanity compiler cps)
  (import (vanity core) (vanity compiler utils) (vanity compiler match) (vanity compiler variables))
  (export to-cps optimize alpha-convert annotate-lambdas deannotate-lambdas)
  (define (to-cps expr)
    (define (application? x)
      (and (pair? x) (not (memv (car x) '(quote lambda case-lambda ##foreign.function)))))
    (define (combination? x)
      (and (pair? x) (not (memv (car x) '(quote lambda case-lambda ##foreign.function begin if or)))))
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
            (((lambda (x) body) val)
             (if (application? val)
                 (iter2 val `(continuation (,x) ,(iter2 body cont)))
                 (iter-combination expr cont)))
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
    (if (memtail x args) 0
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
      ((f . xs) (and (pure-in? x f) (pure-in? x xs)))
      (else #t)))
  (define (substitute-lambda x atom args body)
    (if (memtail x args) body
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
      ((f . xs) (cons (substitute x atom f) (substitute x atom xs)))
      (y (if (eqv? x y) atom y))))

  (define (alpha-convert expr)
    (define (make-conversion sym)
      (let ((str (symbol->string sym)))
        (gensym
          (if (eq? #\# (string-ref str 0))
              (string->symbol (substring str 2))
              sym))))
    (define (make-substitutes args)
      (cond ((null? args) '())
            ((symbol? args) (make-substitutes (cons args '())))
            (else
              (cons (cons (car args) (make-conversion (car args))) (make-substitutes (cdr args))))))
    expr
    #;(let loop ((substitutes '()) (expr expr))
      (define (alpha-convert-lambda subs args body)
        (let ((newsubs (make-substitutes (cdr args))))
            `(,(cons (car args) (loop newsubs (cdr args))) ,(loop (append newsubs subs) body))))
      (match expr
        ; continuations are by construction unique and don't need to be alpha converted
        (('lambda args body)
         (cons 'lambda (alpha-convert-lambda substitutes args body))
         #;(let ((newsubs (make-substitutes args)))
          `(lambda ,(cons k (loop newsubs args)) ,(loop (append newsubs substitutes) body))))
        (('continuation x body)
         `(continuation ,x ,(loop substitutes body)))
        (('case-lambda (args body) ...)
         (cons 'case-lambda (map (lambda (args body) (alpha-convert-lambda substitutes args body)) args body)))
        (('quote x) expr)
        ((f . xs) (cons (loop substitutes f) (loop substitutes xs)))
        (y (if (symbol? y)
               (let ((sub (assv y substitutes)))
                 (if sub (cdr sub) y))
               y)
        ))
    )
  )

  ; things that are still considered 'applications' for the purposes of CPS
  ; `if` is considered an application because it's of the form (if p (f args) (g args))
  ; right now and and or compile to `if` statements:
  ;   (and a b) to (if a (k b) #f)
  ;   (or a b) to (if a (k a) (k b))
  (define (special-apply? tok)
    (eqv? tok 'if))
  (define (optimize-lambda expr)
    (match expr
      ((lamb xs body)
       (match (optimize-apply body)
         ; a nice party trick: is this still necessary outside of niche usage?
         ; is there a more general usage of this?
         ; this was more important previously because the to cps routine was garbage
         ((f . ys)
          (if (and (not (special-apply? f))
                   (equal? xs ys)
                   ; ie if the lambda is (lambda (x) (x x)), we need to not optimize that
                   (= 0 (fold + 0 (map (lambda (x) (ref-count x f)) xs))))
              f
              `(,lamb ,xs (,f . ,ys))))
         (opt-body `(,lamb ,xs ,opt-body))))))
  (define (taillength lst)
    (let loop ((lst lst) (len 0))
      (if (pair? lst)
          (loop (cdr lst) (+ len 1))
          len)))

  ; This optimization MIGHT be worth it to combine continuations which get
  ; optimized into let forms from inlining
  #;(define (optimize-let-chain let-expr)
    (match let-expr
      ((('continuation (xs ...)
          (('continuation (x2) body) e2))
        . es)
       (if (and (not (memv x2 xs))
                (let loop ((xs xs))
                  (cond ((null? xs) #t)
                        ((= 0 (ref-count (car xs) e2)) (loop (cdr xs)))
                        (else #f))))
           (optimize-let-chain `((continuation (,@xs ,x2) ,(optimize-apply body)) ,@es ,e2))
           (map optimize-atom let-expr)))
      ((l . xs) `(,(optimize-atom l) . ,(map optimize-atom xs)))))
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
               ((and (or (atom? x) (eqv? (car x) 'quote) (eqv? (car x) '##foreign.function) (= refs 1)) (pure-in? y expr))
                (optimize-apply (substitute y x expr)))
               (else `(,(optimize-atom `(continuation (,y) ,expr)) ,(optimize-atom x))))))
      ((('lambda (ys ...) expr) xs ...)
       (if (not (= (length ys) (length xs))) (compiler-error "Not enough arguments to lambda"))
       #;(optimize-let-chain let-expr)
       (map optimize-atom let-expr))
      ((('lambda ys expr) . xs)
       (if (not (<= (taillength ys) (length xs))) (compiler-error "Not enough arguments to lambda"))
       `(,(optimize-atom `(lambda ,ys ,expr)) . ,(map optimize-atom xs)))
      ((('continuation . _) . _) (compiler-error "Not enough arguments to continuation. Codegen bug."))))
  ; only optimizes 'applications', ie (f x y). But due to how codegen works, (if p (f a) (y b)) is also an application
  (define (optimize-apply expr)
    (match expr
      ; Simplifying ((continuation (x) (x args ...)) y) to (y args)
      ((('continuation . _) . _) (optimize-let expr))
      ((('lambda . _) . _) (optimize-let expr))

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
           (cons (optimize-atom f) (cons (optimize-atom k) (map optimize-atom xs)))))))
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
    (let ((expr (alpha-convert expr)))
      (match expr
          (('##foreign.declare . _) expr)
          (('##vcore.declare f l)
           `(##vcore.declare ,f ,(optimize-impl l)))
          (else (optimize-impl expr)))))
)
