(import (vanity core) (vanity assert))
(define-library (nothing)
  (import (vanity core))
  (export nil? nil)
  (define-record-type nil (nil) nil?))

(import (nothing))
(assert-equal (nil) (nil))
(assert-equal (nil? (nil)) #t)

(define-record-type pare
  (kons first rest)
  pare?
  (first kar set-kar!)
  (rest kdr set-kdr!))
(define mypare (kons 1 2))
(set-kdr! mypare 3)
(assert-equal (pare? mypare) #t)
(assert-equal (nil? mypare) #f)
(assert-equal mypare (kons 1 3))
(assert-equal (equal? mypare (kons 1 2)) #f)
(assert-equal (kar mypare) 1)
(assert-equal (kdr mypare) 3)

(define-record-type pare
  (kons first rest)
  pare?
  (first kar set-kar!)
  (rest kdr set-kdr!))

(assert-equal (pare? mypare) #f)
(assert-equal (pare? (kons 1 3)) #t)
(assert-equal (equal? (kons 1 3) mypare) #f)
