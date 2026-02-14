(import (vanity core))

(exit
  (and
    (eq? '(a b) '(a b))
    (eq? #(a b) '#(a b))
    (eq? "foo" "foo")
    (eq? #f32(1 2) '#f32(1 2))

    (guard (e (else #t))
      (string-set! "wow" 0 #\o)
      #f)

    (guard (e (else #t))
      (vector-set! #(1 2) 0 -1)
      #f)

    (guard (e (else #t))
      (f32vector-set! #f32(1 2) 0 -1)
      #f)

    (guard (e (else #t))
      (set-cdr! '(a b) #f)
      #f)))
