; An internal define-syntax colliding with an internal define of the same
; name in the same body is an error.
(import (vanity core))

(define (f)
  (define (k) 1)
  (define-syntax (k) (quasisyntax 2))
  (k))
(display (f))
