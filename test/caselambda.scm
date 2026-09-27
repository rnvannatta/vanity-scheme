(define-library (caselambda)
  (import (vanity core))
  (export foo bar uwu qux)
  (define uwu (case-lambda ((x) (* 11 x))))
  (define foo
    (case-lambda (() 0) ((x) 1) ((x y) 2)))
  (define (bar x) (foo 1 x))
  (define baz
    (case-lambda
      ((x) (set! baz (lambda (y) (* 10 y))) x)
      ((x y) y)))
  (define (qux x) (baz x)))
(import (vanity core) (caselambda))
(exit (and
(eq? (foo) 0)
(eq? (foo 1) 1)
(eq? (foo 2 3) 2)
(eq? (uwu (bar 99)) 22)
(eq? (qux 1) 1)
(eq? (qux 2) 20)))
