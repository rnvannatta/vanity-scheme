; Copyright 2023 Richard N Van Natta
;
; This file is part of the Vanity Scheme Runtime.
;
; The Vanity Scheme Runtime is free software: you can redistribute it
; and/or modify it under the terms of the GNU Lesser General Public
; License as published by the Free Software Foundation, either version
; 3 of the License, or (at your option) any later version.
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
; This work is published with additional permission under GNU GPL
; Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
; should have been included with the Vanity Scheme Runtime.
;
; If not, visit <https://github.com/rnvannatta>

(define-library (vanity core)
  (export
    ; predicates
    null? eof-object? boolean? pair? vector? procedure? symbol? string? exact? inexact? real? integer? char?
    ; equality
    eq? symbol=? eqv? equal?
    ; logic
    not
    ; math equality
    < = > <= >=
    ; math constructors
    inexact exact->inexact
    ; math predicates
    number? complex?
    ; math functions
    + - * / quotient remainder max min
    ; pairs
    cons car cdr set-car! set-cdr!
    ; cxr
    caar cadr cdar cddr
    caaar caadr cadar caddr cdaar cdadr cddar cdddr
    caaaar caaadr caadar caaddr cadaar cadadr caddar cadddr
    cdaaar cdaadr cdadar cdaddr cddaar cddadr cdddar cddddr
    ; lists
    list length list-ref map for-each append reverse memq memv member assq assv assoc
    ; strings
    string->list list->string make-string substring string-copy string-copy! string-ref string-set! string-length string->symbol string->number string->list string-append
    symbol->string
    ; vectors
    list->vector vector vector-ref vector-set! vector-length vector-for-each 
    ; chars
    char->integer
    ; io
    current-output-port current-error-port current-input-port open-input-file open-output-file close-port
    open-output-string get-output-string with-output-to-file with-input-from-file 
    read-char read-line read newline display write
    ; misc
    call/cc call-with-current-continuation call-with-values apply values
    ; system interface
    command-line
    system
    open-input-process
    open-output-process
    make-temporary-file
    exit
    ; not r5rs
    atom? displayln writeln format printf sprintf error
  )
  ; predicates
  (define null? ##sys.null?)
  (define (boolean? x) (or (##sys.eq? x #t) (##sys.eq? x #f)))
  (define eof-object? ##sys.eof-object?)
  (define pair? ##sys.pair?)
  (define vector? ##sys.vector?)
  (define procedure? ##sys.procedure?)
  (define symbol? ##sys.symbol?)
  (define string? ##sys.string?)
  (define char? ##sys.char?)
  (define exact? ##sys.int?)
  (define integer? ##sys.int?)
  (define inexact? ##sys.double?)
  (define real? ##sys.double?)

  ; equality
  (define eq? ##sys.eq?)
  (define symbol=? ##sys.symbol=?)
  (define (eqv? x y)
    (or (##sys.eq? x y)
        (and (##sys.symbol? x) (##sys.symbol? y) (##sys.symbol=? x y))))
  (define (equal? x y)
    (or (##sys.eq? x y)
        (and (##sys.blob? x) (##sys.blob? y) (##sys.blob=? x y))
        (and (##sys.pair? x) (##sys.pair? y) (equal? (##sys.car x) (##sys.car y)) (equal? (##sys.cdr x) (##sys.cdr y)))))

  ; logic
  (define not ##sys.not)

  ; math equality
  (define (< x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##sys.cmp (car xs) (cadr xs)) -1) (loop (cdr xs)))
            (else #f))))
  (define (= x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##sys.cmp (car xs) (cadr xs)) 0) (loop (cdr xs)))
            (else #f))))
  (define (> x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##sys.cmp (car xs) (cadr xs)) 1) (loop (cdr xs)))
            (else #f))))
  (define (<= x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##sys.cmp (car xs) (cadr xs)) 1) #f)
            (else (loop (cdr xs))))))
  (define (>= x0 x1 . xs)
    (let loop ((xs (cons x0 (cons x1 xs))))
      (cond ((null? (cdr xs)) #t)
            ((eq? (##sys.cmp (car xs) (cadr xs)) -1) #f)
            (else (loop (cdr xs))))))

  ; math constructors
  ;(define (inexact x) (+ x 0.0))
  ; ERROR
  (define (inexact x) x)
  (define exact->inexact inexact)

  ; math predicates
  (define (number? x)
    (or (##sys.double? x) (##sys.int? x)))
  (define complex? number?)
  ; true if (=2 (floor x) x)
  ;(define rational? integer?)
  ;(define integer? ##sys.int?)

  ; math functions
  (define + ##sys.+)
  (define - ##sys.-)
  (define * ##sys.*)
  (define / ##sys./)

  (define quotient ##sys.quotient)
  (define remainder ##sys.remainder)

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
  (define cons ##sys.cons)
  (define car ##sys.car)
  (define cdr ##sys.cdr)
  (define set-car! ##sys.set-car!)
  (define set-cdr! ##sys.set-cdr!)

  (define (caar x) (##sys.car (##sys.car x)))
  (define (cadr x) (##sys.car (##sys.cdr x)))
  (define (cdar x) (##sys.cdr (##sys.car x)))
  (define (cddr x) (##sys.cdr (##sys.cdr x)))

  (define (caaar x) (##sys.car (##sys.car (##sys.car x))))
  (define (caadr x) (##sys.car (##sys.car (##sys.cdr x))))
  (define (cadar x) (##sys.car (##sys.cdr (##sys.car x))))
  (define (caddr x) (##sys.car (##sys.cdr (##sys.cdr x))))
  (define (cdaar x) (##sys.cdr (##sys.car (##sys.car x))))
  (define (cdadr x) (##sys.cdr (##sys.car (##sys.cdr x))))
  (define (cddar x) (##sys.cdr (##sys.cdr (##sys.car x))))
  (define (cdddr x) (##sys.cdr (##sys.cdr (##sys.cdr x))))

  (define (caaaar x) (##sys.car (##sys.car (##sys.car (##sys.car x)))))
  (define (caaadr x) (##sys.car (##sys.car (##sys.car (##sys.cdr x)))))
  (define (caadar x) (##sys.car (##sys.car (##sys.cdr (##sys.car x)))))
  (define (caaddr x) (##sys.car (##sys.car (##sys.cdr (##sys.cdr x)))))
  (define (cadaar x) (##sys.car (##sys.cdr (##sys.car (##sys.car x)))))
  (define (cadadr x) (##sys.car (##sys.cdr (##sys.car (##sys.cdr x)))))
  (define (caddar x) (##sys.car (##sys.cdr (##sys.cdr (##sys.car x)))))
  (define (cadddr x) (##sys.car (##sys.cdr (##sys.cdr (##sys.cdr x)))))

  (define (cdaaar x) (##sys.cdr (##sys.car (##sys.car (##sys.car x)))))
  (define (cdaadr x) (##sys.cdr (##sys.car (##sys.car (##sys.cdr x)))))
  (define (cdadar x) (##sys.cdr (##sys.car (##sys.cdr (##sys.car x)))))
  (define (cdaddr x) (##sys.cdr (##sys.car (##sys.cdr (##sys.cdr x)))))
  (define (cddaar x) (##sys.cdr (##sys.cdr (##sys.car (##sys.car x)))))
  (define (cddadr x) (##sys.cdr (##sys.cdr (##sys.car (##sys.cdr x)))))
  (define (cdddar x) (##sys.cdr (##sys.cdr (##sys.cdr (##sys.car x)))))
  (define (cddddr x) (##sys.cdr (##sys.cdr (##sys.cdr (##sys.cdr x)))))

  (define list (lambda args args))

  (define (length lst)
    (let loop ((lst lst) (i 0))
      (if (##sys.null? lst) i
          (loop (##sys.cdr lst) (+ i 1)))))

  (define (list-ref lst x)
    (if (eq? x 0) (##sys.car lst)
        (list-ref (##sys.cdr lst) (- x 1))))

  (define map
    (case-lambda
      ((f xs)
       (let loop ((xs xs))
         (if (##sys.null? xs) '()
             (##sys.cons (f (##sys.car xs)) (loop (##sys.cdr xs))))))
      ((f xs ys)
       (let loop ((xs xs) (ys ys))
         (if (##sys.null? xs) '()
             (##sys.cons (f (##sys.car xs) (##sys.car ys)) (loop (##sys.cdr xs) (##sys.cdr ys))))))
      ((f xs ys zs)
       (let loop ((xs xs) (ys ys) (zs zs))
         (if (##sys.null? xs) '()
             (##sys.cons (f (##sys.car xs) (##sys.car ys) (##sys.car zs)) (loop (##sys.cdr xs) (##sys.cdr ys) (##sys.cdr zs))))))
      ((f . lsts)
       (let loop ((lsts lsts))
         (if (##sys.null? (##sys.car lsts)) '()
             (##sys.cons (apply f (map ##sys.car lsts)) (loop (map ##sys.cdr lsts))))))))
  (define for-each
    (case-lambda
      ((f xs)
       (let loop ((xs xs))
         (if (##sys.not (##sys.null? xs))
             (begin (f (##sys.car xs)) (loop (##sys.cdr xs))))))
      ((f xs ys)
       (let loop ((xs xs) (ys ys))
         (if (##sys.not (##sys.null? xs))
             (begin (f (##sys.car xs) (##sys.car ys)) (loop (##sys.cdr xs) (##sys.cdr ys))))))
      ((f xs ys zs)
       (let loop ((xs xs) (ys ys) (zs zs))
         (if (##sys.not (##sys.null? xs))
             (begin (f (##sys.car xs) (##sys.car ys) (##sys.car zs)) (loop (##sys.cdr xs) (##sys.cdr ys) (##sys.cdr zs))))))
      ((f . lsts)
       (let loop ((lsts lsts))
         (if (##sys.not (##sys.null? (##sys.car lsts)))
             (begin (apply f (map ##sys.car lsts)) (loop (map ##sys.cdr lsts))))))))

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
         (if (##sys.null? a) b
             (##sys.cons (##sys.car a) (loop (##sys.cdr a))))))
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

  (define make-string ##sys.make-string)
  (define substring ##sys.substring)
  (define string-copy ##sys.substring)
  (define string-copy! ##sys.string-copy!)
  (define string-ref ##sys.string-ref)
  (define string-set! ##sys.string-set!)
  (define string-length ##sys.string-length)
  (define string->symbol ##sys.string->symbol)
  (define string->number ##sys.string->number)

  (define symbol->string ##sys.symbol->string)

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
  (define list->vector ##sys.list->vector)
  (define vector (lambda args (list->vector args)))
  (define vector-ref ##sys.vector-ref)
  (define vector-set! ##sys.vector-set!)
  (define vector-length ##sys.vector-length)

  (define vector-for-each
    (case-lambda
      ((f xs)
       (let ((len (vector-length xs)))
        (let loop ((i 0))
          (if (< i len)
              (begin (f (vector-ref xs i)) (loop (+ i 1)))))))
      ((f xs ys)
       (let ((len (vector-length xs)))
        (let loop ((i 0))
          (if (< i len)
              (begin (f (vector-ref xs i) (vector-ref ys i)) (loop (+ i 1)))))))
      ((f xs ys zs)
       (let ((len (vector-length xs)))
        (let loop ((i 0))
          (if (< i len)
              (begin (f (vector-ref xs i) (vector-ref ys i) (vector-ref zs i)) (loop (+ i 1)))))))
      ((f . vecs)
       (let ((len (vector-length (car vecs))))
        (let loop ((i 0))
          (if (< i len)
              (begin (apply f (map (lambda (vec) (vector-ref vec i)) vecs)) (loop (+ i 1)))))))))


  ; chars

  (define char->integer ##sys.char-integer)

  ; parameters
  #;(define make-parameter
    (case-lambda
      ((init) (make-parameter init (lambda (e) e)))
      ((init conv)
       (let ((id (##vcore.make-id))
             (init (conv init)))
         (##sys.set-finalizer! id ##vcore.release-id)
         (case-lambda
           (()
            (call-with-values
              (lambda () (##vcore.lookup-parameter id))
              (lambda (ret found) (if found ret init))))
           ((secret x)
            (if (eqv? secret '##secret.make-parameter) (##vcore.push-parameter! id (conv x))
                (error "parameter objects do not accept arguments in Vanity")))
           ((secret)
            (if (eqv? secret '##secret.make-parameter) (##vcore.pop-parameter! id)
                (error "parameter objects do not accept arguments in Vanity")))
           (_ (error "parameter objects do not accept arguments in Vanity")))))))

  ; io
  (define current-output-port 
    (let ((out (##sys.stdout->port)))
      (case-lambda
        (() out)
        ((port) (set! out port)))))
  (define current-error-port 
    (let ((out (##sys.stderr->port)))
      (case-lambda
        (() out)
        ((port) (set! out port)))))
  (define current-input-port 
    (let ((in (##sys.stdin->port)))
      (case-lambda
        (() in)
        ((port) (set! in port)))))


  #;(define close-port ##sys.close-stream)
  #;(define open-input-file ##sys.open-input-stream)
  #;(define open-output-file ##sys.open-output-stream)
  #;(define open-output-string ##sys.open-output-string)

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
              (##sys.garbage-collect #t)
              (call-with-values
                thunk
                (lambda (ret ok) (if ok ret (error msg))))))))
    #;(let ((ret (thunk)))
      (if ret ret
          (begin
            (##sys.garbage-collect #t)
            (let ((ret (thunk)))
              (if ret ret
                  (error msg)))))))

  (define (close-port port)
    (if (##sys.has-finalizer? port)
        (##sys.finalize! port)
        (##sys.close-stream port)))

  (define (open-input-file-impl path)
    (call-with-values
      (lambda () (##sys.open-input-stream path))
      (lambda (ret ok)
        (if ret (##sys.set-finalizer! ret ##sys.close-stream))
        (values ret ok))))
  (define (open-output-file-impl path)
    (call-with-values
      (lambda () (##sys.open-output-stream path))
      (lambda (ret ok)
        (if ret (##sys.set-finalizer! ret ##sys.close-stream))
        (values ret ok))))
  (define (open-output-string-impl)
    (call-with-values
      (lambda () (##sys.open-output-string))
      (lambda (ret ok)
        (if ret (##sys.set-finalizer! ret ##sys.close-stream))
        (values ret ok))))

  (define (open-input-file path)
    (try-or-gc (lambda () (open-input-file-impl path)) "open-input-file: failed"))
  (define (open-output-file path)
    (try-or-gc (lambda () (open-output-file-impl path)) "open-output-file: failed"))
  (define (open-output-string)
    (try-or-gc open-output-string-impl "open-output-string: failed"))
  (define get-output-string ##sys.get-output-string)

  (define (with-output-to-file str thunk)
    (let ((port (open-output-file str))
          (stdout (current-output-port)))
      (current-output-port port)
      (let ((ret (thunk)))
        (current-output-port stdout)
        (close-port port)
        ret)))
  (define (with-input-from-file str thunk)
    (let ((port (open-input-file str))
          (stdout (current-input-port)))
      (current-input-port port)
      (let ((ret (thunk)))
        (current-input-port stdout)
        (close-port port)
        ret)))

  (define read-char
    (case-lambda
      (() (##sys.read-char (current-input-port)))
      ((port) (##sys.read-char port))))
  (define read-line
    (case-lambda
      (() (##sys.read-line (current-input-port)))
      ((port) (##sys.read-line port))))
  (define read
    (case-lambda
      (() (##sys.read (current-input-port)))
      ((port) (##sys.read port))))

  (define newline
    (case-lambda
      (() (##sys.newline (current-output-port)))
      ((port) (##sys.newline port))))
  (define (printout x write? port)
    (cond
      ((pair? x)
       (##sys.display-word "(" port)
       (printout (car x) write? port)
       (let loop ((xs (cdr x)))
        (cond ((pair? xs)
               (##sys.display-word " " port)
               (printout (car xs) write? port)
               (loop (cdr xs)))
              ((null? xs) 'ok)
              (else
               (##sys.display-word " . " port)
               (printout xs write? port))))
       (##sys.display-word ")" port))
      ((vector? x)
       (let ((len (vector-length x)))
        (##sys.display-word "#(" port)
        (let loop ((i 0))
         (if (eq? i len)
             #f
             (begin
              (if (eq? i 0)
                  #f
                  (##sys.display-word " " port))
              (printout (vector-ref x i) write? port)
              (loop (+ i 1)))))
        (##sys.display-word ")" port)))
      (else (if write? (##sys.write x port) (##sys.display-word x port)))))
  (define display
    (case-lambda
      ((x) (printout x #f (current-output-port)))
      ((x port) (printout x #f port))))
  (define write
    (case-lambda
      ((x) (printout x #t (current-output-port)))
      ((x port) (printout x #t port))))

  ; misc 
  (define call/cc ##sys.call/cc)
  (define call-with-current-continuation ##sys.call/cc)
  (define call-with-values ##sys.call-with-values)
  (define apply ##sys.apply)
  (define (values . args)
    (call/cc (lambda (k) (apply k args))))

  ; system interface
  (define command-line ##sys.command-line)
  (define system ##sys.system)
  (define open-input-process ##sys.open-input-process)
  (define open-output-process ##sys.open-output-process)
  (define make-temporary-file ##sys.make-temporary-file)
  (define exit ##sys.exit)

  ; (: exact (procedure number? -> exact?))
  ; (: list (procedure X ... -> (listof? X)))
  ; (: map1 (procedure (procedure X -> Y) (listof? X) -> (listof? Y)))
  ; (: map (procedure (procedure XS ... -> Y) (listof? XS) ... -> (listof? Y)))
  ; (: display (procedure any? ->))
  ; (: set-car! (procedure (mutates (pairof? any? Y) (pairof? X Y)) X ->))
  ; (: error (procedure string? any? ...))

  ; NOT R5RS
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
                     (##sys.display-word #\~ port)
                     (loop (+ i 2) args))
                    ((#\n #\N)
                     (##sys.display-word #\newline port)
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
                (begin (##sys.display-word c port) (loop (+ i 1) args))))))))
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

  (define (error msg . irritants)
    (let ((err (current-error-port)))
      (display "error: " err)
      (display msg err)
      (if (not (null? irritants))
          (begin
            (display ":" err)
            (let loop ((irritants irritants))
              (if (not (null? irritants))
                (begin
                  (display " " err)
                  (write (car irritants) err)
                  (loop (cdr irritants)))))))
      (newline err)
      (##sys.abort))))
