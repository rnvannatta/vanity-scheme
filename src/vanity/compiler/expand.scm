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

(define-library (vanity compiler expand)
  (import (vanity core) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity compiler ffi) (vanity compiler library))
  (export expand-toplevel)
  ; TODO

  ; garbage collect strings and pairs - DONE
  ; resizable heap - DONE
  ; exact numbers - DONE
  ; full quotation - DONE
  ; work on defining literals - DONE
  ; remove the damn k's from the continuations - DONE
  ; symbols - DONE
  ; global defines - DONE
  ; moar inlines
  ; eqv and equal - DONE

  ; define and let syntactic sugar - DONE
  ; define-syntax with common lisp macros
  ; variadic funcalls other than hand written - DONE
  ; format - DONE
  ; call/cc - DONE
  ; match syntax - DONE
  ; vectors and records - VECTORS DONE
  ; interning

  ; makefile
  ; global defines, main entrypoint
  ; define syntatic sugar - DONE
  ; record? - do it with $

  (define (collect-defines body)
    (let loop ((defines '()) (body body))
      (match body
        ((('define (f . xs) . body) . rest) (loop (cons `(define ,f (lambda ,xs . ,body)) defines) rest))
        ((('define x body) . rest)
         (if (not (symbol? x)) (compiler-error "define's first argument is not a symbol" x))
         (loop (cons `(define ,x ,body) defines) rest))
        (('define . noise) (compiler-error "malformed define" `(define . ,noise)))
        (else
          (match (reverse defines)
            (() `(begin . ,body))
            ((('define xs vals) ...)
             `(letrec* ,(map list xs vals) . ,body)))))))

  (define (expand-quasiquote quotation expr)
    ; bug with chicken is why we use quasiquotes on quotes, unquotes, and unquote-splicings
    (match expr
      (('quasiquote x) `(##sys.cons `quasiquote (##sys.cons ,(expand-quasiquote (+ quotation 1) x) '())))
      (('unquote x)
       (if (= quotation 1) x
           `(##sys.cons `unquote (##sys.cons ,(expand-quasiquote (- quotation 1) x) '()))))
      ((('unquote-splicing x) . y)
       (if (= quotation 1)
           ; FIXME dont' like this naked append, need long and short function
           `(append ,x ,(expand-quasiquote quotation y))
           `(##sys.cons (##sys.cons `unquote-splicing (##sys.cons ,(expand-quasiquote (- quotation 1) x) '()) ,(expand-quasiquote quotation y)))))
      ((a . b) `(##sys.cons ,(expand-quasiquote quotation a) ,(expand-quasiquote quotation b)))
      (x `',x)))

  ; pretty ugly code
  (define (expand-library lib paths)
    (define (make-library-output exports)
      ; i know i don't have to do it like this, but i'm too much of a brainlet to remember how
      ; nested quasiquotes work
      (expand-syntax (list 'quasiquote (map (lambda (e) (cons e (list 'unquote e))) exports))))
    (define exports '())
    (define imports '())
    (define mangled-imports '())
    (define (extract-exports lib)
      (cond ((assoc 'export (cddr lib)) => cdr)
            (else '())))
    (define (expand-library-expr expr)
      (match expr
        (('export . syms)
         (set! exports (append syms exports))
         (list))
        (('import . libs)
         (set! imports
          (fold append imports (reverse (map (lambda (import) (extract-exports (find-library-interface! import paths))) libs))))
         (set! mangled-imports (append (map mangle-library libs) mangled-imports))
         (list))
        (('define (f . xs) . body) (expand-define `(define ,f (lambda ,xs . ,body))))
        (('define f ('lambda . body))
         (if (not (symbol? f)) (compiler-error "define's first argument is not a symbol" f))
         (list `(define ,f ,(expand-syntax `(lambda . ,body)))))
        (('define f ('case-lambda . body))
         (if (not (symbol? f)) (compiler-error "define's first argument is not a symbol" f))
         (list `(define ,f ,(expand-syntax `(case-lambda . ,body)))))
        (('define x y) (list `(define ,x ,(expand-syntax y))))
        (('define . noise) (compiler-error "malformed define" `(define . ,noise)))
        ; TODO why not? we've done everything we need for expressions in libraries
        (else (compiler-error "expressions not permitted in libraries yet" expr))))
    ; still has free variables
    (define basic-library
       (expand-syntax
         `(lambda ()
            ; unquote splicing seems cleaner, need to implement that huh
            ;,@(map expand-library-expr (cddr lib))
            ;,(list (make-library-output exports))
            . ,(append (apply append (map expand-library-expr (cddr lib)))
                       (list (make-library-output exports))))))
    (define free-vars
      (free-variables basic-library))
    (let ((unbound-vars (filter (lambda (var) (not (memv var imports))) free-vars)))
      (if (not (null? unbound-vars)) (compiler-error "library has free variables" (cadr lib) unbound-vars)))
    (register-library-interface! (header-from-library lib))
    (let* ((libname (mangle-library (cadr lib))))
      (if (not (fold (lambda (a b) (and a b)) #t (map string? mangled-imports))) (compiler-error "imports to library must all be c strings"))
      (if (and (null? mangled-imports) (not (null? free-vars)))
          (compiler-error "library has free variables but no imports:" (cadr lib) free-vars))
      `(##vcore.declare ,libname
         (lambda ()
          ,(expand-syntax
          `(let ((##vcore.import (##vcore.make-import ,libname . ,(map (lambda (i) `(##vcore.load-library ,i)) mangled-imports))))
            (let ,(map (lambda (f) `(,f (##vcore.import ,(list 'quote f)))) free-vars)
            .
            ,(cddr basic-library))))))))


  (define (memtail x args)
    (if (pair? args)
        (or (eqv? x (car args)) (memtail x (cdr args)))
        (eqv? x args)))
  (define (valid-args? args)
    (or (symbol? args)
        (null? args)
        (and (pair? args)
             (if (memtail (car args) (cdr args))
                 (compiler-error "duplicate in lambda" (car args))
                 #t)
             (valid-args? (cdr args)))))
  (define (expand-lambda expr)
    (match expr
      ((args body)
       (if (not (valid-args? args)) (compiler-error "invalid lambda args" args))
       `(,args ,(expand-syntax body)))
      ((args . body)
       (if (not (valid-args? args)) (compiler-error "invalid lambda args" args))
       (expand-lambda `(,args ,(collect-defines body))))
      (_ (compiler-error "invalid lambda" `(lambda . ,expr)))))
  (define (expand-let expr)
    (match expr
      ((((xs vals) ...) . body) (expand-syntax `((lambda ,xs . ,body) . ,vals)))
      ((loop ((xs vals) ...) . body) (expand-syntax `(letrec ((,loop (lambda ,xs . ,body))) (,loop . ,vals))))
      (_ (compiler-error "malformed let" `(let . ,expr)))))

  (define (expand-define expr)
    (match expr
      (('define x body)
       (if (not (symbol? x)) (compiler-error "define's first argument is not a symbol" x))
       (list `(define ,x ,(expand-syntax body))))
      (else (compiler-error "malformed define" expr))))
  (define (expand-toplevel expr paths)
    (match expr
      (('begin . ys)
       (apply append (map (lambda (e) (expand-toplevel e paths)) ys)))

      (('define-library lib . body) (list (expand-library `(define-library ,lib . ,body) paths)))
      (('define-library . noise) (compiler-error "malformed define-library" `(define-library . ,noise)))

      (('import) '())
      (('import lib . rest)
       (cons `(##vcore.multidefine (##vcore.load-library ,(mangle-library lib)))
             (expand-toplevel `(import . ,rest) paths)))

      (('define (f . xs) . body) (expand-define `(define ,f (lambda ,xs . ,body))))
      (('define x body)
       (if (not (symbol? x)) (compiler-error "define's first argument is not a symbol" x))
       (list `(define ,x ,(expand-syntax body))))
      (('define . noise) (compiler-error "malformed define" `(define . ,noise)))

      (('##vcore.declare f l)
       (if (not (string? f)) (compiler-error "##vcore.declare's first argument is not a string" f))
       (match l
        (('lambda . args) 'ok)
        (('case-lambda . args) 'ok)
        (('##vcore.function . args) 'ok)
        (else (compiler-error "##vcore.declare's second argument is not a lambda expression" l)))
       (list `(##vcore.declare ,f ,(expand-syntax l))))
      (('##foreign.declare str)
       (if (not (string? str)) (compiler-error "##foreign.declare's first argument is not a string" str))
       (list expr))
      (('##foreign.import lang str)
       (resolve-foreign-import expr paths))

      (expr (list (expand-syntax expr)))))

  (define (expand-syntax expr)
    (match expr
      (('lambda . _) (cons 'lambda (expand-lambda (cdr expr))))

      (('case-lambda lamb ...)
       `(case-lambda . ,(map expand-lambda lamb)))
      (('case-lambda . _) (compiler-error "malformed case-lambda" expr))

      (('quasiquote x) (expand-syntax (expand-quasiquote 1 x)))
      (('quote (a . b)) (expand-syntax `(##sys.qcons (quote ,a) (quote ,b))))
      (('quote x) `(quote ,x))

      (('let . _) (expand-let (cdr expr)))

      (('let*-values ((xs producer) . rest) . body)
       (expand-syntax `(call-with-values (lambda () ,producer) (lambda ,xs (let*-values ,rest . ,body)))))
      (('let*-values () . body) (expand-syntax `(begin . ,body)))
      (('let*-values . noise) (compiler-error "malformed let-values*" `(letrec . ,noise)))

      (('letrec ((xs vals) ...) . body) (expand-syntax `((lambda ,xs ,@(map (lambda (x val) `(set! ,x ,val)) xs vals) . ,body) . ,(map (lambda (val) #f) xs))))
      (('letrec . noise) (compiler-error "malformed letrec" `(letrec . ,noise)))
      (('letrec* . rest) (expand-syntax `(letrec . ,rest)))

      (('let* ((x val) rest ...) . body) (expand-syntax `(let ((,x ,val)) (let* ,rest . ,body))))
      (('let* () . body) (expand-syntax `(begin . ,body)))
      (('let* . noise) (compiler-error "malformed let*" `(let* . ,noise)))

      (('begin x) (expand-syntax x))
      (('begin x y) `(begin ,(expand-syntax x) ,(expand-syntax y)))
      (('begin x . y) (expand-syntax `(begin ,x (begin . ,y))))
      (('begin . noise) (compiler-error "malformed begin" `(begin . ,noise)))

      (('if p x) (expand-syntax `(if ,p ,x #f)))
      (('if p x y) `(if ,(expand-syntax p) ,(expand-syntax x) ,(expand-syntax y)))
      (('if . noise) (compiler-error "malformed if" `(if . ,noise)))

      (('and) #t)
      (('and x) (expand-syntax x))
      (('and x y) `(if ,(expand-syntax x) ,(expand-syntax y) #f))
      (('and x . y) (expand-syntax `(if ,x (and . ,y) #f)))


      (('or) #f)
      (('or x) (expand-syntax x))
      (('or x y) `(or ,(expand-syntax x) ,(expand-syntax y)))
      (('or x . y) (expand-syntax `(or ,x (or . ,y))))

      (('cond ('else . body)) (expand-syntax `(begin . ,body)))
      (('cond (p '=> f) . rest) (let ((foobar (gensym "x"))) (expand-syntax `(let ((,foobar ,p)) (if ,foobar (,f ,foobar) (cond . ,rest))))))
      (('cond (p . body) . rest) (expand-syntax `(if ,p (begin . ,body) (cond . ,rest))))
      (('cond) `(error "exhausted cond statement"))
      (('cond . noise) (compiler-error "malformed cond" `(cond . ,noise)))

      (('case x . rest) (let ((foobar (gensym "x"))) (expand-syntax `(let ((,foobar ,x)) (case-iter ,foobar . ,rest)))))
      (('case-iter x ('else . body)) (expand-syntax `(begin . ,body)))
      (('case-iter x ((toks ...) . body) . rest) (expand-syntax `(if (or . ,(map (lambda (y) `(eqv? ,x (quote ,y))) toks)) (begin . ,body) (case-iter ,x . ,rest))))
      (('case-iter x) `(error "exhausted case statement"))
      ; FIXME don't expose case iteration like this - should probably compile to hash table or memv?

      (('cut f . args) (expand-syntax `(cut-iter () () ,f . ,args)))
      (('cut-iter xs args f) (expand-syntax `(lambda ,(reverse xs) (,f . ,(reverse args)))))
      (('cut-iter xs args f '<> . rest) (let ((x (gensym "x"))) (expand-syntax `(cut-iter (,x . ,xs) (,x . ,args) ,f . ,rest))))
      (('cut-iter xs args f '<...>) (compiler-error "cut: ellipses syntax not supported yet"))
      (('cut-iter xs args f x . rest) (expand-syntax `(cut-iter ,xs (,x . ,args) ,f . ,rest)))
      (('cut . noise) (compiler-error "malformed cut" `(cut . ,noise)))

      (('set! y x)
       (if (not (symbol? y)) (compiler-error "set!'s first argument is not a symbol" y))
       `(set! ,y ,(expand-syntax x)))
      (('set! . noise) (compiler-error "malformed set!" `(set! . ,noise)))

      (('define . ys) (compiler-error "stray define in program" `(define . ,ys)))

      (('match . ys) (expand-syntax (transform-match `(match . ,ys) eqv?)))

      (('##foreign.function . _)
       (validate-foreign-function expr))

      ((f args ...)
       (if (and (atom? f) (not (symbol? f))) (compiler-error "function application's first arg is not a function" f))
       `(,(expand-syntax f) . ,(map expand-syntax args)))

      ((a . b) (compiler-error "stray improper list in program" `(,a . ,b)))
      (() (compiler-error "stray null list in program" '()))

      (else expr))))
