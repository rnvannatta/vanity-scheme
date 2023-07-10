(import (vanity core))
(define (fact x)
  (if (= x 0) 1
      (* x (fact (- x 1)))))
(exit (= (fact 5) 120))
