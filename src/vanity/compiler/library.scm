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

(define-library (vanity compiler library)
  (import (vanity core) (vanity list) (vanity compiler utils))
  (export find-library-interface! register-library-interface! header-from-library valid-import? import-basepath import->path gather-dependencies)

  (define library-interfaces '())
  (define (load-library-interface import paths)
    (let* ((fd (search-open-input-file (import->path import) paths))
           (parse (if fd (read-all fd) (compiler-error "unable to find library" import)))
           (parse (if (and (pair? parse) (null? (cdr parse))) (car parse)
                      (compiler-error "library header must only have one statement"))))
      (close-port fd)
      (register-library-interface! parse)
      parse))
  (define (register-library-interface! lib)
    (if (assoc (cadr lib) library-interfaces)
        #;(compiler-error "library already registered" (cadr lib))
        (set-cdr! (assoc (cadr lib) library-interfaces) lib)
        (set! library-interfaces (cons (cons (cadr lib) lib) library-interfaces))))
  (define (find-library-interface! import paths)
    (let ((lookup (assoc import library-interfaces)))
      (if lookup (cdr lookup)
          (load-library-interface import paths))))

  (define (acceptable-char? c)
    (let ((i (char->integer c)))
      (or (<= (char->integer #\a) i (char->integer #\z))
          (<= (char->integer #\A) i (char->integer #\Z))
          (<= (char->integer #\0) i (char->integer #\9))
          (memv c '(#\- #\_)))))
  (define (acceptable-characters? str)
    (let ((len (string-length str)))
      (let loop ((i 0))
        (if (< i len)
            (if (acceptable-char? (string-ref str i)) (loop (+ i 1)) #f)
            #t))))
  (define (andf a b) (and a b))
  (define (valid-import-element? x)
    (and (symbol? x) (> (string-length (symbol->string x)) 0) (acceptable-characters? (symbol->string x))))
  (define (valid-import? import)
    (and (pair? import)
         (fold andf #t (map valid-import-element? import))))
  (define (import->path import)
    (if (null? (cdr import)) (sprintf "~A.scmh" (car import))
        (sprintf "~A/~A" (car import) (import->path (cdr import)))))
  (define (import-basepath import)
    (if (null? (cdr import)) "."
        (sprintf "~A/~A" (car import) (import-basepath (cdr import)))))
  (define (header-from-library lib)
    (define (iter constants exports imports rest)
      (if (null? rest)
          `(define-library-interface ,(cadr lib)
            (import . ,imports)
            (export . ,exports)
            (constant-export . ,constants))
          (match (car rest)
            (('export . syms) (iter constants (append exports syms) imports (cdr rest)))
            (('import . libs) (iter constants exports (append imports libs) (cdr rest)))
            (('begin . statements)
             (iter constants exports imports (append statements (cdr rest))))
            (('define-constant x val)
             (iter (cons (list x val) constants) exports imports (cdr rest)))
            (else  (iter constants exports imports (cdr rest))))))
    (match lib
      (('define-library name . body) (iter '() '() '() body))
      (('define-library . _) (compiler-error "not a valid library" lib))
      (else #f)))
  (define (gather-dependencies statements)
    (if (null? statements) '()
        (match (car statements)
          (('import . libs)
           (append libs (gather-dependencies (cdr statements))))
          (('define-library name . body)
           (append (gather-dependencies body) (gather-dependencies (cdr statements))))
          (else (gather-dependencies (cdr statements)))))))
