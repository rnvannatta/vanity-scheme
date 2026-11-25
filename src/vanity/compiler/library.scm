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
  (export process-import! map-import-set interface-import-entries library-exists? register-library-interface! import-path #;header-from-library valid-import? import-basepath import->path gather-dependencies)

  (define library-interfaces '())
  (define (load-library-interface import paths)
    (let* ((fd (search-open-input-file (import->path import) paths))
           (parse (if fd (read-all fd) (compiler-error "unable to find library" import)))
           (parse (if (and (pair? parse) (null? (cdr parse))) (car parse)
                      (compiler-error "library header must only have one statement"))))
      (close-port fd)
      (register-library-interface! parse)
      parse))
  (define (library-exists? import paths)
    (or (assoc import library-interfaces)
        (resolve-file-path (import->path import) paths)))
  (define (register-library-interface! lib)
    (if (assoc (cadr lib) library-interfaces)
        #;(compiler-error "library already registered" (cadr lib))
        (set-cdr! (assoc (cadr lib) library-interfaces) lib)
        (set! library-interfaces (cons (cons (cadr lib) lib) library-interfaces))))
  (define (import-path import)
    (match import
      (('only import . _) (import-path import))
      (('except import . _) (import-path import))
      (('prefix import prefix) (import-path import))
      (('rename import . _) (import-path import))
      (else import)))
  (define (find-library-interface! import paths)
    (let ((lookup (assoc import library-interfaces)))
      (if lookup (cdr lookup)
          (load-library-interface import paths))))

  (define (extract-exports lib)
    (cond ((assoc 'export (cddr lib)) => cdr)
          (else '())))
  (define (extract-constants lib)
    (cond ((assoc 'constant-export (cddr lib)) => cdr)
          (else '())))

  (define (process-export e)
    (match e
      (('rename a b)
       (cons a b))
      (else
       (unless (symbol? e) (compiler-error "invalid export" e))
       (cons e e))))

  ; Applies import's only/except/prefix/rename to (payload . local) entries,
  ; giving (path . entries); base maps the library name inside to its entries.
  (define (map-import-set import base)
    (define (prefix-import e prefix)
      (cons (car e) (string->symbol (string-append prefix (symbol->string (cdr e))))))
    (define (rename-import e renames)
      (cons (car e) (cond ((assv (cdr e) renames) => cadr) (else (cdr e)))))
    (match import
      (('only import . names)
       (match (map-import-set import base)
         ((path . entries) (cons path (filter (lambda (e) (memv (cdr e) names)) entries)))))
      (('except import . names)
       (match (map-import-set import base)
         ((path . entries) (cons path (filter (lambda (e) (not (memv (cdr e) names))) entries)))))
      (('prefix import prefix)
       (match (map-import-set import base)
         ((path . entries) (cons path (map (cut prefix-import <> (symbol->string prefix)) entries)))))
      (('rename import . renames)
       (match (map-import-set import base)
         ((path . entries) (cons path (map (cut rename-import <> renames) entries)))))
      (else (cons import (base import)))))

  ; A library interface's entries for map-import-set, exports then constants:
  ;   ((variable alist-name export-name) . local)
  ;   ((constant value alist-name export-name) . local)
  ; A constant's alist-name and export-name are #f unless it is also exported.
  (define (interface-import-entries import paths)
    (define lib (find-library-interface! import paths))
    (define exports (map process-export (extract-exports lib)))
    (append
      (map (lambda (e) (cons (list 'variable (car e) (cdr e)) (cdr e))) exports)
      (map (lambda (e)
             (let ((x (assq (car e) exports)))
               (cons (list 'constant (cadr e) (and x (car x)) (and x (cdr x))) (car e))))
           (extract-constants lib))))

  (define (process-import! import paths)
    (match (map-import-set import (cut interface-import-entries <> paths))
      ((path . entries)
       (list path
         (filter-map (lambda (e) (and (eq? (caar e) 'variable) (cons (cadar e) (cdr e)))) entries)
         (filter-map (lambda (e) (and (eq? (caar e) 'constant) (cons (cadar e) (cdr e)))) entries)))))

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
  (define (gather-dependencies statements)
    (if (null? statements) '()
        (match (car statements)
          (('import . libs)
           (append (map import-path libs) (gather-dependencies (cdr statements))))
          (('define-library name . body)
           (append (gather-dependencies body) (gather-dependencies (cdr statements))))
          (else (gather-dependencies (cdr statements)))))))
