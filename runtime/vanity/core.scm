; Copyright 2023-2024 Richard N Van Natta
;
; This file is part of the Vanity Scheme Runtime.
;
; The Vanity Scheme Runtime is free software: you can redistribute it
; and/or modify it under the terms of the GNU Lesser General Public
; License as published by the Free Software Foundation, either version
; 2.1 of the License, or (at your option) any later version.
; 
; The Vanity Scheme Runtime is distributed in the hope that it will be
; useful, but WITHOUT ANY WARRANTY; without even the implied warranty
; of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
; Lesser General Public License for more details.
;
; You should have received a copy of the GNU Lesser General Public
; License along with the Vanity Scheme Runtime.
;
; If not, see <https://www.gnu.org/licenses/>.
;
; This work is published with additional permission, the Vanity Scheme
; Runtime Library Exceptions, which should have been included with the
; Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

(define-library (vanity core)
  (import (vanity seed))
  (export
    ; predicates
    null? eof-object? boolean? pair? vector? hash-table? record? procedure? symbol? string? exact? exact-integer? inexact? real? integer? char?
    nullptr? foreign-pointer?
    ; equality
    eq? symbol=? eqv? equal?
    ; logic
    not
    ; math equality
    < = > <= >=
    ; math constructors
    exact inexact->exact inexact exact->inexact
    ; math predicates
    number? complex? rational? positive? negative? zero?
    ; math functions
    + - * / quotient remainder max min
    abs square sqrt
    ceiling floor round
    sin cos tan asin acos atan exp log expt pow
    ; pairs
    cons car cdr set-car! set-cdr!
    ; cxr
    caar cadr cdar cddr
    caaar caadr cadar caddr cdaar cdadr cddar cdddr
    caaaar caaadr caadar caaddr cadaar cadadr caddar cadddr
    cdaaar cdaadr cdadar cdaddr cddaar cddadr cdddar cddddr
    ; lists
    list list? length list-tail list-ref list-set! list-copy make-list map for-each append reverse memq memv member assq assv assoc
    ; strings
    string->list list->string make-string substring string-copy string-copy! string-ref string-set! string-length string->symbol string->number string-append
    symbol->string
    ; vectors
    list->vector vector->list make-vector vector-copy vector-copy! vector vector-ref vector-set! vector-length vector-map vector-for-each vector-append vector-fill!
    ; typevectors
    f64vector? list->f64vector f64vector->list make-f64vector f64vector f64vector-ref f64vector-set! f64vector-length
    f32vector? list->f32vector f32vector->list make-f32vector f32vector f32vector-ref f32vector-set! f32vector-length
    s32vector? list->s32vector s32vector->list make-s32vector s32vector s32vector-ref s32vector-set! s32vector-length
    u16vector? list->u16vector u16vector->list make-u16vector u16vector u16vector-ref u16vector-set! u16vector-length
    s16vector? list->s16vector s16vector->list make-s16vector s16vector s16vector-ref s16vector-set! s16vector-length
    u8vector? list->u8vector u8vector->list make-u8vector u8vector u8vector-ref u8vector-set! u8vector-length
    s8vector? list->s8vector s8vector->list make-s8vector s8vector s8vector-ref s8vector-set! s8vector-length
    bytevector? list->bytevector bytevector->list make-bytevector bytevector bytevector-u8-ref bytevector-u8-set! bytevector-length

    typevector?

    ; records
    record record-ref record-set! record-length
    ; hash table
    make-hash-table hash-table-ref hash-table-set! hash-table-delete! hash-table->alist
    ; chars
    char->integer
    ; io
    current-output-port current-error-port current-input-port open-input-file open-output-file close-port
    open-output-string get-output-string with-output-to-file with-input-from-file 
    call-with-port call-with-input-file call-with-output-file
    read-char read-line read newline display write
    ; misc
    call/cc call-with-current-continuation call-with-values apply values
    setter mutator ##vcore.setter ##vcore.mutator
    make-parameter
    raise raise-continuable with-exception-handler
    ; system interface
    command-line
    system
    open-input-process
    open-output-process
    ; filesystem
    make-temporary-file
    file-exists?
    exit
    ; time
    current-jiffy
    jiffies-per-second
    ; bit banging
    bitwise-not bitwise-and bitwise-or bitwise-ior bitwise-xor bitwise-xnor bitwise-eqv
    bitwise-nand bitwise-nor bitwise-andc1 bitwise-andc2 bitwise-orc1 bitwise-orc2 arithmetic-shift bit-count
    ; fibers
    fiber-fork fiber-fork-list fiber-map async await
    ; not r5rs
    atom? displayln writeln format printf sprintf error
  )
  ; predicates
  (define null? ##vcore.null?)
  (define (boolean? x) (or (##vcore.eq? x #t) (##vcore.eq? x #f)))
  (define eof-object? ##vcore.eof-object?)
  (define pair? ##vcore.pair?)
  (define vector? ##vcore.vector?)
  (define hash-table? ##vcore.hash-table?)
  (define record? ##vcore.record?)
  (define procedure? ##vcore.procedure?)
  (define symbol? ##vcore.symbol?)
  (define string? ##vcore.string?)
  (define char? ##vcore.char?)
  (define nullptr? ##vcore.nullptr?)
  (define foreign-pointer? ##vcore.foreign-pointer?)
  (define exact? ##vcore.int?)
  (define exact-integer? ##vcore.int?)
  (define integer? ##vcore.int?)
  (define inexact? ##vcore.double?)
  (define real? ##vcore.double?)

  ; equality
  (define eq? ##vcore.eq?)
  (define symbol=?
    (case-lambda
      ((x y) (##vcore.symbol=? x y))
      ((x y z) (and (##vcore.symbol=? x y) (##vcore.symbol=? y z)))
      ((x y z w) (and (##vcore.symbol=? x y) (##vcore.symbol=? y z) (##vcore.symbol=? z w)))
      ((x y . xs)
       (let loop ((xs (cons y xs)))
         (cond ((null? xs) #t)
               ((not (##vcore.symbol=? x (car xs))) #f)
               (else (loop (cdr xs))))))))
  (define boolean=?
    (case-lambda
      ((x y) (and (eq? x y) (boolean? x) (boolean? y)))
      ((x y z) (and (boolean=? x y) (boolean=? y z)))
      ((x y z w) (and (boolean=? x y) (boolean=? y z) (boolean=? z w)))
      ((x y . xs)
       (let loop ((xs (cons y xs)))
         (cond ((null? xs) #t)
               ((not (boolean=? x (car xs))) #f)
               (else (loop (cdr xs))))))))

  (define eqv? ##vcore.eqv?)
  (define (vector=? x y)
    (if (not (= (vector-length x) (vector-length y)))
        #f
        (let loop ((i 0) (len (vector-length x)))
          (cond
            ((= i len) #t)
            ((equal? (vector-ref x i) (vector-ref y i)) (loop (+ i 1) len))
            (else #f)))))
  (define (f32vector=? x y)
    (if (not (= (f32vector-length x) (f32vector-length y)))
        #f
        (let loop ((i 0) (len (f32vector-length x)))
          (cond
            ((= i len) #t)
            ((eq? (f32vector-ref x i) (f32vector-ref y i)) (loop (+ i 1) len))
            (else #f)))))
  (define (f64vector=? x y)
    (if (not (= (f64vector-length x) (f64vector-length y)))
        #f
        (let loop ((i 0) (len (f64vector-length x)))
          (cond
            ((= i len) #t)
            ((eq? (f64vector-ref x i) (f64vector-ref y i)) (loop (+ i 1) len))
            (else #f)))))
  (define (s32vector=? x y)
    (if (not (= (s32vector-length x) (s32vector-length y)))
        #f
        (let loop ((i 0) (len (s32vector-length x)))
          (cond
            ((= i len) #t)
            ((eq? (s32vector-ref x i) (s32vector-ref y i)) (loop (+ i 1) len))
            (else #f)))))
  (define (u16vector=? x y)
    (if (not (= (u16vector-length x) (u16vector-length y)))
        #f
        (let loop ((i 0) (len (u16vector-length x)))
          (cond
            ((= i len) #t)
            ((eq? (u16vector-ref x i) (u16vector-ref y i)) (loop (+ i 1) len))
            (else #f)))))
  (define (s16vector=? x y)
    (if (not (= (s16vector-length x) (s16vector-length y)))
        #f
        (let loop ((i 0) (len (s16vector-length x)))
          (cond
            ((= i len) #t)
            ((eq? (s16vector-ref x i) (s16vector-ref y i)) (loop (+ i 1) len))
            (else #f)))))
  (define (u8vector=? x y)
    (if (not (= (u8vector-length x) (u8vector-length y)))
        #f
        (let loop ((i 0) (len (u8vector-length x)))
          (cond
            ((= i len) #t)
            ((eq? (u8vector-ref x i) (u8vector-ref y i)) (loop (+ i 1) len))
            (else #f)))))
  (define (s8vector=? x y)
    (if (not (= (s8vector-length x) (s8vector-length y)))
        #f
        (let loop ((i 0) (len (s8vector-length x)))
          (cond
            ((= i len) #t)
            ((eq? (s8vector-ref x i) (s8vector-ref y i)) (loop (+ i 1) len))
            (else #f)))))

  (define (record=? x y)
    (if (not (and (= (record-length x) (record-length y))
                  (eqv? (record-ref x 0) (record-ref y 0))))
        #f
        (let loop ((i 1) (len (record-length x)))
          (cond
            ((= i len) #t)
            ((equal? (record-ref x i) (record-ref y i)) (loop (+ i 1) len))
            (else #f)))))
  (define (equal? x y)
    (or (##vcore.eq? x y)
        (and (##vcore.blob? x) (##vcore.blob? y) (##vcore.blob=? x y))
        (and (##vcore.pair? x) (##vcore.pair? y) (equal? (##vcore.car x) (##vcore.car y)) (equal? (##vcore.cdr x) (##vcore.cdr y)))
        (and (##vcore.vector? x) (##vcore.vector? y) (vector=? x y))
        (and (##vcore.f32vector? x) (##vcore.f32vector? y) (f32vector=? x y))
        (and (##vcore.f64vector? x) (##vcore.f64vector? y) (f64vector=? x y))
        (and (##vcore.s32vector? x) (##vcore.s32vector? y) (s32vector=? x y))
        (and (##vcore.u16vector? x) (##vcore.u16vector? y) (u16vector=? x y))
        (and (##vcore.s16vector? x) (##vcore.s16vector? y) (s16vector=? x y))
        (and (##vcore.u8vector? x) (##vcore.u8vector? y) (u8vector=? x y))
        (and (##vcore.s8vector? x) (##vcore.s8vector? y) (s8vector=? x y))
        (and (##vcore.record? x) (##vcore.record? y) (record=? x y))))

  ; logic
  (define not ##vcore.not)

  ; math equality
  (define (< x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##vcore.cmp (car xs) (cadr xs)) -1) (loop (cdr xs)))
            (else #f))))
  (define (= x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##vcore.cmp (car xs) (cadr xs)) 0) (loop (cdr xs)))
            (else #f))))
  (define (> x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##vcore.cmp (car xs) (cadr xs)) 1) (loop (cdr xs)))
            (else #f))))
  (define (<= x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##vcore.cmp (car xs) (cadr xs)) 1) #f)
            (else (loop (cdr xs))))))
  (define (>= x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##vcore.cmp (car xs) (cadr xs)) -1) #f)
            (else (loop (cdr xs))))))

  ; math constructors
  (define exact ##vcore.exact)
  (define inexact->exact exact)
  (define inexact ##vcore.inexact)
  (define exact->inexact inexact)

  ; math predicates
  (define (number? x)
    (or (##vcore.double? x) (##vcore.int? x)))
  (define complex? number?)
  (define rational? integer?)
  ;(define integer? ##vcore.int?)
  (define (positive? x) (> x 0))
  (define (zero? x) (= x 0))
  (define (negative? x) (< x 0))

  ; math functions
  (define + ##vcore.+)
  (define - ##vcore.-)
  (define * ##vcore.*)
  (define / ##vcore./)

  (define quotient ##vcore.quotient)
  (define remainder ##vcore.remainder)

  ; All need to work on ints
  (define (abs x) (if (< x 0) (- x) x))
  (define ceiling (##foreign.function "C" "double ceil(double);"))
  (define floor (##foreign.function "C" "double floor(double);"))
  (define round (##foreign.function "C" "double round(double);"))

  (define (square x) (* x x))
  (define sqrt (foreign-function "C" "double sqrt(double);"))

  (define sin (foreign-function "C" "double sin(double);"))
  (define cos (foreign-function "C" "double cos(double);"))
  (define tan (foreign-function "C" "double tan(double);"))
  (define asin (foreign-function "C" "double asin(double);"))
  (define acos (foreign-function "C" "double acos(double);"))

  (define atan-impl (foreign-function "C" "double atan(double);"))
  (define atan2-impl (foreign-function "C" "double atan2(double, double);"))
  (define atan
    (case-lambda
      ((x) (atan-impl x))
      ((y x) (atan2-impl y x))))

  (define exp (##foreign.function "C" "double exp(double);"))
  (define log-impl (##foreign.function "C" "double log(double);"))
  (define log
    (case-lambda
      ((x) (log-impl x))
      ((x base) (/ (log-impl x) (log-impl base)))))
  (define pow (##foreign.function "C" "double pow(double, double);"))
  (define expt pow)

  (define max
    (case-lambda
      ((a) a)
      ((a b)
       (if (> a b) a b))
      ((a b c)
       (max (max a b) c))
      ((a b c d)
       (max (max (max a b) c) d))
      ((a . bs)
       (let loop ((ret a) (rem bs))
        (if (null? bs) ret
            (loop (max a (car bs)) (cdr bs)))))))
  (define min
    (case-lambda
      ((a) a)
      ((a b)
       (if (< a b) a b))
      ((a b c)
       (min (min a b) c))
      ((a b c d)
       (min (min (min a b) c) d))
      ((a . bs)
       (let loop ((ret a) (rem bs))
        (if (null? bs) ret
            (loop (min a (car bs)) (cdr bs)))))))

  ; lists
  (define cons ##vcore.cons)
  (define car ##vcore.car)
  (define cdr ##vcore.cdr)
  (define set-car! ##vcore.set-car!)
  (define set-cdr! ##vcore.set-cdr!)

  (define (caar x) (##vcore.car (##vcore.car x)))
  (define (cadr x) (##vcore.car (##vcore.cdr x)))
  (define (cdar x) (##vcore.cdr (##vcore.car x)))
  (define (cddr x) (##vcore.cdr (##vcore.cdr x)))

  (define (caaar x) (##vcore.car (##vcore.car (##vcore.car x))))
  (define (caadr x) (##vcore.car (##vcore.car (##vcore.cdr x))))
  (define (cadar x) (##vcore.car (##vcore.cdr (##vcore.car x))))
  (define (caddr x) (##vcore.car (##vcore.cdr (##vcore.cdr x))))
  (define (cdaar x) (##vcore.cdr (##vcore.car (##vcore.car x))))
  (define (cdadr x) (##vcore.cdr (##vcore.car (##vcore.cdr x))))
  (define (cddar x) (##vcore.cdr (##vcore.cdr (##vcore.car x))))
  (define (cdddr x) (##vcore.cdr (##vcore.cdr (##vcore.cdr x))))

  (define (caaaar x) (##vcore.car (##vcore.car (##vcore.car (##vcore.car x)))))
  (define (caaadr x) (##vcore.car (##vcore.car (##vcore.car (##vcore.cdr x)))))
  (define (caadar x) (##vcore.car (##vcore.car (##vcore.cdr (##vcore.car x)))))
  (define (caaddr x) (##vcore.car (##vcore.car (##vcore.cdr (##vcore.cdr x)))))
  (define (cadaar x) (##vcore.car (##vcore.cdr (##vcore.car (##vcore.car x)))))
  (define (cadadr x) (##vcore.car (##vcore.cdr (##vcore.car (##vcore.cdr x)))))
  (define (caddar x) (##vcore.car (##vcore.cdr (##vcore.cdr (##vcore.car x)))))
  (define (cadddr x) (##vcore.car (##vcore.cdr (##vcore.cdr (##vcore.cdr x)))))

  (define (cdaaar x) (##vcore.cdr (##vcore.car (##vcore.car (##vcore.car x)))))
  (define (cdaadr x) (##vcore.cdr (##vcore.car (##vcore.car (##vcore.cdr x)))))
  (define (cdadar x) (##vcore.cdr (##vcore.car (##vcore.cdr (##vcore.car x)))))
  (define (cdaddr x) (##vcore.cdr (##vcore.car (##vcore.cdr (##vcore.cdr x)))))
  (define (cddaar x) (##vcore.cdr (##vcore.cdr (##vcore.car (##vcore.car x)))))
  (define (cddadr x) (##vcore.cdr (##vcore.cdr (##vcore.car (##vcore.cdr x)))))
  (define (cdddar x) (##vcore.cdr (##vcore.cdr (##vcore.cdr (##vcore.car x)))))
  (define (cddddr x) (##vcore.cdr (##vcore.cdr (##vcore.cdr (##vcore.cdr x)))))

  (define list (lambda args args))

  (define (list? lst)
    (or (null? lst)
        (and (pair? lst) (list? (cdr lst)))))

  (define (length lst)
    (let loop ((lst lst) (i 0))
      (if (##vcore.null? lst) i
          (loop (##vcore.cdr lst) (+ i 1)))))

  (define (list-tail lst x)
    (if (eq? x 0) lst
        (list-tail (##vcore.cdr lst) (- x 1))))
  (define (list-ref lst x)
    (if (eq? x 0) (##vcore.car lst)
        (list-ref (##vcore.cdr lst) (- x 1))))
  (define (list-set! lst i val)
    (set-car! (list-tail lst i) val))

  (define (list-copy lst)
    (if (null? lst) '()
        (cons (car lst) (list-copy (cdr lst)))))

  (define make-list
    (case-lambda
      ((k) (make-list k #f))
      ((k val)
       (let loop ((k k) (ret '()))
         (if (eq? k 0) ret
             (loop (- k 1) (cons val ret)))))))

  (define map
    (case-lambda
      ((f xs)
       (let loop ((xs xs))
         (if (##vcore.null? xs) '()
             (##vcore.cons (f (##vcore.car xs)) (loop (##vcore.cdr xs))))))
      ((f xs ys)
       (let loop ((xs xs) (ys ys))
         (if (or (##vcore.null? xs) (##vcore.null? ys)) '()
             (##vcore.cons (f (##vcore.car xs) (##vcore.car ys)) (loop (##vcore.cdr xs) (##vcore.cdr ys))))))
      ((f xs ys zs)
       (let loop ((xs xs) (ys ys) (zs zs))
         (if (or (##vcore.null? xs) (##vcore.null? ys) (##vcore.null? zs)) '()
             (##vcore.cons (f (##vcore.car xs) (##vcore.car ys) (##vcore.car zs)) (loop (##vcore.cdr xs) (##vcore.cdr ys) (##vcore.cdr zs))))))
      ((f . lsts)
       (let loop ((lsts lsts))
         (if (memq #t (map ##vcore.null? lsts)) '()
             (##vcore.cons (apply f (map ##vcore.car lsts)) (loop (map ##vcore.cdr lsts))))))))
  (define for-each
    (case-lambda
      ((f xs)
       (let loop ((xs xs))
         (if (##vcore.not (##vcore.null? xs))
             (begin (f (##vcore.car xs)) (loop (##vcore.cdr xs))))))
      ((f xs ys)
       (let loop ((xs xs) (ys ys))
         (if (##vcore.not (or (##vcore.null? xs) (##vcore.null? ys)))
             (begin (f (##vcore.car xs) (##vcore.car ys)) (loop (##vcore.cdr xs) (##vcore.cdr ys))))))
      ((f xs ys zs)
       (let loop ((xs xs) (ys ys) (zs zs))
         (if (##vcore.not (or (##vcore.null? xs) (##vcore.null? ys) (##vcore.null? zs)))
             (begin (f (##vcore.car xs) (##vcore.car ys) (##vcore.car zs)) (loop (##vcore.cdr xs) (##vcore.cdr ys) (##vcore.cdr zs))))))
      ((f . lsts)
       (let loop ((lsts lsts))
         (if (##vcore.not (memq #t (map ##vcore.null? lsts)))
             (begin (apply f (map ##vcore.car lsts)) (loop (map ##vcore.cdr lsts))))))))

  (define fold-right
    (case-lambda
      ((kons knil ks)
       (let loop ((ks ks))
         (if (null? ks) knil
             (kons (car ks) (loop (cdr ks))))))))
  (define append
    (case-lambda
      (() '())
      ((a) a)
      ((a b)
       (let loop ((a a))
         (if (##vcore.null? a) b
             (##vcore.cons (##vcore.car a) (loop (##vcore.cdr a))))))
      ((a b c) (append a (append b c)))
      ((a b c d) (append a (append b( append c d))))
      (lsts (fold-right append '() lsts))))

  (define (reverse lst)
    (define (iter acc rest)
      (if (null? rest) acc
          (iter (cons (car rest) acc) (cdr rest))))
    (iter '() lst))

  (define (memq x lst)
    (cond ((null? lst) #f)
          ((eq? x (car lst)) lst)
          (else (memq x (cdr lst)))))
  (define (memv x lst)
    (cond ((null? lst) #f)
          ((eqv? x (car lst)) lst)
          (else (memv x (cdr lst)))))
  (define member
    (case-lambda
      ((x lst) (member x lst equal?))
      ((x lst =)
       (cond ((null? lst) #f)
             ((= x (car lst)) lst)
             (else (member x (cdr lst)))))))

  (define (assq x alst)
    (cond ((null? alst) #f)
          ((eq? x (caar alst)) (car alst))
          (else (assq x (cdr alst)))))
  (define (assv x alst)
    (cond ((null? alst) #f)
          ((eqv? x (caar alst)) (car alst))
          (else (assv x (cdr alst)))))
  (define assoc
    (case-lambda 
      ((x alst) (assoc x alst equal?))
      ((x alst =)
       (cond ((null? alst) #f)
             ((= x (caar alst)) (car alst))
             (else (assoc x (cdr alst)))))))

  ; strings

  (define make-string ##vcore.make-string)
  (define substring ##vcore.substring)
  (define string-copy ##vcore.substring)
  (define string-copy! ##vcore.string-copy!)
  (define string-ref ##vcore.string-ref)
  (define string-set! ##vcore.string-set!)
  (define string-length ##vcore.string-length)
  (define string->symbol ##vcore.string->symbol)
  (define string->number ##vcore.string->number)

  (define symbol->string ##vcore.symbol->string)

  (define (list->string lst)
    (let ((str (make-string (length lst))))
      (let loop ((lst lst) (i 0))
        (if (null? lst) str
            (begin
              (string-set! str i (car lst))
              (loop (cdr lst) (+ i 1)))))))

  (define (string->list str)
    (let loop ((i (- (string-length str) 1)) (acc '()))
      (if (eq? i -1) acc
          (loop (- i 1) (cons (string-ref str i) acc)))))

  (define string-append
    (case-lambda
      (() (string-copy ""))
      ((a) (string-copy a))
      ((a b)
       (let* ((len (+ (string-length a) (string-length b)))
              (str (make-string len)))
        (string-copy! str 0 a)
        (string-copy! str (string-length a) b)
        str))
      ((a b c)
       (let* ((len (+ (string-length a) (string-length b) (string-length c)))
              (str (make-string len)))
        (string-copy! str 0 a)
        (string-copy! str (string-length a) b)
        (string-copy! str (+ (string-length a) (string-length b)) c)
        str))
      ((a b c d)
       (let* ((len (+ (string-length a) (string-length b) (string-length c) (string-length d)))
              (str (make-string len)))
        (string-copy! str 0 a)
        (string-copy! str (string-length a) b)
        (string-copy! str (+ (string-length a) (string-length b)) c)
        (string-copy! str (+ (string-length a) (string-length b) (string-length c)) d)
        str))
      (strs (fold-right string-append "" strs))))

  ; vectors
  (define list->vector ##vcore.list->vector)
  (define vector (lambda args (list->vector args)))
  (define vector-ref ##vcore.vector-ref)
  (define vector-set! ##vcore.vector-set!)
  (define vector-length ##vcore.vector-length)

  ; typevectors
  (define f32vector? ##vcore.f32vector?)
  (define make-f32vector
    (case-lambda
      ((len) (##vcore.make-f32vector len #f))
      ((len fill) (##vcore.make-f32vector len fill))))
  (define list->f32vector ##vcore.list->f32vector)
  (define f32vector (lambda args (list->f32vector args)))
  (define f32vector-ref ##vcore.f32vector-ref)
  (define f32vector-set! ##vcore.f32vector-set!)
  (define f32vector-length ##vcore.f32vector-length)
  (define (f32vector->list vec)
    (let ((len (f32vector-length vec)))
      (let loop ((acc '()) (i (- len 1)))
        (if (< i 0)
            acc
            (loop (cons (f32vector-ref vec i) acc) (- i 1))))))

  (define f64vector? ##vcore.f64vector?)
  (define make-f64vector
    (case-lambda
      ((len) (##vcore.make-f64vector len #f))
      ((len fill) (##vcore.make-f64vector len fill))))
  (define list->f64vector ##vcore.list->f64vector)
  (define f64vector (lambda args (list->f64vector args)))
  (define f64vector-ref ##vcore.f64vector-ref)
  (define f64vector-set! ##vcore.f64vector-set!)
  (define f64vector-length ##vcore.f64vector-length)
  (define (f64vector->list vec)
    (let ((len (f64vector-length vec)))
      (let loop ((acc '()) (i (- len 1)))
        (if (< i 0)
            acc
            (loop (cons (f64vector-ref vec i) acc) (- i 1))))))

  (define s32vector? ##vcore.s32vector?)
  (define make-s32vector
    (case-lambda
      ((len) (##vcore.make-s32vector len #f))
      ((len fill) (##vcore.make-s32vector len fill))))
  (define list->s32vector ##vcore.list->s32vector)
  (define s32vector (lambda args (list->s32vector args)))
  (define s32vector-ref ##vcore.s32vector-ref)
  (define s32vector-set! ##vcore.s32vector-set!)
  (define s32vector-length ##vcore.s32vector-length)
  (define (s32vector->list vec)
    (let ((len (s32vector-length vec)))
      (let loop ((acc '()) (i (- len 1)))
        (if (< i 0)
            acc
            (loop (cons (s32vector-ref vec i) acc) (- i 1))))))

  (define u16vector? ##vcore.u16vector?)
  (define make-u16vector
    (case-lambda
      ((len) (##vcore.make-u16vector len #f))
      ((len fill) (##vcore.make-u16vector len fill))))
  (define list->u16vector ##vcore.list->u16vector)
  (define u16vector (lambda args (list->u16vector args)))
  (define u16vector-ref ##vcore.u16vector-ref)
  (define u16vector-set! ##vcore.u16vector-set!)
  (define u16vector-length ##vcore.u16vector-length)
  (define (u16vector->list vec)
    (let ((len (u16vector-length vec)))
      (let loop ((acc '()) (i (- len 1)))
        (if (< i 0)
            acc
            (loop (cons (u16vector-ref vec i) acc) (- i 1))))))

  (define s16vector? ##vcore.s16vector?)
  (define make-s16vector
    (case-lambda
      ((len) (##vcore.make-s16vector len #f))
      ((len fill) (##vcore.make-s16vector len fill))))
  (define list->s16vector ##vcore.list->s16vector)
  (define s16vector (lambda args (list->s16vector args)))
  (define s16vector-ref ##vcore.s16vector-ref)
  (define s16vector-set! ##vcore.s16vector-set!)
  (define s16vector-length ##vcore.s16vector-length)
  (define (s16vector->list vec)
    (let ((len (s16vector-length vec)))
      (let loop ((acc '()) (i (- len 1)))
        (if (< i 0)
            acc
            (loop (cons (s16vector-ref vec i) acc) (- i 1))))))

  (define u8vector? ##vcore.u8vector?)
  (define make-u8vector
    (case-lambda
      ((len) (##vcore.make-u8vector len #f))
      ((len fill) (##vcore.make-u8vector len fill))))
  (define list->u8vector ##vcore.list->u8vector)
  (define u8vector (lambda args (list->u8vector args)))
  (define u8vector-ref ##vcore.u8vector-ref)
  (define u8vector-set! ##vcore.u8vector-set!)
  (define u8vector-length ##vcore.u8vector-length)
  (define (u8vector->list vec)
    (let ((len (u8vector-length vec)))
      (let loop ((acc '()) (i (- len 1)))
        (if (< i 0)
            acc
            (loop (cons (u8vector-ref vec i) acc) (- i 1))))))

  (define bytevector? u8vector?)
  (define make-bytevector make-u8vector)
  (define list->bytevector list->u8vector)
  (define bytevector->list u8vector->list)
  (define bytevector u8vector)
  (define bytevector-u8-ref u8vector-ref)
  (define bytevector-u8-set! u8vector-set!)
  (define bytevector-length u8vector-length)

  (define s8vector? ##vcore.s8vector?)
  (define make-s8vector
    (case-lambda
      ((len) (##vcore.make-s8vector len #f))
      ((len fill) (##vcore.make-s8vector len fill))))
  (define list->s8vector ##vcore.list->s8vector)
  (define s8vector (lambda args (list->s8vector args)))
  (define s8vector-ref ##vcore.s8vector-ref)
  (define s8vector-set! ##vcore.s8vector-set!)
  (define s8vector-length ##vcore.s8vector-length)
  (define (s8vector->list vec)
    (let ((len (s8vector-length vec)))
      (let loop ((acc '()) (i (- len 1)))
        (if (< i 0)
            acc
            (loop (cons (s8vector-ref vec i) acc) (- i 1))))))

  (define (typevector? x)
    (or (s8vector? x)
        (u8vector? x)
        (s16vector? x)
        (u16vector? x)
        (s32vector? x)
        (f32vector? x)
        (f64vector? x)))

  (define (vector->list vec)
    (let ((len (vector-length vec)))
      (let loop ((acc '()) (i (- len 1)))
        (if (< i 0)
            acc
            (loop (cons (vector-ref vec i) acc) (- i 1))))))

  ; Hideous
  (define make-vector
    (case-lambda
      ((n) (list->vector (make-list n)))
      ((n fill) (list->vector (make-list n fill)))))

  (define vector-for-each
    (case-lambda
      ((f xs)
       (let ((len (vector-length xs)))
        (let loop ((i 0))
          (if (< i len)
              (begin (f (vector-ref xs i)) (loop (+ i 1)))))))
      ((f xs ys)
       (let ((len (min (vector-length xs) (vector-length ys))))
        (let loop ((i 0))
          (if (< i len)
              (begin (f (vector-ref xs i) (vector-ref ys i)) (loop (+ i 1)))))))
      ((f xs ys zs)
       (let ((len (min (vector-length xs) (vector-length ys) (vector-length zs))))
        (let loop ((i 0))
          (if (< i len)
              (begin (f (vector-ref xs i) (vector-ref ys i) (vector-ref zs i)) (loop (+ i 1)))))))
      ((f . vecs)
       (let ((len (apply min (map vector-length vecs))))
        (let loop ((i 0))
          (if (< i len)
              (begin (apply f (map (lambda (vec) (vector-ref vec i)) vecs)) (loop (+ i 1)))))))))
  (define vector-map
    (case-lambda
      ((f xs)
       (let* ((len (vector-length xs))
              (vec (make-vector len)))
        (let loop ((i 0))
          (if (< i len)
              (begin
                (vector-set! vec i (f (vector-ref xs i)))
                (loop (+ i 1)))
              vec))))
      ((f xs ys)
       (let* ((len (min (vector-length xs) (vector-length ys)))
              (vec (make-vector len)))
        (let loop ((i 0))
          (if (< i len)
              (begin
                (vector-set! vec i (f (vector-ref xs i) (vector-ref ys i)))
                (loop (+ i 1)))
              vec))))
      ((f xs ys zs)
       (let* ((len (min (vector-length xs) (vector-length ys) (vector-length zs)))
              (vec (make-vector len)))
        (let loop ((i 0))
          (if (< i len)
              (begin
                (vector-set! vec i (f (vector-ref xs i) (vector-ref ys i) (vector-ref zs i)))
                (loop (+ i 1)))
              vec))))
      ((f . vecs)
       (let* ((len (apply min (map vector-length vecs)))
              (vec (make-vector len)))
        (let loop ((i 0))
          (if (< i len)
              (begin
                (vector-set! vec i (apply f (map (lambda (vec) (vector-ref vec i)) vecs)))
                (loop (+ i 1)))
              vec))))))

  (define vector-copy
    (case-lambda
      ((v)
       (vector-copy v 0 (vector-length v)))
      ((v start)
       (vector-copy v start (vector-length v)))
      ((v start end)
       (vector-copy! (make-vector (- end start)) 0 v start end))))
  (define vector-copy!
    (case-lambda
      ((dst at src)
       (vector-copy! dst at src 0 (vector-length src)))
      ((dst at src start)
       (vector-copy! dst at src start (vector-length src)))
      ((dst at src start end)
       (let loop ((i start))
         (if (< i end)
             (begin
               (vector-set! dst (+ i (- start) at) (vector-ref src i))
               (loop (+ i 1)))
             dst)))))
  (define vector-append
    (case-lambda
      (() (vector))
      ((a) a)
      ((a b)
       (let ((v (make-vector (+ (vector-length a) (vector-length b)))))
         (vector-copy! v 0 a)
         (vector-copy! v (vector-length a) b)
         v))
      ((a b c)
       (let ((v (make-vector (+ (vector-length a) (vector-length b) (vector-length c)))))
         (vector-copy! v 0 a)
         (vector-copy! v (vector-length a) b)
         (vector-copy! v (+ (vector-length a) (vector-length b)) c)
         v))
      ((a b c d)
       (let ((v (make-vector (+ (vector-length a) (vector-length b) (vector-length c) (vector-length d)))))
         (vector-copy! v 0 a)
         (vector-copy! v (vector-length a) b)
         (vector-copy! v (+ (vector-length a) (vector-length b)) c)
         (vector-copy! v (+ (vector-length a) (vector-length b) (vector-length c)) d)
         v))
      (vecs
       (let ((v (make-vector (apply + (map vector-length vecs))))
             (at 0))
         (for-each
          (lambda (vec)
            (vector-copy! v at vec)
            (set! at (+ at (vector-length vec))))
          vecs)
         v))))
  (define vector-fill!
    (case-lambda
      ((v fill)
       (vector-fill! v fill 0 (vector-length v)))
      ((v fill start)
       (vector-fill! v fill start (vector-length v)))
      ((v fill start end)
       (let loop ((i start))
         (if (< i end)
             (begin
               (vector-set! v i fill)
               (loop (+ i 1))))))))


  ; records
  (define record ##vcore.record)
  (define record-ref ##vcore.record-ref)
  (define record-set! ##vcore.record-set!)
  (define record-length ##vcore.record-length)

  ; hash tables

  (define make-hash-table
    (case-lambda
      (() (##vcore.make-hash-table ##vcore.eq? #f 32))
      ((eq) (##vcore.make-hash-table eq #f 32))
      ((eq hash) (##vcore.make-hash-table eq hash 32))
      ((eq hash len) (##vcore.make-hash-table eq hash len))))
  (define hash-table-equivalence-function ##vcore.hash-table-equivalence-function)
  (define hash-table-hash-function ##vcore.hash-table-hash-function)
  (define hash-table-ref
    (case-lambda
      ((table key) (##vcore.hash-table-ref table key (lambda () (error "No such key in hash table" key))))
      ((table key thunk) (##vcore.hash-table-ref table key thunk))))
  (define (hash-table-set! table key val)
    (##vcore.hash-table-set! table key val))
  (define hash-table-delete! ##vcore.hash-table-delete!)
  (define (hash-table->alist table)
    (let ((vec (##vcore.hash-table-vector table)))
      (let loop ((i 0))
        (if (< i (vector-length vec))
            (if (##vcore.void? (vector-ref vec i))
                (loop (+ i 3))
                (cons
                  (cons (vector-ref vec i) (vector-ref vec (+ i 2)))
                  (loop (+ i 3))))
            '()))))

  ; chars

  (define char->integer ##vcore.char-integer)

  ; io
  (define current-output-port (make-parameter (##vcore.stdout->port)))
  (define current-error-port (make-parameter (##vcore.stderr->port)))
  (define current-input-port (make-parameter (##vcore.stdin->port)))

  ; accepts a thunk that returns two values
  ; the return, and a value indicating whether the thunk failed
  ; in a way that can potentially fixed with a garbage collect
  ; for example, exhausting file descriptors can be fixed by
  ; running a gc and invoking finalizers
  (define (try-or-gc thunk msg)
    (call-with-values
      thunk
      (lambda (ret ok)
        (if ok ret
            (begin
              (##vcore.garbage-collect #t)
              (call-with-values
                thunk
                (lambda (ret ok) (if ok ret (error msg)))))))))

  (define (close-port port)
    (if (##vcore.has-finalizer? port)
        (##vcore.finalize! port)
        (##vcore.close-stream port)))

  (define (open-input-file-impl path)
    (call-with-values
      (lambda () (##vcore.open-input-stream path))
      (lambda (ret ok)
        (if ret (##vcore.set-finalizer! ret ##vcore.close-stream))
        (values ret ok))))
  (define (open-output-file-impl path)
    (call-with-values
      (lambda () (##vcore.open-output-stream path))
      (lambda (ret ok)
        (if ret (##vcore.set-finalizer! ret ##vcore.close-stream))
        (values ret ok))))
  (define (open-output-string-impl)
    (call-with-values
      (lambda () (##vcore.open-output-string))
      (lambda (ret ok)
        (if ret (##vcore.set-finalizer! ret ##vcore.close-stream))
        (values ret ok))))

  (define (open-input-file path)
    (try-or-gc (lambda () (open-input-file-impl path)) "open-input-file: failed"))
  (define (open-output-file path)
    (try-or-gc (lambda () (open-output-file-impl path)) "open-output-file: failed"))
  (define (open-output-string)
    (try-or-gc open-output-string-impl "open-output-string: failed"))
  (define get-output-string ##vcore.get-output-string)

  (define (call-with-port port proc)
    (let ((ret (proc port)))
      (close-port port)
      ret))
  (define (call-with-input-file path proc)
    (call-with-port (open-input-file path) proc))
  (define (call-with-output-file path proc)
    (call-with-port (open-output-file path) proc))

  (define (with-output-to-file str thunk)
    (let ((port (open-output-file str)))
      (parameterize ((current-output-port port))
        (let ((ret (thunk)))
          (close-port port)
          ret))))
  (define (with-input-from-file str thunk)
    (let ((port (open-input-file str)))
      (parameterize ((current-input-port port))
        (let ((ret (thunk)))
          (close-port port)
          ret))))

  (define read-char
    (case-lambda
      (() (##vcore.read-char (current-input-port)))
      ((port) (##vcore.read-char port))))
  (define read-line
    (case-lambda
      (() (read-line (current-input-port)))
      ((port)
       (define-values (line complete) (##vcore.read-line2 port))
       (cond ((eof-object? line) line)
             (complete line)
             (else
              (let ((rest (read-line port)))
                (string-append line (if (eof-object? rest) "" rest))))))))

  (define read
    (case-lambda
      (() (##vcore.read (current-input-port)))
      ((port) (##vcore.read port))))

  (define newline
    (case-lambda
      (() (##vcore.newline (current-output-port)))
      ((port) (##vcore.newline port))))
  
  (define (printout-list x write? port)
    (##vcore.display-word "(" port)
    (printout (car x) write? port)
    (let loop ((xs (cdr x)))
     (cond ((pair? xs)
            (##vcore.display-word " " port)
            (printout (car xs) write? port)
            (loop (cdr xs)))
           ((null? xs) 'ok)
           (else
            (##vcore.display-word " . " port)
            (printout xs write? port))))
    (##vcore.display-word ")" port))
  (define (printout-quotation x write? port)
    (##vcore.display-word (cdr (assv (car x) '((quote . "'") (quasiquote . "`") (unquote . ",") (unquote-splicing . ",@")))) port)
    (printout (cadr x) write? port))
  (define (printout x write? port)
    (cond
      ((pair? x)
       (if (memq (car x) '(quote quasiquote unquote unquote-splicing))
           (printout-quotation x write? port)
           (printout-list x write? port)))
      ((vector? x)
       (let ((len (vector-length x)))
        (##vcore.display-word "#(" port)
        (let loop ((i 0))
         (if (eq? i len)
             #f
             (begin
              (if (eq? i 0)
                  #f
                  (##vcore.display-word " " port))
              (printout (vector-ref x i) write? port)
              (loop (+ i 1)))))
        (##vcore.display-word ")" port)))
      ((hash-table? x)
       (let ((eq (hash-table-equivalence-function x)))
         (cond ((eq? eq eq?) (##vcore.display-word "#hasheq" port))
               ((eq? eq eqv?) (##vcore.display-word "#hasheqv" port))
               (else (##vcore.display-word "#hash" port))))
       (printout (hash-table->alist x) write? port))
      (else (if write? (##vcore.write x port) (##vcore.display-word x port)))))
  (define display
    (case-lambda
      ((x) (printout x #f (current-output-port)))
      ((x port) (printout x #f port))))
  (define write
    (case-lambda
      ((x) (printout x #t (current-output-port)))
      ((x port) (printout x #t port))))

  ; misc 
  (define call/cc ##vcore.call/cc)
  (define call-with-current-continuation ##vcore.call/cc)
  (define call-with-values ##vcore.call-with-values)
  (define apply ##vcore.apply)
  (define (values . args)
    (call/cc (lambda (k) (apply k args))))
  
  (define setter ##vcore.setter)
  (define mutator ##vcore.mutator)

  ; dynamic variables
  (define make-parameter
    (case-lambda
      ((init) (make-parameter init (lambda (x) x) 'parameter))
      ((init convert) (make-parameter init convert 'parameter))
      ((init convert name)
       (let ((key (cons name '()))
             (init (convert init)))
         (case-lambda
          (() (let ((lookup (assq key (##vcore.get-dynamics))))
                (if lookup (cdr lookup) init)))
          ((action x)
           (case action
             ((##vcore.push-value) (##vcore.push-dynamic key (convert x)))
             ((##vcore.pop-value) (##vcore.pop-dynamic x))
             (else (error "parameter object expects zero arguments")))))))))

  ; system interface
  (define command-line ##vcore.command-line)
  (define system ##vcore.system)
  (define open-input-process ##vcore.open-input-process)
  (define open-output-process ##vcore.open-output-process)
  (define make-temporary-file ##vcore.make-temporary-file)
  (define file-exists?
    (case-lambda
      ((path)
       (##vcore.access path 0))
      ((path mode)
       (##vcore.access path mode))))
  (define exit ##vcore.exit)

  (define current-jiffy ##vcore.current-jiffy)
  (define jiffies-per-second ##vcore.jiffies-per-second)

  (define bitwise-and
    (case-lambda
      (() -1)
      ((a) a)
      ((a b) (##vcore.bitwise-and a b))
      ((a b c) (##vcore.bitwise-and (##vcore.bitwise-and a b) c))
      ((a b c d) (##vcore.bitwise-and (##vcore.bitwise-and (##vcore.bitwise-and a b) c) d))
      ((a . bs)
       (let loop ((ret a) (rem bs))
        (if (null? bs) ret
            (loop (##vcore.bitwise-and a (car bs)) (cdr bs)))))))
  (define bitwise-ior
    (case-lambda
      (() 0)
      ((a) a)
      ((a b) (##vcore.bitwise-ior a b))
      ((a b c) (##vcore.bitwise-ior (##vcore.bitwise-ior a b) c))
      ((a b c d) (##vcore.bitwise-ior (##vcore.bitwise-ior (##vcore.bitwise-ior a b) c) d))
      ((a . bs)
       (let loop ((ret a) (rem bs))
        (if (null? bs) ret
            (loop (##vcore.bitwise-ior a (car bs)) (cdr bs)))))))
  (define bitwise-xor
    (case-lambda
      (() 0)
      ((a) a)
      ((a b) (##vcore.bitwise-xor a b))
      ((a b c) (##vcore.bitwise-xor (##vcore.bitwise-xor a b) c))
      ((a b c d) (##vcore.bitwise-xor (##vcore.bitwise-xor (##vcore.bitwise-xor a b) c) d))
      ((a . bs)
       (let loop ((ret a) (rem bs))
        (if (null? bs) ret
            (loop (##vcore.bitwise-xor a (car bs)) (cdr bs)))))))
  (define bitwise-xnor
    (case-lambda
      (() -1)
      ((a) a)
      ((a b) (##vcore.bitwise-xnor a b))
      ((a b c) (##vcore.bitwise-xnor (##vcore.bitwise-xnor a b) c))
      ((a b c d) (##vcore.bitwise-xnor (##vcore.bitwise-xnor (##vcore.bitwise-xnor a b) c) d))
      ((a . bs)
       (let loop ((ret a) (rem bs))
        (if (null? bs) ret
            (loop (##vcore.bitwise-xnor a (car bs)) (cdr bs)))))))
  (define bitwise-eqv bitwise-xnor)
  (define bitwise-or bitwise-ior)

  (define bitwise-not ##vcore.bitwise-not)

  (define bitwise-nand ##vcore.bitwise-nand)
  (define bitwise-nor ##vcore.bitwise-nor)
  (define bitwise-andc1 ##vcore.bitwise-andc1)
  (define bitwise-andc2 ##vcore.bitwise-andc2)
  (define bitwise-orc1 ##vcore.bitwise-orc1)
  (define bitwise-orc2 ##vcore.bitwise-orc2)
  (define arithmetic-shift ##vcore.arithmetic-shift)
  (define bit-count ##vcore.bit-count)

  ; (: exact (procedure number? -> exact?))
  ; (: list (procedure X ... -> (listof? X)))
  ; (: map1 (procedure (procedure X -> Y) (listof? X) -> (listof? Y)))
  ; (: map (procedure (procedure XS ... -> Y) (listof? XS) ... -> (listof? Y)))
  ; (: display (procedure any? ->))
  ; (: set-car! (procedure (mutates (pairof? any? Y) (pairof? X Y)) X ->))
  ; (: error (procedure string? any? ...))

  ; VANITY SPECIALS
  (define (atom? x) (not (pair? x)))
  (define displayln
    (case-lambda
      ((x) (displayln x (current-output-port)))
      ((x port) (display x port) (newline port))))
  (define writeln
    (case-lambda
      ((x) (writeln x (current-output-port)))
      ((x port) (write x port) (newline port))))

  (define (format-printf port fmt args)
    (let ((len (string-length fmt)))
      (let loop ((i 0) (args args))
        (if (< i len)
          (let ((c (string-ref fmt i)))
            (if (eq? c #\~)
                (begin
                  (if (= (+ i 1) len) (error "printf: format string has trailing tilde" fmt))
                  (case (string-ref fmt (+ i 1))
                    ((#\~)
                     (##vcore.display-word #\~ port)
                     (loop (+ i 2) args))
                    ((#\n #\N)
                     (##vcore.display-word #\newline port)
                     (loop (+ i 2) args))
                    ((#\a #\A)
                     (if (null? args) (error "printf: not enough args for format string" fmt))
                     (display (car args) port)
                     (loop (+ i 2) (cdr args)))
                    ((#\s #\S)
                     (if (null? args) (error "printf: not enough args for format string" fmt))
                     (write (car args) port)
                     (loop (+ i 2) (cdr args)))
                    (else (error "printf: unknown format" (substring fmt i (+ i 2))))))
                (begin (##vcore.display-word c port) (loop (+ i 1) args))))))))
  (define (format-sprintf fmt args)
    (let ((strport (open-output-string)))
      (format-printf strport fmt args)
      (let ((ret (get-output-string strport)))
        (close-port strport)
        ret)))

  (define printf
    (case-lambda
      ((fmt) (format-printf (current-output-port) fmt '()))
      ((a b . args)
       (if (string? a)
           (format-printf (current-output-port) a (cons b args))
           (format-printf a b args)))))

  (define (sprintf fmt . args)
    (let ((strport (open-output-string)))
      (format-printf strport fmt args)
      (let ((ret (get-output-string strport)))
        (close-port strport)
        ret)))

  (define format
    (case-lambda
      ((fmt) (sprintf fmt))
      ((a b . args)
       (cond ((string? a) (format-sprintf a (cons b args)))
             ((eq? a #t) (format-printf (current-output-port) b args))
             ((eq? a #f) (format-sprintf b args))
             (else (format-printf a b args))))))

  (define raise ##vcore.raise)
  (define (raise-continuable x)
    (let* ((handler (##vcore.get-exception-handler))
           (ret (handler x)))
      (##vcore.push-exception-handler handler)
      ret))
  (define (with-exception-handler handler thunk)
    (##vcore.push-exception-handler handler)
    (call-with-values
      thunk
      (lambda rets
        (##vcore.pop-exception-handler handler)
        (apply values rets)))
    #;(let ((ret (thunk)))
      (##vcore.pop-exception-handler handler)
      ret))

  (define (error msg . irritants)
    (raise (##vcore.record #f 'error msg irritants)))

  (define fiber-fork-list ##vcore.fiber-fork-list)
  (define (fiber-fork . args)
    (##vcore.fiber-fork-list args))
  (define fiber-map
    (case-lambda
      ((f lst) (fiber-fork-list (map (lambda (e) (lambda () (f e))) lst)))
      ((f as bs) (fiber-fork-list (map (lambda (a b) (lambda () (f a b))) as bs)))
      ((f as bs cs) (fiber-fork-list (map (lambda (a b c) (lambda () (f a b c))) as bs cs)))
      ((f as . args) (fiber-fork-list (apply map (lambda args (lambda () (apply f args))) as args)))))
  (define async ##vcore.async)
  (define await ##vcore.await)
)
