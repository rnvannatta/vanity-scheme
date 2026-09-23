; let-syntax and letrec-syntax bodies are full bodies: several forms, internal
; defines and internal define-syntax; likewise inside letrec*.
(import (vanity core) (vanity assert))

(define log '())
(define (note! x) (set! log (cons x log)))

(assert-equal
  (let-syntax ((one (lambda (form) (quasisyntax 1))))
    (define two (+ (one) (one)))
    (define-syntax (three) (quasisyntax (+ two (one))))
    (note! 'a)
    (note! 'b)
    (+ (three) two))
  5)
(assert-equal log '(b a))

(assert-equal
  (letrec-syntax ((one (lambda (form) (quasisyntax 1))))
    (define (two) (+ (one) (one)))
    (two))
  2)

(assert-equal
  (letrec* ((x 1))
    (define-syntax (inc) (quasisyntax (+ x 1)))
    (define y (inc))
    (+ x y))
  3)
