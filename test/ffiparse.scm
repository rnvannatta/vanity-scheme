(import (vanity core))
(##foreign.import "C" "ffiparse.h")

; (void) in a foreign-function decl string too
(define myrand (##foreign.function "C" "int rand(void)"))

(srand 42)
(exit (and (integer? (rand)) (integer? (myrand))
           (= NEG -1) (= SHL 1024) (= SHR 128) (= MASK 508)
           (= TERN 42) (= CMP 2) (= PREC 14) (= PREC2 20)
           (= SUFF 100) (= HEXSUFF 16) (= DIV -3) (= MOD 3)
           (= XOR 6) (= LOG 3)
           (= WRAP 255) (= WRAP2 1) (= WIDE 256)
           (= (strncmp "hello" "hell" 4) 0)
           (> (strncmp "hello" "hell" 5) 0)))
