(define-library (vanity seed)
  (export
    ##vcore.setter
    ##vcore.mutator)

  (define setter-table (##vcore.make-hash-table ##sys.eq? #f 32))
  (define (##vcore.setter func)
    (##vcore.hash-table-ref setter-table func
      (lambda ()
        (let ((err (##sys.stderr->port)))
          (##sys.display-word "set!: procedure doesn't have a setter: " err)
          (##sys.write func err)
          (##sys.newline err)
          (##sys.abort)))))
  (define ##vcore.set-setter!
    (let ((set-setter!  (lambda (getter setter) (##vcore.hash-table-set! setter-table getter setter))))
      (set-setter! ##vcore.setter set-setter!)
      (set-setter! ##sys.car ##sys.set-car!)
      (set-setter! ##sys.cdr ##sys.set-cdr!)
      (set-setter! ##sys.vector-ref ##sys.vector-set!)
      (set-setter! ##sys.string-ref ##sys.string-set!)
      set-setter!))

  (define mutator-table (##vcore.make-hash-table ##sys.eq? #f 32))
  (define (##vcore.mutator func)
    (##vcore.hash-table-ref mutator-table func
      (lambda ()
        (let ((err (##sys.stderr->port)))
          (##sys.display-word "set!: procedure doesn't have a mutator: " err)
          (##sys.write func err)
          (##sys.newline err)
          (##sys.abort)))))
  (define ##vcore.set-mutator!
    (let ((set-mutator! (lambda (getter mutator) (##vcore.hash-table-set! mutator-table getter mutator))))
      (##vcore.set-setter! ##vcore.mutator set-mutator!)
      (set-mutator! ##sys.car (lambda (pair proc) (##sys.set-car! pair (proc (##sys.car pair)))))
      (set-mutator! ##sys.cdr (lambda (pair proc) (##sys.set-cdr! pair (proc (##sys.cdr pair)))))
      (set-mutator! ##sys.vector-ref (lambda (vec i proc) (##sys.vector-set! vec i (proc (##sys.vector-ref vec i)))))
      (set-mutator! ##sys.string-ref (lambda (vec i proc) (##sys.string-set! vec i (proc (##sys.string-ref vec i)))))
      set-mutator!)))
