(import (vanity core))
(##foreign.import "C" "ffiparse.h")

; (void) in a foreign-function decl string too
(define myrand (##foreign.function "C" "int rand(void)"))

; [static n] enforces a minimum length when a typevector is passed,
; and the comma operator folds inside the parenthesized bound
(foreign-declare "static unsigned char frob4(unsigned char b[static (2, 4)]) { return b[3]; }")
(define frob4 (##foreign.function "C" "unsigned char frob4(unsigned char b[static (2, 4)])"))

; define-constants in a library body fuse direct calls into basic blocks,
; exercising the min length decode and the arity-dispatching extern shim macro
(define-library (fused)
  (import (vanity core))
  (export fused-ok?)
  (define-constant frobc (##foreign.function "C" "unsigned char frob4(unsigned char b[static (2, 4)])"))
  (define-constant fastopterr (##foreign.function "C" "extern int opterr"))
  (define (fused-ok?)
    (and (= (frobc (u8vector 1 2 3 9)) 9)
         (begin (fastopterr 0) (= (fastopterr) 0))
         (begin (fastopterr 1) (= (fastopterr) 1)))))
(import (fused))

; pointer-typed extern variables: getter hands out a foreign pointer, but the
; setter only takes foreign pointers back, since a stored blob interior would
; dangle after the next gc
(foreign-declare "char * my_ptr;")
(define my_ptr (##foreign.function "C" "extern char * my_ptr"))

(srand 42)
(exit (and (integer? (rand)) (integer? (myrand))
           (= NEG -1) (= SHL 1024) (= SHR 128) (= MASK 508)
           (= TERN 42) (= CMP 2) (= PREC 14) (= PREC2 20)
           (= SUFF 100) (= HEXSUFF 16) (= DIV -3) (= MOD 3)
           (= XOR 6) (= LOG 3)
           (= WRAP 255) (= WRAP2 1) (= WIDE 256)
           (= (strncmp "hello" "hell" 4) 0)
           (> (strncmp "hello" "hell" 5) 0)
           ; char[static n] wants n accessible chars, counting the null terminal
           (= (strncmp "abc" "abc" 3) 0)
           (guard (e (else #t))
             (strncmp "he" "he" 1)
             #f)
           ; enums referencing earlier enum constants
           (= BASE 4) (= TWICE 8) (= NEXT 9) (= OTHER 17)
           ; [static n] accepts typevectors with at least n elements
           (= (frob4 (u8vector 1 2 3 9)) 9)
           (= (frob4 (make-u8vector 5 7)) 7)
           ; and raises when the typevector is too short
           (guard (e (else #t))
             (frob4 (u8vector 1 2 3))
             #f)
           ; foreign pointers have no length and pass unchecked
           (let ((p (malloc 4)))
             (let ((x (frob4 p)))
               (free p)
               (integer? x)))
           ; extern variable shims: 0 args reads, 1 arg writes
           (= (opterr) 1)
           (begin (opterr 0) (= (opterr) 0))
           ; and through apply, which exercises the cps shim
           (begin (apply opterr '(1)) (= (apply opterr '()) 1))
           ; pointer-typed extern setters accept foreign pointers
           (let ((p (malloc 8)))
             (my_ptr p)
             (let ((ok (eqv? (my_ptr) p)))
               (free p)
               ok))
           ; and reject blobs, whose interiors the gc moves
           (guard (e (else #t))
             (my_ptr "not a foreign pointer")
             #f)
           ; and through the fused basic-block path
           (fused-ok?)))
