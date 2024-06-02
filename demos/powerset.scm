(define-library (powerset)
  (import (vanity core))
  (export powerset)

  (define (powerset set)
    (if (null? set) '(())
        (let ((x (car set))
              (pset (powerset (cdr set))))
          (append (map (lambda (e) (cons x e)) pset) pset)))))

(import (powerset) (vanity core))
(define set '(0 1 2 3 4 5 6 7 8 9 A B C D E F G H I J))
(printf "The powerset of ~A is...~N" set)
(displayln (powerset set))

