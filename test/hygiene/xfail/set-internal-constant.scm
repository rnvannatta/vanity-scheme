; set! of an internal define-constant is a compile error
(import (vanity core))
(define (f)
  (define-constant k 5)
  (set! k 6)
  k)
(display (f))
