; HYGIENE_LIBRARIES.md §3.8 at shift 0: a helper library exports level-1
; template builders from begin-for-syntax, and another library's macros call
; them. The builders' templates resolve at the helper's level 0, so they
; mean the helper's car and its unexported second, not the user's. The
; builders call a level-1 helper of their own library that isn't exported.
; (The phase-1 (import (vanity core)) of §3.8 is M2; the meta base stands in.)
(define-library (hy helpers)
  (import (vanity core))
  (define (second xs) (car (cdr xs)))
  (begin-for-syntax
    (export make-first make-second count-args)
    (define (wrap head x) (list head x))
    (define (make-first x) (quasisyntax (car ,x)))
    (define (make-second x) (wrap (syntax second) x))
    (define (count-args stx) (length (cdr stx)))))

(define-library (hy builder macros)
  (import (vanity core) (hy helpers))
  (export first nth2 arity)
  (define-syntax (first x) (make-first x))
  (define-syntax (nth2 x) (make-second x))
  (define-syntax (arity . xs) (count-args (cons 'arity xs))))

(import (vanity assert) (hy builder macros))
(define (car x) 'captured)
(define (second x) 'captured)
(assert-equal (first '(1 2 3)) 1)
(assert-equal (nth2 '(1 2 3)) 2)
(assert-equal (arity a b c) 3)

; the program's own transformers can call the builders too
(import (hy helpers))
(define-syntax (my-first x) (make-first x))
(assert-equal (my-first '(4 5)) 4)
