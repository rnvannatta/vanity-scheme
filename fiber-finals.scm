(import (vanity core) (vanity list) (vanity hash))

; gc path of finalizer gathering
(define fd (caar (fiber-fork (lambda () (let ((p (cons 0 0))) (##sys.set-finalizer! p (lambda (p) (set-car! p 1))) (cons p (iota 1000000)))))))
(displayln fd)
(##sys.finalize! fd)
(displayln fd)

; fast path of finalizer gathering
(define fd (caar (fiber-fork (lambda () (let ((p (cons 0 0))) (##sys.set-finalizer! p (lambda (p) (set-car! p 1))) (cons p #f))))))
(displayln fd)
(##sys.finalize! fd)
(displayln fd)
