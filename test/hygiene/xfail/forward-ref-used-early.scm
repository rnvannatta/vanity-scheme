; A forward reference that runs before the later block defines it is an
; error.
(import (vanity core))
(begin-for-syntax
  (define (f) (g)))
(define-syntax (m) (f))
(display (m))
(begin-for-syntax
  (define (g) 1))
