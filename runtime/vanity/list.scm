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
    iota
    list-tabulate
    take drop
    take-right drop-right
    split-at
    fold fold-right
    concatenate
    zip
    unzip1 unzip2 unzip3 unzip4 unzip5
    count filter partition
    take-while drop-while split-while
    any? every?
    list-index
    insert delete
    assq-update assv-update assoc-update)

  ; (map f (map g lst)) <==> (map (lambda (e) (f (g (e)))) lst)
  ; (for-each f (map g lst)) <==> (for-each (lambda (e) (f (g (e)))) lst)
  ; (map f (list-tabulate n g)) <==> (list-tabulate n (lambda (i) (f (g i))))

  ; (iota n b s) <==> (list-tabulate n (lambda (i) (+ (* s i) b)))
  ; (fold f knil (map g lst)) <==> (fold (lambda (a b) (f (g a) b)) knil lst)

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
  (define (list-tabulate n proc)
    (let loop ((i 0))
      (if (eq? i n) '()
          (cons (proc i)
                (loop (+ i 1))))))

  (define (take lst i)
    (if (eq? i 0) '()
        (cons (car lst) 
              (take (cdr lst) (- i 1)))))
  (define (drop lst i)
    (if (eq? i 0) lst
        (drop (cdr lst) (- i 1))))
  (define (take-right lst i)
    (let loop ((lst lst) (len (length lst)))
      (if (eq? len i) lst
          (loop (cdr lst) (- len 1)))))
  (define (drop-right lst i)
    (let loop ((lst lst) (len (length lst)))
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

  (define fold
    (case-lambda
      ((kons knil ks)
       (if (null? ks) knil
           (fold kons (kons (car ks) knil) (cdr ks))))))
  (define fold-right
    (case-lambda
      ((kons knil ks)
       (if (null? ks) knil
           (kons (car ks) (fold-right knil (cdr ks)))))))
  (define (concatenate lst-of-lsts)
    (if (null? lst-of-lsts)
        '()
        (append (car lst-of-lsts) (concatenate (cdr lst-of-lsts)))))
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

  (define (filter pred lst)
    (cond ((null? lst) lst)
          ((pred (car lst)) (cons (car lst) (filter pred (cdr lst))))
          (else (filter pred (cdr lst)))))
  (define (partition pred lst)
    (if (null? lst)
        (values '() '())
        (call-with-values
          (lambda () (partition pred (cdr lst)))
          (lambda (l r)
            (if (pred (car lst))
                (values (cons (car lst) l) r)
                (values l (cons (car lst) r)))))))
  
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

  (define (any? p lst)
    (cond ((null? p) #f)
          ((p (car lst)) #t)
          (else (any? p (cdr lst)))))
  (define (every? p lst)
    (not (any? (lambda (e) (not (p e))) lst)))

  (define (list-index p lst)
    (let loop ((i 0) (lst lst))
      (cond ((null? p) #f)
            ((p (car lst)) i)
            (else (loop (+ i 1) (cdr lst))))))

  (define (insert lst i x)
    (if (= i 0) (cons x lst)
        (cons (car lst) (insert (cdr lst) (- i 1) x))))
  (define (delete lst i)
    (if (= i 0) (cdr lst)
        (cons (car lst) (delete (cdr lst) (- i 1)))))

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
