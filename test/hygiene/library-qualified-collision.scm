; W19: a macro-introduced lambda define in a library shares its symbol with
; a user define of the same library. Each must get its own qualified-lambda
; name, or the two collide as one C function.
(define-library (hy qualified)
  (import (vanity core))
  (export foo get-hidden)
  (define-syntax (def-hidden name)
    (quasisyntax
      (begin
        (define (foo) 'hidden)
        (define (,name) (foo)))))
  (def-hidden get-hidden)
  (define (foo) 'user))

(import (vanity core) (vanity assert) (hy qualified))
(assert-equal (foo) 'user)
(assert-equal (get-hidden) 'hidden)
