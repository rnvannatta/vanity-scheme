; A template identifier its library doesn't bind is a free variable, not a
; reference to the program's global of that name.
(define-library (hy unbound)
  (import (vanity core))
  (export m)
  (define-syntax (m) (quasisyntax (helper))))
(import (vanity core) (hy unbound))
(define (helper) 1)
(display (m))
