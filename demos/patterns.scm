(import (vanity core))
(define (expand expr)
  (match expr
    (('lambda args body) expr)
    (('quote x) expr)
    (('let ((args vals) ...) body) 
     `((lambda ,args ,body) . ,vals))
    ((xs ...) (map expand xs))
    (else expr)))
(displayln (expand '(let ((x 1) (y 2)) (cons x y))))
