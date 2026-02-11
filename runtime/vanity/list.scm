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

(define-library (vanity list)
  (import (vanity core))
  (export
    cons list xcons cons*
    list-tabulate list-copy circular-list
    iota
    pair? null?
    proper-list? circular-list? dotted-list? not-pair? null-list?
    list=
    car cdr
    caar cadr cdar cddr
    caaar caadr cadar caddr cdaar cdadr cddar cdddr
    caaaar caaadr caadar caaddr cadaar cadadr caddar cadddr cdaaar cdaadr cdadar cdaddr cddaar cddadr cdddar cddddr
    first second third fourth fifth sixth seventh eighth ninth tenth
    car+cdr
    take drop
    take-right drop-right
    take! drop-right!
    split-at split-at!
    last last-pair
    length length+
    append append!
    concatenate concatenate!
    reverse reverse!
    append-reverse append-reverse!
    zip
    unzip1 unzip2 unzip3 unzip4 unzip5
    count
    map map! map-in-order
    for-each
    pair-for-each
    fold fold-right
    unfold unfold-right
    pair-fold pair-fold-right
    reduce reduce-right
    append-map append-map!
    filter filter!
    partition partition!
    remove remove!
    filter-map
    member memq memv
    find find-tail
    ;delete delete!
    any? every?
    any every
    list-index
    take-while take-while! drop-while split-while
    span span!
    break break!
    delete-duplicates delete-duplicates!

    assoc assq assv
    alist-cons alist-copy alist-delete alist-delete!

    lset<= lset=
    lset-adjoin
    lset-union lset-union!
    lset-intersection lset-intersection!
    lset-difference lset-difference!
    lset-xor lset-xor!
    lset-diff+intersection lset-diff+intersection!

    ; not srfi-1
    insert delete erase
    assq-update assv-update assoc-update)

  (define (get-optional optarg default)
    (if (null? optarg) default (car optarg)))

  (define (%cdrs lists)
  (call-with-current-continuation
    (lambda (abort)
      (let recur ((lists lists))
	(if (pair? lists)
	    (let ((lis (car lists)))
	      (if (null-list? lis) (abort '())
		  (cons (cdr lis) (recur (cdr lists)))))
	    '())))))


  (define (%cars+cdrs lists)
    (call-with-current-continuation
      (lambda (abort)
        (let recur ((lists lists))
          (if (pair? lists)
        (call-with-values
          (lambda () (car+cdr lists))
          (lambda (list other-lists)
            (if (null-list? list) (abort '() '()) ; LIST is empty -- bail out
              (call-with-values
                (lambda () (car+cdr list))
                (lambda (a d)
                  (call-with-values
                    (lambda () (recur other-lists))
                    (lambda (cars cdrs) (values (cons a cars) (cons d cdrs))))
                  #;(receive (cars cdrs) (recur other-lists)
                    (values (cons a cars) (cons d cdrs)))
                ))
              #;(receive (a d) (car+cdr list)
                (receive (cars cdrs) (recur other-lists)
                  (values (cons a cars) (cons d cdrs)))))))
        #;(receive (list other-lists) (car+cdr lists)
          (if (null-list? list) (abort '() '()) ; LIST is empty -- bail out
              (receive (a d) (car+cdr list)
                (receive (cars cdrs) (recur other-lists)
                  (values (cons a cars) (cons d cdrs))))))
              (values '() '()))))))

  (define %cars+cdrs/no-test %cars+cdrs)
  #;(define (%cars+cdrs/no-test lists)
    (let recur ((lists lists))
      (if (pair? lists)
          (receive (list other-lists) (car+cdr lists)
            (receive (a d) (car+cdr list)
              (receive (cars cdrs) (recur other-lists)
                (values (cons a cars) (cons d cdrs)))))
          (values '() '()))))



  (define (xcons d a) (cons a d))
  (define (cons* first . rest)
    (let recur ((x first) (rest rest))
      (if (pair? rest)
    (cons x (recur (car rest) (cdr rest)))
    x)))
  (define (circular-list val1 . vals)
    (let ((ans (cons val1 vals)))
      (set-cdr! (last-pair ans) ans)
      ans))
  ; (map f (map g lst)) <==> (map (lambda (e) (f (g (e)))) lst)
  ; (for-each f (map g lst)) <==> (for-each (lambda (e) (f (g (e)))) lst)
  ; (map f (list-tabulate n g)) <==> (list-tabulate n (lambda (i) (f (g i))))

  ; (iota n b s) <==> (list-tabulate n (lambda (i) (+ (* s i) b)))
  ; (fold f knil (map g lst)) <==> (fold (lambda (a b) (f (g a) b)) knil lst)
  (define (my-num-pairs lst)
    (let loop ((lst lst) (n 0))
      (if (pair? lst)
          (loop (cdr lst) (+ n 1))
          n)))

  (define iota
    (case-lambda
      ((n)
       (let loop ((i 0))
        (if (eq? i n) '()
            (cons i (loop (+ i 1))))))
      ((n b)
       (let loop ((i 0))
        (if (eq? i n) '()
            (cons (+ i b) (loop (+ i 1))))))
      ((n b s)
       (let loop ((i 0))
        (if (eq? i n) '()
            (cons (+ (* s i) b) (loop (+ i 1))))))))


  (define (proper-list? x)
    (let lp ((x x) (lag x))
      (if (pair? x)
    (let ((x (cdr x)))
      (if (pair? x)
          (let ((x   (cdr x))
          (lag (cdr lag)))
      (and (not (eq? x lag)) (lp x lag)))
          (null? x)))
    (null? x))))
  (define (dotted-list? x)
    (let lp ((x x) (lag x))
      (if (pair? x)
    (let ((x (cdr x)))
      (if (pair? x)
          (let ((x   (cdr x))
          (lag (cdr lag)))
      (and (not (eq? x lag)) (lp x lag)))
          (not (null? x))))
    (not (null? x)))))

  (define (circular-list? x)
    (let lp ((x x) (lag x))
      (and (pair? x)
     (let ((x (cdr x)))
       (and (pair? x)
      (let ((x   (cdr x))
            (lag (cdr lag)))
        (or (eq? x lag) (lp x lag))))))))

  (define (not-pair? x) (not (pair? x)))	; Inline me.
  (define (null-list? l)
    (cond ((pair? l) #f)
    ((null? l) #t)
    (else (error "null-list?: argument out of domain" l))))

  (define (list-tabulate n proc)
    (let loop ((i 0))
      (if (eq? i n) '()
          (cons (proc i)
                (loop (+ i 1))))))

  (define (list= = . lists)
    (or (null? lists) ; special case

        (let lp1 ((list-a (car lists)) (others (cdr lists)))
    (or (null? others)
        (let ((list-b (car others))
        (others (cdr others)))
          (if (eq? list-a list-b)	; EQ? => LIST=
        (lp1 list-b others)
        (let lp2 ((pair-a list-a) (pair-b list-b))
          (if (null-list? pair-a)
        (and (null-list? pair-b)
             (lp1 list-b others))
        (and (not (null-list? pair-b))
             (= (car pair-a) (car pair-b))
             (lp2 (cdr pair-a) (cdr pair-b)))))))))))

  (define first car)
  (define second cadr)
  (define third caddr)
  (define fourth cadddr)
  (define (fifth x) (list-ref x 4))
  (define (sixth x) (list-ref x 5))
  (define (seventh x) (list-ref x 6))
  (define (eighth x) (list-ref x 7))
  (define (ninth x) (list-ref x 8))
  (define (tenth x) (list-ref x 9))
  (define (car+cdr x) (values (car x) (cdr x)))

  (define (take lst i)
    (if (eq? i 0) '()
        (cons (car lst) 
              (take (cdr lst) (- i 1)))))
  (define (drop lst i)
    (if (eq? i 0) lst
        (drop (cdr lst) (- i 1))))
  (define (take-right lst i)
    (let loop ((lst lst) (len (my-num-pairs lst)))
      (if (eq? len i) lst
          (loop (cdr lst) (- len 1)))))
  (define (drop-right lst i)
    (let loop ((lst lst) (len (my-num-pairs lst)))
      (if (eq? len i) '()
          (cons (car lst)
                (loop (cdr lst) (- len 1))))))
  (define (split-at lst i)
    (if (eq? i 0) (values '() lst)
        (call-with-values
          (lambda () (split-at (cdr lst) (- i 1)))
          (lambda (t d)
            (values
              (cons (car lst) t) d)))))
  (define (split-at! x k)
    (check-arg integer? k split-at!)
    (if (zero? k) (values '() x)
        (let* ((prev (drop x (- k 1)))
         (suffix (cdr prev)))
    (set-cdr! prev '())
    (values x suffix))))

  (define (check-arg pred val caller)
    (let lp ((val val))
      (if (pred val) val (lp (error "Bad argument" val pred caller)))))
  (define (take! lis k)
    (check-arg integer? k take!)
    (if (zero? k) '()
        (begin (set-cdr! (drop lis (- k 1)) '())
         lis)))
  (define (drop-right! lis k)
    (check-arg integer? k drop-right!)
    (let ((lead (drop lis k)))
      (if (pair? lead)

    (let lp ((lag lis)  (lead (cdr lead)))	; Standard case
      (if (pair? lead)
          (lp (cdr lag) (cdr lead))
          (begin (set-cdr! lag '())
           lis)))

    '())))	; Special case dropping everything -- no cons to side-effect.

  (define (last lis) (car (last-pair lis)))

  (define (last-pair lis)
    (check-arg pair? lis last-pair)
    (let lp ((lis lis))
      (let ((tail (cdr lis)))
        (if (pair? tail) (lp tail) lis))))

  (define (length+ x)			; Returns #f if X is circular.
    (let lp ((x x) (lag x) (len 0))
      (if (pair? x)
    (let ((x (cdr x))
          (len (+ len 1)))
      (if (pair? x)
          (let ((x   (cdr x))
          (lag (cdr lag))
          (len (+ len 1)))
      (and (not (eq? x lag)) (lp x lag len)))
          len))
    len)))

  (define append!
    (case-lambda
      (() '())
      ((x) x)
      ((x y)
       (if (null? x)
           y
           (begin
             (let loop ((x x))
               (if (null? (cdr x))
                   (set-cdr! x y)
                   (loop (cdr x))))
             x)))
      ((x y z)
       (append! x (append! y z)))
      ((x y z w)
       (append! x (append! y (append! z w))))
      (lsts
       (fold-right append! '() lsts))))

  (define (reverse! lis)
    (let lp ((lis lis) (ans '()))
      (if (null-list? lis) ans
          (let ((tail (cdr lis)))
            (set-cdr! lis ans)
            (lp tail lis)))))

  (define (append-reverse rev-head tail)
    (let lp ((rev-head rev-head) (tail tail))
      (if (null-list? rev-head) tail
    (lp (cdr rev-head) (cons (car rev-head) tail)))))

  (define (append-reverse! rev-head tail)
    (let lp ((rev-head rev-head) (tail tail))
      (if (null-list? rev-head) tail
    (let ((next-rev (cdr rev-head)))
      (set-cdr! rev-head tail)
      (lp next-rev rev-head)))))

  (define (concatenate lst-of-lsts)
    (if (null? lst-of-lsts)
        '()
        (append (car lst-of-lsts) (concatenate (cdr lst-of-lsts)))))
  (define (concatenate! lst-of-lsts)
    (if (null? lst-of-lsts)
        '()
        (append! (car lst-of-lsts) (concatenate! (cdr lst-of-lsts)))))
  (define (zip . lsts)
    (apply map list lsts))

  (define (unzip1 lst)
    (map car lst))
  (define (unzip2 lst)
    (values
      (map car lst)
      (map cadr lst)))
  (define (unzip3 lst)
    (values
      (map car lst)
      (map cadr lst)
      (map caddr lst)))
  (define (unzip4 lst)
    (values
      (map car lst)
      (map cadr lst)
      (map caddr lst)
      (map cadddr lst)))
  (define (unzip5 lst)
    (values
      (map car lst)
      (map cadr lst)
      (map caddr lst)
      (map cadddr lst)
      (map (lambda (e) (cadddr (cdr e))) lst)))

  (define (count pred lst)
    (let loop ((n 0) (pred pred) (lst lst))
      (if (null? lst) n
          (loop (+ n (if (pred (car lst)) 1 0)) pred (cdr lst)))))

  ;;; We stop when LIS1 runs out, not when any list runs out.
  (define (map! f lis1 . lists)
    (check-arg procedure? f map!)
    (if (pair? lists)
        (let lp ((lis1 lis1) (lists lists))
    (if (not (null-list? lis1))
        (call-with-values
          (lambda () (%cars+cdrs/no-test lists))
          (lambda (heads tails)
            (set-car! lis1 (apply f (car lis1) heads))
            (lp (cdr lis1) tails)))
        #;(receive (heads tails) (%cars+cdrs/no-test lists)
          (set-car! lis1 (apply f (car lis1) heads))
          (lp (cdr lis1) tails))))

        ;; Fast path.
        (pair-for-each (lambda (pair) (set-car! pair (f (car pair)))) lis1))
    lis1)

  (define map-in-order map)

  (define (pair-for-each proc lis1 . lists)
    (check-arg procedure? proc pair-for-each)
    (if (pair? lists)

        (let lp ((lists (cons lis1 lists)))
    (let ((tails (%cdrs lists)))
      (if (pair? tails)
          (begin (apply proc lists)
           (lp tails)))))

        ;; Fast path.
        (let lp ((lis lis1))
    (if (not (null-list? lis))
        (let ((tail (cdr lis)))	; Grab the cdr now,
          (proc lis)		; in case PROC SET-CDR!s LIS.
          (lp tail))))))

  (define fold
    (lambda
      (kons knil ks)
       (if (null? ks) knil
           (fold kons (kons (car ks) knil) (cdr ks))))
    #;(case-lambda
      ((kons knil ks)
       (if (null? ks) knil
           (fold kons (kons (car ks) knil) (cdr ks))))))
  (define fold-right
    (lambda
      (kons knil ks)
       (if (null? ks) knil
           (kons (car ks) (fold-right kons knil (cdr ks))))))

  (define (unfold-right p f g seed . maybe-tail)
    (check-arg procedure? p unfold-right)
    (check-arg procedure? f unfold-right)
    (check-arg procedure? g unfold-right)
    (let lp ((seed seed) (ans (get-optional maybe-tail '())))
      (if (p seed) ans
    (lp (g seed)
        (cons (f seed) ans)))))


  (define (unfold p f g seed . maybe-tail-gen)
    (check-arg procedure? p unfold)
    (check-arg procedure? f unfold)
    (check-arg procedure? g unfold)
    (if (pair? maybe-tail-gen)

        (let ((tail-gen (car maybe-tail-gen)))
    (if (pair? (cdr maybe-tail-gen))
        (apply error "Too many arguments" unfold p f g seed maybe-tail-gen)

        (let recur ((seed seed))
          (if (p seed) (tail-gen seed)
        (cons (f seed) (recur (g seed)))))))

        (let recur ((seed seed))
    (if (p seed) '()
        (cons (f seed) (recur (g seed)))))))

  (define (pair-fold-right f zero lis1 . lists)
    (check-arg procedure? f pair-fold-right)
    (if (pair? lists)
        (let recur ((lists (cons lis1 lists)))		; N-ary case
    (let ((cdrs (%cdrs lists)))
      (if (null? cdrs) zero
          (apply f (append! lists (list (recur cdrs)))))))

        (let recur ((lis lis1))				; Fast path
    (if (null-list? lis) zero (f lis (recur (cdr lis)))))))

  (define (pair-fold f zero lis1 . lists)
    (check-arg procedure? f pair-fold)
    (if (pair? lists)
        (let lp ((lists (cons lis1 lists)) (ans zero))	; N-ary case
    (let ((tails (%cdrs lists)))
      (if (null? tails) ans
          (lp tails (apply f (append! lists (list ans)))))))

        (let lp ((lis lis1) (ans zero))
    (if (null-list? lis) ans
        (let ((tail (cdr lis)))		; Grab the cdr now,
          (lp tail (f lis ans)))))))	; in case F SET-CDR!s LIS.

  (define (reduce f ridentity lis)
    (check-arg procedure? f reduce)
    (if (null-list? lis) ridentity
        (fold f (car lis) (cdr lis))))

  (define (reduce-right f ridentity lis)
    (check-arg procedure? f reduce-right)
    (if (null-list? lis) ridentity
        (let recur ((head (car lis)) (lis (cdr lis)))
    (if (pair? lis)
        (f head (recur (car lis) (cdr lis)))
        head))))

  (define append-map
    (case-lambda 
      ((f xs)
       (let loop ((xs xs))
         (if (null? xs)
             '()
             (append (f (car xs)) (loop (cdr xs))))))
      ((f xs ys)
       (let loop ((xs xs) (ys ys))
         (if (or (null? xs) (null? ys))
             '()
             (append (f (car xs) (car ys)) (loop (cdr xs) (cdr ys))))))
      ((f xs ys zs)
       (let loop ((xs xs) (ys ys) (zs zs))
         (if (or (null? xs) (null? ys) (null? zs))
             '()
             (append (f (car xs) (car ys) (car zs)) (loop (cdr xs) (cdr ys) (cdr zs))))))
      ((f . lsts)
       (let loop ((lsts lsts))
        (if (any? null? lsts)
            '()
            (append (apply f (map car lsts)) (loop (map cdr lsts))))))))
  (define append-map!
    (case-lambda 
      ((f xs)
       (let loop ((xs xs))
         (if (null? xs)
             '()
             (append! (f (car xs)) (loop (cdr xs))))))
      ((f xs ys)
       (let loop ((xs xs) (ys ys))
         (if (or (null? xs) (null? ys))
             '()
             (append! (f (car xs) (car ys)) (loop (cdr xs) (cdr ys))))))
      ((f xs ys zs)
       (let loop ((xs xs) (ys ys) (zs zs))
         (if (or (null? xs) (null? ys) (null? zs))
             '()
             (append! (f (car xs) (car ys) (car zs)) (loop (cdr xs) (cdr ys) (cdr zs))))))
      ((f . lsts)
       (let loop ((lsts lsts))
        (if (any? null? lsts)
            '()
            (append! (apply f (map car lsts)) (loop (map cdr lsts))))))))
  (define (filter pred lst)
    (cond ((null? lst) lst)
          ((pred (car lst)) (cons (car lst) (filter pred (cdr lst))))
          (else (filter pred (cdr lst)))))

  (define (filter! pred lis)
    (check-arg procedure? pred filter!)
    (let lp ((ans lis))
      (cond ((null-list? ans)       ans)			; Scan looking for
      ((not (pred (car ans))) (lp (cdr ans)))	; first cons of result.

      ;; ANS is the eventual answer.
      ;; SCAN-IN: (CDR PREV) = LIS and (CAR PREV) satisfies PRED.
      ;;          Scan over a contiguous segment of the list that
      ;;          satisfies PRED.
      ;; SCAN-OUT: (CAR PREV) satisfies PRED. Scan over a contiguous
      ;;           segment of the list that *doesn't* satisfy PRED.
      ;;           When the segment ends, patch in a link from PREV
      ;;           to the start of the next good segment, and jump to
      ;;           SCAN-IN.
      (else (letrec ((scan-in (lambda (prev lis)
              (if (pair? lis)
            (if (pred (car lis))
                (scan-in lis (cdr lis))
                (scan-out prev (cdr lis))))))
         (scan-out (lambda (prev lis)
               (let lp ((lis lis))
                 (if (pair? lis)
               (if (pred (car lis))
                   (begin (set-cdr! prev lis)
                    (scan-in lis (cdr lis)))
                   (lp (cdr lis)))
               (set-cdr! prev lis))))))
        (scan-in ans (cdr ans))
        ans)))))

  (define (partition pred lst)
    (if (null? lst)
        (values '() '())
        (call-with-values
          (lambda () (partition pred (cdr lst)))
          (lambda (l r)
            (if (pred (car lst))
                (values (cons (car lst) l) r)
                (values l (cons (car lst) r)))))))

  (define (partition! pred lis)
    (check-arg procedure? pred partition!)
    (if (null-list? lis) (values lis lis)

        ;; This pair of loops zips down contiguous in & out runs of the
        ;; list, splicing the runs together. The invariants are
        ;;   SCAN-IN:  (cdr in-prev)  = LIS.
        ;;   SCAN-OUT: (cdr out-prev) = LIS.
        (letrec ((scan-in (lambda (in-prev out-prev lis)
          (let lp ((in-prev in-prev) (lis lis))
            (if (pair? lis)
          (if (pred (car lis))
              (lp lis (cdr lis))
              (begin (set-cdr! out-prev lis)
               (scan-out in-prev lis (cdr lis))))
          (set-cdr! out-prev lis))))) ; Done.

           (scan-out (lambda (in-prev out-prev lis)
           (let lp ((out-prev out-prev) (lis lis))
             (if (pair? lis)
           (if (pred (car lis))
               (begin (set-cdr! in-prev lis)
                (scan-in lis out-prev (cdr lis)))
               (lp lis (cdr lis)))
           (set-cdr! in-prev lis)))))) ; Done.

    ;; Crank up the scan&splice loops.
    (if (pred (car lis))
        ;; LIS begins in-list. Search for out-list's first pair.
        (let lp ((prev-l lis) (l (cdr lis)))
          (cond ((not (pair? l)) (values lis l))
          ((pred (car l)) (lp l (cdr l)))
          (else (scan-out prev-l l (cdr l))
          (values lis l))))	; Done.

        ;; LIS begins out-list. Search for in-list's first pair.
        (let lp ((prev-l lis) (l (cdr lis)))
          (cond ((not (pair? l)) (values l lis))
          ((pred (car l))
           (scan-in l prev-l (cdr l))
           (values l lis))		; Done.
          (else (lp l (cdr l)))))))))

  (define (remove  pred l) (filter  (lambda (x) (not (pred x))) l))
  (define (remove! pred l) (filter! (lambda (x) (not (pred x))) l))

  ;;; Map F across L, and save up all the non-false results.
  (define (filter-map f lis1 . lists)
    (check-arg procedure? f filter-map)
    (if (pair? lists)
        (let recur ((lists (cons lis1 lists)))
    (call-with-values
      (lambda () (%cars+cdrs lists))
      (lambda (cars cdrs)
        (if (pair? cars)
          (cond ((apply f cars) => (lambda (x) (cons x (recur cdrs))))
          (else (recur cdrs))) ; Tail call in this arm.
          '())))
    #;(receive (cars cdrs) (%cars+cdrs lists)
      (if (pair? cars)
          (cond ((apply f cars) => (lambda (x) (cons x (recur cdrs))))
          (else (recur cdrs))) ; Tail call in this arm.
          '())))

        ;; Fast path.
        (let recur ((lis lis1))
    (if (null-list? lis) lis
        (let ((tail (recur (cdr lis))))
          (cond ((f (car lis)) => (lambda (x) (cons x tail)))
          (else tail)))))))

  (define (find pred list)
    (cond ((find-tail pred list) => car)
    (else #f)))

  (define (find-tail pred list)
    (check-arg procedure? pred find-tail)
    (let lp ((list list))
      (and (not (null-list? list))
     (if (pred (car list)) list
         (lp (cdr list))))))

  (define (delete x lis . maybe-=)
    (let ((= (get-optional maybe-= equal?)))
      (filter (lambda (y) (not (= x y))) lis)))

  (define (delete! x lis . maybe-=)
    (let ((= (get-optional maybe-= equal?)))
      (filter! (lambda (y) (not (= x y))) lis)))

  
  (define (take-while pred lst)
    (if (or (null? lst) (not (pred (car lst)))) '()
        (cons (car lst) (take-while pred (cdr lst)))))
  (define (drop-while pred lst)
    (if (or (null? lst) (not (pred (car lst)))) lst
        (drop-while pred (cdr lst))))
  (define (split-while pred lst)
    (if (or (null? lst) (not (pred (car lst)))) (values '() lst)
        (call-with-values
          (lambda () (split-while pred (cdr lst)))
          (lambda (t d)
            (values
              (cons (car lst) t) d)))))

  (define (take-while! pred lis)
    (check-arg procedure? pred take-while!)
    (if (or (null-list? lis) (not (pred (car lis)))) '()
        (begin (let lp ((prev lis) (rest (cdr lis)))
           (if (pair? rest)
         (let ((x (car rest)))
           (if (pred x) (lp rest (cdr rest))
         (set-cdr! prev '())))))
         lis)))

  (define (span pred lis)
    (check-arg procedure? pred span)
    (let recur ((lis lis))
      (if (null-list? lis) (values '() '())
    (let ((x (car lis)))
      (if (pred x)
          #;(receive (prefix suffix) (recur (cdr lis))
            (values (cons x prefix) suffix))
          (call-with-values
            (lambda () (recur (cdr lis)))
            (lambda (prefix suffix) (values (cons x prefix) suffix)))
          (values '() lis))))))

  (define (span! pred lis)
    (check-arg procedure? pred span!)
    (if (or (null-list? lis) (not (pred (car lis)))) (values '() lis)
        (let ((suffix (let lp ((prev lis) (rest (cdr lis)))
            (if (null-list? rest) rest
          (let ((x (car rest)))
            (if (pred x) (lp rest (cdr rest))
          (begin (set-cdr! prev '())
                 rest)))))))
    (values lis suffix))))


  (define (break  pred lis) (span  (lambda (x) (not (pred x))) lis))
  (define (break! pred lis) (span! (lambda (x) (not (pred x))) lis))


  (define (any? p lst)
    (cond ((null? lst) #f)
          ((p (car lst)) #t)
          (else (any? p (cdr lst)))))
  (define (every? p lst)
    (cond ((null? lst) #t)
          ((p (car lst)) (every? p (cdr lst)))
          (else #f)))


  (define (any pred lis1 . lists)
    (check-arg procedure? pred any)
    (if (pair? lists)

        ;; N-ary case
        (call-with-values
          (lambda () (%cars+cdrs (cons lis1 lists)))
          (lambda (heads tails)
            (and (pair? heads)
               (let lp ((heads heads) (tails tails))
                 (call-with-values
                   (lambda () (%cars+cdrs tails))
                   (lambda (next-heads next-tails)
                    (if (pair? next-heads)
                       (or (apply pred heads) (lp next-heads next-tails))
                       (apply pred heads))))
                 #;(receive (next-heads next-tails) (%cars+cdrs tails)
                   (if (pair? next-heads)
                       (or (apply pred heads) (lp next-heads next-tails))
                       (apply pred heads)))))))
        #;(receive (heads tails) (%cars+cdrs (cons lis1 lists))
          (and (pair? heads)
               (let lp ((heads heads) (tails tails))
                 (receive (next-heads next-tails) (%cars+cdrs tails)
             (if (pair? next-heads)
                 (or (apply pred heads) (lp next-heads next-tails))
                 (apply pred heads)))))) ; Last PRED app is tail call.

        ;; Fast path
        (and (not (null-list? lis1))
       (let lp ((head (car lis1)) (tail (cdr lis1)))
         (if (null-list? tail)
       (pred head)		; Last PRED app is tail call.
       (or (pred head) (lp (car tail) (cdr tail))))))))

  (define (every pred lis1 . lists)
    (check-arg procedure? pred every)
    (if (pair? lists)

        ;; N-ary case
        (call-with-values
          (lambda () (%cars+cdrs (cons lis1 lists)))
          (lambda (heads tails)
            (or (not (pair? heads))
              (let lp ((heads heads) (tails tails))
                (call-with-values
                  (lambda () (%cars+cdrs tails))
                  (lambda (next-heads next-tails)
                    (if (pair? next-heads)
                      (and (apply pred heads) (lp next-heads next-tails))
                      (apply pred heads))))
                #;(receive (next-heads next-tails) (%cars+cdrs tails)
                  (if (pair? next-heads)
                      (and (apply pred heads) (lp next-heads next-tails))
                      (apply pred heads)))))))
        #;(receive (heads tails) (%cars+cdrs (cons lis1 lists))
          (or (not (pair? heads))
              (let lp ((heads heads) (tails tails))
                (receive (next-heads next-tails) (%cars+cdrs tails)
                  (if (pair? next-heads)
                      (and (apply pred heads) (lp next-heads next-tails))
                      (apply pred heads)))))) ; Last PRED app is tail call.

      ;; Fast path
      (or (null-list? lis1)
	  (let lp ((head (car lis1))  (tail (cdr lis1)))
	    (if (null-list? tail)
		(pred head)	; Last PRED app is tail call.
		(and (pred head) (lp (car tail) (cdr tail))))))))

  (define (list-index p lst)
    (let loop ((i 0) (lst lst))
      (cond ((null? p) #f)
            ((p (car lst)) i)
            (else (loop (+ i 1) (cdr lst))))))

  (define (delete-duplicates lis . maybe-=)
    (let ((elt= (get-optional maybe-= equal?)))
      (check-arg procedure? elt= delete-duplicates)
      (let recur ((lis lis))
        (if (null-list? lis) lis
      (let* ((x (car lis))
       (tail (cdr lis))
       (new-tail (recur (delete x tail elt=))))
        (if (eq? tail new-tail) lis (cons x new-tail)))))))

  (define (delete-duplicates! lis . maybe-=)
    (let ((elt= (get-optional maybe-= equal?)))
      (check-arg procedure? elt= delete-duplicates!)
      (let recur ((lis lis))
        (if (null-list? lis) lis
      (let* ((x (car lis))
       (tail (cdr lis))
       (new-tail (recur (delete! x tail elt=))))
        (if (eq? tail new-tail) lis (cons x new-tail)))))))

  (define (alist-cons key datum alist) (cons (cons key datum) alist))

  (define (alist-copy alist)
    (map (lambda (elt) (cons (car elt) (cdr elt)))
         alist))

  (define (alist-delete key alist . maybe-=)
    (let ((= (get-optional maybe-= equal?)))
      (filter (lambda (elt) (not (= key (car elt)))) alist)))

  (define (alist-delete! key alist . maybe-=)
    (let ((= (get-optional maybe-= equal?)))
      (filter! (lambda (elt) (not (= key (car elt)))) alist)))

  (define (%lset2<= = lis1 lis2) (every (lambda (x) (member x lis2 =)) lis1))

  (define (lset<= = . lists)
    (check-arg procedure? = lset<=)
    (or (not (pair? lists)) ; 0-ary case
        (let lp ((s1 (car lists)) (rest (cdr lists)))
    (or (not (pair? rest))
        (let ((s2 (car rest))  (rest (cdr rest)))
          (and (or (eq? s2 s1)	; Fast path
             (%lset2<= = s1 s2)) ; Real test
         (lp s2 rest)))))))

  (define (lset= = . lists)
    (define (flip proc) (lambda (x y) (proc y x)))
    (check-arg procedure? = lset=)
    (or (not (pair? lists)) ; 0-ary case
        (let lp ((s1 (car lists)) (rest (cdr lists)))
          (or (not (pair? rest))
              (let ((s2   (car rest))
                    (rest (cdr rest)))
                (and (or (eq? s1 s2)            ; Fast path
                         (and (%lset2<= = s1 s2) ; Real test
                              (%lset2<= (flip =) s2 s1)))
                     (lp s2 rest)))))))

  (define (lset-adjoin = lis . elts)
    (check-arg procedure? = lset-adjoin)
    (fold (lambda (elt ans) (if (member elt ans =) ans (cons elt ans)))
    lis elts))


  (define (lset-union = . lists)
    (check-arg procedure? = lset-union)
    (reduce (lambda (lis ans)		; Compute ANS + LIS.
        (cond ((null? lis) ans)	; Don't copy any lists
        ((null? ans) lis)	; if we don't have to.
        ((eq? lis ans) ans)
        (else
         (fold (lambda (elt ans) (if (any (lambda (x) (= x elt)) ans)
                   ans
                   (cons elt ans)))
         ans lis))))
      '() lists))

  (define (lset-union! = . lists)
    (check-arg procedure? = lset-union!)
    (reduce (lambda (lis ans)		; Splice new elts of LIS onto the front of ANS.
        (cond ((null? lis) ans)	; Don't copy any lists
        ((null? ans) lis)	; if we don't have to.
        ((eq? lis ans) ans)
        (else
         (pair-fold (lambda (pair ans)
          (let ((elt (car pair)))
            (if (any (lambda (x) (= x elt)) ans)
                ans
                (begin (set-cdr! pair ans) pair))))
              ans lis))))
      '() lists))


  (define (lset-intersection = lis1 . lists)
    (check-arg procedure? = lset-intersection)
    (let ((lists (delete lis1 lists eq?))) ; Throw out any LIS1 vals.
      (cond ((any null-list? lists) '())		; Short cut
      ((null? lists)          lis1)		; Short cut
      (else (filter (lambda (x)
          (every (lambda (lis) (member x lis =)) lists))
        lis1)))))

  (define (lset-intersection! = lis1 . lists)
    (check-arg procedure? = lset-intersection!)
    (let ((lists (delete lis1 lists eq?))) ; Throw out any LIS1 vals.
      (cond ((any null-list? lists) '())		; Short cut
      ((null? lists)          lis1)		; Short cut
      (else (filter! (lambda (x)
           (every (lambda (lis) (member x lis =)) lists))
         lis1)))))


  (define (lset-difference = lis1 . lists)
    (check-arg procedure? = lset-difference)
    (let ((lists (filter pair? lists)))	; Throw out empty lists.
      (cond ((null? lists)     lis1)	; Short cut
      ((memq lis1 lists) '())	; Short cut
      (else (filter (lambda (x)
          (every (lambda (lis) (not (member x lis =)))
           lists))
        lis1)))))

  (define (lset-difference! = lis1 . lists)
    (check-arg procedure? = lset-difference!)
    (let ((lists (filter pair? lists)))	; Throw out empty lists.
      (cond ((null? lists)     lis1)	; Short cut
      ((memq lis1 lists) '())	; Short cut
      (else (filter! (lambda (x)
           (every (lambda (lis) (not (member x lis =)))
            lists))
         lis1)))))


  (define (lset-xor = . lists)
    (check-arg procedure? = lset-xor)
    (reduce (lambda (b a)			; Compute A xor B:
        ;; Note that this code relies on the constant-time
        ;; short-cuts provided by LSET-DIFF+INTERSECTION,
        ;; LSET-DIFFERENCE & APPEND to provide constant-time short
        ;; cuts for the cases A = (), B = (), and A eq? B. It takes
        ;; a careful case analysis to see it, but it's carefully
        ;; built in.

        ;; Compute a-b and a^b, then compute b-(a^b) and
        ;; cons it onto the front of a-b.
        (call-with-values
          (lambda () (lset-diff+intersection = a b))
          (lambda (a-b a-int-b)
            (cond
              ((null? a-b)     (lset-difference = b a))
              ((null? a-int-b) (append b a))
              (else (fold (lambda (xb ans)
                (if (member xb a-int-b =) ans (cons xb ans)))
                    a-b
                    b)))))
        #;(receive (a-b a-int-b)   (lset-diff+intersection = a b)
          (cond ((null? a-b)     (lset-difference = b a))
          ((null? a-int-b) (append b a))
          (else (fold (lambda (xb ans)
            (if (member xb a-int-b =) ans (cons xb ans)))
          a-b
          b)))))
      '() lists))


  (define (lset-xor! = . lists)
    (check-arg procedure? = lset-xor!)
    (reduce (lambda (b a)			; Compute A xor B:
        ;; Note that this code relies on the constant-time
        ;; short-cuts provided by LSET-DIFF+INTERSECTION,
        ;; LSET-DIFFERENCE & APPEND to provide constant-time short
        ;; cuts for the cases A = (), B = (), and A eq? B. It takes
        ;; a careful case analysis to see it, but it's carefully
        ;; built in.

        ;; Compute a-b and a^b, then compute b-(a^b) and
        ;; cons it onto the front of a-b.
        (call-with-values
          (lambda () (lset-diff+intersection! = a b))
          (lambda (a-b a-int-b)
            (cond ((null? a-b)     (lset-difference! = b a))
              ((null? a-int-b) (append! b a))
              (else (pair-fold (lambda (b-pair ans)
                     (if (member (car b-pair) a-int-b =) ans
                   (begin (set-cdr! b-pair ans) b-pair)))
                   a-b
                   b)))))
        #;(receive (a-b a-int-b)   (lset-diff+intersection! = a b)
          (cond ((null? a-b)     (lset-difference! = b a))
          ((null? a-int-b) (append! b a))
          (else (pair-fold (lambda (b-pair ans)
                 (if (member (car b-pair) a-int-b =) ans
               (begin (set-cdr! b-pair ans) b-pair)))
               a-b
               b)))))
      '() lists))


  (define (lset-diff+intersection = lis1 . lists)
    (check-arg procedure? = lset-diff+intersection)
    (cond ((every null-list? lists) (values lis1 '()))	; Short cut
    ((memq lis1 lists)        (values '() lis1))	; Short cut
    (else (partition (lambda (elt)
           (not (any (lambda (lis) (member elt lis =))
               lists)))
         lis1))))

  (define (lset-diff+intersection! = lis1 . lists)
    (check-arg procedure? = lset-diff+intersection!)
    (cond ((every null-list? lists) (values lis1 '()))	; Short cut
    ((memq lis1 lists)        (values '() lis1))	; Short cut
    (else (partition! (lambda (elt)
            (not (any (lambda (lis) (member elt lis =))
                lists)))
          lis1))))


  ; Vanity specials

  (define (insert lst i x)
    (if (= i 0) (cons x lst)
        (cons (car lst) (insert (cdr lst) (- i 1) x))))
  (define (erase lst i)
    (if (= i 0) (cdr lst)
        (cons (car lst) (erase (cdr lst) (- i 1)))))


  (define (assq-update lst x val)
    (cond ((null? lst) (cons (cons x val) '()))
          ((eq? x (caar lst)) (cons (cons x val) (cdr lst)))
          (else (cons (car lst) (assoc-update (cdr lst) x val)))))
  (define (assv-update lst x val)
    (cond ((null? lst) (cons (cons x val) '()))
          ((eqv? x (caar lst)) (cons (cons x val) (cdr lst)))
          (else (cons (car lst) (assoc-update (cdr lst) x val)))))
  (define assoc-update
    (case-lambda
      ((lst x val) (assoc-update lst x val equal?))
      ((lst x val =)
       (cond ((null? lst) (cons (cons x val) '()))
             ((= x (caar lst)) (cons (cons x val) (cdr lst)))
             (else (cons (car lst) (assoc-update (cdr lst) x val)))))))
)
