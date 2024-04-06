; Copyright 2023-2024 Richard N Van Natta
;
; This file is part of the Vanity Scheme Runtime.
;
; The Vanity Scheme Runtime is free software: you can redistribute it
; and/or modify it under the terms of the GNU Lesser General Public
; License as published by the Free Software Foundation, either version
; 2.1 of the License, or (at your option) any later version.
; 
; The Vanity Scheme Runtime is distributed in the hope that it will be
; useful, but WITHOUT ANY WARRANTY; without even the implied warranty
; of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
; Lesser General Public License for more details.
;
; You should have received a copy of the GNU Lesser General Public
; License along with the Vanity Scheme Runtime.
;
; If not, see <https://www.gnu.org/licenses/>.
;
; This work is published with additional permission, the Vanity Scheme
; Runtime Library Exceptions, which should have been included with the
; Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

(define-library (vanity seed)
  (export
    ##vcore.setter
    ##vcore.mutator)

  (define setter-table (##vcore.make-hash-table ##vcore.eq? #f 32))
  (define (##vcore.setter func)
    (##vcore.hash-table-ref setter-table func
      (lambda ()
        (let ((err (##vcore.stderr->port)))
          (##vcore.display-word "set!: procedure doesn't have a setter: " err)
          (##vcore.write func err)
          (##vcore.newline err)
          (##vcore.abort)))))
  (define ##vcore.set-setter!
    (let ((set-setter!  (lambda (getter setter) (##vcore.hash-table-set! setter-table getter setter))))
      (set-setter! ##vcore.setter set-setter!)
      (set-setter! ##vcore.car ##vcore.set-car!)
      (set-setter! ##vcore.cdr ##vcore.set-cdr!)
      (set-setter! ##vcore.vector-ref ##vcore.vector-set!)
      (set-setter! ##vcore.string-ref ##vcore.string-set!)
      set-setter!))

  (define mutator-table (##vcore.make-hash-table ##vcore.eq? #f 32))
  (define (##vcore.mutator func)
    (##vcore.hash-table-ref mutator-table func
      (lambda ()
        (let ((err (##vcore.stderr->port)))
          (##vcore.display-word "set!: procedure doesn't have a mutator: " err)
          (##vcore.write func err)
          (##vcore.newline err)
          (##vcore.abort)))))
  (define ##vcore.set-mutator!
    (let ((set-mutator! (lambda (getter mutator) (##vcore.hash-table-set! mutator-table getter mutator))))
      (##vcore.set-setter! ##vcore.mutator set-mutator!)
      (set-mutator! ##vcore.car (lambda (pair proc) (##vcore.set-car! pair (proc (##vcore.car pair)))))
      (set-mutator! ##vcore.cdr (lambda (pair proc) (##vcore.set-cdr! pair (proc (##vcore.cdr pair)))))
      (set-mutator! ##vcore.vector-ref (lambda (vec i proc) (##vcore.vector-set! vec i (proc (##vcore.vector-ref vec i)))))
      (set-mutator! ##vcore.string-ref (lambda (vec i proc) (##vcore.string-set! vec i (proc (##vcore.string-ref vec i)))))
      set-mutator!)))
