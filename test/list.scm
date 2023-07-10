(import (vanity core))

(define a (list 1 2 3))
(define b (cons 1 (cons 2 (cons 3 '()))))
(exit
  (and
    (not (eq? a b))
    (eq? a a)
    (not (eqv? a b))
    (equal? a b)
    (= (length a) 3)
    (equal? (reverse a) '(3 2 1))
    (= (list-ref a 2) 3)
    (eqv? (cadr a) 2)))
