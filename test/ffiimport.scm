(import (vanity core))
(##foreign.import "C" "ffiimport.h")

(free (malloc 8))
(exit (and (= A 0) (= B 1) (= C 2) (= D 255) (= E 256)
           (= (memcmp "hello" "hello" (string-length "hello")) 0)
           (< (memcmp "hella" "hello" (string-length "hello")) 0)
           (= (strcmp 'hello "hello") 0) ; yuck lol
           (> (strcmp 'hello "hell") 0)
           (= (sqrtf 4) (fabsf -2))))
