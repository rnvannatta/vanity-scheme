; A forward reference is expanded as a variable reference, so a later
; definition of its name as a macro is an error.
(import (vanity core))
(begin-for-syntax
  (define (f) (later 1)))
(begin-for-syntax
  (define-syntax (later x) x))
(define-syntax (m) (f))
(display (m))
