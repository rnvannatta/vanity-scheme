(define-library (vanity compiler hygienic expand)
  (import (vanity core) (vanity list) (vanity intrinsics) (vanity compiler utils) (vanity compiler hygienic types) (vanity compiler hygienic global-forms) (vanity compiler hygienic eval))
  (export expand-syntax)

  ; WHAT REMAINS FOR A FUNCTIONABLE CORE

  ; define-library
  ; import
  ; reimport
  ; ##vcore.declare

  ; ##foreign-function
  ; ##foreign-import

  ; cond-expand
  ; features

  ; qualified lambdas
  ; qualified case lambdas
  ; ##letrec

  (define (bound-identifier=? a b)
    (and (eq? (get-syntax-data a) (get-syntax-data b))
         (lset= scope=? (get-syntax-scopes a) (get-syntax-scopes b))))
  (define (free-identifier=? a b)
    (eq? (resolve-identifier a) (resolve-identifier b)))
  (define (literal-identifier=? a b)
    (eq? (get-syntax-data a) (get-syntax-data b)))

  (define free-vars-allowed (make-parameter #t))
  (define library-paths (make-parameter '()))
  (define target-architecture (make-parameter "sysv_amd64"))

  (define trace-expand? (make-parameter #f))
  ; ring buffer format: #(serial depth name stx-in stx-out)
  (define trace-ring (make-vector 16 #f))
  (define trace-ring-pos 0)
  (define timeout-poll 0)

  (define (write-syntax stx) (write-syntax-impl stx 4))
  (define (write-syntax-impl stx depth)
    (define (join-spaced strs)
      (if (null? strs)
          ""
          (let loop ((acc (car strs)) (strs (cdr strs)))
            (if (null? strs) acc (loop (string-append acc " " (car strs)) (cdr strs))))))
    (cond
      ((identifier? stx)
       (if (explain-scopes?)
           (sprintf "~A@~A" (get-syntax-data stx) (scope-set->string (get-syntax-scopes stx)))
           (sprintf "~A" (get-syntax-data stx))))
      ((syntax-null? stx) "()")
      ((syntax-pair? stx)
       (if (<= depth 0)
           "..."
           (let loop ((xs stx) (breadth 8) (acc '()))
             (cond
               ((syntax-null? xs) (sprintf "(~A)" (join-spaced (reverse acc))))
               ((not (syntax-pair? xs))
                (sprintf "(~A . ~A)" (join-spaced (reverse acc)) (write-syntax-impl xs (- depth 1))))
               ((<= breadth 0) (sprintf "(~A ...)" (join-spaced (reverse acc))))
               (else (loop (syntax-cdr xs) (- breadth 1)
                           (cons (write-syntax-impl (syntax-car xs) (- depth 1)) acc)))))))
      ((syntax-vector? stx)
       (if (<= depth 0)
           "#(...)"
           (sprintf "#(~A)" (join-spaced (vector->list (syntax-vector-map (lambda (e) (write-syntax-impl e (- depth 1))) stx))))))
      (else (sprintf "~S" stx))))

  (define (report-expansion-timeout!)
    (define err (current-error-port))
    (format err "\e[1;31mmacro expansion timed out\e[0m~N")
    (format err "last transformer applications (oldest first):~N")
    (let loop ((i 0) (any #f))
      (if (< i 16)
          (let ((e (vector-ref trace-ring (remainder (+ trace-ring-pos i) 16))))
            (if e
                (begin
                  (format err "  [expand intro#~A d~A] ~A~N    in:  ~A~N    out: ~A~N"
                          (vector-ref e 0) (vector-ref e 1) (vector-ref e 2)
                          (write-syntax (vector-ref e 3))
                          (if (vector-ref e 4) (write-syntax (vector-ref e 4)) "<in progress>"))
                  (loop (+ i 1) #t))
                (loop (+ i 1) any)))
          (unless any (format err "  (none recorded)~N"))))
    (format err "rerun with --trace-expand for the full log~N")
    (compiler-error "macro expansion timed out"))

  (define (add-binding! id binding)
    ; We want to avoid the global scope to avoid cluttering it.
    ; It's not a correctness problem but is a perf one, and does result in a leak.
    (let* ((scopes (get-syntax-scopes id))
           (scope (car scopes))
           (scope (if (and (eq? scope (global-scope)) (pair? (cdr scopes))) (cadr scopes) scope)))
      (set-scope-bindings! scope (cons (cons id binding) (get-scope-bindings scope)))))

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

  (define (check-unambiguous id max-id candidate-ids)
    (define id-scopes (get-syntax-scopes (car max-id)))
    (for-each
      (lambda (e)
        (unless (lset<= scope=? (get-syntax-scopes (car e)) id-scopes)
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
          (unless (lset<= scope=? e-scopes winner-scopes)
            (format err "    incomparable with winner; symmetric difference ~A~N"
                    (scope-set->string (lset-xor scope=? e-scopes winner-scopes))))))
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
                     (lset<= scope=? (get-syntax-scopes (car e)) all-id-scopes)))
              (get-scope-bindings (car rest-id-scopes)))
            (loop (cdr rest-id-scopes))))))
  (define (resolve-identifier id)
    (define candidate-ids (find-all-matching-bindings id))
    (if (null? candidate-ids)
        #f
        (let ((max-id (argmax (lambda (e) (length (get-syntax-scopes (car e)))) candidate-ids)))
          (check-unambiguous id max-id candidate-ids)
          (cdr max-id))))
  (define (explain-identifier-failure id)
    ; scans the registry because find-all-matching-bindings only walks scopes the identifier itself carries.
    (define err (current-error-port))
    (define sym (get-syntax-data id))
    (define use-scopes (get-syntax-scopes id))
    (format err "  use site: ~A ~A~N" sym (scope-set->string use-scopes))
    (for-each
      (lambda (sc)
        (define p (get-scope-provenance sc))
        (when (and (pair? p) (eq? (car p) 'intro))
          (format err "    note: ~A was introduced by macro ~A; rerun with --trace-expand~N"
                  (scope->string sc) (cdr p))))
      use-scopes)
    (let ((considered (find-all-matching-bindings id)))
      (if (null? considered)
          (format err "  bindings named ~A that were considered: (none)~N" sym)
          (begin
            (format err "  bindings named ~A that were considered:~N" sym)
            (for-each
              (lambda (e)
                (format err "    ~A ~A~N" sym (scope-set->string (get-syntax-scopes (car e)))))
              considered))))
    (let* ((scan-scopes
             ; dedup'd union: use-site scopes, the current global scope, and the
             ; registry (only populated while --explain-scopes was on)
             (let loop ((in (append use-scopes (list (global-scope)) (all-registered-scopes))) (out '()))
               (cond ((null? in) (reverse out))
                     ((memq (car in) out) (loop (cdr in) out))
                     (else (loop (cdr in) (cons (car in) out))))))
           (near-misses
             (filter
               (lambda (e) (not (lset<= scope=? (get-syntax-scopes (car e)) use-scopes)))
               (append-map
                 (lambda (sc)
                   (filter (lambda (e) (eq? (get-syntax-data (car e)) sym))
                           (get-scope-bindings sc)))
                 scan-scopes))))
      (if (null? near-misses)
          (format err "  near misses: (none)~N")
          (begin
            (format err "  near misses:~N")
            (for-each
              (lambda (e)
                (define b-scopes (get-syntax-scopes (car e)))
                (define missing (filter (lambda (sc) (not (memq sc use-scopes))) b-scopes))
                (format err "    ~A ~A~N      rejected: ~A not among the use site's scopes~N"
                        sym (scope-set->string b-scopes) (scope-set->string missing)))
              near-misses)))))
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
                    (lset= scope=? (get-syntax-scopes (caar bindings)) all-id-scopes))
               (cdar bindings))
              (else (loop2 (cdr bindings))))))))

  (define (syntax-copy-list lst)
    (if (syntax-null? lst)
        '()
        (syntax-cons (syntax-car lst) (syntax-copy-list (syntax-cdr lst)))))
  (define (syntax-apply f . args)
    (define fresh-args
      (let loop ((args args))
        (if (null? (cdr args))
            (cons (syntax-copy-list (car args)) '())
            (cons (car args) (loop (cdr args))))))
    (apply apply f fresh-args))

  (define (syntax-append a b)
    (##vcore.append (syntax-copy-list a) (syntax-copy-list b)))

  (define (syntax-length xs)
    (let loop ((acc 0) (xs xs))
      (if (syntax-null? xs) acc (loop (+ acc 1) (syntax-cdr xs)))))

  (define macro-expand-env
    `((datum->syntax-object . ,datum->syntax-object)
      (syntax-object->datum . ,syntax-object->datum)
      (null? . ,syntax-null?)
      (list . ,syntax-list)
      (cons . ,syntax-cons)
      (car . ,syntax-car)
      (caar . ,syntax-caar)
      (cadr . ,syntax-cadr)
      (cdar . ,syntax-cdar)
      (cddr . ,syntax-cddr)
      (cdr . ,syntax-cdr)
      (map . ,syntax-map)
      (length . ,syntax-length)
      (error . ,error)
      (+ . ,+)
      (- . ,-)
      (* . ,*)
      (/ . ,/)
      (< . ,<)
      (<= . ,<=)
      (= . ,=)
      (> . ,>)
      (>= . ,>=)
      (eq? . ,eq?)
      (eqv? . ,eqv?)
      (equal? . ,equal?)
      (##vcore.cons . ,syntax-cons)
      (##vcore.apply . ,syntax-apply)
      (##vcore.append . ,syntax-append)
      ))

  (define special-forms '(begin define define-constant define-values lambda case-lambda letrec letrec* let-syntax define-syntax quote syntax if and or set! ##intrinsic ##basic-intrinsic ##vcore.declare export import))
  (define (init-global-forms)
    (for-each (lambda (sym) (add-binding! (make-syntax sym (list (global-scope))) sym)) (append special-forms global-forms)))
  (init-global-forms)

  (define (alist-copy alist)
    (map (lambda (e) (cons (car e) (cdr e))) alist))
  (define (fresh-toplevel-expand-env) (cons (cons #f #f) (alist-copy global-form-env)))
  (define toplevel-expand-env (make-parameter (fresh-toplevel-expand-env)))


  (define variable (generate-symbol 'variable))

  (define (expand-identifier stx env)
    (define binding (resolve-identifier stx))
    (cond
      ; free variable: we let them through because toplevel variables are free
      ((not binding)
       (unless (free-vars-allowed)
         (if (explain-scopes?) (explain-identifier-failure stx))
         (compiler-error "free variable" (get-syntax-data stx)
                         (scope-set->string (get-syntax-scopes stx))))
       stx)
      ((member binding special-forms)
       (error "bad syntax" (get-syntax-data stx)
              (scope-set->string (get-syntax-scopes stx))))
      (else
        (define v (assoc binding env))
        (cond
          ((not v)
           (if (explain-scopes?) (explain-identifier-failure stx))
           (error "not in context" (get-syntax-data stx)
                  (scope-set->string (get-syntax-scopes stx))))
          ((eq? (cdr v) variable) stx)
          (else (error "bad syntax" (get-syntax-data stx)))))))


  (define (resolve stx)
    (define (resolve-formals formals)
      (cond ((syntax-null? formals) '())
            ((syntax-pair? formals)
             (cons (resolve-identifier (syntax-car formals)) (resolve-formals (syntax-cdr formals))))
            (else (resolve-identifier formals))))
    (cond
      ((identifier? stx)
       (or (resolve-identifier stx)
           ; free variable: we let them through because toplevel variables are free
           (and (free-vars-allowed) (get-syntax-data stx))))
      ((symbol? stx) (error "resolve: naked symbol in syntax" stx))
      ((syntax-vector? stx) (syntax-object->datum stx))
      ((not (syntax-pair? stx))
       (if (syntax? stx)
           (get-syntax-data stx)
           stx))
      (else
        (case (and (identifier? (syntax-car stx)) (resolve-identifier (syntax-car stx)))
          ((lambda)
           `(lambda ,(resolve-formals (syntax-cadr stx)) ,(resolve (syntax-car (syntax-cddr stx)))))
          ((case-lambda)
           `(case-lambda
              . ,(syntax-map
                   (lambda (clause) (list (resolve-formals (syntax-car clause)) (resolve (syntax-cadr clause))))
                   (syntax-cdr stx))))
          ((letrec)
           `(letrec
              ,(syntax-map (lambda (pair) (list (resolve-identifier (syntax-car pair)) (resolve (syntax-cadr pair)))) (syntax-cadr stx))               ,(resolve (syntax-car (syntax-cddr stx)))))
          ((quote)
           `(quote ,(syntax-object->datum (syntax-cadr stx))))
          ((syntax)
           `(quote ,(syntax-cadr stx)))
          ((if) `(if . ,(resolve (syntax-cdr stx))))
          (else (syntax-map resolve stx))))))

  (define (introduced-identifier x sc)
    (make-syntax x (list (global-scope) sc)))

  (define (eval-for-syntax-binding rhs depth)
    (define expanded (resolve (expand-impl rhs (toplevel-expand-env) depth)))
    (eval expanded macro-expand-env))

  (define (expand-let-syntax stx env depth)
    (define let-syntax-id (syntax-car stx))
    (define lhs-ids (syntax-map syntax-car (syntax-cadr stx)))
    (define rhss (syntax-map syntax-cadr (syntax-cadr stx)))
    (define body (syntax-car (syntax-cddr stx)))

    (define sc (make-scope 'let-syntax))
    (define ids (syntax-map (lambda (lhs-id) (flip-scope lhs-id sc)) lhs-ids))
    (define bindings (syntax-map (lambda (id) (generate-symbol (get-syntax-data id))) ids))
    (for-each (lambda (id binding) (add-binding! id binding)) ids bindings)

    (let* ((rhs-vals (syntax-map (cut eval-for-syntax-binding <> depth) rhss))
           (body-env (append (map (lambda (binding val) (cons binding val)) bindings rhs-vals) env)))
      (expand-impl (flip-scope body sc) body-env depth)))

  (define (syntax-undot-list xs)
    (cond ((syntax-null? xs) '())
          ((syntax-pair? xs) (cons (syntax-car xs) (syntax-undot-list (syntax-cdr xs))))
          (else (cons xs '()))))

  (define (constant-expr? expr)
    (or (and (identifier? expr) (lookup-intrinsic-name (get-syntax-data expr)))
        (and (not (syntax-pair? expr)) (not (identifier? expr)))
        (and (syntax-pair? expr)
             (or
               (eq? (get-syntax-data (syntax-car expr)) '##intrinsic)
               (eq? (get-syntax-data (syntax-car expr)) '##basic-intrinsic)
               (eq? (get-syntax-data (syntax-car expr)) '##foreign.function)))
        #;(and (pair? expr) (eqv? (car expr) 'lambda) (null? (free-variables expr)))))

  (define (expand-body stx env depth)
    (define introduced-sc (make-scope 'body))
    (define (introduce x) (introduced-identifier x introduced-sc))
    ; TODO actually check for constantness
    (define (finish-constants constants body)
      (if (null? constants)
          (expand-impl body env depth)
          (let ((expr (expand-impl `((,(introduce 'lambda) ,(map syntax-car (reverse constants)) ,body)
                                     . ,(map syntax-cadr (reverse constants))) env depth)))
            (for-each
              (lambda (e)
                (unless (constant-expr? (syntax-cadr e))
                  (compiler-error "expand: ot a constant expression" `(define-constant . ,(syntax-object->datum e)))))
              constants)
            expr)))
    (define (finish defines constants body)
      (finish-constants
        constants
        (let ((body `(,(introduce 'begin) . ,body)))
          (if (null? defines)
              body
              `(,(introduce 'letrec*)
                ,(reverse defines)
                ,body)))))
    (let loop ((defines '()) (constants '()) (body stx))
      (if (and (syntax-pair? body)
               (syntax-pair? (syntax-car body))
               (identifier? (syntax-caar body)))
          (let ((binding (resolve-identifier (syntax-caar body))))
            (case binding
              ((begin)
               (loop defines constants (syntax-append (syntax-cdar body) (syntax-cdr body))))
              ((define)
               (let ((def (syntax-car body)))
                  (if (syntax-pair? (syntax-cadr def))
                      (loop
                        (cons
                          `(,(syntax-car (syntax-cadr def))
                            (,(introduce 'lambda)
                                ,(syntax-cdr (syntax-cadr def))
                                . ,(syntax-cddr def)))
                          defines)
                        constants
                        (syntax-cdr body))
                      (loop (cons (syntax-cdr def) defines) constants (syntax-cdr body)))))
              ((define-constant)
               (let ((def (syntax-car body)))
                  (if (syntax-pair? (syntax-cadr def))
                      (loop
                        defines
                        (cons
                          `(,(syntax-car (syntax-cadr def))
                            (,(introduce 'lambda)
                                ,(syntax-cdr (syntax-cadr def))
                                . ,(syntax-cddr def)))
                          constants)
                        (syntax-cdr body))
                      (loop defines (cons (syntax-cdr def) constants) (syntax-cdr body)))))
              ((define-values)
               (define def (syntax-car body))
               (define formals (syntax-cadr def))
               (define names (syntax-undot-list formals))
               (define mangles (map (lambda (name) (introduce (generate-symbol 'tmp))) names))
               (define def-body (syntax-car (syntax-cddr def)))
               (loop
                 (append
                   `((,(introduce (generate-symbol 'dummy))
                     (,(introduce '##vcore.call-with-values)
                      (,(introduce 'lambda) () ,def-body)
                      (,(introduce 'lambda)
                         ,(let loop ((formals formals) (mangles mangles))
                               (cond
                                 ((syntax-pair? formals) (cons (car mangles) (loop (syntax-cdr formals) (cdr mangles))))
                                 ((syntax-null? formals) '())
                                 (else (car mangles))))
                         #void
                         . ,(map (lambda (name mangle) `(,(introduce 'set!) ,name ,mangle)) names mangles)))))
                   (reverse (map (lambda (name) (list name #f)) names))
                   defines)
                 constants
                 (syntax-cdr body)))
              (else
                (define v (assoc binding env))
                (cond
                  ((and v (procedure? (cdr v)))
                   (loop
                     defines
                     constants
                     (cons (apply-transformer (get-syntax-data (syntax-caar body)) (cdr v) (syntax-car body) (+ depth 1))
                           (syntax-cdr body))))
                  (else (finish defines constants body))))
              #;(else )))
          (finish defines constants body))))

  (define (expand-lambda stx env depth)
    (define formals (syntax-car stx))
    (define body (syntax-cdr stx))

    (define dotted? (not (syntax-proper-list? formals)))
    (define sc (make-scope 'lambda))
    (define ids (syntax-map (lambda (id) (flip-scope id sc)) (syntax-undot-list formals)))
    (define bindings (map (lambda (e) (generate-symbol (get-syntax-data e))) ids))
    (for-each (lambda (id binding) (add-binding! id binding)) ids bindings)


    (let* ((body-env (append (map (lambda (binding) (cons binding variable)) bindings) env))
           (exp-body (expand-body (flip-scope body sc) body-env depth)))
      `(,(if dotted? (append (drop-right ids 1) (car (take-right ids 1))) ids) ,exp-body)))
  (define (expand-app xs env depth)
    (syntax-map (lambda (x) (expand-impl x env depth)) xs))

  (define (primitive-letrec? val xs)
    (call/cc
      (lambda (return)
        (define (advanced-primitive-letrec val)
          (cond
            ((and (syntax-pair? val) (identifier? (syntax-car val)))
             (case (resolve-identifier (syntax-car val))
               ((quote ##intrinsic ##basic-intrinsic ##foreign-function) #t)
               ((lambda case-lambda ##qualified-lambda ##qualified-case-lambda letrec ##letrec) (return #f))
               (else (syntax-map advanced-primitive-letrec val))))
            ((syntax-pair? val) (syntax-map advanced-primitive-letrec val))
            (else (if (and (identifier? val) (member val xs free-identifier=?)) (return #f) #t))))
        (cond
          ((and (syntax-pair? val) (identifier? (syntax-car val)))
           (or 
             (memq (resolve-identifier (syntax-car val))
               '(quote lambda case-lambda ##qualified-lambda ##qualified-case-lambda ##intrinsic ##basic-intrinsic ##foreign-function))
             (advanced-primitive-letrec val)))
          ((syntax-pair? val) (advanced-primitive-letrec val))
          (else (not (and (identifier? val) (member val xs free-identifier=?))))))))

  (define (expand-letrec* stx env depth) (expand-letrec-impl stx env depth #f))
  (define (expand-letrec stx env depth) (expand-letrec-impl stx env depth #t))
  (define (expand-letrec-impl stx env depth letrec?)
    (define idvals (syntax-cadr stx))
    (define body (syntax-cddr stx))

    (define introduced-sc (make-scope 'letrec-tmp))
    (define (introduce x) (introduced-identifier x introduced-sc))
    (define (fresh-tmp)
      (let* ((sym (generate-symbol 'tmp))
             (id (make-syntax sym (list (global-scope) introduced-sc))))
        (add-binding! id sym)
        id))

    (define sc (make-scope (if letrec? 'letrec 'letrec*)))
    (define ids (syntax-map (lambda (idval) (flip-scope (syntax-car idval) sc)) idvals))
    (define bindings (map (lambda (e) (generate-symbol (get-syntax-data e))) ids))
    (for-each (lambda (id binding) (add-binding! id binding)) ids bindings)

    (let* ((letrec-env (append (map (lambda (binding) (cons binding variable)) bindings) env))
           (exp-idvals (syntax-map (lambda (id idval) (list id (expand-impl (flip-scope (syntax-cadr idval) sc) letrec-env depth))) ids idvals))
           (exp-body (expand-body (flip-scope body sc) letrec-env depth))
           (thunked-body (list (list (introduce 'lambda) '() exp-body))))
      (if letrec?
          (let loop ((idvals '())
                     (tmps '())
                     (inits '())
                     (todo (reverse exp-idvals))
                     (body thunked-body))
            (cond
              ((null? todo)
               `(,(introduce 'letrec) ,idvals ((,(introduce 'lambda) ,tmps ,body) . ,inits)))
              ((primitive-letrec? (cadar todo) ids)
                (loop
                  (cons (car todo) idvals)
                  tmps
                  inits
                  (cdr todo)
                  body))
              (else
                (let ((tmp (fresh-tmp)))
                  (loop
                    (cons (list (caar todo) #f) idvals)
                    (cons tmp tmps)
                    (cons (cadar todo) inits)
                    (cdr todo)
                    `(,(introduce 'begin) (,(introduce 'set!) ,(caar todo) ,tmp) ,body))))))
          (let loop ((idvals '())
                     (todo (reverse exp-idvals))
                     (body thunked-body))
            (cond
              ((null? todo)
               `(,(introduce 'letrec) ,idvals ,body))
              ((primitive-letrec? (cadar todo) ids)
                (loop
                  (cons (car todo) idvals)
                  (cdr todo)
                  body))
              (else
                (loop
                  (cons (list (caar todo) #f) idvals)
                  (cdr todo)
                  `(,(introduce 'begin) (,(introduce 'set!) ,(caar todo) ,(cadar todo)) ,body))))))))

  (define (desugar-define stx)
    (define var (syntax-cadr stx))
    (define body (syntax-cddr stx))
    (if (syntax-pair? var)
        (##global-quasisyntax (define ,(syntax-car var) (lambda ,(syntax-cdr var) . ,body)))
        stx))

  (define (add-toplevel-binding! var value)
    (define binding (find-exact-binding var))

    ; toplevel define acts like set! if var already is defined.
    (when (not binding)
      ; I am 98% certain we can avoid gensym for toplevel
      ;(set! binding (get-syntax-data var))
      (set! binding
        (if (equal? (list (global-scope)) (get-syntax-scopes var))
            (get-syntax-data var)
            (generate-symbol (get-syntax-data var))))
      (let* ((bindings (get-scope-bindings (global-scope))))
        (set-scope-bindings! (global-scope) (cons (cons var binding) bindings)))
      ; a define is still in the toplevel scope.
      (set-cdr! (toplevel-expand-env) (cons (cons binding value) (cdr (toplevel-expand-env)))))
    binding)

  (define (expand-toplevel-define stx depth)
    (define define-id (syntax-car stx))
    (define var (syntax-cadr stx))
    (define val (syntax-car (syntax-cddr stx)))

    (add-toplevel-binding! var variable)
    (##global-quasisyntax (define ,var ,(expand-impl val (toplevel-expand-env) depth))))

  (define (syntax-proper-list? xs)
    (cond ((syntax-null? xs) #t)
          ((syntax-pair? xs) (syntax-proper-list? (syntax-cdr xs)))
          (else #f)))

  (define (syntax-improper-length xs)
    (let loop ((acc 0) (xs xs))
      (if (syntax-pair? xs)
          (loop (+ acc 1) (syntax-cdr xs))
          acc)))

  (define (desugar-define-syntax stx depth)
    ; lack of ##vcore.apply aside, i'd rather do this the 'right way' than use gensym even if it works
    ; and figure out an ergonmic method of doing it the 'right way'.
    ; I guess the answer is to use apply-transformer? though that doesn't solve the global syntax problem.
    (if (syntax-pair? (syntax-cadr stx))
        (apply-transformer
          "desugar-define-syntax"
          (lambda (stx)
            (define var (syntax-cadr stx))
            (define body (syntax-cddr stx))
            ; this needs a macro, ironically.
            ; so we gotta power through the pain until we have a macro engine working
            ; the macro would be like quasiquote except it shims all quoted symbols in the global scope

            ; or just add the macro to vsc as a temporary since we're gonna kill it eventually . . .
            (##global-quasisyntax
              (define-syntax ,(syntax-car var)
                (let ((transformer (lambda (ignored . ,(syntax-cdr var)) . ,body)))
                  (lambda (form)
                    (if (,(if (syntax-proper-list? var) (##global-quasisyntax =) (##global-quasisyntax <=))
                         ,(syntax-improper-length var)
                         (length form))
                        (##vcore.apply transformer form)
                        (error ,(sprintf "incorrect number of args to macro ~A" (get-syntax-data (syntax-car var))) (- (length form) 1) ,(syntax-improper-length (syntax-cdr var)))
                        ))))))
          stx
          depth)
        stx))

  (define (expand-toplevel-define-syntax stx depth)
    (define define-id (syntax-car stx))
    (define var (syntax-cadr stx))
    (define raw-val (syntax-car (syntax-cddr stx)))

    ; have the binding be visible during macro evaluation
    (define binding (add-toplevel-binding! var #f))
    ; and then set it to the evaluated value.
    (define val
      (guard
        (exception
         (else
           (format (current-error-port) "\e[1;31merror while compiling macro:\e[0m ~A~N" (get-syntax-data var))
           (raise exception)))
        (eval-for-syntax-binding raw-val depth)))
    (set-cdr! (assq binding (toplevel-expand-env)) val)
    '())

  (define (export-rename e)
    (if (identifier? e)
        e
        (begin
          (unless (and (syntax-pair? e) (syntax-pair? (cdr e)) (eq? (get-syntax-data (syntax-car e)) 'rename))
            (compiler-error "malformed exported variable" (syntax-object->datum e)))
          (syntax-cadr e))))

  (define (apply-transformer name t stx depth)
    (define intro-scope
      (begin
        (if (expansion-timed-out?) (report-expansion-timeout!))
        (make-scope (cons 'intro name))))
    (define entry
      (and (symbol? name)
           (let ((entry (vector (get-scope-serial intro-scope) depth name stx #f)))
             (vector-set! trace-ring trace-ring-pos entry)
             (set! trace-ring-pos (if (>= trace-ring-pos 15) 0 (+ trace-ring-pos 1)))
             (if (trace-expand?)
                 (format (current-error-port) "[expand intro#~A d~A] ~A~N  in:  ~A~N"
                         (vector-ref entry 0) depth name (write-syntax stx)))
             entry)))
    ; paint the macro color everything that isn't introduced
    (define intro-s (flip-scope stx intro-scope))
    (define transformed-s
      (guard
        (exception
         (else
           (format (current-error-port) "\e[1;31merror while applying macro:\e[0m ~A~N" name)
           (raise exception)))
        (t intro-s)))
    ; then flip so that the introduced things are colored and the unintroduced are uncolored
    (define out (flip-scope transformed-s intro-scope))
    (if entry
        (begin
          (vector-set! entry 4 out)
          (if (trace-expand?)
              (format (current-error-port) "  out: ~A~N" (write-syntax out)))))
    out)
  (define (expand-id-application-form expand stx binding env depth rewrite?)
    (case binding
      ((lambda) (cons (syntax-car stx) (expand-lambda (syntax-cdr stx) env depth)))
      ((case-lambda)
       (cons (syntax-car stx) (syntax-map (cut expand-lambda <> env depth) (syntax-cdr stx))))
      ((letrec*) (expand-letrec* stx env depth))
      ((letrec) (expand-letrec stx env depth))
      ((let-syntax) (expand-let-syntax stx env depth))
      ((syntax quote) stx)
      ((begin)
       (case (syntax-length stx)
         ((1) #void)
         ((2) (expand-impl (syntax-cadr stx) env depth))
         ((3)
          (list
            (syntax-car stx)
            (expand-impl (syntax-cadr stx) env depth)
            (expand-impl (syntax-caddr stx) env depth)))
         (else
          (list
            (syntax-car stx)
            (expand-impl (syntax-cadr stx) env depth)
            (expand-impl (cons (##global-quasisyntax begin) (syntax-cddr stx)) env depth)))))
      ((if)
       (if (= (syntax-length stx) 4)
           (list (syntax-car stx)
                 (expand-impl (syntax-cadr stx) env depth)
                 (expand-impl (syntax-car (syntax-cddr stx)) env depth)
                 (expand-impl (syntax-cadr (syntax-cddr stx)) env depth))
           (list (syntax-car stx)
                 (expand-impl (syntax-cadr stx) env depth)
                 (expand-impl (syntax-car (syntax-cddr stx)) env depth)
                 #f)))
      ((and)
       (case (syntax-length stx)
         ((1) #t)
         ((2) (expand-impl (syntax-cadr stx) env depth))
         ((3) (##global-quasisyntax (if ,(expand-impl (syntax-cadr stx) env depth) ,(expand-impl (syntax-caddr stx) env depth) #f)))
         (else
          (##global-quasisyntax
            (if ,(expand-impl (syntax-cadr stx) env depth)
                ,(expand-impl (##global-quasisyntax (and . ,(syntax-cddr stx))) env depth)
                #f)))))
      ((or)
       (case (syntax-length stx)
         ((1) #f)
         ((2) (expand-impl (syntax-cadr stx) env depth))
         ((3) (list (syntax-car stx) (expand-impl (syntax-cadr stx) env depth) (expand-impl (syntax-caddr stx) env depth)))
         (else
          (##global-quasisyntax
            (or ,(expand-impl (syntax-cadr stx) env depth)
                ,(expand-impl (##global-quasisyntax (or . ,(syntax-cddr stx))) env depth))))))
      ((set!)
       (if (> (syntax-length stx) 3)
           (let ((place (syntax-caddr stx)))
             (if (identifier? place)
                 (##global-quasisyntax
                    (set! ,place ,(expand-impl `(,(syntax-cadr stx) . ,(syntax-cddr stx)) env depth)))
                 (let ((val (generate-symbol 'val)))
                   (expand-impl
                     (##global-quasisyntax
                       ((##vcore.mutator ,(syntax-car place))
                        ,@(syntax-cdr place)
                        (lambda (,val) (,(syntax-cadr stx) ,val . ,(syntax-cdr (syntax-cddr stx))))))
                     env depth))))
           (let ((place (syntax-cadr stx)))
             (if (identifier? place)
                 `(,(syntax-car stx) ,place ,(expand-impl (syntax-caddr stx) env depth))
                 (expand-impl
                   (##global-quasisyntax
                     ((##vcore.setter ,(syntax-car place)) ,@(syntax-cdr place) ,(syntax-caddr stx)))
                   env depth)))))
      ((##intrinsic ##basic-intrinsic) stx)
      (else
        (define v (assoc binding env))
        (cond
          ((and v (procedure? (cdr v)))
           ; a macro at the head of transformer output rewrites the same form
           ; and shares its trace depth; one met while descending opens a new
           ; level. Must stay a tail call: rewrite chains are unbounded.
           (let ((d (if rewrite? depth (+ depth 1))))
             (expand (apply-transformer (get-syntax-data (syntax-car stx)) (cdr v) stx d) env d)))
          (else (expand-app stx env depth))))))

  (define (expand-impl stx env depth) (expand-form stx env depth #f))
  (define (expand-form stx env depth rewrite?)
    ; poll the wallclock sparsely: rewrite loops that never re-enter
    ; apply-transformer (W10's cause is unknown) still hit this
    (set! timeout-poll (if (>= timeout-poll 1023) 0 (+ timeout-poll 1)))
    (if (and (= timeout-poll 0) (expansion-timed-out?)) (report-expansion-timeout!))
    (cond
      ((identifier? stx) (expand-identifier stx env))
      ((syntax-null? stx) (error "expand: stray () in program"))
      ; vectors are self quoting so handled here. quoted data just returns itself
      ; and other literals, like numbers, don't have syntaxhood. only symbols do.
      ((not (syntax-pair? stx)) stx)
      ((identifier? (syntax-car stx))
       (define binding (resolve-identifier (syntax-car stx)))
       (expand-id-application-form
         (lambda (out env depth) (expand-form out env depth #t))
         stx binding env depth rewrite?))
      (else
       (expand-app stx env depth))))
  (define (expand-toplevel stx depth) (expand-toplevel-form stx depth #f))
  (define (expand-toplevel-form stx depth rewrite?)
    (cond
      ((identifier? stx) (list (expand-identifier stx (toplevel-expand-env))))
      ((syntax-null? stx) (error "expand: stray () in program"))
      ; vectors are self quoting so handled here. quoted data just returns itself
      ; and other literals, like numbers, don't have syntaxhood. only symbols do.
      ((not (syntax-pair? stx)) (list stx))
      ((identifier? (syntax-car stx))
       (define binding (resolve-identifier (syntax-car stx)))
       (case binding
         ((begin)
          ; toplevel defines are splicing
          ; syntax-append-map, not append-map: macro-produced begins have a
          ; syntax-object () tail that raw list traversal chokes on
          (syntax-append-map (cut expand-toplevel <> depth) (syntax-cdr stx)))
         ((define)
          (list (expand-toplevel-define (desugar-define stx) depth)))
         ((define-constant)
          (let ((def (desugar-define stx)))
            (unless (constant-expr? (syntax-caddr stx))
              (compiler-error "expand: ot a constant expression" (syntax-object->datum stx)))
            (list (expand-toplevel-define def depth))))
         ((define-values)
          (define formals (syntax-cadr stx))
          (define names (syntax-undot-list formals))
          (define mangles (map (lambda (name) (make-syntax (generate-symbol 'tmp) (list (global-scope)))) names))
          (expand-toplevel
            (##global-quasisyntax
              (begin
                ,@(map (lambda (name) (##global-quasisyntax (define ,name #f))) names)
                (##vcore.call-with-values
                   (lambda () ,(syntax-caddr stx))
                   (lambda
                      ,(let loop ((formals formals) (mangles mangles))
                         (cond
                           ((syntax-pair? formals) (cons (car mangles) (loop (syntax-cdr formals) (cdr mangles))))
                           ((syntax-null? formals) '())
                           (else (car mangles))))
                      #void
                      ,@(map (lambda (name mangle) (##global-quasisyntax (set! ,name ,mangle))) names mangles)))))
            depth))
         ((define-syntax)
          (expand-toplevel-define-syntax (desugar-define-syntax stx depth) depth)
          '())
         ((import)
          (syntax-map (lambda (lib) (list (syntax-car stx) lib)) (syntax-cdr stx)))
         ((##vcore.declare)
          (parameterize ((toplevel-expand-env (fresh-toplevel-expand-env))
                         (global-scope (make-scope 'global))
                         (free-vars-allowed #f))
            (init-global-forms)
            (list (list (syntax-car stx) (syntax-cadr stx) (expand-impl (syntax-caddr stx) (toplevel-expand-env) depth)))))
         #;((define-library)
          (parameterize ((toplevel-expand-env (fresh-toplevel-expand-env))
                         (global-scope (make-scope 'global))
                         #;(free-vars-allowed #f))
            (init-global-forms)
            (expand-define-library stx (toplevel-expand-env))))
         (else
          ; if a macro is evaluated, it returns a toplevel return, which is a list of expressions
          ; otherwise an expression is return which needs to be listified.
          ; call/cc to avoid double listification
          (call/cc
            (lambda (k)
              (list (expand-id-application-form
                      (lambda (out _ depth) (k (expand-toplevel-form out depth #t)))
                      stx binding (toplevel-expand-env) depth rewrite?)))))))
      (else
       (list (expand-app stx (toplevel-expand-env) depth)))))

  ; options: alist with any of (trace-expand . bool), (explain-scopes . bool),
  ; (expand-timeout . seconds). The deadline is per toplevel form, since that
  ; is expand-syntax's granularity.
  (define (expand-syntax expr paths architecture options)
    (define (opt k) (let ((e (assq k options))) (if e (cdr e) #f)))
    (set-expansion-deadline!
      (let ((secs (opt 'expand-timeout)))
        (and secs (+ (current-jiffy) (* secs (jiffies-per-second))))))
    (parameterize ((library-paths paths)
                   (target-architecture architecture)
                   (trace-expand? (opt 'trace-expand))
                   (explain-scopes? (opt 'explain-scopes)))
      (map resolve (expand-toplevel (datum->syntax-object (make-syntax 'dummy (list (global-scope))) expr) 0)))))
