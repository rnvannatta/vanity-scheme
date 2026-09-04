; define-syntax defining define-syntax, and a macro expanding to a spliced
; toplevel begin of defines (the call/cc toplevel-splice path).
(import (vanity core) (vanity assert))

(define-syntax (def-five name)
  (quasisyntax (define-syntax (,name) 5)))
(def-five five)
(assert-equal (five) 5)

(define-syntax (defpair a b val)
  (quasisyntax (begin (define ,a ,val) (define ,b ,val))))
(defpair p q 5)
(assert-equal (+ p q) 10)
