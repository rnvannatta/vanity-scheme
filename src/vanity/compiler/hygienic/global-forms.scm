(define-library (vanity compiler hygienic global-forms)
  (import (vanity core) (vanity list) (vanity compiler hygienic types))
  (export global-identifier global-forms toplevel-expand-env)

  (define (global-identifier expr)
    (make-syntax expr (list global-scope)))

  (define (syntax-unpack x)
    (if (syntax? x)
        (get-syntax-data x)
        x))

  (define (expand-let form)
    (##global-quasisyntax
      ((lambda ,(syntax-map syntax-car (syntax-cadr form)) ,(syntax-cadr (syntax-cdr form)))
       . ,(syntax-map syntax-cadr (syntax-cadr form)))))

  (define (expand-quasiquote-impl quotation expr)
    ; right the match macro doesn't work here because syntax lists. ugh.
    (cond
      ((syntax-pair? expr)
       (case (and (identifier? (syntax-car expr)) (get-syntax-data (syntax-car expr)))
        ((quasiquote)
         (##global-quasisyntax
           (##vcore.cons 'quasiquote (##vcore.cons ,(expand-quasiquote-impl (+ quotation 1) (syntax-cadr expr)) '()))))
        ((unquote)
         (let ((x (syntax-cadr expr)))
           (if (= quotation 1)
               (cond ((vector? x) (##global-quasisyntax (##vcore.list->vector ,(vector->list x))))
                   ((f64vector? x) (##global-quasisyntax (##vcore.list->f64vector ,(f64vector->list x))))
                   ((f32vector? x) (##global-quasisyntax (##vcore.list->f32vector ,(f32vector->list x))))
                   ((s32vector? x) (##global-quasisyntax (##vcore.list->s32vector ,(s32vector->list x))))
                   ((u16vector? x) (##global-quasisyntax (##vcore.list->u16vector ,(u16vector->list x))))
                   ((s16vector? x) (##global-quasisyntax (##vcore.list->s16vector ,(s16vector->list x))))
                   ((u8vector? x) (##global-quasisyntax (##vcore.list->u8vector ,(u8vector->list x))))
                   ((s8vector? x) (##global-quasisyntax (##vcore.list->s8vector ,(s8vector->list x))))
                   (else x))
               (##global-quasisyntax (##vcore.cons 'unquote (##vcore.cons ,(expand-quasiquote-impl (- quotation 1) x) '()))))))
        (else
          (if (and (syntax-pair? (syntax-car expr))
                   (identifier? (syntax-caar expr))
                   (eq? (get-syntax-data (syntax-caar expr)) 'unquote-splicing))
              (if (= quotation 1)
                  (##global-quasisyntax
                    (##vcore.append ,(syntax-cadr (syntax-car expr)) ,(expand-quasiquote-impl quotation (syntax-cdr expr))))
                  (##global-quasisyntax
                    (##vcore.cons (##vcore.cons 'unquote-splicing (##vcore.cons ,(expand-quasiquote-impl (- quotation 1) (syntax-cadr (syntax-car expr))) '()) ,(expand-quasiquote-impl quotation (syntax-cdr expr))))))
              (##global-quasisyntax
                (##vcore.cons ,(expand-quasiquote-impl quotation (syntax-car expr))
                              ,(expand-quasiquote-impl quotation (syntax-cdr expr))))))))
      ((syntax-vector? expr)
       (##global-quasisyntax (##vcore.list->vector ,(expand-quasiquote-impl quotation (vector->list (syntax-unpack expr))))))
      (else (##global-quasisyntax ',expr))))
  (define (expand-quasiquote form) (expand-quasiquote-impl 1 (syntax-cadr form)))

  (define (expand-quasisyntax-impl quotation expr)
    ; right the match macro doesn't work here because syntax lists. ugh.
    (cond
      ((syntax-pair? expr)
       (case (and (identifier? (syntax-car expr)) (get-syntax-data (syntax-car expr)))
        ((quasisyntax)
         (##global-quasisyntax
           (##vcore.cons 'quasisyntax (##vcore.cons ,(expand-quasisyntax-impl (+ quotation 1) (syntax-cadr expr)) '()))))
        ((unquote)
         (let ((x (syntax-cadr expr)))
           (if (= quotation 1)
               (cond ((vector? x) (##global-quasisyntax (##vcore.list->vector ,(vector->list x))))
                   ((f64vector? x) (##global-quasisyntax (##vcore.list->f64vector ,(f64vector->list x))))
                   ((f32vector? x) (##global-quasisyntax (##vcore.list->f32vector ,(f32vector->list x))))
                   ((s32vector? x) (##global-quasisyntax (##vcore.list->s32vector ,(s32vector->list x))))
                   ((u16vector? x) (##global-quasisyntax (##vcore.list->u16vector ,(u16vector->list x))))
                   ((s16vector? x) (##global-quasisyntax (##vcore.list->s16vector ,(s16vector->list x))))
                   ((u8vector? x) (##global-quasisyntax (##vcore.list->u8vector ,(u8vector->list x))))
                   ((s8vector? x) (##global-quasisyntax (##vcore.list->s8vector ,(s8vector->list x))))
                   (else x))
               (##global-quasisyntax (##vcore.cons 'unquote (##vcore.cons ,(expand-quasisyntax-impl (- quotation 1) x) '()))))))
        (else
          (if (and (syntax-pair? (syntax-car expr))
                   (identifier? (syntax-caar expr))
                   (eq? (get-syntax-data (syntax-caar expr)) 'unquote-splicing))
              (if (= quotation 1)
                  (##global-quasisyntax
                    (##vcore.append ,(syntax-cadr (syntax-car expr)) ,(expand-quasisyntax-impl quotation (syntax-cdr expr))))
                  (##global-quasisyntax
                    (##vcore.cons (##vcore.cons 'unquote-splicing (##vcore.cons ,(expand-quasisyntax-impl (- quotation 1) (syntax-cadr (syntax-car expr))) '()) ,(expand-quasisyntax-impl quotation (syntax-cdr expr))))))
              (##global-quasisyntax
                (##vcore.cons ,(expand-quasisyntax-impl quotation (syntax-car expr))
                              ,(expand-quasisyntax-impl quotation (syntax-cdr expr))))))))
      ((syntax-vector? expr)
       (##global-quasisyntax (##vcore.list->vector ,(expand-quasisyntax-impl quotation (vector->list (syntax-unpack expr))))))
      (else (##global-quasisyntax (syntax ,expr)))))
  (define (expand-quasisyntax form) (expand-quasisyntax-impl 1 (syntax-cadr form)))
 

  (define global-forms '(let quasiquote quasisyntax))
  (define toplevel-expand-env
    `((let .  ,expand-let)
      (,'quasiquote . ,expand-quasiquote)
      (quasisyntax . ,expand-quasisyntax)))
)
