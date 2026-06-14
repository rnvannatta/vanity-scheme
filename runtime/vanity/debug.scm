(define-library (vanity debug)
  (import (vanity core))
  (export closure-debug-info closure-name closure-formals closure-ref closure-set! closure-env-depth closure-env-frame-length closure-env closure-bt)
  (define-constant closure-debug-info (##basic-intrinsic "VGetProcDebugInfo" 1))
  (define-constant closure-ref (##basic-intrinsic "VClosureRef" 3))
  (define-constant closure-set! (##basic-intrinsic "VClosureSet" 4))
  (define-constant closure-env-depth (##basic-intrinsic "VClosureEnvDepth" 1))
  (define-constant closure-env-frame-length (##basic-intrinsic "VClosureEnvFrameLength" 2))

  (define (closure-name proc)
    (let ((ret (closure-debug-info proc)))
      (if ret (caar ret) '?)))
  (define (closure-formals proc)
    (let ((ret (closure-debug-info proc)))
      (if ret (cdar ret) '(?))))
  (define (closure-env-names proc)
    (let ((ret (closure-debug-info proc)))
      (if (and ret (pair? (cdr ret))) (cadr ret) '())))

  (define (closure-env proc)
    (do-loop
      for i from 0 below (closure-env-depth proc)
      collect
        (do-loop
          for j from 0 below (closure-env-frame-length proc i)
          collect
            (closure-ref proc i j))))
  (define (closure-bt-impl proc port)
    (format port "##closure~S~N" (cons (closure-name proc) (closure-formals proc)))
    (do-loop
      for i from 0 below (closure-env-depth proc)
      for env-names = (closure-env-names proc) then (if (pair? env-names) (cdr env-names) '())
      let frame-names = (if (pair? env-names) (car env-names) '())
      do (format port "~A: " i)
      do (write
           (do-loop
            for j from 0 below (closure-env-frame-length proc i)
            for names = frame-names then (if (pair? names) (cdr names) '())
            collect
              (cons
                (if (pair? names) (car names) #f)
                (closure-ref proc i j)))
           port)
      do (newline port)))
  (define closure-bt
    (case-lambda
      ((proc) (closure-bt-impl proc (current-output-port)))
      ((proc port) (closure-bt-impl proc port))))
)
