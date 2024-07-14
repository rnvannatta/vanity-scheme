(import (vanity core))

(define a #f32(1 2.5))
(define b '#f32(1 2.5))
(define c `#f32(1 2.5))
(define d `,#f32(1 2.5))
(define e #f32(1 2.2))

(define a8 #u8(1 2))
(define b8 '#u8(1 2))
(define c8 `#u8(1 2))
(define d8 `,#u8(1 2))
(define e8 #f32(1 255))

(exit
  (and
    (equal? a b)
    (equal? a c)
    (equal? a d)
    (not (equal? a e))

    (equal? a8 b8)
    (equal? a8 c8)
    (equal? a8 d8)
    (not (equal? a8 e8))

    ))
