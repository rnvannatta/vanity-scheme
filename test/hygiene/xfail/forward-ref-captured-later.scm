; The macro's g reference is free when expanded, so it names the toplevel g,
; but the g the macro defines in its second block would bind it under scope
; resolution. That is an error rather than a silently different binding.
(import (vanity core))
(define-syntax (two-blocks)
  (quasisyntax
    (begin
      (begin-for-syntax (define (f) (g)))
      (begin-for-syntax (define (g) 1)))))
(two-blocks)
