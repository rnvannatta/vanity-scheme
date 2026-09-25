; Names the sugar introduces (loop names, temporaries) never capture user
; variables, and a named let's inits cannot see the loop variable.
(import (vanity core) (vanity assert))

(assert-equal (let loop ((loop 5)) loop) 5)
(assert-equal (let ((loop 7)) (let loop ((x loop)) (if (procedure? x) 'captured x))) 7)

(assert-equal (let ((x 1)) (case x ((1) x) (else 'no))) 1)
(assert-equal (let ((x 5)) (cond ((+ x 1) => (lambda (y) (list x y))) (else #f))) '(5 6))
(assert-equal (let ((do-loop 'user)) (do ((i 0 (+ i 1))) ((= i 2) do-loop))) 'user)
(assert-equal (do ((do-loop 0 (+ do-loop 1))) ((= do-loop 3) do-loop)) 3)

(define p (make-parameter 1))
(assert-equal (let ((parameter 'a) (keyval 'b) (ret 'c))
                (parameterize ((p 2)) (list parameter keyval ret (p))))
              '(a b c 2))

(assert-equal (let ((condition 'mine)) (guard (e (#t condition)) (raise 'x))) 'mine)
(assert-equal (let ((args 'mine)) (guard (e (#t #f)) args)) 'mine)
(assert-equal (let ((handler-k 'mine)) (guard (outer (#t handler-k)) (guard (e (#f #f)) (raise 1)))) 'mine)

(assert-equal (let ((x 'mine)) (let-values (((x y) (values x 2))) (list x y))) '(mine 2))

(assert-equal (guard (condition (#t condition)) (raise 'x)) 'x)
(assert-equal (guard (o (#t (list 'outer o))) (guard (handler-k (#f #f)) (raise 1))) '(outer 1))
(assert-equal (guard (outer (#f #f) (else (list 'else outer))) (raise 2)) '(else 2))
