(import (vanity core) (vanity assert))

(define (func x) x)
(displayln
(match '(foobar 1 2 3)
  ((f args ...)
   (if (and (not (pair? f)) (not (symbol? f))) (error "func" f))
   `(,func f) . ,(map func args))
))
