; Core form names are not reserved words: a lambda binding named if or
; lambda is an ordinary variable, and built-in macros stay hygienic when
; their introduced identifiers are shadowed at the use site.
(import (vanity core) (vanity assert))

(assert-equal ((lambda (if) (if 1 2 3)) (lambda (a b c) c)) 3)

; the built-in let expands to a lambda application; a user shadowing lambda
; must not break it
(assert-equal ((lambda (lambda) (let ((y 5)) y)) 'shadowed) 5)
