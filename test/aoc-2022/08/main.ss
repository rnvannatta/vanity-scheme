(import (vanity core) (vanity assert) (vanity list))
(define input (open-input-file "input"))

(define (read-grid port)
  (list->vector
    (let loop ()
      (let ((line (read-line port)))
        (if (eof-object? line) '()
            (cons line (loop)))))))

(define (make-bitfield grid)
  (list->vector
    (let ((veclen (vector-length grid))
          (strlen (string-length (vector-ref grid 0))))
      (let loop ((i 0))
        (if (= i veclen) '()
            (cons (make-string strlen #\0) (loop (+ i 1))))))))

(define grid (read-grid input))
(define bitfield (make-bitfield grid))

(define (set-visible! grid bitfield)
  (define (set-visible-left! tree-row bit-row)
    (let ((len (string-length tree-row)))
      (let loop ((i 0) (height -1))
        (if (or (< height 9) (< i len))
            (let ((tree-height (char->integer (string-ref tree-row i))))
              (if (> tree-height height)
                  (string-set! bit-row i #\1))
              (loop (+ i 1) (max height tree-height)))))))
  (define (set-visible-right! tree-row bit-row)
    (let ((len (string-length tree-row)))
      (let loop ((i (- len 1)) (height -1))
        (if (or (< height 9) (>= i 0))
            (let ((tree-height (char->integer (string-ref tree-row i))))
              (if (> tree-height height)
                  (string-set! bit-row i #\1))
              (loop (- i 1) (max height tree-height)))))))
  (define (set-visible-top! i)
    (let ((len (vector-length grid)))
      (let loop ((j 0) (height -1))
        (if (< j len)
            (let ((tree-height (char->integer (string-ref (vector-ref grid j) i))))
              (if (> tree-height height)
                  (string-set! (vector-ref bitfield j) i #\1))
              (loop (+ j 1) (max height tree-height)))))))
  (define (set-visible-bot! i)
    (let ((len (vector-length grid)))
      (let loop ((j (- len 1)) (height -1))
        (if (>= j 0)
            (let ((tree-height (char->integer (string-ref (vector-ref grid j) i))))
              (if (> tree-height height)
                  (string-set! (vector-ref bitfield j) i #\1))
              (loop (- j 1) (max height tree-height)))))))

  (vector-for-each set-visible-left! grid bitfield)
  (vector-for-each set-visible-right! grid bitfield)
  (for-each set-visible-top! (iota (string-length (vector-ref grid 0))))
  (for-each set-visible-bot! (iota (string-length (vector-ref grid 0)))))

(define (count-ones bitfield)
  (let loopx ((i 0) (accx 0))
    (if (< i (vector-length bitfield))
        (let ((row (vector-ref bitfield i)))
          (let loopy ((j 0) (accy 0))
            (if (< j (string-length row))
                (loopy (+ j 1) (+ accy (if (eq? (string-ref row j) #\1) 1 0)))
                (loopx (+ i 1) (+ accx accy)))))
        accx)))

(set-visible! grid bitfield)
;(vector-for-each displayln grid)
;(vector-for-each displayln bitfield)
;(display "task 1:")
;(displayln (count-ones bitfield))
(assert-equal (count-ones bitfield) 1807)

(close-port input)
(define input (open-input-file "input"))
(define grid (read-grid input))
(define bitfield (make-bitfield grid))

(define (tree-blocks? i j height)
  (>= (char->integer (string-ref (vector-ref grid j) i)) height))

(define (measure-scenic grid i j)
  (define w-1 (- (string-length (vector-ref grid 0)) 1))
  (define h-1 (- (vector-length grid) 1))
  (define height (char->integer (string-ref (vector-ref grid j) i)))
  (define scenic-north
    (let loop ((j j) (dist 0))
      (cond ((= j 0) dist)
            ((tree-blocks? i (- j 1) height) (+ dist 1))
            (else (loop (- j 1) (+ dist 1))))))
  (define scenic-south
    (let loop ((j j) (dist 0))
      (cond ((= j h-1) dist)
            ((tree-blocks? i (+ j 1) height) (+ dist 1))
            (else (loop (+ j 1) (+ dist 1))))))
  (define scenic-west
    (let loop ((i i) (dist 0))
      (cond ((= i 0) dist)
            ((tree-blocks? (- i 1) j height) (+ dist 1))
            (else (loop (- i 1) (+ dist 1))))))
  (define scenic-east
    (let loop ((i i) (dist 0))
      (cond ((= i w-1) dist)
            ((tree-blocks? (+ i 1) j height) (+ dist 1))
            (else (loop (+ i 1) (+ dist 1))))))
  (* scenic-north scenic-south scenic-west scenic-east))

(define (max-scenic)
  (let loopx ((i 0) (retx 0))
    (if (< i (vector-length bitfield))
        (let ((row (vector-ref bitfield i)))
          (let loopy ((j 0) (rety 0))
            (if (< j (string-length row))
                (loopy (+ j 1) (max rety (measure-scenic grid i j)))
                (loopx (+ i 1) (max retx rety)))))
        retx)))
;(display "task 2:")
;(displayln (max-scenic))
(assert-equal (max-scenic) 480000)
(close-port input)
