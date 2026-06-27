(define-library (vanity hashtable)
  (import (vanity hash-table))
  (export
    current-hash
    make-hash-table hash-table-ref hash-table-set! hash-table-delete!
    hash-table-size
    hash-table-walk hash-table-for-each hash-table-map->list hash-table-fold hash-table->alist))
