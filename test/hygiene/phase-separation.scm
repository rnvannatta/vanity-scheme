; One name bound at phase 0 and at phase 1 is two bindings, in either order.
(import (vanity core) (vanity assert))

(define x 1)
(begin-for-syntax (define x 2))
(begin-for-syntax (define y 'phase-1))
(define y 'phase-0)
(define-syntax (m) (quasisyntax (list ,x x ',y y)))
(assert-equal (m) '(2 1 phase-1 phase-0))
