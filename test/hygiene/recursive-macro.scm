; A self-recursive rewrite macro (transformer computes with the syntax-aware
; null?/car/cdr from the macro environment), plus a transformer that
; rearranges its arguments. Also the designated --trace-expand demo.
(import (vanity core) (vanity assert))

(define-syntax (my-let* bindings body)
  (if (null? bindings)
      body
      (quasisyntax (let (,(car bindings)) (my-let* ,(cdr bindings) ,body)))))
(assert-equal (my-let* ((x 1) (y (+ x 1))) (+ x y)) 3)

(define-syntax (rev a b op) (quasisyntax (,op ,b ,a)))
(assert-equal (rev 1 2 -) 1)
