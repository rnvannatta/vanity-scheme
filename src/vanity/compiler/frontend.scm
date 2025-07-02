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

(import (vanity core) (vanity list) (vanity pretty-print) (vanity compiler utils) (vanity compiler variables) (vanity compiler match) (vanity compiler getopt) (vanity compiler expand) (vanity compiler cps) (vanity compiler lower) (vanity compiler transpile) (vanity compiler bytecode) (vanity compiler library) (vanity compiler config) (vanity compiler alpha-convert) (vanity compiler optimize))

(define scm-files '())
(define obj-files '())
(define shared? #f)
(define expand? #f)
(define keep? #f)
(define header? #f)
(define bytecode? #f)
(define transpile? #f)
(define object? #f)
(define debug? #f)
(define verbose? #f)
(define optimization 0)
(define api 1)
(define out-file #f)
(define platform "linux")
(define purec? #f)
(define main "main")
(define cc #f)
(define w-unbound-variables #f)
(define werror-unbound-variables #f)

(define c-options '())
(define paths (list (sprintf "~Ainclude" install-root)))

(define makefile? #f)
(define maketargets '())

(define benchmark? #f)

(define stdout (current-output-port))
(define (benchmark label thunk)
  (let ((start (current-jiffy)))
    (call-with-values
      thunk
      (lambda args
        (let ((end (current-jiffy)))
          (if benchmark?
              (format stdout "~A: ~A seconds~N" label (/ (- end start) (jiffies-per-second))))
          (apply values args))))))

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
(define (count-true . args)
  (let loop ((args args) (ct 0))
    (if (null? args) ct
        (loop (cdr args) (+ ct (if (car args) 1 0))))))
(define (delete-file f)  (system (sprintf "/bin/rm ~A" f)))
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

(define (display-help)
  (displayln "Usage: vsc [options] file...")
  (displayln "Options:")
  (displayln "  -O<num>         Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)")
  (displayln "  -g              Compile with debug symbols")
  (displayln "  -h              Generate header file instead of compiling")
  (displayln "  -E<num>         Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization")
  (displayln "  -t              Transpile only, do not compile or link")
  (displayln "  -c              Transpile, compile, and assemble, but do not link")
  (displayln "  -o<file>        Place the output into <file>")
  (displayln "  -I<dir>         Add the directory to the list to be searched for scheme header files")
  (displayln "  -Wc,<option>    Pass comma seperated to the C compiler")
  (displayln "  -Wl,<option>    Pass comma seperated to the linker")
  (displayln "  -v              Show intermediate commands")
  (displayln "")
  (displayln "  --makefile      Generate makefile dependencies, similar to gcc invoked with -MM -MG")
  (displayln "  --maketarget    Specify the target of the make dependency, additional --maketarget's add additional targets")
  (displayln "")
  (displayln "  --shared        Compile as shared library")
  (displayln "  --keep-temps    Keep temporary compilation files, such as C intermediates")
  ;(displayln "  --api=<num>    Compile with major api version 0 or 1")
  (displayln "  --platform=<os> Which OS to make executables for. Either 'linux' or 'windows' or 'emscripten'.")
  (displayln "  --main=<main>   What style of main to use. Either 'main' or 'winmain' or 'emscripten-loop' or 'none'.")
  (displayln "  --cc=<compiler> Use the C compiler of your choice. The default is gcc")
  (displayln "  --help          You know about this")
  (displayln "  --version       Show version and build info")
  (displayln "")
  (displayln "  -Wunbound     Enable unbound toplevel variable warnings")
  )
(define (display-version)
  (printf "Vanity Scheme Compiler ~A.~A~N" (car version) (cadr version))
  (displayln "Copyright (C) 2023 Richard Van Natta"))

(define (handle-exception err)
  (parameterize ((current-output-port (current-error-port)))
    (display "vsc: ")
    (display err)
    (newline)
    #;(exit 1)))

(with-exception-handler handle-exception
  (lambda ()
    (let loop ((args (getopt "vghtco:I:O:E:W:" (command-line) '((shared #f shared) (help #f help) (api #t api) (platform #t platform) (main #t main) (cc #t cc) (version #f version) (keep-temps #f keep-temps) (makefile #f makefile) (maketarget #t maketarget) (bytecode #f bytecode) (benchmark #f benchmark)))))
      (if (not (null? args))
          (begin
            (case (caar args)
              ((#t)
               (cond ((equal? (extension (cdar args)) ".o") (set! obj-files (cons (cdar args) obj-files)))
                     ; absolutely horrendous hack. we need to be better about argument order
                     ((equal? (extension (cdar args)) ".a") (set! obj-files (cons (string-append "-Wl,--whole-archive " (cdar args) " -Wl,--no-whole-archive") obj-files)))
                     ((equal? (extension (cdar args)) ".lib") (set! obj-files (cons (string-append "-Wl,--whole-archive " (cdar args) " -Wl,--no-whole-archive") obj-files)))
                     ((or (equal? (extension (cdar args)) ".scm")
                          (equal? (extension (cdar args)) ".ss"))
                      (set! scm-files (cons (cdar args) scm-files)))
                     ; TODO add support for .c and .res and .cpp (ew barney)
                     (else (compiler-error "File has unrecognized extension: ~A" (cdar args)))))
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
               (cond ((equal? (cdar args) "unbound") (set! w-unbound-variables #t))
                     ((equal? (cdar args) "no-unbound") (set! w-unbound-variables #f) (set! werror-unbound-variables #f))
                     ((equal? (cdar args) "error=unbound") (set! w-unbound-variables #t) (set! werror-unbound-variables #t))
                     ((equal? (cdar args) "no-error=unbound") (set! werror-unbound-variables #f))
                     (else
                       (if (not (or (eq? (string-ref (cdar args) 0) #\c) (eq? (string-ref (cdar args) 0) #\l)))
                           (compiler-error "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib"))
                       (if (not (and (>= (string-length (cdar args)) 2) (eq? (string-ref (cdar args) 1) #\,)))
                           (compiler-error "Wrapper flag -W missing comma"))
                       (if (eq? (string-ref (cdar args) 0) #\c)
                           (set! c-options (cons (decomma (substring (cdar args) 1)) c-options))
                           (set! c-options (cons (string-append " -Wl," (substring (cdar args) 2)) c-options))))))
              ((help) (display-help) (exit 0))
              ((version) (display-version) (exit 0))
              ((shared) (set! shared? #t))
              ((api) (set! api (string->number (cdar args))))
              ((platform)
               (set! platform (cdar args))
               (if (equal? platform "emscripten")
                   (set! purec? #t)))
              ((main) (set! main (cdar args)))
              ((cc) (set! cc (cdar args)))
              ((keep-temps) (set! keep? #t))
              ((makefile) (set! makefile? #t))
              ((maketarget) (set! maketargets (cons (cdar args) maketargets)))
              ((benchmark) (set! benchmark? #t))
              ((bytecode) (set! bytecode? #t))
              (else (compiler-error "Unknown CLI option" (cdar args))))
            (loop (cdr args)))))
    (if (not cc)
        (set! cc
          (cond ((equal? platform "linux") "gcc")
                ((equal? platform "windows") "/usr/bin/x86_64-w64-mingw32-gcc")
                ((equal? platform "emscripten") "emcc")
                (else (compiler-error "Unknown --platform, only 'linux' and 'windows' and 'emscripten' are valid" platform)))))

    (if (> (count-true makefile? header? bytecode? transpile? object? expand?) 1) (compiler-error "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set"))

    (if (and (null? scm-files) (null? obj-files)) (compiler-error "No input file provided"))

    (if (and (or makefile? header? bytecode? transpile? object? expand?) (not (null? obj-files))) (compiler-error "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files"))
    (if (and (or makefile? header? bytecode? transpile? object? expand?) out-file (not (null? (cdr scm-files)))) (compiler-error "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files"))

    ; TEMPORARY
    (if (and (or makefile? header? bytecode? transpile? object? expand?) (not (null? (cdr scm-files)))) (compiler-error "FIXME: -h and -c and -t and -E can only handle one file"))

    (if (not out-file)
        (set! out-file
          (cond (object? (change-extension (basename (car scm-files)) ".o"))
                (transpile? (change-extension (basename (car scm-files)) ".c"))
                (expand? (change-extension (basename (car scm-files)) ".escm"))
                (header? (change-extension (basename (car scm-files)) ".scmh"))
                (bytecode? (change-extension (basename (car scm-files)) ".vasm"))
                (makefile? out-file)
                (else #f))))

    (if header? (begin (gen-header) (exit)))
    (if makefile? (begin (gen-makefile) (exit)))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; RUN COMPILE: super messy
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(with-exception-handler handle-exception
  (lambda ()
    (define cc-files
      (if (or header? bytecode? transpile? expand?) (list out-file)
          (map (lambda (file) (make-temporary-file (string-append "/tmp/" (basename file)) ".c")) scm-files)))
    (define cc-obj-files
      (cond ((or header? bytecode? transpile? expand?) (list #f))
            (object? (list out-file))
            (else (map (lambda (file) (make-temporary-file (string-append "/tmp/" (basename file)) ".o")) scm-files))))

    (define base-cc-flags
      (cond ((equal? platform "linux") " -rdynamic -Wmissing-braces -masm=intel")
            ((equal? platform "emscripten") " -Wno-gnu -DVANITY_PURE_C -fbracket-depth=4096")
            (else (sprintf " -Wl,--export-all-symbols -Wl,--stack,8388608 -Wmissing-braces -masm=intel -I~A/x86_64-w64-mingw32/include/" install-root))))
    (define cc-command-flags
      (string-append
        base-cc-flags
        (sprintf " -O~A" optimization)
        (if debug? " -g" "")
        (if shared? " -fPIC" "")))
    (define cc-command (apply string-append cc-command-flags c-options))

    (define (id x) x)
    (define architecture (if (equal? platform "windows") "windows_amd64" "sysv_amd64"))
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
                         (file (benchmark "read" (lambda () (if fd (append (read-all fd)) (compiler-error "file does not exist" scm-file)))))
                         (expanded (benchmark "expand" (lambda () (map (lambda (e) (map alpha-convert (expand-toplevel e (cons path paths) architecture))) file)))))
                    (if w-unbound-variables
                        (let loop ((exprs (apply append expanded)) (bound '()) (free '()))
                          (if (null? exprs)
                              (let ((free (filter (lambda (e) (not (memv e bound))) free)))
                                (if (not (null? free))
                                    ((if werror-unbound-variables compiler-error compiler-warning) "free variables in program" free)))
                              (let ()
                                (define-values (new-free new-bound)
                                  (free-variables-toplevel (car exprs) bound (cons path paths)))
                                (loop (cdr exprs) new-bound (append (filter (lambda (e) (not (memv e free))) new-free) free))))))
                    (if (eq? expand? 0) (for-each pretty-print expanded)
                        (let ((cps (benchmark "cps" (lambda () (map (lambda (expr) (to-cps expr)) (apply append expanded))))))
                         (if (eq? expand? 1) (for-each pretty-print cps)
                             (let ((opt (benchmark "optimize"
                                          (lambda ()
                                            (map (lambda (expr)
                                                   ((if (> optimization 0) qualify-callsites id)
                                                    (optimize expr (not bytecode?)))) cps)))))
                              (if (eq? expand? 2) (for-each pretty-print opt)
                                  (let* ((funs (benchmark "extract" (lambda () (to-functions (map bruijn-ify opt) (not bytecode?))))))
                                    (benchmark "transpile"
                                      (lambda ()
                                        (if bytecode?
                                            (begin
                                              (write-bytecode (apply to-bytecode (cons debug? (cons shared? funs))))
                                              (not (null? (take-right funs 1))))
                                            (apply printout2 (cons main (cons purec? (cons debug? (cons shared? funs)))))))))))))))))))
          scm-files
          cc-files
          cc-obj-files)))

    (if (and shared? (> num-mains 0)) (compiler-error "shared library has toplevel expressions or defines"))
    (if (> num-mains 1) (compiler-error "program has toplevel expressions in multiple files, and so it generated multiple mains"))

    ; 2. compile
    (let ()
      (define cc-paths
        ; skipping over the install root, don't want that
        (let loop ((acc "") (paths (cdr paths)))
          (if (null? paths)
              acc
              (loop (string-append acc (sprintf " -I~A" (car paths))) (cdr paths)))))
      (benchmark "compile"
        (lambda ()
          (for-each
            (lambda (scm-file cc-file obj-file)
              (let ((path (realbasepath scm-file)))
                (define cc-cmd (sprintf "~A -I~A ~A ~A -c -o ~A ~A" cc path cc-paths cc-command obj-file cc-file))
                (if (and (not header?) (not bytecode?) (not transpile?) (not expand?))
                    (begin
                      (if verbose? (displayln cc-cmd))
                      (system cc-cmd)))))
            scm-files
            cc-files
            cc-obj-files))))

    ; 3. link
    (if (and (not header?) (not bytecode?) (not transpile?) (not expand?) (not object?))
        (let ()
          (define link-command-flags
            (string-append
              base-cc-flags
              (sprintf " -O~A" optimization)
              (if debug? " -g" "")
              ; TODO way to not link vscheme in
              (cond ((equal? platform "linux") " -lvscheme")
                    ((equal? platform "emscripten") " -Wl,--whole-archive -lvscheme -ldfile -s LLD_REPORT_UNDEFINED -s ALLOW_MEMORY_GROWTH=1 -s STACK_SIZE=2097152")
                    (else (sprintf " -L~A/x86_64-w64-mingw32/lib/ -lvscheme" install-root)))
              (if shared? " -fPIC -shared"
                          (if (equal? platform "emscripten")
                              ""
                              " -Wl,--no-as-needed"))))
          (define link-command
            (if out-file
                (sprintf "~A -o ~A" cc out-file)
                cc))
          (for-each
            (lambda (file) (set! link-command (string-append link-command " " file)))
            (append cc-obj-files (reverse obj-files)))
          (for-each
            (lambda (option) (set! link-command (string-append link-command option)))
            c-options)
          (set! link-command (string-append link-command link-command-flags))

          (if verbose? (displayln link-command))
          (system link-command)))

    ; 4. cleanup
    (if (and (not header?) (not bytecode?) (not transpile?) (not expand?) (not keep?))
        (for-each delete-file cc-files))
    (if (and (not header?) (not bytecode?) (not transpile?) (not expand?) (not object?) (not keep?))
        (for-each delete-file cc-obj-files))))
