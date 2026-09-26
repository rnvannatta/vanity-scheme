; A foreign-import written in a macro template binds its names in the macro's
; context, so the library body can't see them.
(define-library (hy ffi-hidden)
  (import (vanity core))
  (export seven)
  (define-syntax (import-hidden)
    (quasisyntax (foreign-import "C" "../ffi-context.h")))
  (import-hidden)
  (define (seven) HYG_SEVEN))
(import (hy ffi-hidden))
(seven)
