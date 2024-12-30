; Copyright 2023-2024 Richard N Van Natta
;
; This file is part of the Vanity Scheme Compiler.
;
; The Vanity Scheme Compiler is free software: you can redistribute it
; and/or modify it under the terms of the GNU General Public License as
; published by the Free Software Foundation, either version 2 of the
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
; This work is published with additional permission, the Vanity Scheme
; Runtime Library Exceptions, which should have been included with the
; Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

(define-library (vanity compiler utils)
  (import (vanity core) (vanity compiler config))
  (export read-all search-open-input-file compiler-error compiler-warning gensym filter gcc-path)
  (define (read-all port)
    (let ((expr (read port)))
      (if (eof-object? expr) '()
          (cons expr (read-all port)))))
  (define (search-open-input-file file paths)
    (let loop ((paths paths))
      (if (null? paths) #f
          (let ((fd (open-input-file (string-append (car paths) "/" file))))
            (if fd fd (loop (cdr paths)))))))
  (define (compiler-error msg . irritants)
    (raise (##vcore.record #f 'compiler-error msg irritants)))
  (define (compiler-warning msg . irritants)
    (format (current-error-port) "vsc: compiler-warning: ~A:" msg)
    (for-each
      (lambda (irr) (display " " (current-error-port)) (write irr (current-error-port)))
      irritants)
    (newline (current-error-port)))
  (define (filter p lst)
    (cond ((null? lst) '())
          ((p (car lst)) (cons (car lst) (filter p (cdr lst))))
          (else (filter p (cdr lst)))))
  (define gcc-path
    (if (eqv? platform 'windows)
        (sprintf "~A/../~A" ((##vcore.function "VExePath")) "mingw64/bin/gcc.exe")
        "gcc"))
  (define gensym ##vcore.gensym))
