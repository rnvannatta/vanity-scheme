; Copyright 2026 Richard N Van Natta
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

(define-library (vanity compiler hygienic resolve)
  (import
    (except (vanity core) hash-table? make-hash-table hash-table-ref hash-table-set! hash-table-delete! hash-table->alist)
    (vanity hashtable)
    (vanity list)
    (only (vanity compiler utils) compiler-error)
    (vanity compiler hygienic types))
  (export
    add-binding! find-all-matching-bindings resolve-identifier find-exact-binding
    register-universe-binding! universe-binding? binding-name user-toplevel-identifier?
    bound-identifier=? free-identifier=? literal-identifier=? literal-keyword?)

  (define binding-epochs (make-hash-table eq? current-hash #f #t))
  (define binding-clock 0.0)

  (define (add-binding! id binding)
    (set! binding-clock (+ binding-clock 1.0))
    (hash-table-set! binding-epochs (get-syntax-data id) binding-clock)
    ; We want to avoid the global scope to avoid cluttering it.
    ; It's not a correctness problem but is a perf one, and does result in a leak.
    (let* ((scopes (get-syntax-scopes id))
           (scope (car scopes))
           (scope (if (and (eq? scope (global-scope)) (pair? (cdr scopes))) (cadr scopes) scope)))
      (set-scope-bindings! scope (cons (cons id binding) (get-scope-bindings scope)))))

  (define (check-unambiguous id max-id candidate-ids)
    (define id-scopes (get-syntax-scopes (car max-id)))
    (for-each
      (lambda (e)
        (unless (scope-set<= (get-syntax-scopes (car e)) id-scopes)
          (if (explain-scopes?) (explain-ambiguity id max-id candidate-ids))
          (compiler-error "ambiguous identifier"
            (get-syntax-data (car max-id))
            (sprintf "use site ~A" (scope-set->string (get-syntax-scopes id)))
            (sprintf "winner ~A" (scope-set->string id-scopes))
            (sprintf "incomparable candidate ~A" (scope-set->string (get-syntax-scopes (car e)))))))
      candidate-ids))
  (define (explain-ambiguity id max-id candidate-ids)
    ; error-path only, under --explain-scopes
    (define err (current-error-port))
    (define winner-scopes (get-syntax-scopes (car max-id)))
    (format err "  use site: ~A ~A~N" (get-syntax-data id) (scope-set->string (get-syntax-scopes id)))
    (format err "  winner:   ~A~N" (scope-set->string winner-scopes))
    (for-each
      (lambda (e)
        (unless (eq? e max-id)
          (define e-scopes (get-syntax-scopes (car e)))
          (format err "  candidate: ~A~N" (scope-set->string e-scopes))
          (unless (scope-set<= e-scopes winner-scopes)
            (format err "    incomparable with winner; symmetric difference ~A~N"
                    (scope-set->string (scope-set-xor e-scopes winner-scopes))))))
      candidate-ids))
  (define (argmax f xs)
    (cdr
      (fold
        (lambda (a b)
          (let ((fa (f a)))
            (if (> fa (car b)) (cons fa a) b)))
        (cons (f (car xs)) (car xs))
        (cdr xs))))

  (define (find-all-matching-bindings id)
    (define id-sym (get-syntax-data id))
    (define all-id-scopes (get-syntax-scopes id))
    (let loop ((rest-id-scopes all-id-scopes))
      (if (null? rest-id-scopes)
          '()
          (append
            (filter
              (lambda (e)
                (and (eq? (get-syntax-data (car e)) id-sym)
                     (scope-set<= (get-syntax-scopes (car e)) all-id-scopes)))
              (get-scope-bindings (car rest-id-scopes)))
            (loop (cdr rest-id-scopes))))))
  (define (resolve-identifier-uncached id)
    (define candidate-ids (find-all-matching-bindings id))
    (if (null? candidate-ids)
        #f
        (let ((max-id (argmax (lambda (e) (length (get-syntax-scopes (car e)))) candidate-ids)))
          (check-unambiguous id max-id candidate-ids)
          (cdr max-id))))
  ; Only a binding of the same symbol can change a resolution, and an
  ; identifier's scopes are never mutated (flips build new syntax objects),
  ; so a cached result holds until add-binding! bumps the symbol's epoch.
  (define (resolve-identifier id)
    (let ((epoch (hash-table-ref binding-epochs (get-syntax-data id) (lambda () 0.0)))
          (cache (get-syntax-cache id)))
      (if (and cache (eqv? (car cache) epoch))
          (cdr cache)
          (let ((binding (resolve-identifier-uncached id)))
            (set-syntax-cache! id (cons epoch binding))
            binding))))
  (define (find-exact-binding id)
    (define id-sym (get-syntax-data id))
    (define all-id-scopes (get-syntax-scopes id))
    (let loop ((rest-id-scopes all-id-scopes))
      (if (null? rest-id-scopes)
          #f
          (let loop2 ((bindings (get-scope-bindings (car rest-id-scopes))))
            (cond
              ((null? bindings) (loop (cdr rest-id-scopes)))
              ((and (eq? (get-syntax-data (caar bindings)) id-sym)
                    (scope-set= (get-syntax-scopes (caar bindings)) all-id-scopes))
               (cdar bindings))
              (else (loop2 (cdr bindings))))))))

  ; Binding keys are what expansion dispatches on and keys the expand env
  ; with, so a user toplevel define of e.g. when must not reuse core when's
  ; key. Universe-level keys are therefore gensyms (core forms excepted), and
  ; this maps each to the name resolve emits for it. Lexical keys are absent.
  (define universe-bindings (make-hash-table eq? current-hash))
  (define (register-universe-binding! key name)
    (hash-table-set! universe-bindings key name))
  (define (universe-binding? key)
    (and (hash-table-ref universe-bindings key (lambda () #f)) #t))
  (define (binding-name key)
    (hash-table-ref universe-bindings key (lambda () key)))

  ; written by the user at universe level, as opposed to introduced by a macro
  (define (user-toplevel-identifier? id)
    (scope-set= (get-syntax-scopes id) (list (global-scope) (toplevel-scope))))

  (define (bound-identifier=? a b)
    (and (eq? (get-syntax-data a) (get-syntax-data b))
         (scope-set= (get-syntax-scopes a) (get-syntax-scopes b))))
  (define (free-identifier=? a b)
    (let ((ba (resolve-identifier a))
          (bb (resolve-identifier b)))
      (if (or ba bb)
          (eq? ba bb)
          (eq? (get-syntax-data a) (get-syntax-data b)))))
  ; SRFI-72: an unbound identifier is a toplevel reference, so a user's
  ; toplevel (define else ...) doesn't stop else matching as a literal
  (define (literal-identifier=? a b)
    (define (universe-level? id)
      (let ((binding (resolve-identifier id)))
        (or (not binding) (universe-binding? binding))))
    (or (free-identifier=? a b)
        (and (eq? (get-syntax-data a) (get-syntax-data b))
             (universe-level? a)
             (universe-level? b))))
  (define (literal-keyword? x sym)
    (and (identifier? x)
         (eq? (get-syntax-data x) sym)
         (literal-identifier=? x (make-syntax sym (list (global-scope))))))
)
