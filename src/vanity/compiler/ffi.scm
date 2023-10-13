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
  (import (vanity core) (vanity compiler utils))

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

  (define (get-encoder type)
    (if (equal? type '(pointer void)) '((pointer void) . "VEncodeForeignPointer")
        (assv type '((void . #t)
                     (bool . "VEncodeBool")
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
                     (vword . "")
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
        #;'(pointer . "VCheckedDecodeForeignPointer")
        (assv type '((bool . "VCheckedDecodeBool")
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
                     (vword . "VCheckedDecodeVWORD")
                     (c-string . "VCheckedDecodeCString")
                     ; no FILE yet
                     ; yuckiness
                     (size_t . "VCheckedDecodeUnsignedLong")
                     ))))
  (define (mangle-foreign-function name)
    (sprintf "_V30~A_shim" name))
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
        (else (error "Declaration is not a single function" parse) #f)))
    (match expr
      (('##foreign.function lang decl)
       (if (not (equal? lang "C")) (error "Unsupported foreign function language" lang))
       (let ((parse (is-one-decl (deep-copy (parse-decl-c decl)))))
         (release-parse)
         (unwrap-function decl parse)))
      (else (error "Invalid foreign function syntax" expr))))

  (define (drop-const x)
    (match x
      (('const y) y)
      (else x)))
  (define (preprocess-declare-loop decl)
    ; assumes ret has already been preprocessed
    (match decl
      ((ret ("function" expr))
       `(function ,(drop-const ret) ,expr))
      ((ret ("function" expr ("parameter_list" args ...)))
       `(function ,(drop-const ret) ,expr . ,(map drop-const (preprocess-args args))))
      ((ret ("pointer" expr))
       (preprocess-declare-loop (list (list 'pointer ret) expr)))
      ((ret expr) `(variable ,ret ,expr))))
  (define (preprocess-declare decl)
    (preprocess-declare-loop (list (preprocess-type (car decl)) (cadr decl))))
  (define (preprocess-args args)
    (if (null? args) '()
        (cons
          (cadr (preprocess-declare (car args)))
          (preprocess-args (cdr args)))))
  (define (preprocess-type t)
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
         special)
        (else (error "unsupported type combination" (map list args '(special longs short unsigned signed))))))
    (define (append-const const? type)
      (if const? (list 'const type) type))
    (define (maybe-string->symbol x)
      (if (string? x) (string->symbol x) x))
    (let loop ((t (map maybe-string->symbol t)) (special #f) (const #f) (longs 0) (short #f) (unsigned #f) (signed #f))
      (if (null? t)
          (append-const
             const
             (decide (if special special 'int) longs short unsigned signed))
          (case (car t)
            ((const) (loop (cdr t) special #t longs short unsigned signed))
            ((restrict volatile)
             ; we don't care about either of these qualifiers, and never will
             (loop (cdr t) special const longs short unsigned signed))
            ((long) (loop (cdr t) special const (+ longs 1) short unsigned signed))
            ((short) (loop (cdr t) special const longs #t unsigned signed))
            ((unsigned) (loop (cdr t) special const longs short #t signed))
            ((signed) (loop (cdr t) special const longs short unsigned #t))
            (else (if special (error "Can only have one type in a declaration" (car t) special)
                      (loop (cdr t) (car t) const longs short unsigned signed))))
      )
    ))
  (define (unwrap-function decl expr)
    (let ((expr (preprocess-declare expr)))
      (match expr
        (('function ret name . args)
         (if (not (get-encoder ret)) (error "Unsupported return type in C foreign-function" expr))
         (if (not (string? name)) (error "Not a simple function declaration: ~A" expr))
         (for-each
             (lambda (arg)
               (if (not (get-decoder arg)) (error "Unsupported arg type in C foreign-function" name arg)))
             args)
         `(##foreign.function "C" ,decl ,ret ,name . ,args))
        (else (error "Unsupported C declaration" expr)))))
  (define (unwrap-declares parse)
    (match parse
      (("toplevel") '())
      (("toplevel" ("declaration" ret decl . declrest) . toprest)
       (cons
         (let ((ff (unwrap-function "" (list ret decl))))
          `(define ,(string->symbol (list-ref ff 4)) ,ff))
         (unwrap-declares `("toplevel" ("declaration" ,ret . ,declrest) . ,toprest))))
      (("toplevel" ("declaration" ret) . toprest) (unwrap-declares `("toplevel" . ,toprest)))))

  (define (resolve-foreign-import expr paths)
    (define parse-header-c (##vcore.function "VForeignParseHeaderC"))
    (define release-parse (##vcore.function "VForeignReleaseParse"))
    (match expr
      (('##foreign.import lang file)
       (if (not (equal? lang "C")) (error "Unsupported foreign function language" expr))
       (if (not (string? file)) (error "File must be a string" expr))
       (let* ((fd (search-open-input-file file paths) #;(open-input-file (string-append path "/" file)))
              (parse (deep-copy (parse-header-c fd))))
         (release-parse)
         (close-port fd)
         (cons
           ; because the files are compiled in /tmp/ don't want to have the search path include
           ; their origin location, hence #include <>
           `(##foreign.declare ,(sprintf "#include <~A>\n" file))
           (unwrap-declares parse))))
      (else (error "Invalid foreign import syntax" expr))))

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
