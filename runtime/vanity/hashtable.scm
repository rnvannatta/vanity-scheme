(define-library (vanity hashtable)
  (import (except (vanity core) hash-table? make-hash-table hash-table-ref hash-table-set! hash-table-delete! hash-table->alist))
  (import (vanity waybill))
  (export
    current-hash
    make-hash-table hash-table-ref hash-table-set! hash-table-delete!
    hash-table-size
    hash-table-for-each hash-table-map->list hash-table-fold hash-table->alist
    )

  (define-constant flags-slot 0)
  (define-constant occupancy-slot 1)
  (define-constant load-factor-slot 2)
  (define-constant vector-slot 3)
  (define-constant equal-slot 4)
  (define-constant hash-slot 5)
  (define-constant clearinghouse-slot 6)

  (define current-hash (##intrinsic "VEqHash" 1 1))
  (define hash-combine (##intrinsic "VHashCombine" 2 2))
  (define hash-blob (##basic-intrinsic "VHashBlob" 1))

  (define-constant make-hash-table-impl (##intrinsic "VMakeHashTableImpl" 7 7))
  (define-constant hash-table-slot (##basic-intrinsic "VHashTableSlot" 2))
  (define-constant hash-table-slot-set! (##basic-intrinsic "VHashTableSlotSet" 3))

  (define make-hash-table 
    (case-lambda
      (() (make-hash-table equal? #f #f #t))
      ((equal) (make-hash-table equal #f #f (not (eq? equal eq?))))
      ((equal hash)
       (make-hash-table equal hash #f (not (eq? equal eq?))))
      ((equal hash weakness)
       (make-hash-table equal hash weakness (not (eq? equal eq?))))
      ((equal hash weakness stability)
       (unless (and (equal? equal eq?) (equal? hash current-hash))
         (error "only eq hash tables supported"))
       (make-hash-table-impl eq? current-hash 16 weakness stability 0.8)
      )
       ))

  (define (make-entry weakness stability clearinghouse key datum)
    (let* ((h (current-hash key))
           (waybill (make-waybill weakness stability clearinghouse key datum h)))
      ; for consistency we need handle the case where the gc runs
      ; between hashing and making the waybill. otherwise a lookup won't find a key
      ; but also the waybill won't be in the clearinghouse
      (if (eq? h (current-hash key))
          waybill
          (make-entry weakness stability clearinghouse key datum))))

  ; how displaced a hash is from its preferred spot
  (define (hash-slot hash capacity)
    (bitwise-and hash (- capacity 1)))

  (define (hash-poverty hash idx capacity)
    (bitwise-and
      (- idx (bitwise-and hash (- capacity 1)))
      (- capacity 1)))

  (define (waybill-key-matches? waybill key)
    (receive (wb-broken? wb-key wb-datum) (waybill-unpack waybill)
      (and (not wb-broken?) (eq? wb-key key))))

  (define (sequence< a b capacity)
    (< 0 (bitwise-and (- b a) (- capacity 1)) (quotient capacity 2)))
  (define (sequence> a b capacity)
    (sequence< b a capacity))

  (define (hash-table-keyvector ht)
    (vector-map
      (lambda (waybill)
        (if waybill
            (receive (b k d) (waybill-unpack waybill) k)
            #void))
      (hash-table-slot ht vector-slot)))
  ; robin hood critereon: the keys that hash to slot N are before the keys that hash to slot N+1
  ; or thinking backwards, walking backwards from our poverty, there are no gaps and no keys that hash to a slot later than ours
  (define (validate-robinhood-impl what-we-did ht)
    (define vec (hash-table-slot ht vector-slot))
    (define capacity (vector-length vec))
    (do-loop
      for x across vec
      for idx from 0
      let ihash = (if x (waybill-address x))
      let islot = (if x (hash-slot ihash capacity))
      let ipoverty = (if x (hash-poverty ihash idx capacity))
      ; sequence< doesn't work correctly for gaps of capacity/2 or greater
      when (and ipoverty (>= ipoverty (quotient capacity 2)))
        do (error "probe length is too long to validate" ipoverty)
      when x
        do (do-loop
             for j from 1 upto ipoverty
             let jdx = (bitwise-and (- idx j) (- capacity 1))
             let y = (vector-ref vec jdx)
             let jhash = (if y (waybill-address y))
             let jslot = (if y (hash-slot jhash capacity))
             let jpoverty = (if y (hash-poverty jhash jdx capacity))
             when (and jpoverty (>= jpoverty (quotient capacity 2)))
               do (error "probe length is too long to validate" jpoverty)
             unless y
               do (displayln (hash-table-keyvector ht))
               and do (error "robinhood critereon failed: a gap" what-we-did idx ipoverty jdx)
             when (sequence> jslot islot capacity)
               do (displayln (hash-table-keyvector ht))
               and do (error "robinhood critereon failed: key slotting later appears before" what-we-did idx ipoverty jdx jpoverty))))
  (define (validate-robinhood what-we-did ht) #;(validate-robinhood-impl what-we-did ht) #f)

  ; finds the idx with key
  ; OR an idx that's empty
  ; or #f if nothing within poverty limits
  (define (hash-table-find-impl ht key hash)
    (let* ((vec (hash-table-slot ht vector-slot))
           (capacity (vector-length vec))
           (idx (bitwise-and hash (- capacity 1))))
      (let loop ((idx idx) (poverty 0))
        (let ((vec-entry (vector-ref vec idx)))
          (cond
            ((not vec-entry) idx)
            ((and (= (waybill-address vec-entry) hash)
                  (waybill-key-matches? vec-entry key))
             idx)
            ((> poverty (hash-poverty (waybill-address vec-entry) idx capacity))
             #f)
            (else
             (loop (bitwise-and (+ idx 1) (- capacity 1)) (+ poverty 1))))))))

  ; assumes there is space in the table.
  ; assumes that key does not already exist in the table
  (define (hash-table-reinsert! ht entry)
    (let* ((vec (hash-table-slot ht vector-slot))
           (occupancy (hash-table-slot ht occupancy-slot))
           (capacity (vector-length vec))
           (idx (bitwise-and (waybill-address entry) (- capacity 1))))
      (let loop ((entry entry) (idx idx) (poverty 0))
        (let* ((vec-entry (vector-ref vec idx))
               (vec-entry-poverty (if vec-entry (hash-poverty (waybill-address vec-entry) idx capacity) #f)))
          (cond
            ((not vec-entry)
             (vector-set! vec idx entry)
             (hash-table-slot-set! ht occupancy-slot (+ occupancy 1)))
            ; robin hood that slot
            ((> poverty vec-entry-poverty)
             (vector-set! vec idx entry)
             (loop
               vec-entry
               (bitwise-and (+ idx 1) (- capacity 1))
               (+ vec-entry-poverty 1)))
            (else
             (loop entry (bitwise-and (+ idx 1) (- capacity 1)) (+ poverty 1))))))))

  (define (robinhood-shuffle ht oldidx)
    (let* ((vec (hash-table-slot ht vector-slot))
           (capacity (vector-length vec)))
      (let loop ((oldidx oldidx))
        (define idx (bitwise-and (+ oldidx 1) (- capacity 1)))
        (define vec-entry (vector-ref vec idx))
        (when vec-entry
          (define elem-poverty (hash-poverty (waybill-address vec-entry) idx capacity))
          (unless (= elem-poverty 0)
            (vector-set! vec oldidx vec-entry)
            (vector-set! vec idx #f)
            (loop idx))))))

  ; removes exact entry from hash table
  (define (hash-table-sweep ht entry)
    (let* ((hash (waybill-address entry))
           (vec (hash-table-slot ht vector-slot))
           (occupancy (hash-table-slot ht occupancy-slot))
           (clearinghouse (hash-table-slot ht clearinghouse-slot))
           (capacity (vector-length vec))
           (idx (bitwise-and hash (- capacity 1))))
      (let loop ((idx idx) (poverty 0))
        (let ((vec-entry (vector-ref vec idx)))
          (cond
            ((not vec-entry)
             #f)
            ((and (= (waybill-address vec-entry) hash)
                  (eq? entry vec-entry))
             (vector-set! vec idx #f) 
             (hash-table-slot-set! ht occupancy-slot (- occupancy 1))
             (robinhood-shuffle ht idx)
             #t)
            ((> poverty (hash-poverty (waybill-address vec-entry) idx capacity))
             #f)
            (else
             (loop (bitwise-and (+ idx 1) (- capacity 1)) (+ poverty 1))))))))

  ; rummages through the clearinghouse for the lost entry with key
  (define (hash-table-rummage ht key)
    (let* ((weakness-stability (hash-table-slot ht flags-slot))
           (weakness (car weakness-stability))
           (stability (cdr weakness-stability))
           (starting-occupancy (hash-table-slot ht occupancy-slot))
           (clearinghouse (hash-table-slot ht clearinghouse-slot)))
      (let loop ((i 0))
        (if (= i starting-occupancy)
            #f
            (let ((waybill (clearinghouse-poll! clearinghouse)))
              (cond
                ((not waybill) #f)
                ((hash-table-sweep ht waybill)
                 (validate-robinhood "swept in rummage" ht)
                 (receive (wb-broken? wb-key wb-datum) (waybill-unpack waybill)
                   (if wb-broken?
                       (loop (+ i 1))
                       (let ((new-waybill (make-entry weakness stability clearinghouse wb-key wb-datum)))
                         (hash-table-reinsert! ht new-waybill)
                         (validate-robinhood "reinserted in rummage" ht)
                         (if (eq? key wb-key)
                             new-waybill
                             (loop (+ i 1)))))))
                (else (loop i))))))))

  (define (hash-table-ref-impl ht key thunk)
    (let* ((hash (current-hash key))
           (vec (hash-table-slot ht vector-slot))
           (clearinghouse (hash-table-slot ht clearinghouse-slot)))
      (define (fallback-ref)
        (let ((waybill (hash-table-rummage ht key)))
                (if waybill
                    (receive (broken? key datum) (waybill-unpack waybill)
                      (if broken?
                          (thunk)
                          datum))
                    (thunk))))
      (let* ((idx (hash-table-find-impl ht key hash))
             (waybill (if idx (vector-ref vec idx) #f)))
        (if waybill
            (receive (wb-broken? wb-key wb-datum) (waybill-unpack waybill)
              (if wb-broken?
                  (thunk)
                  wb-datum))
            (fallback-ref)))))
  (define hash-table-ref
    (case-lambda
      ((ht key) (hash-table-ref-impl ht key (lambda () (error "key not found in hash table" ht key))))
      ((ht key thunk) (hash-table-ref-impl ht key thunk))))

  ; ensures there is at least one opened slot
  (define (hash-table-grow ht)
    (let* ((old-vec (hash-table-slot ht vector-slot))
           (clearinghouse (hash-table-slot ht clearinghouse-slot))
           (occupancy (hash-table-slot ht occupancy-slot))
           (old-capacity (vector-length old-vec))
           (load-factor (hash-table-slot ht load-factor-slot)))
      (when (>= occupancy (* load-factor old-capacity))
        (let* ((capacity (if (= old-capacity 0) 8 (* 2 old-capacity)))
               (vec (make-vector capacity #f)))
          (hash-table-slot-set! ht occupancy-slot 0)
          (hash-table-slot-set! ht vector-slot vec)
          (do-loop
            for entry across old-vec
            when entry
              do (hash-table-reinsert! ht entry))
          (validate-robinhood "grew table" ht)))))

  ; assumes there is space in the table.
  ; assumes the entry isn't lost
  (define (hash-table-set-impl! ht key entry)
    (let* ((hash (waybill-address entry))
           (vec (hash-table-slot ht vector-slot))
           (occupancy (hash-table-slot ht occupancy-slot))
           (capacity (vector-length vec))
           (idx (bitwise-and hash (- capacity 1))))
      (let loop ((entry entry) (idx idx) (poverty 0))
        (let* ((vec-entry (vector-ref vec idx))
               (vec-entry-poverty (if vec-entry (hash-poverty (waybill-address vec-entry) idx capacity) #f)))
          (cond
            ((not vec-entry)
             (vector-set! vec idx entry)
             (hash-table-slot-set! ht occupancy-slot (+ occupancy 1)))
            ((and (= (waybill-address vec-entry) hash)
                  (waybill-key-matches? vec-entry key))
             (vector-set! vec idx entry))
            ; robin hood that slot
            ((> poverty vec-entry-poverty)
             (vector-set! vec idx entry)
             (loop
               vec-entry
               (bitwise-and (+ idx 1) (- capacity 1))
               (+ vec-entry-poverty 1)))
            (else
             (loop entry (bitwise-and (+ idx 1) (- capacity 1)) (+ poverty 1))))))))

  (define (hash-table-set! ht key datum)
    (let* ((weakness-stability (hash-table-slot ht flags-slot))
           (weakness (car weakness-stability))
           (stability (cdr weakness-stability))
           (clearinghouse (hash-table-slot ht clearinghouse-slot))
           (entry (make-entry weakness stability clearinghouse key datum))
           (vec (hash-table-slot ht vector-slot))
           (rummaged-waybill (hash-table-rummage ht key)))
      (when rummaged-waybill
         (hash-table-sweep ht rummaged-waybill))
      (hash-table-grow ht)
      (hash-table-set-impl! ht key entry)
      (validate-robinhood "set a key" ht)
      ))

  (define (hash-table-delete! ht key)
    (let* ((hash (current-hash key))
           (vec (hash-table-slot ht vector-slot))
           (idx (hash-table-find-impl ht key hash)))
      (if (and idx (vector-ref vec idx))
          (begin
            (vector-set! vec idx #f)
            (hash-table-slot-set! ht occupancy-slot (- (hash-table-slot ht occupancy-slot) 1))
            (robinhood-shuffle ht idx)
            (validate-robinhood "deleted a key" ht)
            )
          (let ((rummaged-waybill (hash-table-rummage ht key)))
            ; not an error to delete a nonexitent key
            (when rummaged-waybill
              (hash-table-sweep ht rummaged-waybill)
              (validate-robinhood "deleted a rummaged key" ht)
              )))))

  (define (hash-table-size ht)
    ; look for nonexistent key to clean it out and get size accurate
    (hash-table-rummage ht `(0 . 0))
    (hash-table-slot ht occupancy-slot))

  (define (hash-table-for-each f ht)
    (do-loop
      with vec = (hash-table-slot ht vector-slot)
      for waybill across vec
      when waybill
        do (receive (broke? key datum) (waybill-unpack waybill)
             (if (not broke?) (f key datum)))))
  (define (hash-table-map->list f ht)
    (define acc '())
    (hash-table-for-each (lambda (key datum) (set! acc (cons (f key datum) acc))) ht)
    acc)
  ; TODO missing wrong order variant
  (define (hash-table-fold f seed ht)
    (define acc seed)
    (hash-table-for-each (lambda (key datum) (set! acc (f key datum acc))) ht)
    acc)
  (define (hash-table->alist ht)
    (hash-table-map->list cons ht))
)
