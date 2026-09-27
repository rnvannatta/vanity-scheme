; set! of an internal define-constant through a macro template is a compile error
(import (vanity core))
(define (f)
  (define-constant k 5)
  (define-syntax (clobber! v) (quasisyntax (set! k ,v)))
  (clobber! 6)
  k)
(display (f))
