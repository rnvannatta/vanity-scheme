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

(define-library (vanity compiler ffi)
  (export mangle-foreign-function validate-foreign-function print-foreign-function resolve-foreign-import)
  (import (vanity core) (vanity compiler utils) (vanity compiler config))

  ; user exposed syntax:
  ;   foreign-declare -- toplevel
  ;   foreign-import  -- toplevel

  ; compiler only special forms:
  ;   declare - embeds c snippet
  ;   function - creates a procedure & declares

  ; example usage:
  ;  (foreign-import "C" "mylib.h")
  ;  (foreign-declare "C"
  ;     "double atan2(double);
  ;      void * make_window(int w, int h, char * title);
  ;      void poll_inputs(struct Window * win);
  ;      enum MyEnum { RED, GREEN, BLUE };")

  ; which may expand into
  ;  (foreign-embed "C" "include <mylib.h>") ; DONT DO THIS IN YOUR OWN CODE, PLEEEEEEASE
  ;  (define sqrtf (foreign-function "C" float "sqrtf" float))
  ;  (foreign-embed "C"
  ;     "double atan2(double);
  ;      void * make_window(int w, int h, char * title);
  ;      void poll_inputs(struct Window * win);")
  ;  (define atan2 (foreign-function "C" double "atan2" double))
  ;  (define make_window (foreign-function "C" (pointer void) "make_window" int int (pointer char)))
  ;  (define poll_inputs (foreign-function "C" void "poll_inputs" (pointer void)))
  ;  (define RED 0) (define GREEN 1) (define BLUE 2)

  ; and bulk files?
  ; (foreign-define "enum color { RED, GREEN, BLUE }; foreign-typedef unsigned GLuint; double sqrt(double);")
  ; does all the above, and binds the shim of sqrt to the symbol "sqrt"


  ; unfolds a declaration into the type, so const int *ptr which is (const int) (pointer ptr)
  ; becomes (pointer (const int)) ptr
  ; and drops superfluous consts from function signatures
  ; while also cleaning up the arguments of function signatures and dropping their variable names
  ; so const int foo(const int x) which is (const int) (function foo ((const int) x))
  ; becomes (int) (function foo (int))
  ; assumes ret has already been processes
  (define (reduce-declare ret decl table)
    (define (drop-const x)
      (match x
        (('const y) y)
        (else x)))
    (define (reduce-args args)
      (if (null? args) '()
          (cons
            (cadr (reduce-declare (reduce-type (caar args) table #f) (cadar args) table))
            (reduce-args (cdr args)))))
    (define (reduce-declare-loop ret decl)
      ; assumes ret has already been preprocessed
      (match decl
        (("function" expr)
         `(function ,expr ,(drop-const ret)))
        (("function" expr ("parameter_list" args ...))
         `(function ,expr ,(drop-const ret) . ,(map drop-const (reduce-args args))))
        (("pointer" expr)
         (reduce-declare-loop (list 'pointer ret) expr))
        (expr `(variable ,ret ,expr))))
    (reduce-declare-loop ret decl))
  ; simplifies a raw c type token stream into a more organized type
  ; for example `const int long * const x` has as input (const int long)
  ; and that's simplified to (const long-int)
  ; also discards storage qualifiers
  (define (find-typedef special table)
    (if (and (symbol? special) (not (memv special '(void float double _Bool))))
        (let loop ((table table))
          (cond ((null? table) (compiler-error "unknown typename" special))
                ((and (eqv? (caar table) 'typedef) (eqv? (cadar table) special)) (caddar table))
                (else (loop (cdr table)))))
        #f))
  (define (reduce-type t table storage-declaration?)
    (define (decide . args)
      (match args
        (('char 0 #f #f #f)
         'char)
        (('char 0 #f #t #f)
         'unsigned-char)
        (('char 0 #f #f #t)
         'signed-char)

        (('int 0 #f #f _)
         'int)
        (('int 0 #f #t #f)
         'unsigned-int)
        ; TODO assumes long = 64 bit
        (('int 1 #f #f _)
         'long)
        (('int 1 #f #t #f)
         'unsigned-long)

        (('int 2 #f #f _)
         'long)
        (('int 2 #f #t #f)
         'unsigned-long)

        (('int 0 #t #f _)
         'short)
        (('int 0 #t #t #f)
         'unsigned-short)

        ((special 0 #f #f #f)
         (cond ((and (pair? special) (equal? (car special) "enum")) 'unsigned-int)
               ((find-typedef special table) => (lambda (x) x))
               (else special)))
        (else (compiler-error "unsupported type combination" (map list args '(special longs short unsigned signed))))))
    (define (append-const const? type)
      (if const? (list 'const type) type))
    (define (maybe-string->symbol x)
      (if (string? x) (string->symbol x) x))
    (let loop ((t (map maybe-string->symbol t)) (storage #f) (special #f) (const #f) (longs 0) (short #f) (unsigned #f) (signed #f))
      (if (null? t)
          (append-const
             const
             (decide (if special special 'int) longs short unsigned signed))
          (case (car t)
            ((const) (loop (cdr t) storage special #t longs short unsigned signed))
            ((restrict volatile)
             ; we don't care about either of these qualifiers, and never will
             (loop (cdr t) storage special const longs short unsigned signed))
            ((static extern typedef register auto) 
             (if (not storage-declaration?) (compiler-error "Unexpected storage specifier in declaration") (car t))
             (if storage (compiler-error "Multiple storage specifiers in declaration" storage (car t)))
             (loop (cdr t) (car t) special const longs short unsigned signed))
            ((long) (loop (cdr t) storage special const (+ longs 1) short unsigned signed))
            ((short) (loop (cdr t) storage special const longs #t unsigned signed))
            ((unsigned) (loop (cdr t) storage special const longs short #t signed))
            ((signed) (loop (cdr t) storage special const longs short unsigned #t))
            (else (if special (compiler-error "Can only have one type in a declaration" (car t) special)
                      (loop (cdr t) storage (car t) const longs short unsigned signed)))))))

  ; assumes ret has already been processed
  (define (unwrap-typedef ret decl table)
    (let ((expr (reduce-declare ret decl table)))
      (match expr
        (('variable ret name)
         (if (not (string? name)) (compiler-error "Not a simple typedef" expr))
         `(typedef ,(string->symbol name) ,ret))
        (else (compiler-error "Unsupported C typedef" expr)))))
  ; assumes ret has already been processed
  (define (unwrap-function ret decl table)
    (let ((expr (reduce-declare ret decl table)))
      (match expr
        (('function name ret . args)
         (if (not (get-encoder ret)) (compiler-error "Unsupported return type in C foreign-function" expr))
         (if (not (string? name)) (compiler-error "Not a simple function declaration: ~A" expr))
         (for-each
             (lambda (arg)
               (if (not (get-decoder arg)) (compiler-error "Unsupported arg type in C foreign-function" name arg)))
             args)
         `(function ,(string->symbol name) ,ret . ,args))
        (else (compiler-error "Unsupported C declaration" expr)))))

  (define (unwrap-enums ret table)
    (define (unwrap-enums-iter enums val table)
      (if (null? enums) table
          (let ((val (if (cadar enums) (cadar enums) val)))
            (unwrap-enums-iter (cdr enums) (+ val 1)
              (cons `(enum ,(string->symbol (caar enums)) ,val) table)))))
    (let loop ((ret ret))
      (cond ((null? ret) table)
            ((and (pair? (car ret)) (equal? (caar ret) "enum"))
             (let ((enums (caddar ret)))
               (if enums (unwrap-enums-iter enums 0 table) table)))
            (else (loop (cdr ret))))))

  ; table is in reverse order, so from newest to oldest
  (define (unwrap-declares parse table)
    (match parse
      (("toplevel") table)
      (("toplevel" ("declaration" ret . decls) . toprest)
       (let ((typedef? (member "typedef" ret))
             (table (unwrap-enums ret table))
             (ret (reduce-type ret table #t)))
         (let loop ((mydecls decls) (table table))
          (if (null? mydecls)
              (unwrap-declares `("toplevel" . ,toprest) table)
              (loop 
                (cdr mydecls)
                (cons
                  (if typedef?
                      (unwrap-typedef ret (car mydecls) table)
                      (unwrap-function ret (car mydecls) table))
                  table))))))))
  ; also reverses the table
  (define (table->defines table acc)
    ; because we only permit functions and typedefs, you can doubly declare as much as you like
    ; as long as they match
    (define (duplicate-mismatch x entry table err-proc)
      (cond ((null? table) #f)
            ; keep searching
            ((not (eqv? x (cadar table))) (duplicate-mismatch x entry (cdr table) err-proc))
            ; mismatch, run the error proc
            ((not (equal? entry (car table))) (err-proc (car table)))
            ; they match, we're ok, but skip this
            (else #t)))
    (if (null? table) acc
        (match (car table)
          (('function name ret  . args)
           (if (duplicate-mismatch name (car table) (cdr table)
                (lambda (conflict) (compiler-error "variable redeclared as different symbol" (car table) conflict)))
               (table->defines (cdr table) acc)
               (table->defines
                 (cdr table)
                 (cons
                  `(define ,name (##foreign.function "C" "" ,ret ,(symbol->string name) . ,args))
                  acc))))
          (('enum name val)
           ; enum values cannot be declared twice
           (duplicate-mismatch name #f (cdr table)
            (lambda (conflict) (compiler-error "variable redeclared as different symbol" (car table) conflict)))
           (table->defines
             (cdr table)
             (cons
               `(define ,name ,val)
               acc)))
          (('typedef name val)
           (duplicate-mismatch name (car table) (cdr table)
            (lambda (conflict) (compiler-error "variable redeclared as different symbol" (car table) conflict)))
           (table->defines (cdr table) acc))
          (else (compiler-error "unknown entry in ffi table" (car table))))))

  ; not exposing outside this file because it only correctly copies the datatypes ffi.y returns
  (define (deep-copy x)
    (cond ((string? x) (string-copy x))
          ((pair? x) (cons (deep-copy (car x)) (deep-copy (cdr x))))
          (else x)))

  (define (validate-foreign-function expr)
    (define parse-decl-c (##vcore.function "VForeignParseDeclC"))
    (define release-parse (##vcore.function "VForeignReleaseParse"))
    (define (is-one-decl parse)
      (match parse
        (("toplevel" ("declaration" ret _)) (cdadr parse))
        (("naked_declaration" ret _) (cdr parse))
        (else (compiler-error "Declaration is not a single function" parse) #f)))
    (match expr
      (('##foreign.function lang decl)
       (if (not (equal? lang "C")) (compiler-error "Unsupported foreign function language" lang))
       (let ((parse (is-one-decl (deep-copy (parse-decl-c decl)))))
         (release-parse)
         (let ((ff (unwrap-function (reduce-type (car parse) '() #t) (cadr parse) '())))
           `(##foreign.function "C" ,decl ,(caddr ff) ,(cadr ff) . ,(cdddr ff)))))
      (else (compiler-error "Invalid foreign function syntax" expr))))

  (define (find-file file paths)
    (if (null? paths)
        (compiler-error "Unable to open header file" file)
        (let ((path (sprintf "~A/~A" (car paths) file)))
          (if (= 0 (system (sprintf "[ ~A ]" path)))
              path
              (find-file file (cdr paths))))))
  (define (make-preprocess-command file)
    (sprintf "gcc -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w ~A -I~A/~A" file install-root "include/vscheme/stdc/sysv_amd64/"))
  (define (resolve-foreign-import expr paths)
    (define parse-header-c (##vcore.function "VForeignParseHeaderC"))
    (define release-parse (##vcore.function "VForeignReleaseParse"))
    (match expr
      (('##foreign.import lang file)
       (if (not (equal? lang "C")) (compiler-error "Unsupported foreign function language" expr))
       (if (not (string? file)) (compiler-error "File must be a string" expr))
       (let* #;((fd (search-open-input-file file paths))
              (parse (deep-copy (parse-header-c fd))))
             ((cmd (make-preprocess-command (find-file file paths)))
              (fd (open-input-process cmd))
              (parse (deep-copy (parse-header-c fd))))
         (release-parse)
         (close-port fd)
         (cons
           ; because the files are compiled in /tmp/ don't want to have the search path include
           ; their origin location, hence #include <>
           `(##foreign.declare ,(sprintf "#include <~A>\n" file))
           (table->defines (unwrap-declares parse '()) '()))))
      (else (compiler-error "Invalid foreign import syntax" expr))))

  (define (mangle-foreign-function name)
    (sprintf "_V30~A_shim" name))

  (define (get-encoder type)
    (if #;(equal? type '(pointer void))
        ; a temporary thing that will become a compiler flag eventually
        (and (pair? type) (eqv? (car type) 'pointer))
        '((pointer void) . "VEncodeForeignPointer")
        (assv type '((void . #t)
                     (_Bool . "VEncodeBool")
                     (char . "VEncodeChar")
                     (signed-char . "VEncodeInt")
                     (unsigned-char . "VEncodeInt")
                     (short . "VEncodeInt")
                     (unsigned-short . "VEncodeInt")
                     (int . "VEncodeInt")
                     (unsigned-int . "VEncodeInt")
                     ; no long yet
                     ; no unsigned long yet
                     (double . "VEncodeDouble")
                     (float . "VEncodeDouble")
                     ; no strict float yet
                     (VWORD . "") ; TODO
                     ; no c string yet
                     ; no FILE yet
                    ))))
  (define (get-decoder type)
    (if (and (pair? type) (eqv? (car type) 'pointer))
        (match (cadr type)
          ('char '(c-string . "VCheckedDecodeCString"))
          (('const 'char) '(const-c-string . "VCheckedDecodeConstCString"))
          (('const 'void) '(const-void-pointer . "VCheckedDecodeConstVoidPtr"))
          ('void '(void-pointer . "VCheckedDecodeVoidPtr"))
          (else '(void-pointer . "VCheckedDecodeForeignPointer")))
        (assv type '((_Bool . "VCheckedDecodeBool")
                     (char . "VCheckedDecodeChar")
                     (signed-char . "VCheckedDecodeSignedChar")
                     (unsigned-char . "VCheckedDecodeUnsignedChar")
                     (short . "VCheckedDecodeShort")
                     (unsigned-short . "VCheckedDecodeUnsignedShort")
                     (int . "VCheckedDecodeInt")
                     (unsigned-int . "VCheckedDecodeInt")
                     (long . "VCheckedDecodeLong")
                     (unsigned-long . "VCheckedDecodeUnsignedLong")
                     (double . "VCheckedDecodeNumber")
                     (float . "VCheckedDecodeNumber")
                     ; no strict float yet
                     (VWORD . "VCheckedDecodeVWORD")
                     (c-string . "VCheckedDecodeCString")
                     ; no FILE yet
                     ))))
  (define (print-foreign-function expr)
    (match expr
      (('##foreign.function lang decl ret name args ...)
       (let ((mangled (mangle-foreign-function name))
             (names (iota (length args))))
         (define (print-arg arg argname)
           (printf "~A(_arg~A, \"~A\")" (cdr (get-decoder arg)) argname name))
         (printf "~A;~N" decl)
         (printf "void _V30~A_shim(V_CORE_ARGS, VWORD _k" name)
         (for-each (lambda (e) (printf ", VWORD _arg~A" e)) names)
         (printf ") {~N")
         (printf "  V_ARG_CHECK2(\"~A\", ~A, argc);~N" mangled (+ 1 (length args)))
         (printf "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" mangled (+ 1 (length args)) (+ 1 (length args)))
         (for-each (lambda (e) (printf ", _arg~A" e)) names)
         (printf ") {~N")
         (if (eqv? ret 'void)
             (printf "(~A(" name)
             (printf "    VWORD _ret = ~A(~A(" (cdr (get-encoder ret)) name))
         (if (pair? args)
             (begin
               (print-arg (car args) (car names))
               (for-each
                 (lambda (arg argname)
                  (printf ", ")
                  (print-arg arg argname))
                 (cdr args)
                 (cdr names))))
         (printf "));~N")
         (if (eqv? ret 'void)
             (printf "  V_CALL(_k, runtime, VVOID);~N")
             (printf "  V_CALL(_k, runtime, _ret);~N"))
         (printf "  }~N}~N"))))))
