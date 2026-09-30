(define-library (vanity compiler hygienic global-forms)
  (import (vanity core) (vanity list) (vanity compiler hygienic types)
          (only (vanity compiler hygienic resolve) literal-keyword? bound-identifier=?)
          (only (vanity compiler utils) compiler-error get-feature-list)
          (only (vanity compiler library) library-exists?)
          (only (vanity compiler variables) mangle-library)
          (only (vanity compiler match) transform-match)
          (only (vanity compiler blasphemy) expand-do-loop)
          (only (vanity compiler ffi) resolve-foreign-import))
  (export global-identifier global-forms global-form-env library-paths target-architecture)

  (define library-paths (make-parameter '()))
  (define target-architecture (make-parameter "sysv_amd64"))

  (define (global-identifier expr)
    (make-syntax expr (list (global-scope))))

  (define (syntax-unpack x)
    (if (syntax? x)
        (get-syntax-data x)
        x))

  (define (malformed what form)
    (compiler-error (sprintf "malformed ~A" what) (syntax-object->datum form)))

  (define (let-bindings? bindings)
    (and (syntax-proper-list? bindings)
         (every
           (lambda (b)
             (and (syntax-proper-list? b) (= (syntax-length b) 2) (identifier? (syntax-car b))))
           (syntax->list bindings))))

  (define (expand-let form)
    (unless (and (syntax-proper-list? form) (>= (syntax-length form) 3))
      (malformed "let" form))
    (if (identifier? (syntax-cadr form))
        (let ((bindings (syntax-caddr form))
              (body (syntax-cdr (syntax-cddr form))))
          (unless (let-bindings? bindings) (malformed "let" form))
          (if (syntax-null? body) (compiler-error "empty let body" (syntax-object->datum form)))
          ; sc marks the loop name and lambda but not the inits, so an init
          ; can't see the loop variable (W16)
          (let* ((sc (make-scope 'named-let))
                 (name (flip-scope (syntax-cadr form) sc)))
            (##global-quasisyntax
              (letrec ((,name ,(flip-scope
                                 (##global-quasisyntax
                                   (lambda ,(syntax-map syntax-car bindings) . ,body))
                                 sc)))
                (,name . ,(syntax-map syntax-cadr bindings))))))
        (begin
          (unless (let-bindings? (syntax-cadr form)) (malformed "let" form))
          (##global-quasisyntax
            ((lambda ,(syntax-map syntax-car (syntax-cadr form)) . ,(syntax-cddr form))
             . ,(syntax-map syntax-cadr (syntax-cadr form)))))))

  (define (syntax-list-of-length? x n)
    (and (syntax-proper-list? x) (= (syntax-length x) n)))

  (define (let-like-form? form min-length)
    (and (syntax-proper-list? form)
         (>= (syntax-length form) min-length)
         (syntax-proper-list? (syntax-cadr form))))

  (define (check-last-else form rest what)
    (unless (syntax-null? rest)
      (compiler-error (sprintf "else clause is not last in ~A" what) (syntax-object->datum form))))

  (define (expand-let* form)
    (unless (and (let-like-form? form 3)
                 (every (cut syntax-list-of-length? <> 2) (syntax->list (syntax-cadr form))))
      (malformed "let*" form))
    (let ((bindings (syntax-cadr form))
          (body (syntax-cddr form)))
      (if (syntax-null? bindings)
          (##global-quasisyntax (let () . ,body))
          (##global-quasisyntax
            (let (,(syntax-car bindings)) (let* ,(syntax-cdr bindings) . ,body))))))

  (define (expand-when form)
    (unless (and (syntax-proper-list? form) (>= (syntax-length form) 2))
      (malformed "when" form))
    (##global-quasisyntax (if ,(syntax-cadr form) (let () . ,(syntax-cddr form)) #void)))

  (define (expand-unless form)
    (unless (and (syntax-proper-list? form) (>= (syntax-length form) 2))
      (malformed "unless" form))
    (##global-quasisyntax (if ,(syntax-cadr form) #void (let () . ,(syntax-cddr form)))))

  (define (expand-cond form)
    (unless (syntax-proper-list? form) (malformed "cond" form))
    (let ((clauses (syntax-cdr form)))
      (if (syntax-null? clauses)
          (##global-quasisyntax
            (##vcore.raise (##vcore.record #f 'error "exhausted cond statement" '())))
          (let ((clause (syntax-car clauses))
                (rest (syntax-cdr clauses)))
            (unless (and (syntax-pair? clause) (syntax-proper-list? clause))
              (malformed "cond" form))
            (let ((test (syntax-car clause))
                  (body (syntax-cdr clause)))
              (cond
                ((literal-keyword? test 'else)
                 (check-last-else form rest "cond")
                 (##global-quasisyntax (let () . ,body)))
                ((and (syntax-pair? body) (literal-keyword? (syntax-car body) '=>))
                 (unless (= (syntax-length body) 2) (malformed "cond" form))
                 (##global-quasisyntax
                   (let ((x ,test))
                     (if x (,(syntax-cadr body) x) (cond . ,rest)))))
                ((syntax-null? body)
                 (##global-quasisyntax (or ,test (cond . ,rest))))
                (else
                 (##global-quasisyntax
                   (if ,test (let () . ,body) (cond . ,rest))))))))))

  (define (expand-case form)
    (unless (and (syntax-proper-list? form) (>= (syntax-length form) 2))
      (malformed "case" form))
    (let ()
      (define (iter clauses)
        (if (syntax-null? clauses)
            (##global-quasisyntax
              (##vcore.raise (##vcore.record #f 'error "exhausted case statement" '())))
            (let ((clause (syntax-car clauses))
                  (rest (syntax-cdr clauses)))
              (unless (and (syntax-pair? clause) (syntax-proper-list? clause))
                (malformed "case" form))
              (let ((data (syntax-car clause))
                    (body (syntax-cdr clause)))
                (cond
                  ((literal-keyword? data 'else)
                   (check-last-else form rest "case")
                   (##global-quasisyntax (let () . ,body)))
                  ((syntax-proper-list? data)
                   (##global-quasisyntax
                     (if (or ,@(syntax-map (lambda (d) (##global-quasisyntax (##vcore.eq? x ',d))) data))
                         (let () . ,body)
                         ,(iter rest))))
                  (else (malformed "case" form)))))))
      (##global-quasisyntax
        (let ((x ,(syntax-cadr form))) ,(iter (syntax-cddr form))))))

  (define (expand-do form)
    (unless (and (let-like-form? form 3)
                 (every (lambda (spec)
                          (and (syntax-proper-list? spec) (>= (syntax-length spec) 2)))
                        (syntax->list (syntax-cadr form)))
                 (syntax-pair? (syntax-caddr form))
                 (syntax-proper-list? (syntax-caddr form)))
      (malformed "do" form))
    (let* ((specs (syntax->list (syntax-cadr form)))
           (steps
             (map (lambda (spec)
                    (let ((step (syntax-cddr spec)))
                      (cond ((syntax-null? step) (syntax-car spec))
                            ((syntax-null? (syntax-cdr step)) (syntax-car step))
                            (else (compiler-error "malformed do: only one step expression is permitted"
                                                  (syntax-object->datum (syntax-car spec))
                                                  (syntax-object->datum step))))))
                  specs))
           (exit-clause (syntax-caddr form))
           (ret (syntax-cdr exit-clause))
           (body (syntax-cdr (syntax-cddr form))))
      (##global-quasisyntax
        (let do-iter ,(map (lambda (spec) (list (syntax-car spec) (syntax-cadr spec))) specs)
          (if ,(syntax-car exit-clause)
              (let () . ,(if (syntax-null? ret) (list #void) ret))
              (begin
                (let () . ,(if (syntax-null? body) (list #void) body))
                (do-iter . ,steps)))))))

  (define (expand-receive form)
    (unless (and (syntax-proper-list? form) (>= (syntax-length form) 3))
      (malformed "receive" form))
    (##global-quasisyntax
      (##vcore.call-with-values
        (lambda () ,(syntax-caddr form))
        (lambda ,(syntax-cadr form) . ,(syntax-cdr (syntax-cddr form))))))

  (define (formals? formals)
    (cond ((syntax-null? formals) #t)
          ((syntax-pair? formals)
           (and (identifier? (syntax-car formals)) (formals? (syntax-cdr formals))))
          (else (identifier? formals))))

  (define (values-bindings? bindings)
    (every (lambda (b) (and (syntax-list-of-length? b 2) (formals? (syntax-car b))))
           (syntax->list bindings)))

  (define (expand-let-values form)
    (unless (and (let-like-form? form 2) (values-bindings? (syntax-cadr form)))
      (malformed "let-values" form))
    (let* ((bindings (syntax->list (syntax-cadr form)))
           (formals (map syntax-car bindings))
           (tmps
             (map (lambda (f)
                    (let loop ((f f))
                      (cond ((syntax-null? f) '())
                            ((syntax-pair? f)
                             (cons (global-identifier (get-syntax-data (syntax-car f))) (loop (syntax-cdr f))))
                            (else (global-identifier (get-syntax-data f))))))
                  formals))
           (body (syntax-cddr form)))
      (let loop ((todo tmps) (bindings bindings))
        (if (null? todo)
            (##global-quasisyntax
              (let ,(map list (append-map syntax-undot-list formals) (append-map syntax-undot-list tmps))
                . ,body))
            (##global-quasisyntax
              (##vcore.call-with-values
                (lambda () ,(syntax-cadr (car bindings)))
                (lambda ,(car todo) ,(loop (cdr todo) (cdr bindings)))))))))

  (define (expand-let*-values form)
    (unless (and (let-like-form? form 2) (values-bindings? (syntax-cadr form)))
      (malformed "let*-values" form))
    (let ((bindings (syntax-cadr form))
          (body (syntax-cddr form)))
      (if (syntax-null? bindings)
          (##global-quasisyntax (let () . ,body))
          (##global-quasisyntax
            (##vcore.call-with-values
              (lambda () ,(syntax-cadr (syntax-car bindings)))
              (lambda ,(syntax-car (syntax-car bindings))
                (let*-values ,(syntax-cdr bindings) . ,body)))))))

  (define (expand-parameterize form)
    (unless (and (let-like-form? form 2)
                 (every (cut syntax-list-of-length? <> 2) (syntax->list (syntax-cadr form))))
      (malformed "parameterize" form))
    (let ((bindings (syntax-cadr form))
          (body (syntax-cddr form)))
      (if (syntax-null? bindings)
          (##global-quasisyntax (let () . ,body))
          (##global-quasisyntax
            (let* ((parameter ,(syntax-car (syntax-car bindings)))
                   (keyval (parameter '##vcore.push-value ,(syntax-cadr (syntax-car bindings))))
                   (ret (parameterize ,(syntax-cdr bindings) . ,body)))
              (parameter '##vcore.pop-value keyval)
              ret)))))

  ; cute evaluates each non-slot argument once, into a let wrapped around the
  ; lambda; the lets nest leftmost-outermost.
  (define (expand-cut-impl form what cute?)
    (define (numbered prefix n) (global-identifier (string->symbol (sprintf "~A~A" prefix n))))
    (unless (and (syntax-proper-list? form) (>= (syntax-length form) 2))
      (malformed what form))
    (let loop ((items (syntax->list (syntax-cdr form))) (xs '()) (args '()) (lets '()))
      (define (wrap-lets proc)
        (fold (lambda (binding acc) (##global-quasisyntax (let (,binding) ,acc))) proc lets))
      (cond
        ((null? items)
         (wrap-lets (##global-quasisyntax (lambda ,(reverse xs) ,(reverse args)))))
        ((literal-keyword? (car items) '<>)
         (let ((x (numbered "x" (length xs))))
           (loop (cdr items) (cons x xs) (cons x args) lets)))
        ((literal-keyword? (car items) '<...>)
         (unless (null? (cdr items)) (malformed what form))
         (wrap-lets
           (##global-quasisyntax
             (lambda (,@(reverse xs) . rest) (##vcore.apply ,@(reverse args) rest)))))
        (cute?
         (let ((tmp (numbered "tmp" (length lets))))
           (loop (cdr items) xs (cons tmp args) (cons (list tmp (car items)) lets))))
        (else
         (loop (cdr items) xs (cons (car items) args) lets)))))
  (define (expand-cut form) (expand-cut-impl form "cut" #f))
  (define (expand-cute form) (expand-cut-impl form "cute" #t))

  (define (expand-delay form)
    (unless (syntax-list-of-length? form 2) (malformed "delay" form))
    (##global-quasisyntax
      (##vcore.delay-force-impl (lambda () (##vcore.make-promise ,(syntax-cadr form))))))

  (define (expand-delay-force form)
    (unless (syntax-list-of-length? form 2) (malformed "delay-force" form))
    (##global-quasisyntax
      (##vcore.delay-force-impl (lambda () ,(syntax-cadr form)))))

  ; with-exception-handler and raise-continuable are inlined: the handler's
  ; pop is unreachable since the body always escapes through guard-k, and
  ; raise-continuable has no intrinsic to name hygienically (W14)
  (define (expand-guard form)
    (unless (and (syntax-proper-list? form)
                 (>= (syntax-length form) 2)
                 (syntax-pair? (syntax-cadr form))
                 (syntax-proper-list? (syntax-cadr form))
                 (identifier? (syntax-car (syntax-cadr form))))
      (malformed "guard" form))
    (let* ((var (syntax-car (syntax-cadr form)))
           (clauses (syntax-cdr (syntax-cadr form)))
           (body (syntax-cddr form))
           (has-else?
             (any (lambda (clause) (and (syntax-pair? clause) (literal-keyword? (syntax-car clause) 'else)))
                  (syntax->list clauses))))
      (##global-quasisyntax
        ((##vcore.call/cc
           (lambda (guard-k)
             (let ((handler
                     (lambda (condition)
                       ((##vcore.call/cc
                          (lambda (handler-k)
                            (guard-k
                              (lambda ()
                                (let ((,var condition))
                                  ,(if has-else?
                                       (##global-quasisyntax (cond . ,clauses))
                                       (##global-quasisyntax
                                         (cond ,@(syntax->list clauses)
                                               (else
                                                 (handler-k
                                                   (lambda ()
                                                     (let* ((outer (##vcore.get-exception-handler))
                                                            (ret (outer condition)))
                                                       (##vcore.push-exception-handler outer)
                                                       ret))))))))))))))))
               (##vcore.push-exception-handler handler)
               (##vcore.call-with-values
                 (lambda () . ,body)
                 (lambda args (guard-k (lambda () (##vcore.apply ##vcore.values args))))))))))))

  (define (expand-define-record-type form)
    (unless (and (syntax-proper-list? form)
                 (>= (syntax-length form) 4)
                 (syntax-pair? (syntax-caddr form))
                 (syntax-proper-list? (syntax-caddr form)))
      (malformed "define-record-type" form))
    (let ((name (syntax-cadr form))
          (constructor (syntax-car (syntax-caddr form)))
          (field-names (syntax->list (syntax-cdr (syntax-caddr form))))
          (pred (syntax-cadr (syntax-cddr form)))
          (fields (syntax->list (syntax-cddr (syntax-cddr form)))))
      (unless (every identifier? (cons* name constructor pred field-names))
        (compiler-error "malformed define-record-type: name, constructor, field names, and predicate must all be valid identifiers"
                        (syntax-object->datum form)))
      (let ((field-syms (map get-syntax-data field-names)))
        (let loop ((syms field-syms))
          (when (pair? syms)
            (when (memq (car syms) (cdr syms))
              (compiler-error "malformed define-record-type: constructor field names contain a duplicate" field-syms))
            (loop (cdr syms))))
        (unless (= (length field-names) (length fields))
          (compiler-error "malformed define-record-type: there must be exactly one field declaration per fieldname"
                          field-syms (map syntax-object->datum fields)))
        (let* ((recordname (global-identifier (get-syntax-data name)))
               (truepred (global-identifier (get-syntax-data pred)))
               (accessor
                 (lambda (accessor formals access)
                   (unless (identifier? accessor)
                     (compiler-error "define-record-type: not a valid identifier" (syntax-object->datum accessor)))
                   (##global-quasisyntax
                     (define (,accessor rec . ,formals)
                       (if (,truepred rec)
                           ,access
                           (##vcore.raise (##vcore.record #f 'error "not a record of the right type" (##vcore.cons ',accessor (##vcore.cons rec '())))))))))
               (field-definitions
                 (lambda (field-name i)
                   (let ((spec (find (lambda (spec)
                                       (and (syntax-pair? spec) (identifier? (syntax-car spec)) (bound-identifier=? (syntax-car spec) field-name)))
                                     fields)))
                     (unless spec
                       (compiler-error "define-record type: field not defined in field declaration list"
                                       (get-syntax-data field-name) (map syntax-object->datum fields)))
                     (unless (and (syntax-proper-list? spec) (memv (syntax-length spec) '(2 3)))
                       (malformed "define-record-type" form))
                     (cons
                       (accessor (syntax-cadr spec) '() (##global-quasisyntax (##vcore.record-ref rec ,(+ i 1))))
                       (if (syntax-null? (syntax-cddr spec))
                           '()
                           (list (accessor (syntax-caddr spec) (##global-quasisyntax (x))
                                           (##global-quasisyntax (##vcore.record-set! rec ,(+ i 1) x))))))))))
          (##global-quasisyntax
            (begin
              (define ,recordname (##vcore.cons ',(get-syntax-data name) ',field-syms))
              (define (,truepred x) (and (##vcore.record? x) (##vcore.eqv? (##vcore.record-ref x 0) ,recordname)))
              (define ,pred ,truepred)
              (define (,constructor . ,field-names) (##vcore.record ,recordname . ,field-names))
              ,@(append-map field-definitions field-names (iota (length field-names)))))))))

  (define (cond-expand-true? test)
    (define (form? head n)
      (and (eq? (car test) head) (list? test) (or (not n) (= (length test) n))))
    (cond
      ((symbol? test) (and (memq test (get-feature-list)) #t))
      ((not (pair? test)) test)
      ((form? 'library 2) (library-exists? (cadr test) (library-paths)))
      ((form? 'and #f) (every cond-expand-true? (cdr test)))
      ((form? 'or #f) (any cond-expand-true? (cdr test)))
      ((form? 'not 2) (not (cond-expand-true? (cadr test))))
      (else (compiler-error "invalid cond-expand test" test))))

  (define (expand-cond-expand form)
    (unless (syntax-proper-list? form) (malformed "cond-expand" form))
    (let loop ((clauses (syntax-cdr form)))
      (if (syntax-null? clauses)
          #void
          (let ((clause (syntax-car clauses))
                (rest (syntax-cdr clauses)))
            (unless (and (syntax-pair? clause) (syntax-proper-list? clause))
              (malformed "cond-expand" form))
            (cond
              ((literal-keyword? (syntax-car clause) 'else)
               (check-last-else form rest "cond-expand")
               (##global-quasisyntax (begin . ,(syntax-cdr clause))))
              ((cond-expand-true? (syntax-object->datum (syntax-car clause)))
               (##global-quasisyntax (begin . ,(syntax-cdr clause))))
              (else (loop rest)))))))

  (define (expand-features form)
    (unless (syntax-list-of-length? form 1) (malformed "features" form))
    (##global-quasisyntax ',(get-feature-list)))

  (define (expand-reimport form)
    (unless (syntax-proper-list? form) (malformed "reimport" form))
    (##global-quasisyntax
      (begin
        ,@(append-map
            (lambda (lib)
              (list (##global-quasisyntax (##vcore.unload-library ,(mangle-library (syntax-object->datum lib))))
                    (##global-quasisyntax (import ,lib))))
            (syntax->list (syntax-cdr form))))))

  ; The three quasi forms share one walker. nest-kw is the keyword that
  ; deepens nesting (##global-quasisyntax nests on quasiquote, as legacy's
  ; expand-global-syntax does); leaf builds the constant for an unquoted leaf.
  (define (expand-quasi-impl nest-kw leaf quotation expr)
    (define (recur quotation expr) (expand-quasi-impl nest-kw leaf quotation expr))
    ; only a 2-list is a (kw x) form, as in legacy's match patterns: the
    ; tail of 'unquote, i.e. (quote unquote), is a 1-list headed by unquote
    (define (keyword-form x)
      (and (syntax-pair? x) (identifier? (syntax-car x))
           (syntax-pair? (syntax-cdr x)) (syntax-null? (syntax-cddr x))
           (get-syntax-data (syntax-car x))))
    (define head (keyword-form expr))
    (cond
      ((and head (eq? head nest-kw))
       (##global-quasisyntax
         (##vcore.cons ',nest-kw (##vcore.cons ,(recur (+ quotation 1) (syntax-cadr expr)) '()))))
      ((eq? head 'unquote)
       (let ((x (syntax-cadr expr)))
         (if (= quotation 1)
             (cond ((vector? x) (##global-quasisyntax (##vcore.list->vector ',(vector->list x))))
                   ((f64vector? x) (##global-quasisyntax (##vcore.list->f64vector ',(f64vector->list x))))
                   ((f32vector? x) (##global-quasisyntax (##vcore.list->f32vector ',(f32vector->list x))))
                   ((s32vector? x) (##global-quasisyntax (##vcore.list->s32vector ',(s32vector->list x))))
                   ((u16vector? x) (##global-quasisyntax (##vcore.list->u16vector ',(u16vector->list x))))
                   ((s16vector? x) (##global-quasisyntax (##vcore.list->s16vector ',(s16vector->list x))))
                   ((u8vector? x) (##global-quasisyntax (##vcore.list->u8vector ',(u8vector->list x))))
                   ((s8vector? x) (##global-quasisyntax (##vcore.list->s8vector ',(s8vector->list x))))
                   (else x))
             (##global-quasisyntax (##vcore.cons 'unquote (##vcore.cons ,(recur (- quotation 1) x) '()))))))
      ((syntax-pair? expr)
       (if (eq? (keyword-form (syntax-car expr)) 'unquote-splicing)
           (if (= quotation 1)
               (##global-quasisyntax
                 (##vcore.append ,(syntax-cadr (syntax-car expr)) ,(recur quotation (syntax-cdr expr))))
               (##global-quasisyntax
                 (##vcore.cons (##vcore.cons 'unquote-splicing (##vcore.cons ,(recur (- quotation 1) (syntax-cadr (syntax-car expr))) '())) ,(recur quotation (syntax-cdr expr)))))
           (##global-quasisyntax
             (##vcore.cons ,(recur quotation (syntax-car expr))
                           ,(recur quotation (syntax-cdr expr))))))
      ((syntax-vector? expr)
       (##global-quasisyntax (##vcore.list->vector ,(recur quotation (vector->list (syntax-unpack expr))))))
      (else (leaf expr))))

  (define (expand-quasiquote form)
    (expand-quasi-impl 'quasiquote (lambda (x) (##global-quasisyntax ',x)) 1 (syntax-cadr form)))
  (define (expand-quasisyntax form)
    (expand-quasi-impl 'quasisyntax (lambda (x) (##global-quasisyntax (syntax ,x))) 1 (syntax-cadr form)))
  ; global-identifier takes the keyword's scopes: it names whatever
  ; global-identifier the use site sees (its own define here, the import
  ; everywhere else), exactly like legacy's unhygienic expansion
  (define (expand-global-quasisyntax form)
    (define gid (datum->syntax-object (syntax-car form) 'global-identifier))
    (expand-quasi-impl
      'quasiquote
      (lambda (x)
        (if (identifier? x)
            (##global-quasisyntax (,gid ',x))
            (##global-quasisyntax ',x)))
      1
      (syntax-cadr form)))

  ; The legacy datum transformers, run unchanged: everything in the output,
  ; user-written or introduced, gets the keyword's context. The template must
  ; be the keyword identifier: a forced pair's scopes are already '(), and a
  ; syntax-cons'd pair isn't a syntax record at all. A macro-generated form
  ; whose pieces carry different contexts gets flattened to one.
  (define (datum-round-trip f)
    (lambda (form)
      (datum->syntax-object (syntax-car form) (f (syntax-object->datum form)))))

  ; The imported names take the keyword's context, as Racket's include does;
  ; a macro that wants them visible to its caller rebuilds the keyword with
  ; datum->syntax-object.
  (define (expand-foreign-import form)
    (unless (syntax-list-of-length? form 3) (malformed "foreign-import" form))
    (when (> (current-phase) 0)
      (compiler-error "foreign-import is not supported at phase >= 1" (syntax-object->datum form)))
    ((datum-round-trip
       (lambda (datum)
         `(begin
            . ,(resolve-foreign-import `(##foreign.import . ,(cdr datum)) (library-paths) (target-architecture)))))
     form))

  (define (expand-foreign-declare form)
    (##global-quasisyntax (##foreign.declare . ,(syntax-cdr form))))
  (define (expand-foreign-function form)
    (##global-quasisyntax (##foreign.function . ,(syntax-cdr form))))

  (define global-form-env
    `((let . ,expand-let)
      (let* . ,expand-let*)
      (let-values . ,expand-let-values)
      (let*-values . ,expand-let*-values)
      (receive . ,expand-receive)
      (cond . ,expand-cond)
      (case . ,expand-case)
      (do . ,expand-do)
      (when . ,expand-when)
      (unless . ,expand-unless)
      (delay . ,expand-delay)
      (delay-force . ,expand-delay-force)
      (parameterize . ,expand-parameterize)
      (guard . ,expand-guard)
      (cut . ,expand-cut)
      (cute . ,expand-cute)
      (define-record-type . ,expand-define-record-type)
      (cond-expand . ,expand-cond-expand)
      (features . ,expand-features)
      (reimport . ,expand-reimport)
      (match . ,(datum-round-trip (cut transform-match <> eqv?)))
      (do-loop . ,(datum-round-trip expand-do-loop))
      (##foreign.import . ,expand-foreign-import)
      (foreign-import . ,expand-foreign-import)
      (foreign-declare . ,expand-foreign-declare)
      (foreign-function . ,expand-foreign-function)
      (##foreign-function . ,expand-foreign-function)
      (,'quasiquote . ,expand-quasiquote)
      (quasisyntax . ,expand-quasisyntax)
      (##global-quasisyntax . ,expand-global-quasisyntax)))
  (define global-forms (map car global-form-env))
)
