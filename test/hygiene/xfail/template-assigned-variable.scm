; An exported macro's expansion may not refer to a variable its library
; assigns (R6RS 7.1): importers would see a copy that goes stale.
(define-library (hy assigned)
  (import (vanity core))
  (export bump! peek)
  (define counter 0)
  (define (bump!) (set! counter (+ counter 1)))
  (define-syntax (peek) (quasisyntax counter)))
(import (vanity core) (hy assigned))
(bump!)
(display (peek))
