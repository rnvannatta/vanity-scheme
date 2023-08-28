(import (vanity core))
(##foreign.import "C" "ffiimport.h")

(exit (= (sqrtf 4) (fabsf -2)))
