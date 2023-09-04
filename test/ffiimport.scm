(import (vanity core))
(##foreign.import "C" "ffiimport.h")

(free (malloc 8))
(exit (and (= (memcmp "hello" "hello" (string-length "hello")) 0)
           (< (memcmp "hella" "hello" (string-length "hello")) 0)
           (= (strcmp 'hello "hello") 0) ; yuck lol
           (> (strcmp 'hello "hell") 0)
           (= (sqrtf 4) (fabsf -2))))
