(import (vanity core))
(define atan2 (##foreign.function "C" "double atan2(double y, double x);"))
(displayln (* (/ 180 3.14159) (atan2 -1 1)))
