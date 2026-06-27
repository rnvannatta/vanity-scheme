(define-library (vanity compiler hush)
  (import (except (vanity core) hash-table? make-hash-table hash-table-ref hash-table-set! hash-table-delete! hash-table->alist))
  (import (vanity hashtable))
  (export hush make-hush-table hush-table-set! hush-table-ref)

  (cond-expand
    (interpreted
      (define eq-hash (##intrinsic "VEqHash" 1 1))
      (define hash-combine (##intrinsic "VHashCombine" 2 2))
      (define hash-blob (##intrinsic "VHashBlob" 1 1)))
    (else
      (define eq-hash (##basic-intrinsic "VEqHash" 1))
      (define hash-combine (##basic-intrinsic "VHashCombine" 2))
      (define hash-blob (##basic-intrinsic "VHashBlob" 1))))

  (define-record-type hush-table
    (make-hush-table-impl hash-table)
    hush-table?
    (hash-table hush-table.get))

  (define (make-hush-table)
    (make-hush-table-impl
      (make-hash-table eq? current-hash)))

  (define (hush x)
    (cond
      ((pair? x) (hash-combine (hush (car x)) (hush (cdr x))))
      ((##vcore.blob? x) (hash-blob x))
      ((vector? x)
       (let loop ((i 0) (h (hush '##.AVECTORDAWG)))
         (if (= i (vector-length x))
             h
             (loop (+ i 1)
                   (hash-combine (hush (vector-ref x i)) h)))))
      ((record? x)
       (let loop ((i 0) (h (hush '##.ARECORDDAWG)))
         (if (= i (##vcore.record-length x))
             h
             (loop (+ i 1)
                   (hash-combine (hush (##vcore.record-ref x i)) h)))))
      (else (eq-hash x))))

  (define (hush-table-set! ht key val)
    (let* ((hash (hush key))
           (real (hush-table.get ht))
           (chain (hash-table-ref real hash (lambda () #f))))
      (if chain
          (let ((pair (assoc key chain)))
            (if pair
                (set-cdr! pair val)
                (set-cdr! chain (cons (cons key val) (cdr chain)))))
          (hash-table-set! real hash (list (cons key val))))))
  (define (hush-table-ref ht key thunk)
    (let* ((hash (hush key))
           (real (hush-table.get ht))
           (chain (hash-table-ref real hash (lambda () #f))))
      (if chain
          (let ((pair (assoc key chain)))
            (if pair
                (cdr pair)
                (thunk)))
          (thunk))))
)
