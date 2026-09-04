; The built-in quasiquote is itself a macro routed through apply-transformer:
; check unquote, splicing, nesting, and hygiene under a shadowed lambda.
(import (vanity core) (vanity assert))

(assert-equal `(1 ,(+ 1 1) ,@(list 3 4)) '(1 2 3 4))
(assert-equal `(a `(b ,(c))) '(a (quasiquote (b (unquote (c))))))
(assert-equal ((lambda (lambda) `(x ,lambda)) 9) '(x 9))
