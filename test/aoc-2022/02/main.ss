(import (vanity core) (vanity assert))

(define (decode-self1 sym)
  (cond ((eqv? sym 'X) 'A)
        ((eqv? sym 'Y) 'B)
        ((eqv? sym 'Z) 'C)
        (else sym)))
(define (eval-match1 a b)
  (cond ((eqv? a (decode-self1 b)) 3)
        ((eqv? a 'A) (if (eqv? b 'Y) 6 0))
        ((eqv? a 'B) (if (eqv? b 'Z) 6 0))
        ((eqv? a 'C) (if (eqv? b 'X) 6 0))
        (else (error "invalid match" a b))))
(define (score-move1 sym)
  (cond ((eqv? sym 'X) 1)
        ((eqv? sym 'Y) 2)
        ((eqv? sym 'Z) 3)
        (else (error "invalid move" sym))
        ))

(define (roshambo1 acc port)
  (let* ((a (read port))
         (b (read port)))
    (if (eof-object? a)
        acc
        (roshambo1 (+ acc (eval-match1 a b) (score-move1 b)) port))))

(define (eval-match2 sym)
  (case sym
        ((X) 0)
        ((Y) 3)
        (else 6)))
(define (score-move2 sym)
  (case sym
        ((A) 1)
        ((B) 2)
        (else 3)))
(define (rotate sym)
  (case sym
        ((A) 'B)
        ((B) 'C)
        (else 'A)))
(define (eval-move2 a b)
  (score-move2
    (case b ((X) (rotate (rotate a)))
            ((Y) a)
            ((Z) (rotate a)))))
(define (roshambo2 acc port)
  (let* ((a (read port))
         (b (read port)))
    (if (eof-object? a)
        acc
        (roshambo2 (+ acc (eval-match2 b) (eval-move2 a b)) port))))

(define file (open-input-file "input"))

;(display "part 1:")
;(display (roshambo1 0 file))
;(newline)
;(if (not (= (roshambo1 0 file) 17189)) (exit 1))
(assert-equal (roshambo1 0 file) 17189)

(close-port file)
(define file (open-input-file "input"))
  
;(display "part 2:")
;(display (roshambo2 0 file))
;(newline)

;(if (not (= (roshambo2 0 file) 13490)) (exit 1))
(assert-equal (roshambo2 0 file) 13490)
