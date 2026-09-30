; Phase-1 helpers in one begin-for-syntax may refer to each other in either
; order; a later block may use an earlier one's.
(import (vanity core) (vanity assert))

(begin-for-syntax
  (define (my-even? n) (if (= n 0) #t (my-odd? (- n 1))))
  (define (my-odd? n) (if (= n 0) #f (my-even? (- n 1)))))
(begin-for-syntax
  (define (parity n) (if (my-even? n) (quasisyntax 'even) (quasisyntax 'odd))))
(define-syntax (m n) (parity n))
(assert-equal (m 4) 'even)
(assert-equal (m 7) 'odd)
