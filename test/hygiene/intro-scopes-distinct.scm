; Identifiers introduced by *different* expansions carry different intro
; scopes: inner's t, outer's t, and the user's t must all stay distinct.
(import (vanity core) (vanity assert))

(define-syntax (inner body) (quasisyntax (let ((t 1)) (+ t ,body))))
(define-syntax (outer body) (quasisyntax (let ((t 2)) (inner (+ t ,body)))))

(define t 100)
(assert-equal (inner t) 101)
(assert-equal (outer t) 103)
