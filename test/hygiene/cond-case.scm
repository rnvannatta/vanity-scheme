; cond and case clause forms, and their errors when no clause matches.
(import (vanity core) (vanity assert))

(assert-equal (cond ((assv 2 '((1 . a) (2 . b))) => cdr) (else 'none)) 'b)
(assert-equal (cond (#f => car) ((+ 1 2))) 3)
(assert-equal (cond ((memq 'c '(a b c d))) (else #f)) '(c d))
(assert-equal (cond (#f 1) (#t (define y 3) (* y 2))) 6)
(assert-equal (cond (else 'e)) 'e)
(assert-equal (when #t (define z 4) z) 4)
(assert-equal (unless #f (define z 5) z) 5)

(assert-equal (case 'b ((a) 1) ((b c) 2) (else 3)) 2)
(assert-equal (case 'z (() 1) (else 2)) 2)
(assert-equal (case (* 2 3) ((2 3 5 7) 'prime) ((1 4 6 8 9) 'composite)) 'composite)
(assert-equal (case 'x (else (define w 9) w)) 9)

(define (failure thunk)
  (guard (e ((error-object? e) (list (error-object-message e) (error-object-irritants e))))
    (thunk)))
(assert-equal (failure (lambda () (cond (#f 1)))) '("exhausted cond statement" ()))
(assert-equal (failure (lambda () (cond))) '("exhausted cond statement" ()))
(assert-equal (failure (lambda () (case 5 ((1) 1)))) '("exhausted case statement" ()))
