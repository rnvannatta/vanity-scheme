(import (vanity core))
(define-values (x y . rest) (values 1 2 3 4))

(let ()
  (define q 2)
  (define-values (a b . vest) (values 1 q 3 5 6))
  (define z (+ a b))
  (exit (and (= x 1)
             (= y 2)
             (equal? rest '(3 4))
             (= z 3)
             (equal? vest '(3 5 6))
  )))
