; Only imported names and intrinsics may be free in a library body; car
; without an import of (vanity core) is an error at the use site.
(define-library (strict)
  (export f)
  (define (f) (car '(1))))
(import (strict))
(f)
