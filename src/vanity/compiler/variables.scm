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

; mangles: _V0  a standard variable
;          _V10 a system variable
;          _V20 a library
;          _V30 a shim function for a ffi
;          _V40 an intrinsic
;          _V50 a qualified function
;          _VW  an interned value

(define-library (vanity compiler variables)
  (export mangle-symbol mangle-library mangle-qualified-function free-variables variable-pure?)
  (import (vanity core) (vanity list) (vanity intrinsics) (vanity compiler utils))

  (define (mangle-qualified-function name)
    (string-append "_V50" (fold-right string-append "" (map symbol->string (map mangle-symbol name)))))
  ; why does this return another symbol? should return a string? maybe I want eqv? that bad
  (define (mangle-symbol sym)
    (let* ((str (symbol->string sym))
           (strlen (string-length str))
           (port (open-output-string)))
      (if (eq? (string-ref str 0) #\#)
          (display "_V10" port)
          (display "_V0" port))
      (let loop ((i 0))
        (if (= i strlen)
            (let ((ret (get-output-string port)))
              (close-port port)
              (string->symbol ret))
            (begin
              (display
                (case (string-ref str i)
                  ((#\#) "") ; nothing, skip over #'s, they only show up at the front
                  ((#\!) "_B") ; bang
                  ((#\$) "_Z") ; ziti
                  ((#\%) "_M") ; modulo
                  ((#\&) "_R") ; reference
                  ((#\*) "_S") ; star
                  ((#\/) "_W") ; with
                  ((#\:) "_J") ; join
                  ((#\<) "_L") ; less than
                  ((#\=) "_E") ; equal
                  ((#\>) "_G") ; greater than
                  ((#\?) "_Q") ; question
                  ((#\^) "_C") ; caret
                  ((#\_) "_U") ; underscore
                  ((#\~) "_T") ; tilde
                  ((#\+) "_P") ; plus
                  ((#\-) "__") ; kebab
                  ((#\.) "_D") ; dot
                  ((#\@) "_A") ; atsign

                  (else (string-ref str i)))
                port)
              (loop (+ i 1)))))))
  (define (mangle-library lib)
    (cond ((string? lib) lib) ; TODO actually validate this is valid C
          ((pair? lib)
           (let loop ((knil "_V20") (ks (reverse lib)))
             (if (null? ks) knil
                 (loop
                   (string-append
                     (let ((e (car ks)))
                       (if (symbol? e)
                           (symbol->string (mangle-symbol e))
                           (compiler-error "non-symbol in library path:" e)))
                     knil)
                   (cdr ks)))))
          (else (compiler-error "library name must be a string which is a valid c identifier or a list of symbols" lib))))
  #;(define (free-variables-toplevel expr)
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
      ; todo import and foreign import
      (('import lib)
       (values
        '()
        (merge (extract-exports (find-library-interface! lib paths) bound))))
      (('##vcore.declare . _) (values '() bound))
      (else (values (loop bound expr) bound))))

  (define (memtail x args)
    (if (pair? args)
        (or (eqv? x (car args)) (memtail x (cdr args)))
        (eqv? x args)))
  (define (variable-pure-body? k xs body)
    (if (memtail k xs)
        #t
        (variable-pure? k body)))
  (define (variable-pure? k expr)
    (match expr
      (('quote . _) #t)
      (('##foreign.function . _) #t)
      (('lambda xs body)
       (variable-pure-body? k xs body))
      (('case-lambda . bodies)
       (fold (lambda (body p) (and p (variable-pure-body? k (car body) (cadr body)))) #t bodies))
      (('##qualified-lambda name xs body)
       (variable-pure-body? k xs body))
      (('##qualified-case-lambda name . bodies)
       (fold (lambda (body p) (and p (variable-pure-body? k (car body) (cadr body)))) #t bodies))
      (('set! x val)
       (and (not (eqv? x k)) (variable-pure? k val)))
      (('define x val)
       (or (eqv? x k) (variable-pure? k val)))
      (('letrec ((xs vals) ...) body)
       ; a bit of a hack.
       ; but if k is in the xs, it's shadowed
       ; and such doesn't matter for the vals and the body
       ; otherwise we need to check the vals and the body for a set! expr
       (variable-pure-body? k xs (cons 'begin (cons body vals))))
      ; if, begin, and or can be handled by this case as the 3 each contain a harmless keyword
      ; and a sequence of plain statements
      ((xs ...)
       (fold (lambda (x p) (and p (variable-pure? k x))) #t xs))
      (else #t)))

  (define (free-variables expr)
    (define (merge a b)
      (cond ((null? a) b)
            ((assv (caar a) b) (merge (cdr a) b))
            (else (merge (cdr a) (cons (car a) b)))))
    (define (append-improper a b)
      (cond ((pair? a) (cons (car a) (append-improper (cdr a) b)))
            ((null? a) b)
            (else (cons a b))))
    (let loop ((bound '()) (expr expr) (context #f))
      (cond ((symbol? expr)
             (if (or (memv expr bound) (lookup-intrinsic-name expr))
                 '()
                 (list (cons expr context))))
            ((atom? expr) '())
            ((eqv? (car expr) 'quote) '())
            ((eqv? (car expr) '##foreign.function) '())
            ((eqv? (car expr) 'if)
             (merge (merge (loop bound (cadr expr) expr) (loop bound (caddr expr) expr)) (loop bound (cadddr expr) expr)))
            ((memv (car expr) '(begin and or))
             (merge (loop bound (cadr expr) expr) (loop bound (caddr expr) expr)))
            ((eqv? (car expr) 'lambda)
             (loop (append-improper (cadr expr) bound) (cddr expr) expr))
            ((eqv? (car expr) '##qualified-lambda)
             (loop (append-improper (caddr expr) bound) (cdddr expr) expr))
            ((eqv? (car expr) 'case-lambda)
             (let loop2 ((cases (cdr expr)))
              (if (null? cases)
                  '()
                  (merge (loop (append-improper (caar cases) bound) (cdar cases) (car cases)) (loop2 (cdr cases))))))
            ((eqv? (car expr) '##qualified-case-lambda)
             (let loop2 ((cases (cddr expr)))
              (if (null? cases)
                  '()
                  (merge (loop (append-improper (caar cases) bound) (cdar cases) (car cases)) (loop2 (cdr cases))))))
            ((eqv? (car expr) 'letrec)
             (loop (append-improper (map car (cadr expr)) bound)
                   (cons 'begin (cons (map cadr (cadr expr)) (cddr expr)))
                   expr))
            ((eqv? (car expr) 'set!)
             (loop bound (cdr expr) expr))
            (else
             #;(merge (loop bound (car expr)) (loop bound (cdr expr)))
               (fold merge '() (map (lambda (e) (loop bound e expr)) expr))
             )))))
