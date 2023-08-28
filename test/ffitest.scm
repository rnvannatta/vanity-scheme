(import (vanity core))

(define myabs (##foreign.function "C" "double fabs(double);"))
(define mysqrt (##foreign.function "C" "double sqrt(double)"))

(exit (= (mysqrt 4) (myabs -2)))
