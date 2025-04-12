(import (vanity core) (vanity list))
; -e for explain in machingrish
; -s for explain in s-expressions
; -o for output file
; 
(define parse-decl-impl (##vcore.function "VForeignParseDeclC"))
(define release-parse (##vcore.function "VForeignReleaseParse"))
(define (deep-copy x)
  (cond ((string? x) (string-copy x))
        ((pair? x) (cons (deep-copy (car x)) (deep-copy (cdr x))))
        (else x)))
(define (parse-decl str)
  (call/cc
    (lambda (k) 
      (with-exception-handler
        (lambda (err)
          (k (string-append "syntax error in: " str "\n")))
        (lambda ()
          (let ((decl (deep-copy (parse-decl-impl str))))
            (release-parse)
            decl))))))

(define (to-machingrish parse)
  (define (unwrap-decl type var)
    (if (pair? var)
        (match var
          (("const" x) (unwrap-decl (list "const" type) x))
          (("pointer" x) (unwrap-decl (list "pointer" type) x))
          (("array" x len) (unwrap-decl (list "array" type len) x))
          (("function" x) (unwrap-decl (list "function" type) x))
          (("function" x args) (unwrap-decl (list "function" type args) x))
          (else var))
        (values type var)))
  (define (iter-basetype type)
    (let loop ((longs 0) (short #f) (signed #f) (unsigned #f) (name #f))
      ; we have this somewhere; extract to common lib
    )
  )
  (define (iter-type type)
    (match type
      (("const" x) (string-append "const " (iter-type x)))
      (("pointer" x) (string-append "pointer to " (iter-type x)))
      (("array" x len)
       (if len
           (string-append "array " (sprintf "~A" len) " of " (iter-type x))
           (string-append "array of " (iter-type x))))
      (("function" x) (string-append "function returning " (iter-type x)))
      (("function" x args) (string-append "function " (sprintf "~A" args) " returning " (iter-type x)))
      (else (sprintf "~A" type))))
  (define (iter-decl type var)
    (define-values (fulltype name) (unwrap-decl type var))
    (sprintf "declare ~A as ~A~N" name (iter-type fulltype))
  )
  (match parse
    (("naked_declaration" type var)
     (iter-decl type var))
    (("declaration" type var)
     (iter-decl type var))
    (("toplevel" . parses)
     (fold-right string-append "" (map to-machingrish parses)))
    (else parse)))

(define args (command-line))
(if (> (length args) 1)
    (map (lambda (e) (display (to-machingrish (parse-decl e)))) (cdr args))
    (displayln "vdecl: no input" (current-error-port)))
