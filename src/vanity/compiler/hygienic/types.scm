(define-library (vanity compiler hygienic types)
  (import (vanity core) (only (vanity list) any))
  (export
    make-scope scope? scope=? get-scope-bindings set-scope-bindings! global-scope toplevel-scope
    get-scope-serial get-scope-provenance scope->string scope-set->string
    scope-set-xor scope-set<= scope-set=
    current-phase make-multi-scope multi-scope? get-multi-scope-reps set-multi-scope-init!
    get-scope-owner get-scope-phase scope-at scope-in-set-at? scope-set<=-at
    explain-scopes? all-registered-scopes
    set-expansion-deadline! expansion-timed-out?
    identifier?
    get-syntax-scopes set-syntax-scopes!

    make-syntax syntax? get-syntax-data set-syntax-data! get-syntax-cache set-syntax-cache!
    syntax-null? syntax-pair? syntax-cons syntax-car syntax-cdr
    syntax-caar syntax-cadr syntax-cdar syntax-cddr syntax-map syntax-append-map syntax-for-each syntax-list
    syntax-caddr
    syntax-vector? syntax-vector syntax-make-vector syntax-vector-ref syntax-vector-map syntax-vector-for-each
    lazy-flip-scope eager-flip-scope flip-scope
    syntax-object->datum datum->syntax-object
    syntax-length syntax-proper-list? syntax-undot-list syntax->list
    )

  (define explain-scopes? (make-parameter #f))
  (define scope-registry '())
  (define (all-registered-scopes) scope-registry)
  ; a double: serials are display-only labels, and in vanity ints throw on overflow
  (define scope-serial-counter 0.0)

  (define current-phase (make-parameter 0))

  ; A scope is ordinary, a multi-scope, or a multi-scope's representative
  ; for one phase. The universe roots are multi-scopes: identifiers carry
  ; the multi-scope, while bindings live in its per-phase representatives,
  ; so a binding's scope set holds representatives and never multi-scopes.
  ; link/extra are (owner . phase) on a representative and (reps . init) on
  ; a multi-scope, where reps is an alist phase -> representative and init,
  ; if not #f, is called as (init ms phase) on each new representative.
  ; Both are #f on an ordinary scope. A multi-scope's bindings are #f, so a
  ; lookup's scope walk tells it apart with the one accessor it already makes.
  (define-record-type scope
    (make-scope-impl bindings serial provenance link extra)
    scope?
    (bindings get-scope-bindings set-scope-bindings!)
    (serial get-scope-serial)
    (provenance get-scope-provenance)
    (link get-scope-owner set-scope-owner!)
    (extra get-scope-phase set-scope-phase!))
  (define get-multi-scope-reps get-scope-owner)
  (define set-multi-scope-reps! set-scope-owner!)
  (define get-multi-scope-init get-scope-phase)
  (define set-multi-scope-init! set-scope-phase!)
  (define (multi-scope? sc) (not (get-scope-bindings sc)))

  ; provenance: global, program, lambda, letrec, letrec*, let-syntax, letrec-syntax, body,
  ; body-tmp, letrec-tmp, (intro . macro-name), (use macro-name . definition-context),
  ; or a fresh universe's pair:
  ; (library-global . libname) + (library . libname) / (declare-global . cname) + (declare . cname)
  (define (new-scope bindings provenance link extra)
    (set! scope-serial-counter (+ scope-serial-counter 1.0))
    (let ((sc (make-scope-impl bindings scope-serial-counter provenance link extra)))
      (if (explain-scopes?) (set! scope-registry (cons sc scope-registry)))
      sc))
  (define make-scope
    (case-lambda
      (() (make-scope 'scope))
      ((provenance) (new-scope '() provenance #f #f))))
  (define (make-multi-scope provenance init) (new-scope #f provenance '() init))
  (define (scope-at sc phase)
    (if (multi-scope? sc)
        (let ((e (assv phase (get-multi-scope-reps sc))))
          (if e
              (cdr e)
              (let ((rep (new-scope '() (get-scope-provenance sc) sc phase)))
                ; registered before init runs: init binds into rep via scope-at
                (set-multi-scope-reps! sc (cons (cons phase rep) (get-multi-scope-reps sc)))
                (let ((init (get-multi-scope-init sc)))
                  (if init (init sc phase)))
                rep)))
        sc))
  (define-constant scope=? ##vcore.eq?)
  (define global-scope (make-parameter (make-multi-scope 'global #f)))
  ; Every universe has two layers: global-scope binds the core forms, and
  ; user source additionally carries toplevel-scope, which introduced
  ; identifiers lack. Without the second layer a user binder around a macro's
  ; introduced reference would carry a subset of its scopes and capture it.
  (define toplevel-scope (make-parameter (make-multi-scope 'program #f)))

  (define (scope->string sc)
    (define owner (and (not (multi-scope? sc)) (get-scope-owner sc)))
    (if owner
        (sprintf "~A@~A" (scope->string owner) (get-scope-phase sc))
        (let ((p (get-scope-provenance sc)) (n (get-scope-serial sc)))
          (cond
            ((and (pair? p) (eq? (car p) 'intro)) (sprintf "(intro#~A ~A)" n (cdr p)))
            ((and (pair? p) (eq? (car p) 'use)) (sprintf "(use#~A ~A)" n (cadr p)))
            (else (sprintf "~A#~A" p n))))))
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
    (make-syntax-impl data flips cache)
    syntax?
    (data get-syntax-data-impl set-syntax-data!)
    (flips get-syntax-scopes set-syntax-scopes!)
    ; #f or a resolution record, owned by resolve-identifier
    (cache get-syntax-cache set-syntax-cache!))
  (define (make-syntax data flips) (make-syntax-impl data flips #f))
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
           (make-syntax-impl (get-syntax-data-impl stx) (scope-set-xor (get-syntax-scopes stx) scopes) #f))
          ((or (symbol? stx) (pair? stx)) (make-syntax-impl stx scopes #f))
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
  (define (scope-set<= a b)
    (or (eq? a b)
        (let loop ((a a))
          (or (null? a) (and (memq (car a) b) (loop (cdr a)))))))
  (define (scope-set= a b)
    (or (eq? a b)
        (and (= (length a) (length b)) (scope-set<= a b))))
  ; Is s, from a binding's scope set, in identifier scope set ids at phase?
  ; Only representatives have a truthy owner here, since binding scope sets
  ; never hold multi-scopes.
  (define (scope-in-set-at? s ids phase)
    (or (memq s ids)
        (let ((owner (get-scope-owner s)))
          (and owner (eqv? (get-scope-phase s) phase) (memq owner ids)))))
  ; scope-in-set-at? inlined as nested ifs: an and/or in test position gets a
  ; let-bound join continuation, allocated even when memq succeeds
  (define (scope-set<=-at entry-scopes ids phase)
    (let loop ((a entry-scopes))
      (cond
        ((null? a) #t)
        ((memq (car a) ids) (loop (cdr a)))
        (else
          (let ((owner (get-scope-owner (car a))))
            (if owner
                (if (eqv? (get-scope-phase (car a)) phase)
                    (if (memq owner ids) (loop (cdr a)) #f)
                    #f)
                #f))))))
  ; Reproduces (lset-xor eq? a b)'s element order exactly: add-binding! files
  ; a binding under the car of its scope set, and scan order breaks argmax ties.
  (define (scope-set-xor a b)
    (define (minus xs ys)
      (let loop ((xs xs))
        (cond
          ((null? xs) '())
          ((memq (car xs) ys) (loop (cdr xs)))
          (else (cons (car xs) (loop (cdr xs)))))))
    (define (disjoint? xs ys)
      (let loop ((xs xs))
        (or (null? xs) (and (not (memq (car xs) ys)) (loop (cdr xs))))))
    (cond
      ((null? b) a)
      ((null? a) b)
      ((eq? a b) '())
      ((null? (cdr b)) (flip-scope-set a (car b)))
      ((disjoint? b a) (append b a))
      (else
        (let ((a-b (minus a b)))
          (if (null? a-b)
              (minus b a)
              (let loop ((b b) (acc a-b))
                (cond
                  ((null? b) acc)
                  ((memq (car b) a) (loop (cdr b) acc))
                  (else (loop (cdr b) (cons (car b) acc))))))))))
  (define (lazy-flip-scope stx x)
    (cond
      ((syntax? stx)
       (make-syntax-impl (get-syntax-data-impl stx) (flip-scope-set (get-syntax-scopes stx) x) #f))
      ((or (symbol? stx) (pair? stx)) (make-syntax-impl stx (list x) #f))
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
       (make-syntax-impl
         (get-syntax-data-impl v)
         (flip-scope-set (get-syntax-scopes v) sc)
         #f))
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

  (define (datum->syntax-object template v)
    (cond
      ((identifier? v) v)
      ((symbol? v) (make-syntax v (get-syntax-scopes template)))
      ((syntax-pair? v)
       (syntax-cons
         (datum->syntax-object template (syntax-car v))
         (datum->syntax-object template (syntax-cdr v))))
      ((syntax-vector? v)
       (syntax-vector-map (cut datum->syntax-object template <>) v))
      (else v)))

  (define (syntax-object->datum v)
    (cond
      ((identifier? v) (get-syntax-data v))
      ((syntax-pair? v)
       (cons
         (syntax-object->datum (syntax-car v))
         (syntax-object->datum (syntax-cdr v))))
      ((syntax-vector? v)
       (syntax-vector-map syntax-object->datum v))
      (else v)))

  (define (syntax-length xs)
    (let loop ((acc 0) (xs xs))
      (if (syntax-null? xs) acc (loop (+ acc 1) (syntax-cdr xs)))))

  (define (syntax-proper-list? xs)
    (cond ((syntax-null? xs) #t)
          ((syntax-pair? xs) (syntax-proper-list? (syntax-cdr xs)))
          (else #f)))

  (define (syntax-undot-list xs)
    (cond ((syntax-null? xs) '())
          ((syntax-pair? xs) (cons (syntax-car xs) (syntax-undot-list (syntax-cdr xs))))
          (else (cons xs '()))))

  ; raw spine, syntax elements: what ,@ in ##global-quasisyntax needs, since
  ; it becomes a raw ##vcore.append
  (define (syntax->list xs)
    (if (syntax-null? xs)
        '()
        (cons (syntax-car xs) (syntax->list (syntax-cdr xs)))))

)

