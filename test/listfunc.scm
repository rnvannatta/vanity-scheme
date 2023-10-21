(import (vanity core) (vanity list))

(define x (iota 5))
(define rev (iota 5 4 -1))
(define foo '())
(for-each
  (lambda (x) (set! foo (cons x foo)))
  x)

(exit
  (and
    (equal? (reverse x) rev)
    (equal? foo rev)
    (equal? (map (lambda (x) (* x x)) x) (list 0 1 4 9 16))
    (equal? (map + x rev) (list 4 4 4 4 4))
    (eqv? (car (memv 4 x)) 4)
    (not (memv 'foo x))
    (eqv? (cdr (assv 'b (map cons '(a b c) '(1 2 3)))) 2)))
