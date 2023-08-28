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

(define-library "ffi"
  (export mangle-foreign-function validate-foreign-function print-foreign-function resolve-foreign-import)
  (import (vanity core) "utils")

  ; total syntax:
  ;   declare - adds c snippet and adds info to ffi interface
  ;   function - creates a procedure, optionally also declaring
  ;   define - does both declare and define
  ;   foreign-import - the preferred

  ; example usage:
  ; (foreign-function "C" double "atan2" double double)
  ; (foreign-function "C" c-string "strdup" c-string)
  ; (foreign-function "C" signed-char "idk" unsigned-int)

  ; 3 syntaxes:
  ; (foreign-function lang ret name args ...) purely binding a foreign function, it must be declared
  ; -- (foreign-function "C" double "sqrt" double)
  ; (foreign-function lang decl ret name args ...) binding and declaring a foreign function
  ; -- (foreign-function "C" "double sqrt(double);" double sqrt double)
  ; (foreing-function lang decl) binding and declaring a foreign function, with parsed types
  ; -- (foreign-function "C" "double sqrt(double);")

  ; what about typedefs?
  ; (foreign-typedef "C" "typedef unsigned GLuint;" unsigned "GLuint")
  ; => informs ffi decoder that GLuint is an alias for unsigned

  ; and enums?
  ; (foreign-enum "C" "enum color { RED, GREEN, BLUE };")
  ; => informs ffi decoder that enum color is an alias for int
  ; => binds RED, GREEN, BLUE as immutable variables

  ; and bulk files?
  ; (foreign-define "enum color { RED, GREEN, BLUE }; foreign-typedef unsigned GLuint; double sqrt(double);")
  ; does all the above, and binds the shim of sqrt to the symbol "sqrt"

  (define (get-encoder type)
    (assv type '((bool . "VEncodeBool")
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
                )))
  (define (get-decoder type)
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
                 )))
  (define (mangle-foreign-function name)
    (sprintf "_V30~A_shim" name))
  ; not exposing outside this file because it only correctly copies the datatypes ffi.y returns
  (define (deep-copy x)
    (cond ((string? x) (string-copy x))
          ((pair? x) (cons (deep-copy (car x)) (deep-copy (cdr x))))
          (else x)))
  (define (validate-args expr)
    (match expr
      (('##foreign.function lang decl ret name args ...)
         (if (not (string? decl)) (error "Expected declaration string" expr decl))
         (if (not (equal? lang "C")) (error "Unsupported foreign function language" lang))
         (if (not (get-encoder ret)) (error "Unsupported return type in C foreign-function" expr ret))
         (if (not (string? name)) (error "Foreign function name must be a string: ~A" name))
         (for-each
           (lambda (arg)
             (if (not (get-decoder arg)) (error "Unsupported arg type in C foreign-function ~A: ~A" name arg)))
           args)
         expr)))
  (define (unwrap-function decl ret name args)
    (match args
     (()
      (validate-args `(##foreign.function "C" ,decl ,ret ,name)))
     ((("parameter_list" type ...))
      (validate-args `(##foreign.function "C" ,decl ,(string->symbol ret) ,name . ,(map string->symbol (map car type)))))
     (else (error "Unsupported C declaration" `("declaration" ,ret ("function" ,name . ,args))))))
  (define (validate-foreign-function expr)
    (define parse-decl-c (##vcore.function "VForeignParseDeclC"))
    (define release-parse (##vcore.function "VForeignReleaseParse"))
    (define (is-one-function parse)
      (match parse
        (("toplevel" ("declaration" ret ("function" . _))) (cadr parse))
        (("naked_declaration" ret ("function" . _)) (cons "declaration" (cdr parse)))
        (else (error "Declaration is not a single function" parse) #f)))
    (match expr
      (('##foreign.function lang decl)
       (if (not (equal? lang "C")) (error "Unsupported foreign function language" lang))
       (let ((parse (is-one-function (deep-copy (parse-decl-c decl)))))
         (release-parse)
         (match parse
           (("declaration" ret ("function" name))
            (validate-args `(##foreign.function "C" ,decl ,ret ,name)))
           (("declaration" ret ("function" name ("parameter_list" type ...)))
            (validate-args `(##foreign.function "C" ,decl ,(string->symbol ret) ,name . ,(map string->symbol (map car type)))))
           (else (error "Unsupported C declaration" parse)))))
      (else (error "Invalid foreign function syntax" expr))))

  (define (unwrap-declares parse)
    (match parse
      (("toplevel") '())
      (("toplevel" ("declaration" ret ("function" name . args) . declrest) . toprest)
       (cons
         `(define ,(string->symbol name) ,(unwrap-function "" ret name args))
         (unwrap-declares `("toplevel" ("declaration" ,ret . ,declrest) . ,toprest))))
      (("toplevel" ("declaration" ret) . toprest) (unwrap-declares `("toplevel" . ,toprest)))))
  (define (resolve-foreign-import expr path)
    (define parse-header-c (##vcore.function "VForeignParseHeaderC"))
    (define release-parse (##vcore.function "VForeignReleaseParse"))
    (match expr
      (('##foreign.import lang file)
       (if (not (equal? lang "C")) (error "Unsupported foreign function language" expr))
       (if (not (string? file)) (error "File must be a string" expr))
       (let* ((fd (open-input-file (string-append path "/" file)))
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
         (printf "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A" mangled (+ 1 (length args)) (+ 1 (length args)))
         (for-each (lambda (e) (printf ", _arg~A" e)) names)
         (printf ") {~N")
         (printf "    VWORD _ret = ~A(~A(" (cdr (get-encoder ret)) name)
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
         (printf "  V_CALL(_k, runtime, _ret);~N")
         (printf "  }~N}~N"))))))
