(import (vanity core) (vanity assert))
(define radix (make-parameter 10))

(assert-equal (radix) 10)
(let ((keyval (radix '##vcore.push-value 2)))
  (assert-equal (radix) 2)
  (fiber-fork
    (lambda ()
      (radix '##vcore.push-value 8)
      (assert-equal (radix) 8)
      0)
    (lambda ()
      (radix '##vcore.push-value 16)
      (assert-equal (radix) 16)
      1))
  (radix '##vcore.pop-value keyval))

(assert-equal (radix) 10)

(parameterize ((radix 3))
  (assert-equal (radix) 3)
  (async
    (lambda ()
      (parameterize ((radix 7))
        (assert-equal (radix) 7)))))
(assert-equal (radix) 10)

(define resume #f)
(parameterize ((radix 5))
  (call/cc
    (lambda (k)
      (parameterize ((radix 'ohno))
        (set! resume k)
        (k #f))))
  (assert-equal (radix) 5))
(resume #f)
(assert-equal (radix) 10)

(define color (make-parameter 'red))
(parameterize ((radix 60) (color 'green))
  (assert-equal (radix) 60)
  (assert-equal (color) 'green))

(assert-equal (radix) 10)
(assert-equal (color) 'red)
