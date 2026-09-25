; guard and parameterize: catching, re-raising, clean exits, and dynamic
; extent under escapes.
(import (vanity core) (vanity assert))

(assert-equal (guard (e (#t (list 'caught e))) (raise 'boom)) '(caught boom))
(assert-equal (guard (e ((symbol? e) 'sym) ((assq 'a e) => cdr)) (raise '((a . 42)))) 42)
(assert-equal (guard (e ((string? e) 'str) (else (list 'else e))) (raise 5)) '(else 5))

; no clause matches: re-raised to the outer guard
(assert-equal
  (guard (outer (#t (list 'outer outer)))
    (guard (inner ((string? inner) 'inner))
      (raise 'sym)))
  '(outer sym))

; the re-raise is continuable, in the dynamic environment of the raise
(assert-equal
  (with-exception-handler
    (lambda (e) 10)
    (lambda () (guard (e ((string? e) 'no)) (+ 1 (raise-continuable 'c)))))
  11)

; normal exit delivers every value and leaves no handler installed
(assert-equal (call-with-values (lambda () (guard (e (#t 'caught)) (values 1 2))) list) '(1 2))
(let ((before (##vcore.get-exception-handler)))
  (guard (e (#t 'caught)) 'ok)
  (assert-equal (eq? before (##vcore.get-exception-handler)) #t))
(assert-equal (guard (e (#t (list 'second e))) (guard (e (#t 'first)) 'ok) (raise 'x)) '(second x))

(define p (make-parameter 1))
(define q (make-parameter 'a))

(assert-equal (parameterize ((p 2)) (p)) 2)
(assert-equal (p) 1)
(assert-equal (parameterize ((p 2) (q 'b)) (list (p) (q))) '(2 b))
(assert-equal (list (p) (q)) '(1 a))
(assert-equal (parameterize () 'empty) 'empty)

; escaping through a guard restores the parameter
(assert-equal (guard (e (#t (list e (p)))) (parameterize ((p 3)) (raise (p)))) '(3 1))
(assert-equal (p) 1)
(assert-equal (parameterize ((p 4)) (guard (e (#t (p))) (parameterize ((p 5)) (raise 'x)))) 4)
(assert-equal (p) 1)
