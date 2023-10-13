; Copyright 2023 Richard N Van Natta
;
; This file is part of the Vanity Scheme Compiler.
;
; The Vanity Scheme Compiler is free software: you can redistribute it
; and/or modify it under the terms of the GNU General Public License as
; published by the Free Software Foundation, either version 3 of the
; License, or (at your option) any later version.
; 
; The Vanity Scheme Compiler is distributed in the hope that it will be
; useful, but WITHOUT ANY WARRANTY; without even the implied warranty
; of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
; General Public License for more details.
;
; You should have received a copy of the GNU General Public
; License along with the Vanity Scheme Compiler.
;
; If not, see <https://www.gnu.org/licenses/>.
;
; This work is published with additional permission under GNU GPL
; Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
; should have been included with the Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

(define-library (vanity compiler getopt)
  (import (vanity core))
  (export getopt)
  (define (getopt optstring args longopts)
    (define (decode-longopt longopt)
      (cond ((symbol? longopt) (decode-longopt (symbol->string longopt)))
            ((symbol? (car longopt)) (decode-longopt (cons (symbol->string (car longopt)) (cdr longopt))))
            ((string? longopt) (list longopt #f longopt))
            ((null? (cdr longopt)) (list (car longopt) #f (string->symbol (car longopt))))
            ((null? (cddr longopt)) (list (car longopt) (cadr longopt) (string->symbol (car longopt))))
            (else longopt)))
    (define longs (map decode-longopt longopts))
    (define opts (string->list optstring))
    (define (getopt-short args opts)
      (let* ((arg (car args))
             (len (string-length arg)))
        (let loop ((i 1))
          (if (< i len)
              (let ((mem (memq (string-ref arg i) opts)))
                (cond
                  ((not mem) (cons (cons #\? (substring arg i)) (iter (cdr args))))
                  ((not (and (pair? (cdr mem)) (eq? (cadr mem) #\:))) (cons (cons (car mem) #f) (loop (+ i 1))))
                  ((not (= len (+ i 1))) (cons (cons (car mem) (substring arg (+ i 1))) (iter (cdr args))))
                  ((not (pair? (cdr args))) (list (cons #\: (car mem))))
                  (else (cons (cons (car mem) (cadr args)) (iter (cddr args))))))
              (iter (cdr args))))))
    (define (getopt-long args)
      (call-with-values
        (lambda ()
          (let* ((arg (car args))
                 (len (string-length arg)))
            (let loop ((i 2))
              (cond ((= i len) (values (substring arg 0 i) ""))
                    ((eq? (string-ref arg i) #\=) (values (substring arg 0 i) (substring arg (+ i 1))))
                    (else (loop (+ i 1)))))))
        (lambda (arg val)
          (let ((ass (assoc (substring arg 2) longs)))
            (cond
              ((not ass) (cons (cons #\? (substring arg 2)) (iter (cdr args))))
              ((not (cadr ass)) (cons (cons (caddr ass) #f) (iter (cdr args))))
              ((not (equal? val "")) (cons (cons (caddr ass) val) (iter (cdr args))))
              ((pair? (cdr args)) (cons (cons (caddr ass) (cadr args)) (iter (cddr args))))
              (else (list (cons #\: (caddr ass)))))))))
    (define (iter args)
      (cond ((null? args) '())
            ((equal? (substring (car args) 0 2) "--")
             (if (= (string-length (car args)) 2)
                 (map (lambda (e) (cons #f e)) (cdr args))
                 (getopt-long args)))
            ((equal? (string-ref (car args) 0) #\-)
             (getopt-short args opts))
            (else (cons (cons #t (car args)) (iter (cdr args))))))
    (iter (cdr args))))
