(import (vanity core))

(exit (and (equal?
             (do ((vec (make-vector 5))
                  (i 0 (+ i 1)))
                 ((= i 5) vec)
               (vector-set! vec i i))
             #(0 1 2 3 4))
           (equal? (do ((x 1 (* x 2))
                        (y 8 (- y 1)))
                       ((zero? y) x))
                   256)))
