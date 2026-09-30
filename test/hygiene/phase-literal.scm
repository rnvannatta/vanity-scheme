; A transformer runs at its use site's phase: a phase-1 helper's quoted else
; is compared at phase 0, where a lexical else shadows it, even though a
; phase-1 else is also bound.
(import (vanity core) (vanity assert))

(begin-for-syntax
  (define else 5)
  (define (else? x) (literal-identifier=? x (syntax else))))
(define-syntax (is-else x) (if (else? x) (quasisyntax #t) (quasisyntax #f)))
(assert-equal (is-else else) #t)
(assert-equal (is-else other) #f)
(assert-equal (let ((else 1)) (is-else else)) #f)
(assert-equal (cond (#f 1) (else 2)) 2)
