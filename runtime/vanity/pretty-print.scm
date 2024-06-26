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

(define-library (vanity pretty-print)
  (import (vanity core))
  (export pretty-print)
  (define (print-indent i)
    (if (> i 0) (begin (display #\space) (print-indent (- i 1)))))
  (define (atom? expr) (not (pair? expr)))
  (define (lengthof-atom expr)
    (let ((port (open-output-string)))
      (write expr port)
      (let ((len (string-length (get-output-string port))))
        (close-port port)
        len)))
  (define (short? expr cutoff)
    (call/cc
      (lambda (return)
        (define (lengthof-list expr)
          (let loop ((expr expr) (n 1))
            (cond
              ((> n cutoff) (return #f))
              ((null? expr) n)
              ((not (pair? expr)) (+ n (lengthof expr) 3))
              (else (loop (cdr expr) (+ n (lengthof (car expr)) 1))))))
        (define (lengthof expr)
          (cond ((not (pair? expr)) (lengthof-atom expr))
                ((quotation? expr) (+ (if (eqv? (car expr) 'unquote-splicing) 2 1) (lengthof (cadr expr))))
                (else (lengthof-list expr))))
        (let ((len (lengthof expr)))
          (if (> len cutoff) (return #f) #t)))))
  (define (quotation? expr)
    (let ((ret (assv (car expr) '((quote . "'") (quasiquote . "`") (unquote . ",") (unquote-splicing . ",@")))))
      (if ret (cdr ret) #f)))

  (define (pretty-print expr) (pretty-print-impl expr 0 #t 40) (newline))
  (define (join-line? form)
    (let ((ret (assv form
           '((define . 2)
             (set! . 2)
             (lambda . 2)
             (continuation . 2)
             (if . 4)
             (let . 2)
             (letrec . 2)
             (let* . 2)
             (letrec* . 2)
           ))))
      (if ret (cdr ret) #f)))
  (define (pretty-print-impl expr indent indent-this? short-threshold)
    (if indent-this?
        (print-indent indent))
    (cond ((not (pair? expr)) (write expr))
          ((short? expr short-threshold) (write expr))
          ((quotation? expr) =>
           (lambda (q)
             (display q)
             (pretty-print-impl (cadr expr) (+ indent (if (eqv? (car expr) 'unquote-splicing) 2 1)) #f 40)))
          (else
            (display "(")
            (pretty-print-impl (car expr) (+ indent 1) #f 40)
            (let* ((join-line (join-line? (car expr)))
                   (first-indent (if join-line (+ 2 (lengthof-atom (car expr))) 1))
                   (new-indent (if join-line join-line 1)))
              (let loop ((rest (cdr expr)) (first-elem #t))
                (cond ((null? rest) (display ")"))
                      ((pair? rest)
                       (if (and first-elem join-line) (display " ") (newline))
                       (let ((new-indent (if first-elem first-indent new-indent))
                             (short-threshold
                              (if (and first-elem (memv (car expr) '(define lambda continuation))) (max 40 (- 80 (+ indent new-indent))) 40)))
                         (pretty-print-impl (car rest) (+ indent new-indent) (not (and first-elem join-line)) short-threshold))
                       (loop (cdr rest) #f))
                      (else
                       (display #\newline)
                       (print-indent (+ indent 1))
                       (display ". ")
                       (pretty-print-impl rest (+ indent 3) #f 40)
                       (display ")")))))))))
