; Program-toplevel macros are as invisible inside a library as variables are.
(define-syntax (m a) a)
(define-library (leaky)
  (export f)
  (define (f) (m 1)))
(import (leaky))
(f)
