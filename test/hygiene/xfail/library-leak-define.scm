; A library body cannot see program-toplevel definitions: x is a free
; variable inside (leaky), not a reference to the toplevel x.
(define x 1)
(define-library (leaky)
  (export f)
  (define (f) x))
(import (leaky))
(f)
