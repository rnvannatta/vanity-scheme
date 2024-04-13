(import (vanity core))

(define k #f)
(call/cc (lambda (k2) (set! k k2)))
(define ok #f)
(with-exception-handler
  (lambda (e) (if ok (k #t)))
  (lambda ()
    (with-exception-handler
      (lambda (e) (set! ok #t))
      (lambda () (raise 0)))))

(define p (make-parameter 0))
(with-exception-handler
  (lambda (err)
    (if (= (p) 1)
        (k #t)))
  (lambda ()
    (parameterize ((p 1))
      (raise 0))))

(define caught #f)
(with-exception-handler
  (lambda (err) (set! caught #t) (k #t))
  (lambda ()
    (fiber-fork (lambda () (raise 0)))))
(if (not caught) (exit 1))
