(define-library (vanity compiler hygienic types)
  (import (vanity core) (only (vanity list) lset-xor any))
  (export
    make-scope scope? scope=? get-scope-bindings set-scope-bindings! global-scope
    get-scope-serial get-scope-provenance scope->string scope-set->string
    explain-scopes? all-registered-scopes
    set-expansion-deadline! expansion-timed-out?
    identifier?
    get-syntax-scopes set-syntax-scopes!

    make-syntax syntax? get-syntax-data set-syntax-data! ;get-syntax-flips set-syntax-flips!
    syntax-null? syntax-pair? syntax-cons syntax-car syntax-cdr
    syntax-caar syntax-cadr syntax-cdar syntax-cddr syntax-map syntax-append-map syntax-for-each syntax-list
    syntax-caddr
    syntax-vector? syntax-vector syntax-make-vector syntax-vector-ref syntax-vector-map syntax-vector-for-each
    lazy-flip-scope eager-flip-scope flip-scope
    )

  (define explain-scopes? (make-parameter #f))
  (define scope-registry '())
  (define (all-registered-scopes) scope-registry)
  ; a double: serials are display-only labels, and in vanity ints throw on overflow
  (define scope-serial-counter 0.0)

  (define-record-type scope
    (make-scope-impl bindings serial provenance)
    scope?
    (bindings get-scope-bindings set-scope-bindings!)
    (serial get-scope-serial)
    (provenance get-scope-provenance))
  ; provenance: global, lambda, letrec, letrec*, let-syntax, body, letrec-tmp, library-body,
  ; (intro . macro-name), or a fresh universe: (library . libname) / (declare . cname)
  (define make-scope
    (case-lambda
      (() (make-scope 'scope))
      ((provenance)
       (set! scope-serial-counter (+ scope-serial-counter 1.0))
       (let ((sc (make-scope-impl '() scope-serial-counter provenance)))
         (if (explain-scopes?) (set! scope-registry (cons sc scope-registry)))
         sc))))
  (define-constant scope=? ##vcore.eq?)
  (define global-scope (make-parameter (make-scope 'global)))

  (define (scope->string sc)
    (let ((p (get-scope-provenance sc)) (n (get-scope-serial sc)))
      (if (and (pair? p) (eq? (car p) 'intro))
          (sprintf "(intro#~A ~A)" n (cdr p))
          (sprintf "~A#~A" p n))))
  (define (scope-set->string scopes)
    (define (join sep strs)
      (if (null? strs)
          ""
          (let loop ((acc (car strs)) (strs (cdr strs)))
            (if (null? strs) acc (loop (string-append acc sep (car strs)) (cdr strs))))))
    (sprintf "(~A)" (join " " (map scope->string scopes))))

  (define expansion-deadline #f)
  (define (set-expansion-deadline! d) (set! expansion-deadline d))
  (define (expansion-timed-out?)
    (and expansion-deadline (> (current-jiffy) expansion-deadline)))

  ; we wrap syntax trees in this struct to defer flip operations
  (define-record-type syntax
    (make-syntax data flips)
    syntax?
    (data get-syntax-data-impl set-syntax-data!)
    (flips get-syntax-scopes set-syntax-scopes!))
  (define (identifier? x)
    (and (syntax? x) (symbol? (get-syntax-data-impl x))))

  ; semantics: we're doing what we deferred, which also is a deep copy
  ; such that semantically flip-scope is pure in spirit but it is deferred
  ; you can consider syntax to be a promise, where it is unforced when flips is nonnull
  (define (propogate-flips stx)
    (define scopes (get-syntax-scopes stx))
    (unless (null? scopes)
      (define data (get-syntax-data-impl stx))
      (define (flip stx)
        (cond
          ((syntax? stx)
           (make-syntax (get-syntax-data-impl stx) (lset-xor scope=? (get-syntax-scopes stx) scopes)))
          ((or (symbol? stx) (pair? stx)) (make-syntax stx scopes))
          ; literals don't need coloring
          (else stx)))
      (cond ((pair? data)
             (set-syntax-scopes! stx '())
             (set-syntax-data! stx (cons (flip (car data)) (flip (cdr data)))))
            ((vector? data)
             (set-syntax-scopes! stx '())
             (set-syntax-data! stx (vector-map flip data)))
            ; we can't flip atoms, nothing to recurse
            (else #f))))

  (define (get-syntax-data stx)
    (propogate-flips stx)
    (get-syntax-data-impl stx))

  (define (flip-scope-set set x)
    ; We want to prepend the new element to push the global scope to the back
    ; newer bindings being at the top means add-binding! adds to a thinner list
    (if (memq x set)
        (let loop ((set set))
          (cond
            ;((null? set) (cons x '()))
            ((eq? (car set) x) (cdr set))
            (else (cons (car set) (loop (cdr set))))))
        (cons x set)))
  (define (lazy-flip-scope stx x)
    (cond
      ((syntax? stx)
       (make-syntax (get-syntax-data-impl stx) (flip-scope-set (get-syntax-scopes stx) x)))
      ((or (symbol? stx) (pair? stx)) (make-syntax stx (list x)))
      ; literals don't need coloring
      (else stx)))

  ; We need flip-scope instead of a more intuitive add-scope
  ; for marking that needs to happen after macro-expansion.

  ; The more intuitive add-scope is not necessary, and while add-scope seems
  ; simpler, flip-scope is more scalable long term for an optimization
  ; that adds lazy scope marking to macro-expansion.
  (define (eager-flip-scope v sc)
    (cond
      ((identifier? v)
       (make-syntax
         (get-syntax-data-impl v)
         (flip-scope-set (get-syntax-scopes v) sc)))
      ((list? v)
       (map (lambda (e) (eager-flip-scope e sc)) v))
      (else v)))

  (cond-expand
    (#f
     (define flip-scope eager-flip-scope)
     (define syntax-null? null?)
     (define syntax-pair? pair?)
     (define syntax-cons cons)
     (define syntax-car car)
     (define syntax-cdr cdr)
     (define syntax-caar caar)
     (define syntax-cadr cadr)
     (define syntax-cdar cdar)
     (define syntax-cddr cddr)
     (define syntax-caddr caddr)
     (define syntax-map map)
     (define syntax-for-each for-each)
     (define syntax-list list)

     (define syntax-vector? vector?)
     (define syntax-vector vector)
     (define syntax-make-vector make-vector)
     (define syntax-vector-ref vector-ref)
     (define syntax-vector-map vector-map)
     (define syntax-vector-for-each vector-for-each)
    )
    (else
     (define (syntax-unpack x)
      (if (syntax? x)
          (begin (propogate-flips x) (get-syntax-data-impl x))
          x))

     (define flip-scope lazy-flip-scope)
     (define (syntax-null? x)
       (if (null? x) #t (and (syntax? x) (null? (get-syntax-data-impl x)))))
     (define (syntax-pair? x)
       (if (pair? x) #t (and (syntax? x) (pair? (get-syntax-data-impl x)))))
     (define syntax-cons cons)
     (define (syntax-car pair) (car (syntax-unpack pair)))
     (define (syntax-cdr pair) (cdr (syntax-unpack pair)))
     (define (syntax-caar pair) (syntax-car (syntax-car pair)))
     (define (syntax-cadr pair) (syntax-car (syntax-cdr pair)))
     (define (syntax-cdar pair) (syntax-cdr (syntax-car pair)))
     (define (syntax-cddr pair) (syntax-cdr (syntax-cdr pair)))
     (define (syntax-caddr pair) (syntax-car (syntax-cdr (syntax-cdr pair))))
     (define syntax-map
       (case-lambda
         ((f xs)
          (let loop ((xs xs))
            (if (syntax-null? xs)
                '()
                (cons (f (syntax-car xs)) (loop (syntax-cdr xs))))))
         ((f . xss)
          (let loop ((xss xss))
            (if (any syntax-null? xss)
                '()
                (cons (apply f (map syntax-car xss)) (loop (map syntax-cdr xss)))
                )))))
     (define syntax-for-each
       (case-lambda
         ((f xs)
          (unless (syntax-null? xs)
            (f (syntax-car xs))
            (syntax-for-each f (syntax-cdr xs))))
         ((f . xss)
          (let loop ((xss xss))
            (unless (any syntax-null? xss)
              (apply f (map syntax-car xss))
              (loop (map syntax-cdr xss)))))))
     (define syntax-list list)

     (define (syntax-vector? x)
      (or (vector? x) (and (syntax? x) (vector? (get-syntax-data-impl x)))))
     (define syntax-vector vector)
     (define syntax-make-vector make-vector)
     (define (syntax-vector-ref v i)
      (vector-ref (syntax-unpack v) i))
     (define (syntax-vector-map f . args)
       (apply vector-map f (map syntax-unpack args)))
     (define (syntax-vector-for-each f . args)
       (apply vector-for-each f (map syntax-unpack args)))
    ))

  (define (syntax-append-map f xs)
    (let loop ((xs xs))
      (if (syntax-null? xs)
          '()
          (append (f (syntax-car xs)) (loop (syntax-cdr xs))))))
)

