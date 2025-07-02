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

(define-library (vanity compiler lower)
  (import (vanity core) (vanity list) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity compiler ffi) (vanity intrinsics))
  (export bruijn-ify to-functions)
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
        (('##qualified-lambda name (xs ...) body)
         `(##qualified-lambda ,name ,(length xs) ,(iter (cons xs env) body)))
        (('##qualified-lambda name xs body)
         (let ((proper-xs (undot xs)))
          `(##qualified-lambda ,name ,(- (length proper-xs) 1) + ,(iter (cons proper-xs env) body))))
        (('case-lambda . cases)
         `(case-lambda . ,(map (lambda (e) (bruijn-lambda env e)) cases)))
        (('##qualified-case-lambda name . cases)
         `(##qualified-case-lambda ,name . ,(map (lambda (e) (bruijn-lambda env e)) cases)))
        (('continuation (x) body)
         `(continuation 1 ,(iter (cons (list x) env) body)))
        (('letrec ((xs vals) ...) body)
         `(letrec ,(length xs) ,xs ,(map (lambda (e) (iter (cons xs env) e)) vals) ,(iter (cons xs env) body)))
        (('basic-block cost (xs vals) ... appl)
         `(basic-block ,cost ,(length xs) ,xs ,(map (lambda (e) (iter (cons xs env) e)) vals) ,(iter (cons xs env) appl)))
        (('##foreign.function . _) expr)
        (('quote . _) expr)
        (('##inline f . xs)
         `(##inline ,f . ,(map (lambda (x) (iter env x)) xs)))
        (('##qualified-call name f . xs)
         `(##qualified-call ,name ,(iter env f) . ,(map (lambda (x) (iter env x)) xs)))
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
  (define (to-functions exprs lifting-literals?)
    (define (genlambda fun)
        (set! curlambda (+ curlambda 1))
        (string->symbol (sprintf "~A_V0lambda~A" fun curlambda)))
    (define (gencont fun)
        (set! curcont (+ curcont 1))
        (string->symbol (sprintf "~A_V0k~A" fun curcont)))
    (define qualified-functions '())
    (define foreign-functions '())
    (define functions '())
    (define literal-table '())
    (define (lift-intrinsic sym intrin)
      ; FIXME ASSOC DETECTED
      (if lifting-literals?
          (let* ((key (list '##intrinsic sym))
                 (lookup (assoc key literal-table)))
            (if lookup
                (car lookup)
                (let ((lookup (cons key intrin)))
                  (set! literal-table (cons lookup literal-table))
                  (car lookup))))
          (list '##intrinsic sym)))
    ; TODO drop the unnecessary quotes from nonsymbols, ie turn '"foo" into just "foo"
    ; then split out lift-symbol into a seperate function
    (define (lift-literal x)
      (if lifting-literals?
          (cond ((integer? x) x)
                ((number? x) x)
                ((##vcore.void? x) x)
                ((##vcore.foreign-pointer? x) x)
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
                (else (compiler-error "literal-lifting: unknown literal type" x)))
          x))
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
        (('##qualified-lambda name n body)
         (let ((lamb (mangle-qualified-function name)))
           (set! qualified-functions (cons (list lamb n #f) qualified-functions))
           (set! functions (cons `(,lamb #t (,n ,(iter-apply lamb body))) functions))
           `(close ,lamb)))
        (('##qualified-lambda name n '+ body)
         (let ((lamb (mangle-qualified-function name)))
           (set! qualified-functions (cons (list lamb n #t) qualified-functions))
           (set! functions (cons `(,lamb #t (,n + ,(iter-apply lamb body))) functions))
           `(close ,lamb)))
        (('case-lambda . cases)
         (let ((lamb (genlambda fun)))
           (set! functions (cons `(,lamb #t . ,(map (lambda (e) (iter-lambda fun e)) cases)) functions))
           `(close ,lamb)))
        (('##qualified-case-lambda name . cases)
         (if (null? (cdr cases))
             (iter-atom fun `(##qualified-lambda ,name . ,(car cases)) func-position?)
             (let ((lamb (mangle-qualified-function name)))
               (set! qualified-functions (cons (list lamb 0 #t) qualified-functions))
               (set! functions (cons `(,lamb #t . ,(map (lambda (e) (iter-lambda fun e)) cases)) functions))
               `(close ,lamb))))
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
                   (let ((intrin (lookup-intrinsic-name x)))
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
        ((('##qualified-lambda name n body) . xs)
         (let ((lamb (mangle-qualified-function name)))
           (set! qualified-functions (cons (list lamb n #f) qualified-functions))
           (set! functions (cons `(,lamb #f (,n ,(iter-apply lamb body))) functions))
           `((close ,lamb) . ,(map (lambda (x) (iter-atom lamb x #f)) xs))))
        (('letrec n xs vals body)
         `(letrec ,n ,(map (lambda (x val) (iter-atom (mangle-symbol x) val #f)) xs vals)
            ,(iter-apply fun body)))
        (('basic-block cost n xs vals body)
         `(basic-block
            ,cost
            ,n
            ,xs
            ,(map (lambda (x val)
                    (cons (iter-atom fun (car val) #t)
                          (map (lambda (x) (iter-atom fun x #f))
                               (cdr val))))
                  xs
                  vals)
            ,(iter-apply fun body)))
        (('##qualified-call name f . xs)
         `(##qualified-call ,name ,(iter-atom fun f #t) . ,(map (lambda (x) (iter-atom fun x #f)) xs)))
        ((f xs ...)
         (cons (iter-atom fun f #t)
               (map (lambda (x) (iter-atom fun x #f)) xs)))
        (else (error "to-functions iter-apply match statement exhausted" expr))))
    (define (iter fun expr) (match expr
        (('bruijn . _) expr)
        (('lambda . _) (iter-atom fun expr #f))
        (('##qualified-lambda . _) (iter-atom fun expr #f))
        (('case-lambda . _) (iter-atom fun expr #f))
        (('##qualified-case-lambda . _) (iter-atom fun expr #f))
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
          (list literal-table foreign-functions functions qualified-functions declares toplevels)))))
)
