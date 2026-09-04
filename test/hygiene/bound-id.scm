; Bound-identifier corner cases, tested behaviorally: a user-supplied binder
; binds a user-supplied body form (same scopes), while a macro-introduced
; binder of the same name does not bind a user-supplied reference.
(import (vanity core) (vanity assert))

; user-supplied var and body: the binding must connect
(define-syntax (bind-it var body)
  (quasisyntax (let ((,var 7)) ,body)))
(assert-equal (bind-it q (+ q 1)) 8)

; macro-introduced t must not bind the user's t
(define t 1)
(define-syntax (shadow-t body)
  (quasisyntax (let ((t 99)) ,body)))
(assert-equal (shadow-t t) 1)
