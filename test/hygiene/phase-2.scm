; A define-syntax inside begin-for-syntax is a phase-1 macro, whose
; transformer runs at phase 2 and whose templates resolve at phase 1.
(import (vanity core) (vanity assert))

(begin-for-syntax
  (define-syntax (twice e) (quasisyntax (+ ,e ,e)))
  (define (helper n) (twice n)))
(define-syntax (m) (helper 21))
(assert-equal (m) 42)
