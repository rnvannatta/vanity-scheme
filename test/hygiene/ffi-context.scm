; foreign-import binds its names in the context of the foreign-import
; keyword, like Racket's include. A macro hands them to its caller by
; rebuilding the keyword with the caller's context.
(import (vanity core) (vanity assert))

(foreign-import "C" "ffi-context.h")
(assert-equal (abs -3) 3)
(assert-equal HYG_SEVEN 7)

(define-library (hy ffi)
  (import (vanity core))
  (export seven abs3)
  (define-syntax (import-here ctx)
    (quasisyntax (,(datum->syntax-object ctx 'foreign-import) "C" "ffi-context.h")))
  (import-here here)
  (define (seven) HYG_SEVEN)
  (define (abs3) (abs -3)))

(import (hy ffi))
(assert-equal (seven) 7)
(assert-equal (abs3) 3)
