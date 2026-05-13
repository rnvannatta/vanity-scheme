(define-library (vanity compiler hygienic eval)
  (import (vanity core) (vanity list) (vanity compiler hygienic types) (vanity compiler hygienic global-forms))
  (export eval)

  (define (bind-formals formals args env)
    (cond ((null? formals)
           (if (null? args)
               env
               (error "too many args to lambda")))
          ((pair? formals)
           (if (pair? args)
               (bind-formals (cdr formals) (cdr args) (cons (cons (car formals) (car args)) env))
               (error "too few args to lambda")))
          (else
           (cons (cons formals args) env))))

  (define (eval expr env)
    (cond
      ((symbol? expr)
       (let ((lookup (assoc expr env)))
         (if lookup (cdr lookup) (error "eval: symbol not found" expr))))
      ((null? expr) (error "eval: stray null"))
      ((not (pair? expr)) expr)
      ((eq? (car expr) 'quote) (cadr expr))
      ((eq? (car expr) 'lambda)
       (lambda args
         (eval (caddr expr) (bind-formals (cadr expr) args env))))
      ((eq? (car expr) 'if)
       (if (eval (cadr expr) env)
           (eval (caddr expr) env)
           (eval (cadddr expr) env)))
      ((eq? (car expr) 'begin)
       (eval (cadr expr) env)
       (eval (caddr expr) env))
      (else
       (apply (eval (car expr) env) (map (lambda (e) (eval e env)) (cdr expr))))))
)
