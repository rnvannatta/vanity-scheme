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

(define-library "cps"
  (import (vanity core) "utils" "match" "variables")
  (export to-cps optimize alpha-convert annotate-lambdas deannotate-lambdas)
  (define (to-cps expr)
    (define (application? x)
      (and (pair? x) (not (memv (car x) '(quote lambda case-lambda)))))
    (define (iter-atom x)
      (define (iter-lambda args body)
        (let ((k (gensym "k")))
          `((,k . ,args) ,(iter2 body k))))
      (match x
        (('lambda args body)
         (cons 'lambda (iter-lambda args body)))
        (('case-lambda (args body) ...)
         (cons 'case-lambda (map iter-lambda args body)))
        (('quote _) x)
        (() (error "stray () in program"))
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
                   ((symbol? p) `(if ,p ,(iter2 x cont) ,(iter2 y cont)))
                   ((eq? p #f) (iter2 y cont))
                   (else (iter2 x cont))))
            (('or x y)
             (cond ((application? x)
                    (let ((sym (gensym "p")))
                     (iter2 x `(continuation (,sym) ,(iter2 `(or ,sym ,y) cont)))))
                   (else (iter2 `(if ,x ,x ,y) cont))))
            (else (iter-combination expr cont)))
          `(,cont ,(iter-atom expr))))

    (define (to-cps-impl expr)
      (iter2 expr '##sys.next))
    (match expr
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
         ((f . ys)
          (if (and (not (special-apply? f))
                   (equal? xs ys)
                   ; ie if the lambda is (lambda (x) (x x)), we need to not optimize that
                   (= 0 (fold + 0 (map (lambda (x) (ref-count x f)) xs))))
              f
              `(,lamb ,xs (,f . ,ys))))
         (opt-body `(,lamb ,xs ,opt-body))))))
  ; only optimizes 'applications', ie (f x y). But due to how codegen works, (if p (f a) (y b)) is also an application
  (define (reducible? x y expr)
    (and
      #;(pure-in? y expr)
      (or (atom? x) (eqv? (car x) 'quote) (= 1 (ref-count y expr)))))
  (define (taillength lst)
    (let loop ((lst lst) (len 0))
      (if (pair? lst)
          (loop (cdr lst) (+ len 1))
          len)))
  (define (optimize-let let-expr)
    (match let-expr
      ((('continuation (y) expr) x)
       (if (reducible? x y expr)
           (optimize-apply (substitute y x expr))
           `(,(optimize-atom `(continuation (,y) ,expr)) ,(optimize-atom x))))
      ((('lambda (ys ...) expr) xs ...)
       (if (not (= (length ys) (length xs))) (error "Not enough arguments to lambda"))
       `(,(optimize-atom `(lambda ,ys ,expr)) . ,(map optimize-atom xs)))
      ((('lambda ys expr) . xs)
       (if (not (<= (taillength ys) (length xs))) (error "Not enough arguments to lambda"))
       `(,(optimize-atom `(lambda ,ys ,expr)) . ,(map optimize-atom xs)))
      ((('continuation . _) . _) (error "Not enough arguments to continuation. Codegen bug."))
      #;((('lambda (ys ...) expr) xs ...)
       (let loop ((new-ys '()) (new-xs '()) (expr (optimize-apply expr)) (old-ys ys) (old-xs xs))
         (cond ((null? old-ys)
                (if (null? new-ys)
                    (optimize-apply expr)
                    `(,(optimize-atom `(lambda ,(reverse new-ys) ,expr)) . ,(map optimize-atom (reverse new-xs)))))
               ((reducible? (car old-xs) (car old-ys) expr)
                (loop new-ys
                      new-xs
                      (substitute (car old-ys) (car old-xs) expr)
                      (cdr old-ys)
                      (cdr old-xs)))
               (else
                (loop (cons (car old-ys) new-ys) (cons (car old-xs) new-xs) expr (cdr old-ys) (cdr old-xs)))
               ))
       )
    )
  )
  (define (optimize-apply expr)
    (match expr
      ; Simplifying ((continuation (x) (x args ...)) y) to (y args)
      ((('continuation . _) . _) (optimize-let expr))
      ((('lambda . _) . _) (optimize-let expr))
      #;((('continuation (y) (xs ...)) x)
       (if (or (atom? x) (= 1 (ref-count y xs)))
           (optimize-apply (substitute y x xs))
           `(,(optimize-atom `(continuation (,y) ,xs)) ,(optimize-atom x))))
      (('if #t a b) (optimize-apply a))
      (('if #f a b) (optimize-apply b))
      (('if p a b)
       `(if ,p ,(optimize-apply a) ,(optimize-apply b)))

      ; Simplifying (if# k p (lambda (k1) (f1 k1 args)) (lambda (k2) (f2 k2 args)))
      ; to (if p (f1 k args) (f2 k args)) ?
      (('##sys.if k p ('lambda (k1) apply1) ('lambda (k2) apply2))
       (if (or (not (= 1 (ref-count k1 apply1)))
               (not (= 1 (ref-count k2 apply2))))
           (error "failed to inline if statement because of refcounts" expr))
       (optimize-apply `(if ,p ,(substitute k1 k apply1) ,(substitute k2 k apply2))))
       ; Simplifying (begin# k a (lambda (k1) (f k1 args))) to (f k args)
      (('##sys.begin k a ('lambda (k1) apply))
       ;(optimize-apply `((lambda (,k1) ,apply) k))
       (if (not (= 1 (ref-count k1 apply)))
           (error "failed to inline begin statement because of refcounts" expr))
       (optimize-apply (substitute k1 k apply)))

      ; Simplifying (and# k x (lambda (k1) (f k1 args))) to just (if x (f k args) (k #f))
      (('##sys.and k x ('lambda (k1) apply))
       (if (not (= 1 (ref-count k1 apply)))
           (error "failed to inline and statement because of refcounts" expr))
       (optimize-apply `(if ,x ,(substitute k1 k apply) (,k #f))))
      ; Simplifying (or# k x (lambda (k1) (f k1 args))) to just (if x (k x) (f k args))
      (('##sys.or k x ('lambda (k1) apply))
       (if (not (= 1 (ref-count k1 apply)))
           (error "failed to inline or statement because of refcounts" expr))
       (optimize-apply `(if ,x (,k ,x) ,(substitute k1 k apply))))

      (('##sys.if . _) (error "failed to inline if statement" expr))
      (('##sys.or . _) (error "failed to inline or statement" expr))
      (('##sys.and . _) (error "failed to inline and statement" expr))
      (('##sys.begin . _) (error "failed to inline begin statement" expr))
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
      (('##inline . _) expr)
      (('lambda . _) (optimize-lambda expr))
      (('continuation . _) (optimize-lambda expr))
      ((_ . _) (optimize-apply expr))
      (else expr)))
  (define (optimize expr)
    (let ((expr (alpha-convert expr)))
      (match expr
          (('##vcore.declare f l)
           `(##vcore.declare ,f ,(optimize-impl l)))
          (else (optimize-impl expr)))))
)
