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

(import (vanity core) (vanity list) (vanity compiler utils) (vanity compiler variables) (vanity compiler match) (vanity compiler getopt) (vanity compiler expand) (vanity compiler cps) (vanity compiler transpile) (vanity compiler library) (vanity compiler config))

(define scm-files '())
(define obj-files '())
(define shared? #f)
(define expand? #f)
(define keep? #f)
(define header? #f)
(define transpile? #f)
(define object? #f)
(define debug? #f)
(define verbose? #f)
(define optimization 1)
(define api 1)
(define out-file #f)

(define c-options '())
(define paths (list (sprintf "~A/include" install-root)))

(define makefile? #f)
(define maketargets '())

(define benchmark? #f)

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
(define (basepath file)
  (let loop ((i (- (string-length file) 1)))
    (cond ((<= i 0) ".")
          ((eq? #\/ (string-ref file i)) (substring file 0 (+ i 1)))
          (else (loop (- i 1))))))
(define (decomma str)
  (let loop ((i (- (string-length str) 1)))
    (cond ((< i 0) str)
          ((eq? #\, (string-ref str i)) (string-set! str i #\space) (loop (- i 1)))
          (else (loop (- i 1))))))

(define (realpath file)
  (let* ((proc (open-input-process (sprintf "realpath ~A" file)))
         (ret (read-line proc)))
    (close-port proc)
    ret))
(define (realbasepath file)
  (let* ((proc (open-input-process (sprintf "realpath `dirname ~A`" file)))
         (ret (read-line proc)))
    (close-port proc)
    ret))

(define (display-help)
  (displayln "Usage: vsc [options] file...")
  (displayln "Options:")
  (displayln "  -O<num>       Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)")
  (displayln "  -g            Compile with debug symbols")
  (displayln "  -h            Generate header file instead of compiling")
  (displayln "  -E<num>       Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization")
  (displayln "  -t            Transpile only, do not compile or link")
  (displayln "  -c            Transpile, compile, and assemble, but do not link")
  (displayln "  -o<file>      Place the output into <file>")
  (displayln "  -I<dir>       Add the directory to the list to be searched for scheme header files")
  (displayln "  -Wc,<option>  Pass comma seperated to the C compiler")
  (displayln "  -v            Show intermediate commands")
  (displayln "")
  (displayln "  --makefile    Generate makefile dependencies, similar to gcc invoked with -MM -MG")
  (displayln "  --maketarget  Specify the target of the make dependency, additional --maketarget's add additional targets")
  (displayln "")
  (displayln "  --shared      Compile as shared library")
  (displayln "  --keep-temps  Keep temporary compilation files, such as C intermediates")
  ;(displayln "  --api=<num>   Compile with major api version 0 or 1")
  (displayln "  --help        You know about this")
  (displayln "  --version     Show version and build info"))
(define (display-version)
  (printf "Vanity Scheme Compiler ~A.~A~N" (car version) (cadr version))
  (displayln "Copyright (C) 2023 Richard Van Natta"))

(let loop ((args (getopt "vghtco:I:O:E:W:" (command-line) '((shared #f shared) (help #f help) (api #t api) (version #f version) (keep-temps #f keep-temps) (makefile #f makefile) (maketarget #t maketarget) (benchmark #f benchmark)))))
  (if (not (null? args))
      (begin
        (case (caar args)
          ((#t)
           (if (equal? (extension (cdar args)) ".o")
               (set! obj-files (cons (cdar args) obj-files))
               (set! scm-files (cons (cdar args) scm-files))))
          ((#\v) (set! verbose? #t))
          ((#\g) (set! debug? #t))
          ((#\h) (set! header? #t))
          ((#\t) (set! transpile? #t))
          ((#\c) (set! object? #t))
          ; TODO use realpath on out-file to ensure we can actually write to it
          ((#\o) (set! out-file (cdar args)))
          ((#\I) (set! paths (append paths (list (realpath (cdar args))))))
          ((#\O)
           (set! optimization (string->number (cdar args)))
           (if (not (and optimization (integer? optimization) (<= 0 optimization 3)))
               (compiler-error "Optimization flag -O expects integer between 0 and 3 inclusive" (cdar args))))
          ((#\E)
           (set! expand? (string->number (cdar args)))
           (if (not (and expand? (integer? expand?) (<= 0 expand? 2)))
               (compiler-error "Expand flag -E expects integer between 0 and 2 inclusive" (cdar args))))
          ((#\W)
           (if (not (eq? (string-ref (cdar args) 0) #\c))
               (compiler-error "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib"))
           (if (not (and (>= (string-length (cdar args)) 2) (eq? (string-ref (cdar args) 1) #\,)))
               (compiler-error "Wrapper flag -W missing comma"))
           (set! c-options (cons (decomma (substring (cdar args) 1)) c-options)))
          ((help) (display-help) (exit 0))
          ((version) (display-version) (exit 0))
          ((shared) (set! shared? #t))
          ((api) (set! api (string->number (cdar args))))
          ((keep-temps) (set! keep? #t))
          ((makefile) (set! makefile? #t))
          ((maketarget) (set! maketargets (cons (cdar args) maketargets)))
          ((benchmark) (set! benchmark? #t))
          (else (write (caar args)) (newline) (compiler-error "Unknown CLI option" (cdar args))))
        (loop (cdr args)))))

(define (count-true . args)
  (let loop ((args args) (ct 0))
    (if (null? args) ct
        (loop (cdr args) (+ ct (if (car args) 1 0))))))
(if (> (count-true makefile? header? transpile? object? expand?) 1) (compiler-error "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set"))

(if (and (null? scm-files) (null? obj-files)) (compiler-error "No input file provided"))

(if (and (or makefile? header? transpile? object? expand?) (not (null? obj-files))) (compiler-error "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files"))
(if (and (or makefile? header? transpile? object? expand?) out-file (not (null? (cdr scm-files)))) (compiler-error "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files"))

; TEMPORARY
(if (and (or makefile? header? transpile? object? expand?) (not (null? (cdr scm-files)))) (compiler-error "FIXME: -h and -c and -t and -E can only handle one file"))

(if (not out-file)
    (set! out-file
      (cond (object? (change-extension (basename (car scm-files)) ".o"))
            (transpile? (change-extension (basename (car scm-files)) ".c"))
            (expand? (change-extension (basename (car scm-files)) ".escm"))
            (header? (change-extension (basename (car scm-files)) ".scmh"))
            (makefile? out-file)
            (else "a.out"))))

(define (gen-header)
  (let* ((file (read-all (open-input-file (car scm-files))))
         (headers (filter (lambda (x) x) (map header-from-library file))))
    (if (> (length headers) 1) (compiler-error "Only one statement permitted in header generation"))
    (if (not (or (null? headers) (car headers))) (compiler-error "File did not produce a valid header"))
    (with-output-to-file
      out-file
      (lambda ()
        (if (not (null? headers)) (write (car headers)))
        (newline)))))
(if header? (begin (gen-header) (exit)))


(define (gen-makefile)
  (if (null? maketargets) (set! maketargets (list (change-extension (basename (car scm-files)) ".o"))))
  (let* ((file (read-all (open-input-file (car scm-files))))
         (deps (gather-dependencies file))
         (port (if out-file (open-output-file out-file) (current-output-port))))
    (for-each (lambda (target) (format port "~A " target)) maketargets)
    (display ":" port)
    (format port " ~A" (car scm-files))
    (for-each
      (lambda (dep) 
        (if (pair? dep)
            (begin
              (if (not (valid-import? dep)) (compiler-error "invalid import" dep))
              (format port " ~A" (import->path dep)))))
      deps)
    (newline port)
    (if out-file (close-port port))))
(if makefile? (begin (gen-makefile) (exit)))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; RUN COMPILE: super messy
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define cc-files
  (if (or header? transpile? expand?) (list out-file)
      (map (lambda (file) (make-temporary-file (string-append "/tmp/" (basename file)) ".c")) scm-files)))
(define cc-obj-files
  (cond ((or header? transpile? expand?) (list #f))
        (object? (list out-file))
        (else (map (lambda (file) (make-temporary-file (string-append "/tmp/" (basename file)) ".o")) scm-files))))

(define cc-command-flags
  (string-append
    " -rdynamic -Wmissing-braces -masm=intel"
    (sprintf " -O~A" optimization)
    (if debug? " -g" "")
    (if shared? " -fPIC" "")))
(define cc-command "")
(set! cc-command (string-append cc-command cc-command-flags))
(for-each
  (lambda (option) (set! cc-command (string-append cc-command option)))
  c-options)

(define stdout (current-output-port))
; 1. transpile
(define num-mains
  (fold
    (lambda (x acc) (+ acc (if x 1 0)))
    0
    (map
      (lambda (scm-file cc-file obj-file)
        (let ((path (realbasepath scm-file)))
          (with-output-to-file
            cc-file
            (lambda ()
              (let* ((fd (open-input-file scm-file))
                     (file (if fd (append (read-all fd)) (compiler-error "file does not exist" scm-file)))
                     (expanded  (map (lambda (e) (expand-toplevel e (cons path paths))) file)))
                (if (eq? expand? 0) (for-each write expanded)
                    (let ((cps (map (lambda (expr) (annotate-lambdas (to-cps expr))) (apply append expanded))))
                     (if (eq? expand? 1) (for-each write cps)
                         (let ((opt (map (lambda (expr) (deannotate-lambdas (optimize expr))) cps)))
                          (if (eq? expand? 2) (for-each write opt)
                              (let* ((bruijn (map bruijn-ify opt))
                                     (funs (to-functions bruijn)))
                                (apply printout2 (cons debug? (cons shared? funs))))))))))))))
      scm-files
      cc-files
      cc-obj-files)))
; 2. compile
(for-each
  (lambda (scm-file cc-file obj-file)
    (let ((path (realbasepath scm-file)))
      (if (and (not header?) (not transpile?) (not expand?))
          (begin
            (if verbose? (displayln (sprintf "gcc -I~A ~A -c -o ~A ~A" path cc-command obj-file cc-file)))
            (system (sprintf "gcc -I~A ~A -c -o ~A ~A" path cc-command obj-file cc-file))))))
  scm-files
  cc-files
  cc-obj-files)

(if (and shared? (> num-mains 0)) (compiler-error "shared library has toplevel expressions or defines"))
(if (> num-mains 1) (compiler-error "program has toplevel expressions in multiple files, and so it generated multiple mains"))

(define (delete-file f)  (system (sprintf "/bin/rm ~A" f)))

; 3. link
(if (and (not header?) (not transpile?) (not expand?) (not object?))
    (let ()
      (define link-command-flags
        (string-append
          " -rdynamic -Wmissing-braces -masm=intel"
          (sprintf " -O~A" optimization)
          (if debug? " -g" "")
          ; TODO way to not link vscheme in
          " -lvscheme"
          (if shared? " -fPIC -shared" " -Wl,--no-as-needed")))
      (define link-command
        (sprintf "gcc -o ~A" out-file))
      (for-each
        (lambda (file) (set! link-command (string-append link-command " " file)))
        (append obj-files cc-obj-files))
      (for-each
        (lambda (option) (set! link-command (string-append link-command option)))
        c-options)
      (set! link-command (string-append link-command link-command-flags))

      (if verbose? (displayln link-command))
      (system link-command)))

; 4. cleanup
(if (and (not header?) (not transpile?) (not expand?) (not keep?))
    (for-each delete-file cc-files))
(if (and (not header?) (not transpile?) (not expand?) (not object?) (not keep?))
    (for-each delete-file cc-obj-files))
