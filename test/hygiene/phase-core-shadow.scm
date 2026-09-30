; Phase-0 bindings don't capture what a transformer names at phase 1: there
; length, cadr and cdr are the meta base's, whatever phase 0 binds them to.
(define-library (hy phase shadow)
  (import (only (vanity core) quote))
  (export count5 second5 lib-length lib-cadr)
  (define (length x) 42)
  (define-constant cadr ##vcore.car)
  (define-syntax (count-args . xs) (length xs))
  (define-syntax (second-arg . xs) (cadr xs))
  (define (lib-length) (length 'x))
  (define (lib-cadr) (cadr '(5 6)))
  (define (count5) (count-args a b c d e))
  (define (second5) (second-arg 1 5 3)))

(import (vanity core) (vanity assert) (hy phase shadow))
(assert-equal (lib-length) 42)
(assert-equal (lib-cadr) 5)
(assert-equal (count5) 5)
(assert-equal (second5) 5)
(assert-equal
  (let ((length (lambda (x) 0)))
    (let-syntax ((m (lambda (stx) (length (cdr stx)))))
      (m 1 2 3 4 5)))
  5)
