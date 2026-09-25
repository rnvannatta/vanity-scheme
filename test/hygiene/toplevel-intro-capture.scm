; W17: at program toplevel, a user binder in a built-in macro's output must
; not capture the keywords and binders the macro introduces. User source
; carries the program's toplevel scope, which introduced identifiers lack.
(import (vanity core) (vanity assert))

(assert-equal (do ((if 0 (+ if 1))) ((= if 3) if)) 3)
(assert-equal (let* ((let* 1) (y 2)) (+ let* y)) 3)
(assert-equal (let*-values (((call-with-values) (values 1)) ((y) (values 2))) (+ call-with-values y)) 3)
(assert-equal (guard (condition (#t (list 'caught condition))) (raise 'boom)) '(caught boom))
(assert-equal (guard (handler-k ((symbol? handler-k) handler-k)) (raise 'inner)) 'inner)
(assert-equal (case 2 ((1) 'one) ((2) (let ((x 'two)) x)) (else 'other)) 'two)
(assert-equal (do ((do-iter 0 (+ do-iter 1))) ((= do-iter 2) do-iter)) 2)
(assert-equal ((cut list <> <> 3) 1 2) '(1 2 3))
(assert-equal (let ((n 0)) ((cute list (begin (set! n (+ n 1)) n) <> (+ n 10)) 'slot)) '(1 slot 11))

; a user toplevel define of a built-in form's name is an ordinary variable
; to user code, while the built-in macros still reach the core form: cond
; expands into let
(define let 5)
(assert-equal let 5)
(assert-equal (cond ((= 1 2) 'no) (#t 'yes)) 'yes)
