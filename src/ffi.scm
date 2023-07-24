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
  (export print-foreign-function)
  (import (vanity core) "utils")

  ; example usage:
  ; (foreign-function "C" double "atan2" double double)
  ; (foreign-function "C" c-string "strdup" c-string)
  ; (foreign-function "C" signed-char "idk" unsigned-int)

  ; bool
  ; char
  ; signed-char
  ; unsigned-char
  ; short
  ; unsigned-short
  ; int
  ; unsigned-int
  ; long
  ; unsigned-long
  ; double
  ; float
  ; strict-float
  ; vword
  ; c-string

  ; 
  ;
  (define (get-encoder type)
    (memv type '((bool . "VEncodeBool")
                 (char . "VEncodeChar")
                 (signed-char . "VEncodeInt")
                 (unsigned-char . "VEncodeInt")
                 (short . "VEncodeInt")
                 (unsigned-short . "VEncodeInt")
                 (int . "VEncodeInt")
                 ; no unsigned int yet
                 ; no long yet
                 ; no unsigned long yet
                 (double . "VEncodeNumber")
                 (float . "VEncodeNumber")
                 ; no strict float yet
                 (vword . "")
                 ; no c string yet
                )))
  (define (get-decoder type)
    (memv type '((bool . "VDecodeBool")
                 (char . "VDecodeChar")
                 (signed-char . "VDecodeSignedChar")
                 (unsigned-char . "VDecodeUnsignedChar")
                 (short . "VDecodeShort")
                 (unsigned-short . "VDecodeUnsignedShort")
                 (int . "VDecodeInt")
                 ; no unsigned int yet
                 ; no long yet
                 ; no unsigned long yet
                 (double . "VDecodeNumber")
                 (float . "VDecodeNumber")
                 ; no strict float yet
                 (vword . "")
                 ; no c string yet
                )))
  (define (print-foreign-function decl)
    (match decl
      (("C" ret name args ...)
       (let ((names (iota (length args))))
         (printf "void _V30~A_shim(V_CORE_ARGS, VWORD _k")
         (for-each (lambda (e) (printf ", VWORD _arg~A" e)) names)
         (printf ") {~N")
         (printf "  V_CALL(_k, runtime,~N")
       )
      )
    )
  )

  )
