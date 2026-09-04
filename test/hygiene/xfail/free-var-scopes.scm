; EXPECTED COMPILE ERROR: the canonical "hygiene working as intended" case.
; The macro template's x carries the macro's intro scope, so the use-site
; lambda's x binding cannot capture it; inside ##vcore.declare free variables
; are forbidden, so this must die with "free variable: x".
; Also the verification vehicle for --explain-scopes.
(##vcore.declare "hygiene-demo"
  (lambda ()
    (let-syntax ((my-macro (lambda (form) (quasisyntax x))))
      ((lambda (x) (my-macro)) 1))))
