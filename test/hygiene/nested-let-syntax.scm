; Nested let-syntax: an inner macro's template uses an outer macro.
(import (vanity core) (vanity assert))

(let-syntax ((one (lambda (form) (quasisyntax 1))))
  (let-syntax ((two (lambda (form) (quasisyntax (+ (one) (one))))))
    (assert-equal (+ (one) (two)) 3)))
