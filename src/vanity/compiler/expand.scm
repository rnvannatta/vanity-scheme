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

(define-library (vanity compiler expand)
  (import (vanity core) (vanity pretty-print) (vanity intrinsics) (vanity list) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity compiler ffi) (vanity compiler library))
  (export expand-toplevel free-variables-toplevel)
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
  ; interning - DONE

  ; makefile - DONE
  ; global defines, main entrypoint - DONE
  ; define syntatic sugar - DONE
  ; record? - do it with $

  ; returns true if val can be directly assigned in a simple letrec primitive
  ; without mutation.
  ; ie (letrec* ((even? (lambda (x) blah)) (odd? (lambda (x) blah))) blah)
  ; can be. but:
  ; (letrec* ((satan (cons 'evil (lambda (x) satan)))) blah)
  ; cannot and must compile to a more general form using mutation:
  ; (letrec ((satan #f)) (set! satan (cons 'evil (lambda (x) satan))) (lambda () blah))
  ; in order to be a primitive letrec binding, a value must either be a lambda, or
  ; another literal, or a combination that has neither lambdas nor contains the xs
  (define (primitive-letrec? val xs)
    (call/cc
      (lambda (return)
        (define (advanced-letrec-one val)
          (match val
            (('quote . _) #t)
            (('lambda . _) 
             (return #f))
            (('case-lambda . _)
             (return #f))
            (('##foreign.function . _) #t)
            (('letrec . _)
             (return #f))
            ((_ . _) (map advanced-letrec-one val))
            (x
             (if (and (symbol? x) (memv x xs))
                 (return #f)
                 #t))))
        (match val
            (('quote . _) #t)
            (('lambda . _) #t)
            (('case-lambda . _) #t)
            (('##foreign.function . _) #t)
            ((_ . _) (advanced-letrec-one val))
            (x (not (and (symbol? x) (memv x xs))))))))

  (define (undot lst)
    (cond ((null? lst) '())
          ((symbol? lst) (list lst))
          (else (cons (car lst) (undot (cdr lst))))))


  (define (expand-letrec* orig-xs vals body)
    (let loop ((body `((let () . ,body)))
               (done-vals '())
               (vals (reverse (map expand-syntax vals)))
               (xs (reverse orig-xs)))
      (cond ((null? vals)
             `(letrec ,(map list orig-xs done-vals)
                ,(expand-syntax `(begin . ,body))))
            ((primitive-letrec? (car vals) orig-xs)
             (loop
               body
               (cons (car vals) done-vals)
               (cdr vals)
               (cdr xs)))
            (else
             (loop
               (cons `(set! ,(car xs) ,(car vals)) body)
               (cons #f done-vals)
               (cdr vals)
               (cdr xs))))))
  (define (expand-letrec orig-xs vals body)
    (let loop ((inner-let '())
               (body `((let () . ,body)))
               (done-vals '())
               (vals (reverse (map expand-syntax vals)))
               (xs (reverse orig-xs)))
      (cond ((null? vals)
             `(letrec ,(map list orig-xs done-vals)
                ,(expand-syntax `(let ,inner-let (begin . ,body)))))
            ((primitive-letrec? (car vals) orig-xs)
             (loop
               inner-let
               body
               (cons (car vals) done-vals)
               (cdr vals)
               (cdr xs)))
            (else
             (let ((tmp (gensym "tmp")))
               (loop
                 (cons `(,tmp ,(car vals)) inner-let)
                 (cons `(set! ,(car xs) ,tmp) body)
                 (cons #f done-vals)
                 (cdr vals)
                 (cdr xs)))))))

  (define (constant-expr? expr)
    (or (and (symbol? expr) (lookup-intrinsic-name expr))
        (and (not (pair? expr)) (not (symbol? expr)))
        #;(and (pair? expr) (eqv? (car expr) 'lambda) (null? (free-variables expr)))))
  (define (constant-pure-body? k xs body)
    (if (memtail k xs)
        #t
        (constant-pure? k body)))
  (define (constant-pure? k expr)
    (match expr
      (('quote . _) #t)
      (('##foreign.function . _) #t)
      (('lambda xs body)
       (constant-pure-body? k xs body))
      (('case-lambda . bodies)
       (fold (lambda (body p) (and p (constant-pure-body? k (car body) (cadr body)))) #t bodies))
      (('set! x val)
       (and (not (eqv? x k)) (constant-pure? k val)))
      (('letrec ((xs vals) ...) body)
       ; a bit of a hack.
       ; but if k is in the xs, it's shadowed
       ; and such doesn't matter for the vals and the body
       ; otherwise we need to check the vals and the body for a set! expr
       (constant-pure-body? k xs (cons 'begin (cons body vals))))
      ; if, begin, and or can be handled by this case as the 3 each contain a harmless keyword
      ; and a sequence of plain statements
      ((xs ...)
       (fold (lambda (x p) (and p (constant-pure? k x))) #t xs))
      (else #t)))
  (define (expand-body full-body)
    (let loop ((defines '()) (constants '()) (body full-body))
      (match body
        ((('define (f . xs) . body) . rest)
         (loop (cons `(define ,f (lambda ,xs . ,body)) defines) constants rest))
        ((('define x body) . rest)
         (if (not (symbol? x)) (compiler-error "define's first argument is not a symbol" x))
         (loop (cons `(define ,x ,body) defines) constants rest))
        (('define . noise) (compiler-error "malformed define" `(define . ,noise)))

        ; TODO these guys forreal
        ((('define-constant (f . xs) . body) . rest)
         (loop defines constants (cons `(define-constant ,f (lambda ,xs . ,body)) rest)))
        ((('define-constant x body) . rest)
         (if (not (constant-expr? body)) (compiler-error "define-constant does not define a constant expression" `(define-constant ,x ,body)))
         (if (not (symbol? x)) (compiler-error "define-constant's first argument is not a symbol" x))
         (loop defines (cons (list x body) constants) rest))
        (('define-constant . noise) (compiler-error "malformed define-constant" `(define . ,noise)))

        ((('define-values formals body) . rest)
         (let* ((names (undot formals))
                (mangles (map gensym names)))
           (loop
             (append
               `((define ,(gensym 'dummy)
                   (##vcore.call-with-values
                     (lambda () ,body)
                     (lambda
                       ,(let loop ((formals formals) (mangles mangles))
                          (cond
                            ((pair? formals) (cons (car mangles) (loop (cdr formals) (cdr mangles))))
                            ((null? formals) '())  
                            (else (car mangles))))
                       #void
                       ,@(map (lambda (name mangle) `(set! ,name ,mangle)) names mangles)))))
               (reverse (map (lambda (name) `(define ,name #f)) names))
               defines)
             constants
             rest)))
        ((('begin x) . rest)
         (loop defines constants `(,x . ,rest)))
        ((('begin x . ys) . rest)
         (loop defines constants `(,x (begin . ,ys) . ,rest)))
        (else
          (let ((body (expand-syntax `(begin . ,body))))
            (let ((the-letrec
                    (match (reverse defines)
                      (() body)
                      ((('define xs vals) ...)
                       (expand-syntax `(letrec* ,(map list xs vals) ,body))))))
              (if (not (null? constants))
                  (for-each
                    (lambda (k)
                      (if (not (constant-pure? (car k) the-letrec))
                          (compiler-error "define-constant constant is mutated by set!" (cons 'define-constant k))))
                    constants))
              (if (null? constants)
                  the-letrec
                  (let* ((constants (reverse constants))
                         (xs (map car constants))
                         (vals (map cadr constants)))
                    `((lambda ,xs ,the-letrec) . ,vals))
                       )))))))

  (define (expand-quasiquote quotation expr)
    ; bug with chicken is why we use quasiquotes on quotes, unquotes, and unquote-splicings
    (match expr
      (('quasiquote x) `(##vcore.cons `quasiquote (##vcore.cons ,(expand-quasiquote (+ quotation 1) x) '())))
      (('unquote x)
       (if (= quotation 1)
           (cond ((vector? x) `(##vcore.list->vector ,(expand-syntax `',(vector->list x))))
                 ((f64vector? x) `(##vcore.list->f64vector ,(expand-syntax `',(f64vector->list x))))
                 ((f32vector? x) `(##vcore.list->f32vector ,(expand-syntax `',(f32vector->list x))))
                 ((s32vector? x) `(##vcore.list->s32vector ,(expand-syntax `',(s32vector->list x))))
                 ((u16vector? x) `(##vcore.list->u16vector ,(expand-syntax `',(u16vector->list x))))
                 ((s16vector? x) `(##vcore.list->s16vector ,(expand-syntax `',(s16vector->list x))))
                 ((u8vector? x) `(##vcore.list->u8vector ,(expand-syntax `',(u8vector->list x))))
                 ((s8vector? x) `(##vcore.list->s8vector ,(expand-syntax `',(s8vector->list x))))
                 (else x))
           `(##vcore.cons `unquote (##vcore.cons ,(expand-quasiquote (- quotation 1) x) '()))))
      ((('unquote-splicing x) . y)
       (if (= quotation 1)
           ; FIXME dont' like this naked append, need long and short function
           `(append ,x ,(expand-quasiquote quotation y))
           `(##vcore.cons (##vcore.cons `unquote-splicing (##vcore.cons ,(expand-quasiquote (- quotation 1) x) '()) ,(expand-quasiquote quotation y)))))
      ((a . b) `(##vcore.cons ,(expand-quasiquote quotation a) ,(expand-quasiquote quotation b)))
      (x
       (cond ((vector? x) `(##vcore.list->vector ,(expand-quasiquote quotation (vector->list x))))
             ((f64vector? x) `(##vcore.list->f64vector ,(expand-quasiquote quotation (f64vector->list x))))
             ((f32vector? x) `(##vcore.list->f32vector ,(expand-quasiquote quotation (f32vector->list x))))
             ((s32vector? x) `(##vcore.list->s32vector ,(expand-quasiquote quotation (s32vector->list x))))
             ((u16vector? x) `(##vcore.list->u16vector ,(expand-quasiquote quotation (u16vector->list x))))
             ((s16vector? x) `(##vcore.list->s16vector ,(expand-quasiquote quotation (s16vector->list x))))
             ((u8vector? x) `(##vcore.list->u8vector ,(expand-quasiquote quotation (u8vector->list x))))
             ((s8vector? x) `(##vcore.list->s8vector ,(expand-quasiquote quotation (s8vector->list x))))
             (else `',x)))))

  ; pretty ugly code
  (define (expand-library lib paths)
    (define (make-library-output exports)
      ; i know i don't have to do it like this, but i'm too much of a brainlet to remember how
      ; nested quasiquotes work
      (expand-syntax (list 'quasiquote (map (lambda (e) (cons e (list 'unquote e))) exports))))
    (define exports '())
    (define imports '())
    (define constant-imports '())
    (define mangled-imports '())
    (define (extract-exports lib)
      (cond ((assoc 'export (cddr lib)) => cdr)
            (else '())))
    (define (extract-constants lib)
      (cond ((assoc 'constant-export (cddr lib)) => cdr)
            (else '())))

    (define declares '())
    (define defines '())
    (define constants '())
    (define just-defines #t)

    (define (expand-library-expr expr)
      (match expr
        (('export . syms)
         (set! exports (append syms exports))
         (list))
        (('import . libs)
         (set! imports (fold append imports (reverse (map (lambda (import) (extract-exports (find-library-interface! import paths))) libs))))
         (set! constant-imports (fold append constant-imports (reverse (map (lambda (import) (extract-constants (find-library-interface! import paths))) libs))))
         (set! mangled-imports (append (map mangle-library libs) mangled-imports))
         (list))
        (('define (f . xs) . body)
         (if (not (symbol? f)) (compiler-error "define's first argument is not a symbol" f))
         (set! defines (cons `(define ,f ,(expand-syntax `(lambda ,xs . ,body))) defines))
         (list))
        (('define f ('lambda . body))
         (if (not (symbol? f)) (compiler-error "define's first argument is not a symbol" f))
         (set! defines (cons `(define ,f ,(expand-syntax `(lambda . ,body))) defines))
         (list))
        (('define f ('case-lambda . body))
         (if (not (symbol? f)) (compiler-error "define's first argument is not a symbol" f))
         (set! defines (cons `(define ,f ,(expand-syntax `(case-lambda . ,body))) defines))
         (list))
        (('define x y)
         (if (not (symbol? x)) (compiler-error "define's first argument is not a symbol" x))
         (if just-defines
             (begin
               (set! defines (cons `(define ,x ,(expand-syntax y)) defines))
               (list))
             (begin
               (set! defines (cons `(define ,x #f) defines))
               (list `(set! ,x ,(expand-syntax y))))))
        (('define-constant (f . xs) . body)
         (compiler-error "define-constant does not support trivial lambdas yet" `(define-constant (,f . ,xs) ,body)))
        (('define-constant x body)
         (if (not (constant-expr? body)) (compiler-error "define-constant does not define a constant expression" `(define-constant ,x ,body)))
         (if (not (symbol? x)) (compiler-error "define-constant's first argument is not a symbol" x))
         (begin
           (set! constants (cons `(define-constant ,x ,body) constants))
           (list)))
        (('define-constant . noise) (compiler-error "malformed define-constant" `(define . ,noise)))
        (('define . noise) (compiler-error "malformed define" `(define . ,noise)))
        (('begin x) (expand-library-expr x))
        (('begin . xs) (apply append (map expand-library-expr xs)))
        (('define-record-type . rest)
         (expand-library-expr (expand-define-record-type expr)))
        ; resolve-foreign-import also inserts a foreign-declare which we need to lift to the toplevel
        (('foreign-import lang str)
         (expand-library-expr `(##foreign.import ,lang ,str)))
        (('##foreign.import lang str)
         (let ((decl-defines (resolve-foreign-import expr paths "sysv_amd64")))
          (set! declares (cons (car decl-defines) declares))
          (apply append (map expand-library-expr (cdr decl-defines)))))
        (else
          (set! just-defines #f)
          (list expr))))
    ; still has free variables
    (define basic-library
      (let ((expanded (map expand-library-expr (cddr lib))))
        (expand-syntax
           `(lambda ()
              ,@(reverse constants)
              ,@(reverse defines)
              . ,(append (apply append expanded)
                         (list (make-library-output exports)))))))
    (define free-vars
      (free-variables basic-library))
    #;(let ((unbound-vars (filter (lambda (var) (not (memv var imports))) free-vars)))
      (if (not (null? unbound-vars))
          (begin
            (compiler-error "library has free variables" (cadr lib) unbound-vars))))

    (define unbound-vars '())
    (define constant-vars '())
    (define imported-vars '())

    (let loop ((free-vars free-vars))
      (if (null? free-vars)
          #f
          (begin
            (cond ((assv (car free-vars) constant-imports)
                   => (lambda (lookup) (set! constant-vars (cons (cons 'define-constant lookup) constant-vars))))
                  ((memv (car free-vars) imports)
                   (set! imported-vars (cons (car free-vars) imported-vars)))
                  (else (set! unbound-vars (cons (car free-vars) unbound-vars))))
            (loop (cdr free-vars)))))
    (if (not (null? unbound-vars))
        (begin
          (compiler-error "library has free variables" (cadr lib) unbound-vars)))

    (register-library-interface! (header-from-library lib))
    (let* ((libname (mangle-library (cadr lib))))
      (if (not (fold (lambda (a b) (and a b)) #t (map string? mangled-imports))) (compiler-error "imports to library must all be c strings"))
      (if (and (null? mangled-imports) (not (null? free-vars)))
          (compiler-error "library has free variables but no imports:" (cadr lib) free-vars))
      `(,@(reverse declares)
        (##vcore.declare ,libname
           (lambda ()
            ,(expand-syntax
            `(let ((##vcore.import (##vcore.make-import ,libname . ,(map (lambda (i) `(##vcore.load-library ,i)) mangled-imports))))
              (let ()
                ,@constant-vars
                (let ,(map (lambda (f) `(,f (##vcore.import ,(list 'quote f)))) imported-vars)
                  .
                  ,(cddr basic-library))))))))))

  (define (valid-identifier? s) (symbol? s))
  (define (valid-arguments? args)
    (let loop ((rest args))
      (if (pair? rest)
          (and
            (valid-identifier? (car rest))
            (not (memtail (car rest) (cdr rest)))
            (loop (cdr rest)))
          #t)))
  (define (expand-define-record-type expr)
    (define (validate-fields fieldnames fields)
      (if (null? fieldnames)
          #t
          (begin
            (if (not (assv (car fieldnames) fields))
                (compiler-error "define-record type: field not defined in field declaration list" (car fieldnames) fields))
            (validate-fields (cdr fieldnames) fields))))
    (define (expand-field pred fields field i)
      (define (make-getter getter)
        (if (not (valid-identifier? getter))
            (compiler-error "define-record-type: not a valid identifier" getter))
        `(define (,getter rec)
           (if (,pred rec)
               (##vcore.record-ref rec ,(+ i 1))
               (error "not a record of the right type" ',getter rec))))
      (define (make-setter setter)
        (if (not (valid-identifier? setter))
            (compiler-error "define-record-type: not a valid identifier" setter))
        `(define (,setter rec x)
           (if (,pred rec)
               (##vcore.record-set! rec ,(+ i 1) x)
               (error "not a record of the right type" ',setter rec))))
      (match (assv field fields)
        ((field getter)
         (make-getter getter))
        ((field getter setter)
         `(begin
           ,(make-getter getter)
           ,(make-setter setter)))))
    (match expr
      (('define-record-type name (constructor field-names ...) pred fields ...)
       (if (not (and (valid-identifier? name)
                     (valid-identifier? constructor)
                     (fold (lambda (a b) (and a b)) #t (map valid-identifier? field-names))
                     (valid-identifier? pred)))
           (compiler-error "malformed define-record-type: name, constructor, field names, and predicate must all be valid identifiers" expr))
       (if (not (valid-arguments? field-names))
           (compiler-error "malformed define-record-type: constructor field names contain a duplicate" field-names))
       (if (not (= (length field-names) (length fields)))
           (compiler-error "malformed define-record-type: there must be exactly one field declaration per fieldname" field-names fields))
       ; having a gensymed truepred prevents the record type from getting fucked up by overdefining pred
       ; eg (define-record-type nil (nil) nil?)
       ; still works correctly even if we (define nil? 'lmao)
       (let ((recordname (gensym name))
             (truepred (gensym pred)))
         `(begin
            (define ,recordname (##vcore.cons ',(cons name field-names) '()))
            (define (,truepred x) (and (##vcore.record? x) (eqv? (##vcore.record-ref x 0) ,recordname)))
            (define ,pred ,truepred)
            (define (,constructor . ,field-names) (##vcore.record ,recordname . ,field-names))
            .
            ,(map (lambda (field i) (expand-field truepred fields field i)) field-names (iota (length field-names))))))
      (else (compiler-error "malformed define-record-type" expr))))

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
      ((args . body)
       (if (not (valid-args? args)) (compiler-error "invalid lambda args" args))
       `(,args ,(expand-body body)))
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

  (define (expand-toplevel expr paths architecture)
    (match expr
      (('begin . ys)
       (apply append (map (lambda (e) (expand-toplevel e paths architecture)) ys)))

      (('define-library lib . body) (expand-library `(define-library ,lib . ,body) paths))
      (('define-library . noise) (compiler-error "malformed define-library" `(define-library . ,noise)))

      (('define-record-type . body) (expand-toplevel (expand-define-record-type expr) paths architecture))

      (('import) '())
      (('import lib . rest)
       (cons `(import ,lib)
             #;`(##vcore.multidefine (##vcore.load-library ,(mangle-library lib)))
             (expand-toplevel `(import . ,rest) paths architecture)))
      (('unload-library lib)
       (list `(##vcore.unload-library ,(mangle-library lib))))

      (('define (f . xs) . body) (expand-define `(define ,f (lambda ,xs . ,body))))
      (('define x body)
       (if (not (symbol? x)) (compiler-error "define's first argument is not a symbol" x))
       (list `(define ,x ,(expand-syntax body))))
      (('define . noise) (compiler-error "malformed define" `(define . ,noise)))

      (('define-values formals body)
       (let* ((names (undot formals))
              (mangles (map gensym names)))
         (expand-toplevel
           (append
             '(begin)
             (map (lambda (name) `(define ,name #f)) names)
             `((##vcore.call-with-values
                 (lambda () ,body)
                 (lambda
                   ,(let loop ((formals formals) (mangles mangles))
                      (cond
                        ((pair? formals) (cons (car mangles) (loop (cdr formals) (cdr mangles))))
                        ((null? formals) '())  
                        (else (car mangles))))
                   #void
                   ,@(map (lambda (name mangle) `(set! ,name ,mangle)) names mangles)))))
           paths
           architecture)))

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
       (resolve-foreign-import expr paths "sysv_amd64"))

      (('foreign-declare . rest)
       (expand-toplevel (cons '##foreign.declare rest) paths architecture))
      (('foreign-import . rest)
       (expand-toplevel (cons '##foreign.import rest) paths architecture))

      (expr (list (expand-syntax expr)))))

  (define (expand-syntax expr)
    (match expr
      (('lambda . _) (cons 'lambda (expand-lambda (cdr expr))))

      (('case-lambda lamb ...)
       `(case-lambda . ,(map expand-lambda lamb)))
      (('case-lambda . _) (compiler-error "malformed case-lambda" expr))

      (('quasiquote x) (expand-syntax (expand-quasiquote 1 x)))
      (('quote (a . b)) (expand-syntax `(##vcore.qcons (quote ,a) (quote ,b))))
      (('quote x)
       (cond ((vector? x) `(##vcore.list->vector ,(expand-syntax `',(vector->list x))))
             ((f64vector? x) `(##vcore.list->f64vector ,(expand-syntax `',(f64vector->list x))))
             ((f32vector? x) `(##vcore.list->f32vector ,(expand-syntax `',(f32vector->list x))))
             ((s32vector? x) `(##vcore.list->s32vector ,(expand-syntax `',(s32vector->list x))))
             ((u16vector? x) `(##vcore.list->u16vector ,(expand-syntax `',(u16vector->list x))))
             ((s16vector? x) `(##vcore.list->s16vector ,(expand-syntax `',(s16vector->list x))))
             ((u8vector? x) `(##vcore.list->u8vector ,(expand-syntax `',(u8vector->list x))))
             ((s8vector? x) `(##vcore.list->s8vector ,(expand-syntax `',(s8vector->list x))))
             (else `(quote ,x))))

      (('let . _) (expand-let (cdr expr)))

      (('let*-values ((xs producer) . rest) . body)
       (expand-syntax `(call-with-values (lambda () ,producer) (lambda ,xs (let*-values ,rest . ,body)))))
      (('let*-values () . body) (expand-syntax `(let () . ,body)))
      (('let*-values . noise) (compiler-error "malformed let-values*" `(let*-values . ,noise)))

      (('letrec* ((xs vals) ...) . body)
       (expand-letrec* xs vals body))
      (('letrec* . noise) (compiler-error "malformed letrec*" `(letrec . ,noise)))
      (('letrec ((xs vals) ...) . body)
       (expand-letrec xs vals body))
      (('letrec* . noise) (compiler-error "malformed letrec" `(letrec . ,noise)))

      (('let* ((x val) rest ...) . body) (expand-syntax `(let ((,x ,val)) (let* ,rest . ,body))))
      (('let* () . body) (expand-syntax `(let () . ,body)))
      (('let* . noise) (compiler-error "malformed let*" `(let* . ,noise)))

      (('parameterize ((x val) rest ...) . body)
       (let ((parameter (gensym "parameter"))
             (keyval (gensym "keyval"))
             (ret (gensym "ret")))
         (expand-syntax
           `(let* ((,parameter ,x)
                   (,keyval (,parameter '##vcore.push-value ,val))
                   (,ret (parameterize ,rest . ,body)))
              (,parameter '##vcore.pop-value ,keyval)
              ,ret))))
      (('parameterize () . body) (expand-syntax `(let () . ,body)))

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

      (('do ((var init . step) ...)
            (test ret ...)
          body ...)
        (let ((step (map (lambda (var step)
                           (cond ((null? step) var)
                                 ((null? (cdr step)) (car step))
                                 (else (compiler-error "malformed do: only one step expression is permitted" var step))))
                         var step))
              (do-loop (gensym "do-loop")))
          (expand-syntax
            `(let ,do-loop ,(map list var init)
              (if ,test
                  (let () . ,(if (null? ret) '(#void) ret))
                  (begin
                    (let () . ,(if (null? body) '(#void) body))
                    (,do-loop . ,step)))))))

      (('when p . body)
       (expand-syntax
         `(if ,p (begin . ,body) #void)))
      (('unless p . body)
       (expand-syntax
         `(if ,p #void (begin . ,body))))


      (('set! y x)
       (if (symbol? y)
           `(set! ,y ,(expand-syntax x))
           (match y
            ((get arg ...) 
             `((##vcore.setter ,get) ,@arg ,x))
            (else (compiler-error "malformed set!" `(set! ,y ,x))))))
      (('set! f y x xs ...)
       (if (symbol? y)
           `(set! ,y (,f ,y ,x . ,xs))
           (match y
            ((get arg ...)
             (let ((val (gensym "val")))
               `((##vcore.mutator ,get) ,@arg (lambda (,val) (,f ,val ,x . ,xs)))))
            (else (compiler-error "malformed set!" `(set! ,f ,y ,x . ,xs))))))
      (('set! . noise) (compiler-error "malformed set!" `(set! . ,noise)))

      (('define . ys) (compiler-error "stray define in program" `(define . ,ys)))

      (('match . ys) (expand-syntax (transform-match `(match . ,ys) eqv?)))

      (('##foreign.function . _)
       (validate-foreign-function expr))
      (('foreign-function . rest)
       (expand-syntax (cons '##foreign.function rest)))

      ((f args ...)
       (if (and (atom? f) (not (symbol? f))) (compiler-error "function application's first arg is not a function" f))
       `(,(expand-syntax f) . ,(map expand-syntax args)))

      ((a . b) (compiler-error "stray improper list in program" `(,a . ,b)))
      (() (compiler-error "stray null list in program" '()))

      (else
        ; FIXME: really terrible need to properly do this with a literal
        (cond ((vector? expr) `(##vcore.list->vector ,(expand-syntax `',(vector->list expr))))
              ((f64vector? expr) `(##vcore.list->f64vector ,(expand-syntax `',(f64vector->list expr))))
              ((f32vector? expr) `(##vcore.list->f32vector ,(expand-syntax `',(f32vector->list expr))))
              ((s32vector? expr) `(##vcore.list->s32vector ,(expand-syntax `',(s32vector->list expr))))
              ((u16vector? expr) `(##vcore.list->u16vector ,(expand-syntax `',(u16vector->list expr))))
              ((s16vector? expr) `(##vcore.list->s16vector ,(expand-syntax `',(s16vector->list expr))))
              ((u8vector? expr) `(##vcore.list->u8vector ,(expand-syntax `',(u8vector->list expr))))
              ((s8vector? expr) `(##vcore.list->s8vector ,(expand-syntax `',(s8vector->list expr))))
              (else expr)))))

  (define (free-variables-toplevel expr bound paths)
    (define (merge a b)
      (cond ((null? a) b)
            ((memv (car a) b) (merge (cdr a) b))
            (else (merge (cdr a) (cons (car a) b)))))
    (define (append-improper a b)
      (cond ((pair? a) (cons (car a) (append-improper (cdr a) b)))
            ((null? a) b)
            (else (cons a b))))
    (define (loop bound expr)
      (cond ((symbol? expr)
             (if (or (memv expr bound) (lookup-intrinsic-name expr)) '() (list expr)))
            ((atom? expr) '())
            ((eqv? (car expr) 'quote) '())
            ((eqv? (car expr) '##foreign.function) '())
            ((eqv? (car expr) 'if)
             (merge (merge (loop bound (cadr expr)) (loop bound (caddr expr))) (loop bound (cadddr expr))))
            ((memv (car expr) '(begin and or))
             (merge (loop bound (cadr expr)) (loop bound (caddr expr)))) 
            ((eqv? (car expr) 'lambda)
             (loop (append-improper (cadr expr) bound) (cddr expr)))
            ((eqv? (car expr) 'case-lambda)
             (let loop2 ((cases (cdr expr)))
              (if (null? cases) '()
                  (merge (loop (append-improper (caar cases) bound) (cdar cases)) (loop2 (cdr cases))))))
            ((eqv? (car expr) 'letrec)
             (loop (append-improper (map car (cadr expr)) bound)
                   (cons 'begin (cons (map cadr (cadr expr)) (cddr expr)))))
            ((eqv? (car expr) 'set!)
             (loop bound (cdr expr)))
            (else (merge (loop bound (car expr)) (loop bound (cdr expr))))))
    (define (extract-exports lib)
      (cond ((assoc 'export (cddr lib)) => cdr) (else '())))
    (match expr
      (('define x v) (values (loop (cons x bound) v) (cons x bound)))
      (('define-values xs v)
       (let ((bound (merge xs bound)))
        (values
          (loop bound expr)
          bound)))
      (('import lib)
       (values
        '()
        (merge (extract-exports (find-library-interface! lib paths)) bound)))
      (('##foreign.declare . _) (values '() bound))
      (('##vcore.declare . _) (values '() bound))
      (else (values (loop bound expr) bound)))))
