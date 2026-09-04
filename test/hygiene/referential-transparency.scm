; A free identifier in a macro template resolves at the macro's definition
; site, not the use site.
(import (vanity core) (vanity assert))

(define x 'outer)
(define-syntax (get-x) (quasisyntax x))

(assert-equal ((lambda (x) (get-x)) 'inner) 'outer)
(assert-equal (let ((x 'inner)) (get-x)) 'outer)
