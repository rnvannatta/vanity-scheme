(define-library (vanity compiler hygienic expand)
  (import (vanity core) (vanity list) (vanity intrinsics) (vanity compiler utils) (vanity compiler hygienic types) (vanity compiler hygienic global-forms) (vanity compiler hygienic eval))
  (export expand-syntax)

  ; WHAT REMAINS FOR A FUNCTIONABLE CORE

  ; define-values toplevel
  ; define-constants toplevel
  ; case-lambda

  ; set!
  ; and
  ; or

  ; define-library
  ; import
  ; reimport
  ; ##vcore.declare

  ; ##intrinsic
  ; ##basic-intrinsic

  ; foreign-function
  ; foreign-import

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


  (define (add-binding! id binding)
    ; We want to avoid the global scope to avoid cluttering it.
    ; It's not a correctness problem but is a perf one, and does result in a leak.
    (let* ((scopes (get-syntax-scopes id))
           (scope (car scopes))
           (scope (if (and (eq? scope global-scope) (pair? (cdr scopes))) (cadr scopes) scope)))
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

  (define (check-unambiguous max-id candidate-ids)
    (define id-scopes (get-syntax-scopes (car max-id)))
    (for-each
      (lambda (e)
        (unless (lset<= scope=? (get-syntax-scopes (car e)) id-scopes)
          (error "ambiguous id" max-id candidate-ids)))
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
          (check-unambiguous max-id candidate-ids)
          (cdr max-id))))
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

  ; begin - done
  ; define - done
  ; lambda - missing internal defines + implied begin
  ; let-syntax - missing internal defines + implied begin
  ; define-syntax - done
  ; if - done
  ; quote - done
  ; syntax - done

  ; case-lambda

  ; let - missing internal defines + implied begin
  ; quasiquote - done?
  (define special-forms '(begin define define-constant define-values lambda letrec letrec* let-syntax define-syntax quote syntax if))
  (define global-primitives '(datum->syntax-object syntax-object->datum get-syntax-data null? list cons car cdr caar cadr cdar cddr map))
  (for-each (lambda (sym) (add-binding! (make-syntax sym (list global-scope)) sym)) (append special-forms global-forms global-primitives))


  (define variable (generate-symbol 'variable))

  (define (expand-identifier stx env)
    (define binding (resolve-identifier stx))
    (cond
      ; free variable: we let them through because toplevel variables are free
      ((not binding) stx)
      ((member binding global-primitives) stx)
      ((member binding special-forms) (error "bad syntax" stx))
      (else
        (define v (assoc binding env))
        (cond
          ((not v)
           (error "not in context" (get-syntax-data stx)))
          ((eq? (cdr v) variable) stx)
          (else (error "bad syntax" stx))))))


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
           (get-syntax-data stx)))
      ((symbol? stx) (error "resolve: naked symbol in syntax" stx))
      ; vectors are self quoting. same behavior as quote which is further below
      ((syntax-vector? stx) (syntax-object->datum stx))
      ((not (syntax-pair? stx))
       (if (syntax? stx)
           (get-syntax-data stx)
           stx))
      (else
        (case (and (identifier? (syntax-car stx)) (resolve-identifier (syntax-car stx)))
          ((lambda)
           `(lambda ,(resolve-formals (syntax-cadr stx)) ,(resolve (syntax-car (syntax-cddr stx)))))
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
    (make-syntax x (list global-scope sc)))

  (define (eval-for-syntax-binding rhs)
    (define expanded (resolve (expand-impl rhs toplevel-expand-env)))
    (eval expanded macro-expand-env))

  (define (expand-let-syntax stx env)
    (define let-syntax-id (syntax-car stx))
    (define lhs-ids (syntax-map syntax-car (syntax-cadr stx)))
    (define rhss (syntax-map syntax-cadr (syntax-cadr stx)))
    (define body (syntax-car (syntax-cddr stx)))

    (define sc (make-scope))
    (define ids (syntax-map (lambda (lhs-id) (flip-scope lhs-id sc)) lhs-ids))
    (define bindings (syntax-map (lambda (id) (generate-symbol (get-syntax-data id))) ids))
    (for-each (lambda (id binding) (add-binding! id binding)) ids bindings)

    (let* ((rhs-vals (syntax-map eval-for-syntax-binding rhss))
           (body-env (append (map (lambda (binding val) (cons binding val)) bindings rhs-vals) env)))
      (expand-impl (flip-scope body sc) body-env)))

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

  ; TODO internal definition macros
  (define (expand-body stx env)
    (define introduced-sc (make-scope))
    (define (introduce x) (introduced-identifier x introduced-sc))
    ; TODO actually check for constantness
    (define (finish-constants constants body)
      (if (null? constants)
          (expand-impl body env)
          (let ((expr (expand-impl `((,(introduce 'lambda) ,(map syntax-car (reverse constants)) ,body)
                                     . ,(map syntax-cadr (reverse constants))) env)))
            (for-each
              (lambda (e)
                (unless (constant-expr? (syntax-cadr e))
                  (compiler-error "Not a constant expression" `(define-constant . ,(syntax-object->datum e)))))
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
                     (cons (apply-transformer (get-syntax-data (syntax-caar body)) (cdr v) (syntax-car body)) (syntax-cdr body))))
                  (else (finish defines constants body))))
              #;(else )))
          (finish defines constants body))))

  (define (expand-lambda stx env)
    ; unpack (lambda args body)
    (define lambda-id (syntax-car stx))
    (define formals (syntax-cadr stx))
    ;(define body (syntax-car (syntax-cddr stx)))
    (define body (syntax-cddr stx))

    (define dotted? (not (syntax-proper-list? formals)))
    (define sc (make-scope))
    (define ids (syntax-map (lambda (id) (flip-scope id sc)) (syntax-undot-list formals)))
    (define bindings (map (lambda (e) (generate-symbol (get-syntax-data e))) ids))
    (for-each (lambda (id binding) (add-binding! id binding)) ids bindings)


    (let* ((body-env (append (map (lambda (binding) (cons binding variable)) bindings) env))
           (exp-body (expand-body (flip-scope body sc) body-env)))
      `(,lambda-id ,(if dotted? (append (drop-right ids 1) (car (take-right ids 1))) ids)
          ,exp-body)))
  (define (expand-app xs env)
    (syntax-map (lambda (x) (expand-impl x env)) xs))

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

  (define (expand-letrec stx env)
    (define letrec-id (syntax-car stx))
    (define idvals (syntax-cadr stx))
    (define body (syntax-cddr stx))

    (define introduced-sc (make-scope))
    (define (introduce x) (introduced-identifier x introduced-sc))

    (define sc (make-scope))
    (define ids (syntax-map (lambda (idval) (flip-scope (syntax-car idval) sc)) idvals))
    (define bindings (map (lambda (e) (generate-symbol (get-syntax-data e))) ids))
    (for-each (lambda (id binding) (add-binding! id binding)) ids bindings)

    (let* ((letrec-env (append (map (lambda (binding) (cons binding variable)) bindings) env))
           (exp-idvals (syntax-map (lambda (id idval) (list id (expand-impl (flip-scope (syntax-cadr idval) sc) letrec-env))) ids idvals))
           (exp-body (expand-body (flip-scope body sc) letrec-env)))
      (if (every? (cut primitive-letrec? <> ids) (map cadr exp-idvals))
          `(,letrec-id ,exp-idvals ,exp-body)
          (let loop ((count 0)
                     (inner-ids '())
                     (inner-vals '())
                     (idvals '())
                     (todo (reverse exp-idvals))
                     (body exp-body))
            (cond
              ((null? todo)
               `(,letrec-id ,idvals ((,(introduce 'lambda) ,inner-ids ,body) . ,inner-vals)))
              ((primitive-letrec? (cadar todo) ids)
                (loop
                  count
                  inner-ids
                  inner-vals
                  (cons (car todo) idvals)
                  (cdr todo)
                  body))
              (else
               (let ((tmp (introduce (string->symbol (sprintf "tmp~A" count)))))
                 (add-binding! tmp (generate-symbol 'tmp))
                 (loop
                   (+ count 1)
                   (cons tmp inner-ids)
                   (cons (cadar todo) inner-vals)
                   (cons (list (caar todo) #void) idvals)
                   (cdr todo)
                   `(,(introduce 'begin) (,(introduce 'set!) ,(caar todo) ,tmp) ,body)))))))))

  (define (expand-letrec* stx env)
    (define idvals (syntax-cadr stx))
    (define body (syntax-cddr stx))

    (define introduced-sc (make-scope))
    (define (introduce x) (introduced-identifier x introduced-sc))

    (define sc (make-scope))
    (define ids (syntax-map (lambda (idval) (flip-scope (syntax-car idval) sc)) idvals))
    (define bindings (map (lambda (e) (generate-symbol (get-syntax-data e))) ids))
    (for-each (lambda (id binding) (add-binding! id binding)) ids bindings)

    (let* ((letrec-env (append (map (lambda (binding) (cons binding variable)) bindings) env))
           (exp-idvals (syntax-map (lambda (id idval) (list id (expand-impl (flip-scope (syntax-cadr idval) sc) letrec-env))) ids idvals))
           (exp-body (expand-body (flip-scope body sc) letrec-env)))
      (if (every? (cut primitive-letrec? <> ids) (map cadr exp-idvals))
          `(,(introduce 'letrec) ,exp-idvals ,exp-body)
          (let loop ((idvals '())
                     (todo (reverse exp-idvals))
                     (body exp-body))
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
                  (cons (list (caar todo) #void) idvals)
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
        (if (equal? (list global-scope) (get-syntax-scopes var))
            (get-syntax-data var)
            (generate-symbol (get-syntax-data var))))
      (let* ((bindings (get-scope-bindings global-scope)))
        (set-scope-bindings! global-scope (cons (cons var binding) bindings)))
      ; a define is still in the toplevel scope.
      (set! toplevel-expand-env (cons (cons binding value) toplevel-expand-env)))
    binding)

  (define (expand-toplevel-define stx)
    (define define-id (syntax-car stx))
    (define var (syntax-cadr stx))
    (define val (syntax-car (syntax-cddr stx)))

    (add-toplevel-binding! var variable)
    `(,define-id ,var ,(expand-impl val toplevel-expand-env)))

  (define (syntax-proper-list? xs)
    (cond ((syntax-null? xs) #t)
          ((syntax-pair? xs) (syntax-proper-list? (syntax-cdr xs)))
          (else #f)))

  (define (syntax-improper-length xs)
    (let loop ((acc 0) (xs xs))
      (if (syntax-pair? xs)
          (loop (+ acc 1) (syntax-cdr xs))
          acc)))

  (define (desugar-define-syntax stx)
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
          stx)
        stx))

  (define (expand-toplevel-define-syntax stx)
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
        (eval-for-syntax-binding raw-val)))
    (set-cdr! (assq binding toplevel-expand-env) val)
    '())

  (define (apply-transformer name t stx)
    (define intro-scope (make-scope))
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
    (flip-scope transformed-s intro-scope))
  (define (expand-id-application-form expand stx binding env)
    (case binding
      ((lambda) (expand-lambda stx env))
      ((letrec) (expand-letrec stx env))
      ((letrec*) (expand-letrec* stx env))
      ((let-syntax) (expand-let-syntax stx env))
      ((syntax quote) stx)
      ((begin)
       (case (syntax-length stx)
         ((1) #void)
         ((2) (expand-impl (syntax-cadr stx) env))
         ((3)
          (list
            (syntax-car stx)
            (expand-impl (syntax-cadr stx) env)
            (expand-impl (syntax-caddr stx) env)))
         (else
          (list
            (syntax-car stx)
            (expand-impl (syntax-cadr stx) env)
            (expand-impl (cons (syntax-car stx) (syntax-cddr stx)) env)))))
      ((if)
       (if (= (syntax-length stx) 4)
           (list (syntax-car stx)
                 (expand-impl (syntax-cadr stx) env)
                 (expand-impl (syntax-car (syntax-cddr stx)) env)
                 (expand-impl (syntax-cadr (syntax-cddr stx)) env))
           (list (syntax-car stx)
                 (expand-impl (syntax-cadr stx) env)
                 (expand-impl (syntax-car (syntax-cddr stx)) env)
                 #void)))
      (else
        (define v (assoc binding env))
        (cond
          ((and v (procedure? (cdr v)))
           (expand (apply-transformer (get-syntax-data (syntax-car stx)) (cdr v) stx) env))
          (else (expand-app stx env))))))

  (define (expand-impl stx env)
    (cond
      ((identifier? stx) (expand-identifier stx env))
      ((syntax-null? stx) (error "expand: stray () in program"))
      ; vectors are self quoting so handled here. quoted data just returns itself
      ; and other literals, like numbers, don't have syntaxhood. only symbols do.
      ((not (syntax-pair? stx)) stx)
      ((identifier? (syntax-car stx))
       (define binding (resolve-identifier (syntax-car stx)))
       (expand-id-application-form expand-impl stx binding env))
      (else
       (expand-app stx env))))
  (define (expand-toplevel stx _)
    (cond
      ((identifier? stx) (list (expand-identifier stx toplevel-expand-env)))
      ((syntax-null? stx) (error "expand: stray () in program"))
      ; vectors are self quoting so handled here. quoted data just returns itself
      ; and other literals, like numbers, don't have syntaxhood. only symbols do.
      ((not (syntax-pair? stx)) (list stx))
      ((identifier? (syntax-car stx))
       (define binding (resolve-identifier (syntax-car stx)))
       (case binding
         ((begin)
          ; toplevel defines are splicing
          (append-map (cut expand-toplevel <> _) (syntax-cdr stx)))
         ((define)
          (list (expand-toplevel-define (desugar-define stx))))
         ((define-syntax)
          (expand-toplevel-define-syntax (desugar-define-syntax stx))
          '())
         ((import)
          ; No effect on expanders currently. global values are unmangled. and no macros to bind yet.
          (list stx))
         (else
          ; if a macro is evaluated, it returns a toplevel return, which is a list of expressions
          ; otherwise an expression is return which needs to be listified.
          ; call/cc to avoid double listification
          (call/cc
            (lambda (k)
              (list (expand-id-application-form (lambda (x y) (k (expand-toplevel x y))) stx binding toplevel-expand-env))))
          )))
      (else
       (list (expand-app stx toplevel-expand-env)))))

  (define (expand-syntax expr)
    (map resolve (expand-toplevel (datum->syntax-object (make-syntax 'dummy (list global-scope)) expr) #f))))
