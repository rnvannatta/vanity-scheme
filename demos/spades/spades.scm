(import (vanity core))

(define suites '(clubs hearts spades diamonds))
(define cards '(2 3 4 5 6 7 8 9 10 J Q K A))

(define deck
  (fold append '()
    (map (lambda (c)
           (map (lambda (s) (list c s)) suites))
      cards)))

(define (shuffle deck)
  (let ((len (length deck)))
    (let loop ((old deck) (oldlen len) (new '()) (newlen 0))
      (if (= oldlen 0) new
          ; need list method to drop element of nth position
          ; need unbiased random number generator from 0 to N
          ; need floors and ceils and all that jazzamatazz
          '()
      )
    )
  )
)

(displayln deck)
