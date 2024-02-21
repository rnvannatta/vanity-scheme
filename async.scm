(import (vanity core) (vanity list))

#;(let* ((foo (##vcore.async (lambda () (displayln "hayo from the async dimension") (list 'awaited-foo))))
       (bar (##vcore.async (lambda () (displayln "lol") (list 'awaited-bar)))))
  (displayln "doin work")
  (displayln (##vcore.await bar))
  #;(displayln (##vcore.await foo))
  #;(displayln (##vcore.await foo)))
(define (fiber-thunk)
  (let* ((foo (##vcore.async (lambda () (displayln "hayo from the async dimension") (list 'awaited-foo))))
         (bar (##vcore.async (lambda () (displayln "lol") (list 'awaited-bar)))))
    (displayln "doin work")
    (displayln (##vcore.await foo))
    (displayln (##vcore.await bar))
    (displayln (##vcore.await foo))
    (displayln (##vcore.await foo)))
  'fiber-thunk)
(displayln (fiber-fork fiber-thunk))
(displayln "phew, finish!")
