; SPDX-FileCopyrightText: 2026 Daniel Ziltener
; SPDX-FileCopyrightText: 2026 Vanity Scheme contributors
;
; SPDX-License-Identifier: MIT
;
; Based on the SRFI 263 reference implementation by Daniel Ziltener:
; https://github.com/scheme-requests-for-implementation/srfi-263
; Adapted for Vanity Scheme.

(define-library (vanity srfi263)
  (import (vanity core) (vanity list))
  (export *the-root-object* slot? slot-getter slot-setter slot-type)

  (define-record-type slot
    (make-slot getter setter type)
    slot?
    (getter slot-getter)
    (setter slot-setter)
    (type slot-type))

  (define-record-type object-data
    (make-object-data* message-alist slot-list parent-list)
    object-data?
    (message-alist get-message-alist set-message-alist!)
    (slot-list get-slot-list set-slot-list!)
    (parent-list get-parent-list set-parent-list!))

  (define (make-object-data)
    (make-object-data* '() '() '()))

  ;; A mirror needs an implementation-only message for retrieving object data.
  ;; SRFI 260 makes this a symbol that outside code cannot practically guess.
  (define object-data-message (generate-symbol "srfi-263-object-data"))

  (define (delete-slot! obj-data name)
    (let* ((message-alist (get-message-alist obj-data))
           (slot-list (get-slot-list obj-data))
           (parent-list (get-parent-list obj-data))
           (setter? (lambda (item) (eq? (slot-setter item) name)))
           (is-setter? (find setter? slot-list))
           (matches? (lambda (item)
                       (or (eq? (slot-getter item) name)
                           (eq? (slot-setter item) name))))
           (matches (filter matches? slot-list)))
      (when (= 1 (length matches))
        (let ((old-slot (car matches)))
          (when (eq? 'parent (slot-type old-slot))
            (set-parent-list!
             obj-data
             (delete ((cdr (assq (slot-getter old-slot) message-alist)) #f #f)
                     parent-list)))
          (set-message-alist!
           obj-data
           (if is-setter?
               (alist-delete (slot-setter old-slot) message-alist)
               (alist-delete (slot-getter old-slot)
                             (alist-delete (slot-setter old-slot) message-alist))))
          (set-slot-list!
           obj-data
           (if is-setter?
               (map (lambda (item)
                      (if (setter? item)
                          (make-slot (slot-getter item) #f (slot-type item))
                          item))
                    slot-list)
               (remove matches? slot-list)))))))

  (define (slot-add-message-name type)
    (case type
      ((value) 'set-value-slot!)
      ((method) 'set-method-slot!)
      ((parent) 'set-parent-slot!)))

  (define (gen-accessors type getter-name setter-name value)
    (cons
     (case type
       ((value parent) (lambda (self resend) value))
       ((method) value))
     (and setter-name
          (lambda (self resend replacement)
            (apply self (slot-add-message-name type) getter-name
                   (if setter-name
                       (list setter-name replacement)
                       replacement))))))

  (define (set-object-data-slots! obj-data type getter-name getter setter-name setter)
    (let ((new-messages (if setter
                            `((,getter-name . ,getter) (,setter-name . ,setter))
                            `((,getter-name . ,getter)))))
      (set-message-alist! obj-data (append new-messages (get-message-alist obj-data)))
      (set-slot-list! obj-data
                      (cons (make-slot getter-name setter-name type)
                            (get-slot-list obj-data)))))

  (define (set-slot! obj-data type getter-name . args)
    (let* ((has-setter? (< 1 (length args)))
           (setter-name (and has-setter? (car args)))
           (value (if has-setter? (cadr args) (car args))))
      (let* ((accessors (gen-accessors type getter-name setter-name value))
             (getter (car accessors))
             (setter (cdr accessors)))
        (delete-slot! obj-data getter-name)
        (set-object-data-slots! obj-data type getter-name getter setter-name setter)
        (when (eq? type 'parent)
          (set-parent-list! obj-data (cons value (get-parent-list obj-data)))))))

  (define (method-finder name message-alist)
    (lambda (self)
      (cond ((assq name message-alist) => cdr)
            ((assq name (get-message-alist ((self 'mirror) object-data-message))) => cdr)
            (else #f))))

  (define (recursive-lookup self checker skip?)
    (cond
      ((and (not skip?) (checker self))
       => (lambda (handler) (cons handler #t)))
      (else
       (let loop ((parents (get-parent-list ((self 'mirror) object-data-message)))
                  (handlers '())
                  (handler #f)
                  (found? #f))
         (if (pair? parents)
             (let* ((result (recursive-lookup (car parents) checker #f))
                    (new-handler (car result))
                    (new-found? (cdr result)))
               (loop (cdr parents)
                     (if new-found? (lset-adjoin eq? handlers new-handler) handlers)
                     (if new-found? new-handler handler)
                     (or new-found? found?)))
             (if handler
                 (if (= 1 (length handlers))
                     (cons handler found?)
                     (cons 'ambiguous-message-send #f))
                 (cons 'message-not-understood #f)))))))

  (define (recursive-ancestor-collector self)
    (let ((parents (get-parent-list ((self 'mirror) object-data-message))))
      (if (null? parents)
          (list self)
          (apply lset-union eq? parents (map recursive-ancestor-collector parents)))))

  (define (recursive-slot-collector self)
    (apply lset-union
           (lambda (a b) (eq? (slot-getter a) (slot-getter b)))
           '()
           (map (lambda (object)
                  (get-slot-list ((object 'mirror) object-data-message)))
                (recursive-ancestor-collector self))))

  (define (make-resender caller message)
    (lambda (target-override . args)
      (let ((target (if target-override target-override caller)))
        (send-with-error-handling caller target message '()
                                  (not target-override) args))))

  (define (send-with-error-handling caller method-lookup method-name message-alist parents-only args)
    (let* ((result (recursive-lookup method-lookup
                                     (method-finder method-name message-alist)
                                     parents-only))
           (method (car result)))
      (apply method caller (make-resender caller method-name) args)))

  (define (*object* obj-data)
    (letrec ((handler
              (lambda (message . args)
                (send-with-error-handling handler handler message
                                          (get-message-alist obj-data) #f args))))
      handler))

  (define (set-method-slot! obj-data name . args)
    (apply set-slot! obj-data 'method name args))

  (define (populate-mirror mirror mirror-data obj-data owner)
    (for-each
     (lambda (name proc) (set-method-slot! mirror-data name proc))
     (list object-data-message 'immediate-message-alist 'has-ancestor
                               'immediate-ancestor-list 'full-ancestor-list
                               'immediate-slot-list 'full-slot-list)
     (list (lambda (self resend) obj-data)
           (lambda (self resend) (list-copy (get-message-alist obj-data)))
           (lambda (self resend object)
             (and (memq object (cdr (recursive-ancestor-collector owner))) #t))
           (lambda (self resend) (list-copy (get-parent-list obj-data)))
           (lambda (self resend) (cdr (recursive-ancestor-collector owner)))
           (lambda (self resend) (list-copy (get-slot-list obj-data)))
           (lambda (self resend) (recursive-slot-collector owner))))
    mirror)

  (define (derive-object object mirror?)
    (let* ((obj-data (make-object-data))
           (derived-object (*object* obj-data)))
      (set-slot! obj-data 'parent 'parent object)
      (set-method-slot!
       obj-data 'mirror
       (lambda (self resend)
         (let* ((result (derive-object (object 'mirror) #t))
                (new-mirror (car result))
                (new-mirror-data (cdr result)))
           (populate-mirror new-mirror new-mirror-data obj-data derived-object))))
      (when mirror?
        (set-method-slot!
         obj-data 'derive
         (lambda (self resend)
           (let* ((result (derive-object self #t))
                  (new-object (car result)))
             new-object))))
      (cons derived-object obj-data)))

  (define *the-root-object*
    (let* ((obj-data (make-object-data))
           (object (*object* obj-data)))
      (set-method-slot!
       obj-data 'set-method-slot!
       (lambda (self resend name . args)
         (apply set-method-slot! ((self 'mirror) object-data-message) name args)))
      (set-method-slot!
       obj-data 'mirror
       (lambda (self resend)
         (let* ((result (derive-object object #t))
                (root-mirror (car result))
                (mirror-data (cdr result)))
           (populate-mirror root-mirror mirror-data obj-data object))))
      (set-method-slot!
       obj-data 'derive
       (lambda (self resend)
         (car (derive-object self #f))))
      (set-method-slot!
       obj-data 'copy
       (lambda (self resend)
         (let ((mirror (self 'mirror))
               (new-data (make-object-data)))
           (set-message-alist! new-data (list-copy (mirror 'immediate-message-alist)))
           (set-slot-list! new-data (list-copy (mirror 'immediate-slot-list)))
           (set-parent-list! new-data (list-copy (mirror 'immediate-ancestor-list)))
           (*object* new-data))))
      (set-method-slot!
       obj-data 'delete-slot!
       (lambda (self resend name)
         (delete-slot! ((self 'mirror) object-data-message) name)))
      (set-method-slot!
       obj-data 'set-value-slot!
       (lambda (self resend name . args)
         (apply set-slot! ((self 'mirror) object-data-message) 'value name args)))
      (set-method-slot!
       obj-data 'set-parent-slot!
       (lambda (self resend name . args)
         (apply set-slot! ((self 'mirror) object-data-message) 'parent name args)))
      (set-method-slot!
       obj-data 'message-not-understood
       (lambda (self resend message args)
         (error "Message not understood" self message args)))
      (set-method-slot!
       obj-data 'ambiguous-message-send
       (lambda (self resend message args)
         (error "Message ambiguous" self message args)))
      object)))
