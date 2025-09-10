(define-library (vanity compiler blasphemy)
  (export expand-do-loop)
  (import (vanity core) (vanity list))
  (define gensym ##vcore.gensym)

  (define my-delete-duplicates
    (case-lambda
      ((xs =)
       (define (remove-elem x xs)
         (cond
          ((null? xs) '())
          ((= (car xs) x) (remove-elem x (cdr xs)))
          (else (cons (car xs) (remove-elem x (cdr xs))))))
       (let loop ((xs xs))
         (cond
          ((null? xs) '())
          (else
           (cons (car xs) (loop (remove-elem (car xs) (cdr xs))))))))
      ((xs) (my-delete-duplicates xs equal?))))

  ; TODO:

  ; for as hash : notyet

  ; CHANGE OF SEMANTICS

  ; syntax (do-loop with-vars* for-vars* let-vars* initially* exprs* finally* finally-return?)

  ; for = syntax replaced with let =
  ; finally-return added for scheminess

  ; BONUS SYNTAX: `for x repeat N`, sugar for `for x from 0 below N`

  ; with vars first     - done
  ; then for vars       - done
  ; then let = vars     - done
  ; then initially      - done
  ; then exprs          - done
  ; then finally        - done
  ; then finally-return - done

  (define (expand-do-loop expr)
    (define *loop* (gensym 'loop))
    (define *finalize* (gensym 'finalize))
    (define *collect-acc* (gensym 'collect-acc))
    (define *append-acc* (gensym 'append-acc))
    (define *append-acc!* (gensym 'append-acc!))
    (define *sum-acc* (gensym 'sum-acc))
    (define *count-acc* (gensym 'count-acc))
    (define *maximize-acc* (gensym 'maximize-acc))
    (define *minimize-acc* (gensym 'minimize-acc))
    (define tail-table '())
    (define (get-acc-tail acc)
      (let ((lookup (assv acc tail-table)))
        (if lookup
            (cdr lookup)
            (let ((tail (gensym (string->symbol (sprintf "~A-tail" acc)))))
              (set! tail-table (cons (cons acc tail)  tail-table))
              tail))))
    ; TODO yoink the y and z into when variables
    (define (parse-for parsed-withs parsed-vars var expr)
      (define (parse-to expr default-cmp default-inc)
        (match expr
          (('to y . rest) (values default-cmp default-inc y rest))
          (('upto y . rest) (values '<= '+ y rest))
          (('below y . rest) (values '< '+ y rest))
          (('downto y . rest) (values '>= '- y rest))
          (('above y . rest) (values '> '- y rest))
          (else (values #f default-inc #f expr))))
      (define (parse-by expr)
        (match expr (('by z . rest) (values z rest)) (else (values 1 expr))))
      (define (parse-from x rest default-cmp default-inc)
        (define-values (cmp inc y to-rest) (parse-to rest default-cmp default-inc))
        (define-values (by by-rest) (parse-by to-rest))
        (cond
         ((not cmp)
          (parse-variable-clauses
            parsed-withs
            (cons `(for ,var from ,x ,default-inc ,by) parsed-vars)
            by-rest))
         (else
          (parse-variable-clauses
            parsed-withs
            (cons `(for ,var from ,x ,cmp ,y ,inc ,by) parsed-vars)
            by-rest))))
      (match expr
        (('from x . rest)
         (parse-from x rest '<= '+))
        (('upfrom x . rest)
         ; TODO consider specifically excluding syntax
         ; like for x upfrom 0 above 5
         (parse-from x rest '<= '+))
        (('downfrom x . rest)
         ; TODO consider excluding syntax issues
         (parse-from x rest '>= '-))
        (('in x . rest)
         (parse-variable-clauses
           parsed-withs
           (cons `(for ,var in ,x ,(gensym 'lst)) parsed-vars)
           rest))
        (('on x . rest)
         (parse-variable-clauses
           parsed-withs
           (cons `(for ,var on ,x) parsed-vars)
           rest))
        (('= x 'then y . rest)
         (parse-variable-clauses
           parsed-withs
           (cons `(for ,var ,x then ,y) parsed-vars)
           rest))
        (('across x . rest)
         (let ((vec (gensym 'vec)))
           (parse-variable-clauses
              (cons `(,vec ,x) parsed-withs)
             (cons `(for ,var across ,vec ,(gensym 'i)) parsed-vars)
             rest)))
        (('across-s8 x . rest)
         (let ((vec (gensym 'vec)))
           (parse-variable-clauses
              (cons `(,vec ,x) parsed-withs)
             (cons `(for ,var across-s8 ,vec ,(gensym 'i)) parsed-vars)
             rest)))
        (('across-u8 x . rest)
         (let ((vec (gensym 'vec)))
           (parse-variable-clauses
              (cons `(,vec ,x) parsed-withs)
             (cons `(for ,var across-u8 ,vec ,(gensym 'i)) parsed-vars)
             rest)))
        (('across-s16 x . rest)
         (let ((vec (gensym 'vec)))
           (parse-variable-clauses
              (cons `(,vec ,x) parsed-withs)
             (cons `(for ,var across-s16 ,vec ,(gensym 'i)) parsed-vars)
             rest)))
        (('across-u16 x . rest)
         (let ((vec (gensym 'vec)))
           (parse-variable-clauses
              (cons `(,vec ,x) parsed-withs)
             (cons `(for ,var across-u16 ,vec ,(gensym 'i)) parsed-vars)
             rest)))
        (('across-s32 x . rest)
         (let ((vec (gensym 'vec)))
           (parse-variable-clauses
              (cons `(,vec ,x) parsed-withs)
             (cons `(for ,var across-s32 ,vec ,(gensym 'i)) parsed-vars)
             rest)))
        (('across-f32 x . rest)
         (let ((vec (gensym 'vec)))
           (parse-variable-clauses
              (cons `(,vec ,x) parsed-withs)
             (cons `(for ,var across-f32 ,vec ,(gensym 'i)) parsed-vars)
             rest)))
        (('across-f64 x . rest)
         (let ((vec (gensym 'vec)))
           (parse-variable-clauses
              (cons `(,vec ,x) parsed-withs)
             (cons `(for ,var across-f64 ,vec ,(gensym 'i)) parsed-vars)
             rest)))
        (else
          (error "invalid do-loop for syntax"))))
    (define (parse-with-clauses parsed-withs expr)
      (match expr
        (('with x '= y . rest)
         (parse-with-clauses (cons `(,x ,y) parsed-withs) rest))
        (('with . rest)
         (error "invalid do-loop with clause"))
        (else
         (parse-variable-clauses parsed-withs '() expr))))
    (define (parse-let-clauses parsed-withs parsed-vars parsed-lets expr)
      (match expr
        (('let x '= y . rest)
         (parse-let-clauses parsed-withs parsed-vars (cons `(,x ,y) parsed-lets) rest))
        (else
         (parse-initially-clauses parsed-withs parsed-vars parsed-lets '() expr))))
    (define (parse-variable-clauses parsed-withs parsed-vars expr)
      (match expr
        (('for x 'repeat n . rest)
         (parse-for parsed-withs parsed-vars x (append `(from 0 below ,n) rest)))
        (('for x . rest)
         (parse-for parsed-withs parsed-vars x rest))
        (('as x . rest)
         (parse-for parsed-withs parsed-vars x rest))
        (('repeat n . rest)
         (parse-for parsed-withs parsed-vars (gensym 'rep) (append `(from 0 below ,n) rest)))
        (else
         (parse-let-clauses parsed-withs parsed-vars '() expr))))
    (define (parse-initially-clauses parsed-withs parsed-vars parsed-lets parsed-initially expr)
      (match expr
        (('initially x . rest)
         (parse-initially-clauses parsed-withs parsed-vars parsed-lets (cons x parsed-initially) rest))
        (else
          (parse-main-clauses '() parsed-withs parsed-vars parsed-lets parsed-initially '() expr))))
    (define (parse-main-clauses bool-stack parsed-withs parsed-vars parsed-lets parsed-initially parsed-exprs expr)
      (define (parse-into expr default)
        (match expr (('into x . rest) (values x rest)) (else (values default expr))))
      (define (parse-and-else expr)
        (match expr
          (('else . rest) (values 'else rest))
          (('and . rest) (values 'and rest))
          (else (values #f expr))))
      (define (unpack-bool-stack bool-stack and-else)
        (let ((bool
               (cond
                ((null? bool-stack) #t)
                ((null? (cdr bool-stack)) (car bool-stack))
                (else (cons 'and bool-stack))))
              (bool-stack
               (cond
                ((null? bool-stack) '())
                ((eqv? and-else 'else) (cons `(not ,(car bool-stack)) (cdr bool-stack)))
                ((eqv? and-else 'and) bool-stack)
                (else (cdr bool-stack)))))
          (values bool bool-stack)))
      (match expr
        ((cmd x . rest)
         (case cmd
           ((if when)
            (let ((p (gensym 'p)))
              (parse-main-clauses
                (cons p bool-stack)
                parsed-withs
                parsed-vars
                parsed-lets
                parsed-initially
                (cons `(let ,p ,x) parsed-exprs)
                rest)))
           ((unless)
            (let ((p (gensym 'p)))
              (parse-main-clauses
                (cons p bool-stack)
                parsed-withs
                parsed-vars
                parsed-lets
                parsed-initially
                (cons `(let ,p (not ,x)) parsed-exprs)
                rest)))
           ((do doing)
            (define-values (and-else rest-rest) (parse-and-else rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (parse-main-clauses
              new-bool-stack
              parsed-withs
              parsed-vars
              parsed-lets
              parsed-initially
              (cons `(do ,bool ,x) parsed-exprs)
              rest-rest))
           ((return always never thereis)
            (define-values (and-else rest-rest) (parse-and-else rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (parse-main-clauses
              new-bool-stack
              parsed-withs
              parsed-vars
              parsed-lets
              parsed-initially
              (cons `(,cmd ,bool ,x) parsed-exprs)
              rest-rest))
           #;((always never thereis)
            (define-values (and-else rest-rest) (parse-and-else rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (parse-main-clauses
              new-bool-stack
              parsed-withs
              parsed-vars
              parsed-lets
              parsed-initially
              (cons `(,cmd ,bool ,x) parsed-exprs)
              rest-rest))
           ((while until)
            (define-values (and-else rest-rest) (parse-and-else rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (parse-main-clauses
              new-bool-stack
              parsed-withs
              parsed-vars
              parsed-lets
              parsed-initially
              (cons
                (if (eqv? bool #t)
                  `(until ,(if (eqv? cmd 'while) `(not ,x) x))
                  `(until (and ,bool ,(if (eqv? cmd 'while) `(not ,x) x))))
                parsed-exprs)
              rest-rest))
           ((collect collecting)
            (define-values (acc into-rest) (parse-into rest *collect-acc*))
            (define-values (and-else rest-rest) (parse-and-else into-rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (define tail (get-acc-tail acc))
            (parse-main-clauses
             new-bool-stack
             (cons `(,acc '())
               (cons `(,tail '()) parsed-withs))
             parsed-vars
             parsed-lets
             parsed-initially
             (cons `(collect ,bool ,x into ,acc ,tail) parsed-exprs)
             rest-rest))
           ((append appending)
            (define-values (acc into-rest) (parse-into rest *append-acc*))
            (define-values (and-else rest-rest) (parse-and-else into-rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (define tail (get-acc-tail acc))
            (parse-main-clauses
             new-bool-stack
             (cons `(,acc '())
               (cons `(,tail '()) parsed-withs))
             parsed-vars
             parsed-lets
             parsed-initially
             (cons `(append ,bool ,x into ,acc ,tail) parsed-exprs)
             rest-rest))
           ((append! appending!)
            (define-values (acc into-rest) (parse-into rest *append-acc!*))
            (define-values (and-else rest-rest) (parse-and-else into-rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (define tail (get-acc-tail acc))
            (parse-main-clauses
             new-bool-stack
             (cons `(,acc '())
               (cons `(,tail '()) parsed-withs))
             parsed-vars
             parsed-lets
             parsed-initially
             (cons `(append! ,bool ,x into ,acc ,tail) parsed-exprs)
             rest-rest))
           ((sum summing)
            (define-values (acc into-rest) (parse-into rest *sum-acc*))
            (define-values (and-else rest-rest) (parse-and-else into-rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (parse-main-clauses
              new-bool-stack
              parsed-withs
              parsed-vars
              parsed-lets
              parsed-initially
              (cons `(accumulate ,bool + ,x into ,acc 0) parsed-exprs)
              rest-rest))
           ((count counting)
            (define-values (acc into-rest) (parse-into rest *count-acc*))
            (define-values (and-else rest-rest) (parse-and-else into-rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (parse-main-clauses
              new-bool-stack
              parsed-withs
              parsed-vars
              parsed-lets
              parsed-initially
              (cons `(accumulate ,bool (lambda (x acc) (if x (+ acc 1) acc 0)) ,x into ,acc) parsed-exprs)
              rest-rest))
           ((minimize minimizing)
            (define-values (acc into-rest) (parse-into rest *minimize-acc*))
            (define-values (and-else rest-rest) (parse-and-else into-rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (parse-main-clauses
              new-bool-stack
              parsed-withs
              parsed-vars
              parsed-lets
              parsed-initially
              (cons `(accumulate ,bool min ,x into ,acc (/ 1 0.0)) parsed-exprs)
              rest-rest))
           ((maximize maximizing)
            (define-values (acc into-rest) (parse-into rest *maximize-acc*))
            (define-values (and-else rest-rest) (parse-and-else into-rest))
            (define-values (bool new-bool-stack) (unpack-bool-stack bool-stack and-else))
            (parse-main-clauses
              new-bool-stack
              parsed-withs
              parsed-vars
              parsed-lets
              parsed-initially
              (cons `(accumulate ,bool max ,x into ,acc (/ -1 0.0)) parsed-exprs)
              rest-rest))
           ((else)
            (error "do-loop: dangling else clause" `(else ,x)))
           (else (parse-finally-clauses parsed-withs parsed-vars parsed-lets parsed-initially parsed-exprs '() expr))))
        (else
         (parse-finally-clauses parsed-withs parsed-vars parsed-lets parsed-initially parsed-exprs '() expr))))
    (define (parse-finally-clauses parsed-withs parsed-vars parsed-lets parsed-initially parsed-exprs parsed-finally expr)
      (define (extract-into-var parsed-var)
        (match parsed-var
          (('accumulate bool op x 'into var init) var)
          ((_ bool x 'into var . _) var)
          (else #f)))
      (define (extract-final-var final-var parsed-vars)
        (match parsed-vars
          ((('accumulate bool op x 'into var init) . rest) (extract-final-var var (cdr parsed-vars)))
          (((_ bool x 'into var . _) . rest) (extract-final-var var (cdr parsed-vars)))
          ((('always . _) . rest) (extract-final-var #t (cdr parsed-vars)))
          ((('never . _) . rest) (extract-final-var #t (cdr parsed-vars)))
          ((('thereis . _) . rest) (extract-final-var #f (cdr parsed-vars)))
          (() final-var)
          (else (extract-final-var final-var (cdr parsed-vars)))))
      (define (extract-into-vars parsed-vars)
        (filter (lambda (x) x) (map extract-into-var parsed-vars)))
      (match expr
        (('finally x . rest)
         (parse-finally-clauses parsed-withs parsed-vars parsed-lets parsed-initially parsed-exprs (cons x parsed-finally) rest))
        (('finally-return x)
         (write-loop
           (reverse parsed-withs)
           (reverse parsed-vars)
           (reverse parsed-lets)
           (reverse parsed-initially)
           (reverse parsed-exprs)
           `(lambda ,(my-delete-duplicates (extract-into-vars (reverse parsed-exprs)) eqv?)
              . ,(reverse (cons x parsed-finally)))))
        (()
         (write-loop
           (reverse parsed-withs)
           (reverse parsed-vars)
           (reverse parsed-lets)
           (reverse parsed-initially)
           (reverse parsed-exprs)
           (let ((args (my-delete-duplicates (extract-into-vars (reverse parsed-exprs)) eqv?)))
             `(lambda ,args
                . ,(reverse (cons (extract-final-var #void (reverse parsed-exprs)) parsed-finally))))))
        (else (error "invalid do-loop" expr))))
    (define (write-loop parsed-withs parsed-vars parsed-lets parsed-initially parsed-exprs parsed-finally)
      (define (write-for-test expr)
        (match expr
          (('for var 'from _ test y _ _)
           `(,test ,var ,y))
          (('for var 'from _ _ _)
           #t)
          (('for _ 'in _ lst-iter)
           `(pair? ,lst-iter))
          (('for var 'on _)
           `(pair? ,var))
          (('for var x 'then y)
           #t)
          (('for _ 'across vec i)
           `(< ,i (vector-length ,vec)))
          (('for _ 'across-s8 vec i)
           `(< ,i (s8vector-length ,vec)))
          (('for _ 'across-u8 vec i)
           `(< ,i (u8vector-length ,vec)))
          (('for _ 'across-s16 vec i)
           `(< ,i (s16vector-length ,vec)))
          (('for _ 'across-u16 vec i)
           `(< ,i (u16vector-length ,vec)))
          (('for _ 'across-s32 vec i)
           `(< ,i (s32vector-length ,vec)))
          (('for _ 'across-f32 vec i)
           `(< ,i (f32vector-length ,vec)))
          (('for _ 'across-f64 vec i)
           `(< ,i (f64vector-length ,vec)))
          (else (error "invalid write-for-test"))))
      (define (write-exprs exprs-left)
        (define (wrap-if bool expr-a expr-b)
          (if (eq? bool #t)
              expr-a
              `(if ,bool ,expr-a ,expr-b)))
        (match exprs-left
          ((('do bool x) . rest)
           `(begin ,(wrap-if bool x #f) ,(write-exprs rest)))
          ((('return bool x) . rest)
           `(if ,bool ,x ,(write-exprs rest)))
          ((('always bool x) . rest)
           `(if (and ,bool (not ,x)) #f ,(write-exprs rest)))
          ((('never bool x) . rest)
           `(if (and ,bool ,x) #f ,(write-exprs rest)))
          ((('thereis bool x) . rest)
           `(if (and ,bool ,x) #t ,(write-exprs rest)))
          ((('let x y) . rest)
           `(let ((,x ,y)) ,(write-exprs rest)))
          ((('until x) . rest)
           `(if ,x
                (,*finalize* . ,(cadr parsed-finally))
                ,(write-exprs rest)))
          ((('collect bool x 'into acc tail) . rest)
           `(begin
              ,(wrap-if bool
                  `(let ((*node* (cons ,x '())))
                    (if (null? ,tail)
                        (set! ,acc *node*)
                        (set-cdr! ,tail *node*))
                    (set! ,tail *node*))
                   #f)
              ,(write-exprs rest)))
          ((('append! bool x 'into acc tail) . rest)
           `(begin
              ,(wrap-if bool
                `(let ((*lst* ,x))
                  (if (null? ,tail)
                      (set! ,acc *lst*)
                      (set-cdr! ,tail *lst*))
                  (set! ,tail (if (null? *lst*) ,tail (take-right *lst* 1))))
                 #f)
              ,(write-exprs rest)))
          ((('append bool x 'into acc tail) . rest)
           `(begin
              ,(wrap-if bool
                `(let ((*lst* (list-copy ,x)))
                  (if (null? ,tail)
                      (set! ,acc *lst*)
                      (set-cdr! ,tail *lst*))
                  (set! ,tail (if (null? *lst*) ,tail (take-right *lst* 1))))
                 #f)
              ,(write-exprs rest)))
          ((('accumulate bool op x 'into var init) . rest)
           `(let* ((,var ,(wrap-if bool `(,op ,x ,var) var)))
              ,(write-exprs rest)))
          (() `(,*loop* ,@(write-recur-vars parsed-vars)
                     . ,(write-recur-accumulators (filter (lambda (e) (eqv? (car e) 'accumulate)) parsed-exprs))))
          (else (error "invalid write-exprs"))))
      (define (write-recur-accumulators exprs-left)
        (match exprs-left
          ((('accumulate _ _ _ 'into var init) . rest)
           (cons var (write-recur-accumulators rest)))
          (() '())
          (else (error "invalid write-recur-accumulators" exprs-left))))
      (define (write-recur-vars vars-left)
        (match vars-left
          ((('for var 'from _ _ _ op by) . rest)
           (cons
             `(,op ,var ,by)
             (write-recur-vars rest)))
          ((('for var 'from _ op by) . rest)
           (cons
             `(,op ,var ,by)
             (write-recur-vars rest)))
          ((('for _ 'in _ lst-iter) . rest)
           (cons
             `(cdr ,lst-iter)
             (write-recur-vars rest)))
          ((('for var 'on _) . rest)
           (cons
             `(cdr ,var)
             (write-recur-vars rest)))
          ((('for var x 'then y) . rest)
           (cons
             y
             (write-recur-vars rest)))
          ((('for var 'across vec i) . rest)
           (cons `(+ ,i 1) (write-recur-vars rest)))
          ((('for var 'across-s8 vec i) . rest)
           (cons `(+ ,i 1) (write-recur-vars rest)))
          ((('for var 'across-u8 vec i) . rest)
           (cons `(+ ,i 1) (write-recur-vars rest)))
          ((('for var 'across-s16 vec i) . rest)
           (cons `(+ ,i 1) (write-recur-vars rest)))
          ((('for var 'across-u16 vec i) . rest)
           (cons `(+ ,i 1) (write-recur-vars rest)))
          ((('for var 'across-s32 vec i) . rest)
           (cons `(+ ,i 1) (write-recur-vars rest)))
          ((('for var 'across-f32 vec i) . rest)
           (cons `(+ ,i 1) (write-recur-vars rest)))
          ((('for var 'across-f64 vec i) . rest)
           (cons `(+ ,i 1) (write-recur-vars rest)))
          (() '())
          (else (error "invalid write-recur-vars"))))
      (define (write-init-var var)
        (match var
          (('for var 'from x . _)
           `(,var ,x))
          (('for var 'on lst)
           `(,var ,lst))
          (('for var 'in lst iter-lst)
           `(,iter-lst ,lst))
          (('for var x 'then y)
           `(,var ,x))
          (('for _ 'across _ i) `(,i 0))
          (('for _ 'across-s8 _ i) `(,i 0))
          (('for _ 'across-u8 _ i) `(,i 0))
          (('for _ 'across-s16 _ i) `(,i 0))
          (('for _ 'across-u16 _ i) `(,i 0))
          (('for _ 'across-s32 _ i) `(,i 0))
          (('for _ 'across-f32 _ i) `(,i 0))
          (('for _ 'across-f64 _ i) `(,i 0))
          (else
            (error "invalid write-init-var"))))
      (define (write-init-var-lets parsed-vars)
        (match parsed-vars
          ((('for var 'in lst iter-lst) . rest)
           (cons `(,var (car ,iter-lst)) (write-init-var-lets rest)))
          ((('for var 'across vec i) . rest)
           (cons `(,var (vector-ref ,vec ,i)) (write-init-var-lets rest)))
          ((('for var 'across-s8 vec i) . rest)
           (cons `(,var (s8vector-ref ,vec ,i)) (write-init-var-lets rest)))
          ((('for var 'across-u8 vec i) . rest)
           (cons `(,var (u8vector-ref ,vec ,i)) (write-init-var-lets rest)))
          ((('for var 'across-s16 vec i) . rest)
           (cons `(,var (s16vector-ref ,vec ,i)) (write-init-var-lets rest)))
          ((('for var 'across-u16 vec i) . rest)
           (cons `(,var (u16vector-ref ,vec ,i)) (write-init-var-lets rest)))
          ((('for var 'across-s32 vec i) . rest)
           (cons `(,var (s32vector-ref ,vec ,i)) (write-init-var-lets rest)))
          ((('for var 'across-f32 vec i) . rest)
           (cons `(,var (f32vector-ref ,vec ,i)) (write-init-var-lets rest)))
          ((('for var 'across-f64 vec i) . rest)
           (cons `(,var (f64vector-ref ,vec ,i)) (write-init-var-lets rest)))
          (() '())
          (else (write-init-var-lets (cdr parsed-vars)))))
      `(let* ,(append parsed-withs `((,*finalize* ,parsed-finally)))
         ,@parsed-initially
         (let ,*loop* ,(append (map write-init-var parsed-vars)
                            (map (lambda (e) (list (list-ref e 5) (list-ref e 6)))
                              (filter (lambda (e) (eqv? (car e) 'accumulate)) parsed-exprs)))
           (if (and . ,(filter (lambda (x) (not (eq? x #t))) (map write-for-test parsed-vars)))
             (let ,(write-init-var-lets parsed-vars)
               (let* ,parsed-lets
                 ,(write-exprs parsed-exprs)))
             (,*finalize* . ,(cadr parsed-finally))))))
    (match expr
      (('do-loop 'named x . rest)
       (if (not (symbol? x)) (error "do-loop: not a symbol" x))
       (set! *loop* x)
       (parse-with-clauses '() rest))
      (('do-loop . rest)
       (parse-with-clauses '() rest))
      (else (error "not a do-loop")))))
