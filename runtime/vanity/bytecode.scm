(define-library (vanity bytecode)
  (import (vanity core) (vanity list) (vanity intrinsics))
  (export eval-vasm)

  (define (preprocess-vasm tape)
    ; TODO need to test that hash tables work well with eqv and equal
    (define labels '())
    (define (peel-labels tape)
      (let ((len (vector-length tape)))
        (let peel-loop ((pc 0))
          (if (>= pc len)
              tape
              (match (vector-ref tape pc)
                (('label label expr)
                 (if (not (symbol? label))
                     (error "vasm label: not a symbol" label))
                 (if (assv label labels)
                     (error "vasm label: label declared twice" label))
                 (set! labels (cons (cons label pc) labels))
                 (vector-set! tape pc expr)
                 (peel-loop (+ pc 1)))
                (else (peel-loop (+ pc 1))))))))
    (define (preprocess-expr expr pc)
      (match expr
        (('toplevel) expr)
        (('push x) expr)
        (('intrinsic x)
         (cond ((not (symbol? x)) (error "vasm intrinsic: not a symbol" x))
               ((lookup-intrinsic x) => (lambda (f) `(intrinsic ,f)))
               (else (error "vasm intrinsic: not a recognized intrinsic" x))))
        (('bruijn up right)
         (if (and (integer? up) (integer? right) (>= up 0) (>= right 0))
             expr
             (error "vasm bruijn: not both nonnegative integers" up right)))
        (('lookup x)
         (if (symbol? x) expr (error "vasm lookup: not a symbol" x)))
        (('call x)
         (if (and (integer? x) (>= x 0))
             expr
             (error "vasm call: not a nonnegative integer" x)))
        (('lambda x)
         (if (and (integer? x) (>= x 0))
             expr
             (error "vasm lambda: not a nonnegative integer" x)))
        (('lambda+ x)
         (if (and (integer? x) (>= x 0))
             expr
             (error "vasm lambda+: not a nonnegative integer" x)))
        (('case-lambda x b)
         (if (not (and (integer? x) (>= x 0)))
             (error "vasm case-lambda: not a nonnegative integer" x))
         (cond ((integer? b) expr)
               ((and (symbol? b) (assv b labels)) => (lambda (label) `(case-lambda ,x ,(- (cdr label) pc 1))))
               ((symbol? b) (error "vasm case-lambda: unknown label" b))
               (else (error "vasm case-lambda: not an integer" b))))
        (('case-lambda+ x b)
         (if (not (and (integer? x) (>= x 0)))
             (error "vasm case-lambda+: not a nonnegative integer" x))
         (cond ((integer? b) expr)
               ((and (symbol? b) (assv b labels)) => (lambda (label) `(case-lambda+ ,x ,(- (cdr label) pc 1))))
               ((symbol? b) (error "vasm case-lambda+: unknown label" b))
               (else (error "vasm case-lambda+: not an integer" b))))
        (('case-lambda-error name str) expr)
        (('close x)
         (cond ((and (symbol? x) (assv x labels)) => (lambda (label) `(close ,(cdr label))))
               ((symbol? x) (error "vasm close: unknown label" x))
               ((and (integer? x) (>= x 0)) expr)
               (else (error "vasm close: not a nonnegative integer" x))))
        (('foreign-function x)
         (cond ((and (symbol? x) (assv x labels)) => (lambda (label) `(foreign-function ,(cdr label))))
               ((symbol? x) (error "vasm close: unknown label" x))
               ((and (integer? x) (>= x 0)) expr)
               (else (error "vasm foreign-function: not a nonnegative integer" x))))
        (('declare name x)
         (cond ((not (string? name)) (error "vasm declare: not a string" x))
               ((and (symbol? x) (assv x labels)) => (lambda (label) `(declare ,name ,(cdr label))))
               ((symbol? x) (error "vasm declare: unknown label" x))
               ((and (integer? x) (>= x 0)) expr)
               (else (error "vasm declare: not a nonnegative integer" x))))
        (('declare-foreign lang ret name args ...)
         expr)
        ; set! as a function breaks the rules! of lexical scope
        (('push-set!) expr)
        (('bf x)
         (cond ((integer? x) expr)
               ((and (symbol? x) (assv x labels)) => (lambda (x) `(bf ,(- (cdr x) pc 1))))
               ((symbol? x) (error "vasm bf: unknown label" x))
               (else (error "vasm bf: not an integer" x))))
        (('letrec-begin x)
         (if (and (integer? x) (>= x 0))
             expr
             (error "vasm letrec-begin an integer" x)))
        (('letrec-end) expr)
        (else (error "vasm: unknown or malformed line" expr))))
    (let ((len (vector-length tape)))
      (let preprocess-loop ((tape (peel-labels tape)) (pc 0))
        (if (>= pc len)
            tape
            (begin
              (let ((e (preprocess-expr (vector-ref tape pc) pc)))
                (if (not (eq? e (vector-ref tape pc)))
                    (vector-set! tape pc e)))
              (preprocess-loop tape (+ pc 1)))))))

  ; call with -1 to start at beginning of program
  (define (find-declare tape program-counter)
    (let ((program-counter (+ program-counter 1)))
      (cond
        ((>= program-counter (vector-length tape)) #f)
        ((eqv? (car (vector-ref tape program-counter)) 'declare)
         program-counter)
        (else (find-declare tape program-counter)))))

  (define make-vasm-lambda (##vcore.function "VMakeVasmLambda"))
  (define eval-vasm-toplevel (##vcore.function "VEvalVasmToplevel"))

  (define (set-declares! tape)
    (let set-declare-loop ((pc (find-declare tape -1)))
      (if pc
          (let ()
            (match (vector-ref tape pc)
              (('declare name x)
               (##vcore.set-declare!
                 name
                 (make-vasm-lambda tape x)))
              (else (error "declare not declare?" (vector-ref tape pc))))
             (set-declare-loop (find-declare tape pc))))))

  (define (find-toplevel tape program-counter)
    (cond
      ((>= program-counter (vector-length tape)) #f)
      ((eqv? (car (vector-ref tape program-counter)) 'toplevel)
       (+ program-counter 1))
      (else (find-toplevel tape (+ 1 program-counter)))))

  (define (eval-vasm vasm)
    (define tape (preprocess-vasm vasm))
    (define program-counter 0)
    (define (eval-loop . rets)
      (if program-counter
          (set! program-counter (find-toplevel tape program-counter)))
      (if program-counter
          (call-with-values
            (lambda () (eval-vasm-toplevel tape program-counter))
            eval-loop)
          (apply values rets)))
    (set-declares! tape)
    (eval-loop)))
