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

(import (vanity core) "variables" "match" "getopt" "expand" "cps" "transpile")

(define scm-files '())
(define obj-files '())
(define shared? #f)
(define expand? #f)
(define keep? #f)
(define transpile? #f)
(define object? #f)
(define debug? #f)
(define verbose? #f)
(define optimization 1)
(define api 1)
(define out-file #f)

(define (extension file)
  (let loop ((i (- (string-length file) 1)))
    (cond ((<= i 0) #f)
          ((eq? #\. (string-ref file i)) (substring file i))
          (else (loop (- i 1))))))
(define (change-extension file new)
  (let loop ((i (- (string-length file) 1)))
    (cond ((<= i 0) (string-append file new))
          ((eq? #\. (string-ref file i)) (string-append (substring file 0 i) new))
          (else (loop (- i 1))))))
(define (basename file)
  (let loop ((i (- (string-length file) 1)))
    (cond ((<= i 0) file)
          ((eq? #\/ (string-ref file i)) (substring file (+ i 1)))
          (else (loop (- i 1))))))

(define (display-help)
  (displayln "Usage: vsc [options] file...")
  (displayln "Options:")
  (displayln "  -O<num>       Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)")
  (displayln "  -g            Compile with debug symbols")
  (displayln "  -E<num>       Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization")
  (displayln "  -t            Transpile only, do not compile or link")
  (displayln "  -c            Transpile, compile, and assemble, but do not link")
  (displayln "  -o <file>     Place the output into <file>")
  (displayln "  -v            Show intermediate commands")
  (displayln "")
  (displayln "  --shared      Compile as shared library")
  (displayln "  --keep-temps  Keep temporary compilation files, such as C intermediates")
  ;(displayln "  --api=<num>   Compile with major api version 0 or 1")
  (displayln "  --help        You know about this")
  (displayln "  --version     Show version and build info"))
(define (display-version)
  (displayln "Vanity Scheme Compiler 0.0.0")
  (displayln "Copyright (C) 2023 Richard Van Natta"))

(let loop ((args (getopt "vgtco:O:E:" (command-line) '((shared #f shared) (help #f help) (api #t api) (version #f version) (keep-temps #f keep-temps)))))
  (if (not (null? args))
      (begin
        (case (caar args)
          ((#t)
           (if (equal? (extension (cdar args)) ".o")
               (set! obj-files (cons (cdar args) obj-files))
               (set! scm-files (cons (cdar args) scm-files))))
          ((#\v) (set! verbose? #t))
          ((#\g) (set! debug? #t))
          ((#\t) (set! transpile? #t))
          ((#\c) (set! object? #t))
          ((#\o) (set! out-file (cdar args)))
          ((#\O)
           (set! optimization (string->number (cdar args)))
           (if (not (and optimization (integer? optimization) (<= 0 optimization 3)))
               (error "Optimization flag -O expects integer between 0 and 3 inclusive" (cdar args))))
          ((#\E)
           (set! expand? (string->number (cdar args)))
           (if (not (and expand? (integer? expand?) (<= 0 expand? 2)))
               (error "Expand flag -E expects integer between 0 and 2 inclusive" (cdar args))))
          ((help) (display-help) (exit 0))
          ((version) (display-version) (exit 0))
          ((shared) (set! shared? #t))
          ((api) (set! api (string->number (cdar args))))
          ((keep-temps) (set! keep? #t))
          (else (write (caar args)) (newline) (error "Unknown CLI option" (cdar args))))
        (loop (cdr args)))))

(if (and (null? scm-files) (null? obj-files)) (error "No input file provided"))
(if (and transpile? object? expand?) (error "Only one of '-c' or '-t' or '-E' can be set"))

(if (and (or transpile? object? expand?) (not (null? obj-files))) (error "Cannot specify '-c' or '-t' or '-E' with object files"))
(if (and (or transpile? object? expand?) out-file (not (null? (cdr scm-files)))) (error "Cannot specify '-c' or '-t' or '-E' with multiple files"))

; TEMPORARY
(if (and (or transpile? object? expand?) (not (null? (cdr scm-files)))) (error "FIXME: -c and -t and -E can only handle one file"))

(if (not out-file)
    (set! out-file
      (cond (object? (change-extension (basename (car scm-files)) ".o"))
            (transpile? (change-extension (basename (car scm-files)) ".c"))
            (expand? (change-extension (basename (car scm-files)) ".escm"))
            (else "a.out"))))

(define (read-all port)
  (let ((expr (read port)))
    (if (eof-object? expr)
        '()
        (cons expr (read-all port)))))

(define cc-files
  (if (or transpile? expand?) (list out-file)
      (map (lambda (file) (make-temporary-file (string-append "/tmp/" (basename file)) ".c")) scm-files)))

(define flags
  (string-append
    " -rdynamic -Wmissing-braces -masm=intel"
    (sprintf " -O~A" optimization)
    (if debug? " -g" "")
    (if object? " -c" " -lvscheme")
    (if shared? " -fPIC -shared" " -Wl,--no-as-needed")))
(define command
  (sprintf "gcc -o ~A" out-file))
(for-each
  (lambda (file)
    (set! command (string-append command " " file)))
  (append obj-files cc-files))
(set! command (string-append command flags))

(define stdout (current-output-port))
(define num-mains
  (fold
    (lambda (x acc) (+ acc (if x 1 0)))
    0
    (map
      (lambda (scm-file cc-file)
        (with-output-to-file
          cc-file
          (lambda ()
            (let* ((file (append (read-all (open-input-file scm-file))))
                   (expanded  (map expand-toplevel file)))
              (if (eq? expand? 0) (for-each write expanded)
                  (let ((cps (map (lambda (expr) (annotate-lambdas (to-cps expr))) (apply append expanded))))
                   (if (eq? expand? 1) (for-each write cps)
                       (let ((opt (map (lambda (expr) (deannotate-lambdas (optimize expr))) cps)))
                        (if (eq? expand? 2) (for-each write opt)
                            (let* ((bruijn (map bruijn-ify opt))
                                   (funs (to-functions bruijn)))
                              (apply printout2 (cons debug? (cons shared? funs)))))))))))))
      scm-files
      cc-files)))

(if (and shared? (> num-mains 0)) (error "shared library has toplevel expressions or defines"))
(if (> num-mains 1) (error "program has toplevel expressions in multiple files, and so it generated multiple mains"))

(define (delete-file f)  (system (sprintf "/bin/rm ~A" f)))
(if (and (not transpile?) (not expand?))
    (begin
      (if verbose? (displayln command))
      (system command)
      (if (not keep?) (for-each delete-file cc-files))))
