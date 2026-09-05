; Copyright 2026 Richard N Van Natta
;
; This file is part of the Vanity Scheme Compiler.
;
; The Vanity Scheme Compiler is free software: you can redistribute it
; and/or modify it under the terms of the GNU General Public License as
; published by the Free Software Foundation, either version 2 of the
; License, or (at your option) any later version.
;
; The Vanity Scheme Compiler is distributed in the hope that it will be
; useful, but WITHOUT ANY WARRANTY; without even the implied warranty
; of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
; General Public License for more details.
;
; You should have received a copy of the GNU General Public
; License along with the Vanity Scheme Compiler.
;
; If not, see <https://www.gnu.org/licenses/>.
;
; This work is published with additional permission, the Vanity Scheme
; Runtime Library Exceptions, which should have been included with the
; Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>
;
; THE POST-EXPAND CORE-LANGUAGE GRAMMAR
;
;   The grammar listed below is precise and in the style of the r7rs spec:
;   lowercase indicates an exact symbol and allcaps indicates a
;   a grammatical rule: (begin A B) means exactly two clauses after the begin
;   symbol (case-lambda (FORMALS BODY) ...): the ellipses specifies
;   0 or more of the two element proper list (FORMALS BODY).
;
;   START : (TOPLEVEL ...)
;
;   TOPLEVEL : (define ID EXPR)
;            | (import LIBSPEC)
;            | (##vcore.declare STR LAMBDA)
;            | (##foreign.declare STR)
;            | EXPR
;
;   LIBSPEC : (SYMBOL SYMBOL ...)
;           | (only LIBSPEC SYMBOL ...)
;           | (except LIBSPEC SYMBOL ...)
;           | (rename LIBSPEC (SYMBOL SYMBOL) ...)
;           | (prefix LIBSPEC SYMBOL)
;     notes: the libspec excluding e.g. (srfi 1) as a valid
;     library name is an accidental discrepancy from r7rs. so
;     this grammar is accurate to what the backend expects.
;
;
;   EXPR : LITERAL
;        | (quote DATUM)
;        | (set! ID EXPR)
;        | OPERATOR-EXPR
;
;   OPERATOR-EXPR : ID
;                 | BUILTIN
;                 | LAMBDA
;                 | BINDING
;                 | (if EXPR EXPR EXPR)
;                 | (or EXPR EXPR)
;                 | (begin EXPR EXPR)
;                 | INTRINSIC
;                 | FFI
;                 | APPLICATION
;
;   DATUM : any s-expression
;
;   STR : a string literal
;     notes: the places that use a string could be validated more aggressively
;     but they aren't for version 1 of this validator. For example, ##vcore.declare
;     could enforce that the string is a proper _V20 mangled name.
;
;   ##vcore.declare notes: the LAMBDA must be closed: its only free symbols may
;     be BUILTINs. Toplevel defines and imports are not visible inside it, and
;     the rest of the pipeline assumes as much: free-variables-toplevel treats a
;     declare as contributing no free variables, and the backend would otherwise
;     emit a weak global that silently aliases whatever the program defines
;     under that name. A define-library expands to a closed declare by
;     construction; this is the check for everything else.
;
;   ID : a non-reserved, non-builtin symbol
;     notes: ids are the only symbols which can be bound, set!, defined,
;     imported, or exported
;
;   BUILTIN: a symbol bound to a builtin intrinsic, such as ##vcore.cons
;     notes: it's invalid to try to define, bind, or to set! them, and
;     nonsense to import or export them
;
;   LITERAL : self-evaluating: any non-pair, non-null, non-symbol datum
;     notes: a naked () is an error
;
;   INTRINSIC : (##intrinsic STR N)
;             | (##intrinsic STR N M)
;             | (##basic-intrinsic STR N)
;     notes: N an int literal >= 0; M an int literal >= N or the + symbol
;
;   FFI : (##foreign.function LANG DECL RET FF-NAME ARGTYPE ...) 
;     notes: the ffi grammar is not validated here presently
;
;   LAMBDA : (lambda FORMALS EXPR)
;          | (case-lambda (FORMALS EXPR) ...)
;          | (##qualified-lambda NAME STATIC? FORMALS EXPR)
;          | (##qualified-case-lambda NAME STATIC? (FORMALS EXPR) ...)
;
;   BINDING : (letrec ((FORMAL EXPR) ...) EXPR)
;           | (##letrec NAME ((FORMAL EXPR) ...) EXPR)
;
;   NAME : (SYMBOL SYMBOL ...)
;
;   STATIC? : #t | #f
;
;   FORMALS : FORMAL
;           | ()
;           | (FORMAL . FORMALS)
;
;   FORMAL : ID
;     notes: The post expand grammar is fully alpha converted: every formal
;     must be globally unique across the entire program.
;     this is invalid (lambda (x) (letrec ((x 0)) x))
;     as is this (begin (lambda (x) x) (lambda (x) x)).
;     The optimizer relies on global uniqueness to make substitutions and
;     other operations easier. It's up to the expander to ensure that formals
;     are renamed to be unique. Note that toplevel defines are not considered
;     'bindings' and do not hold this uniqueness property. Their symbols are
;     passed as-is without alpha conversion and may collide or be redefined.
;
;   APPLICATION : (OPERATOR-EXPR EXPR ...)
;     notes: effectively we're excluding literals, reserved symbols, quote, and set!
;
;   RESERVED : define | import | ##vcore.declare | ##foreign.declare | define-library
;            | quote | set! | if | or | begin
;            | ##intrinsic | ##basic-intrinsic | ##foreign.function
;            | lambda | case-lambda | ##qualified-lambda | ##qualified-case-lambda
;            | letrec | ##letrec
;     notes:  effectively all the symbols in the above grammar are reserved,
;     plus define-library, and except for these symbols: only except rename prefix.
;     also we aggressively reserve symbols instead of allowing shadowing because the optimizer
;     can expand in a way that makes things look like a special form. for example ((being #f lambda) x)
;     could be valid r7rs but the optimizer would optimize it to (lambda x), and that would cause fireworks.
;     this discrepancy from r7rs will be addressed at a later date.
;
;   Deprecated functionality: a few aspects of vanity's historical grammar are fully deprecated
;   and deliberately excluded from this validator. any remnants of these in vanity are things to purge
;   at a later date.
;   * string library names, i.e. (import "mylib")
;   * ##inline expressions

(define-library (vanity compiler verify)
  (import
    (except (vanity core) hash-table? make-hash-table hash-table-ref hash-table-set! hash-table-delete! hash-table->alist)
    (vanity hashtable)
    (vanity intrinsics)
    (vanity compiler utils)
    (vanity compiler match)
    (only (vanity compiler variables) free-variables))
  (export verify-expanded)

  (define reserved-shapes
    '((quote . "(quote datum)")
      (lambda . "(lambda formals body)")
      (case-lambda . "(case-lambda (formals body) ...)")
      (##qualified-lambda . "(##qualified-lambda name static? formals body)")
      (##qualified-case-lambda . "(##qualified-case-lambda name static? (formals body) ...)")
      (if . "(if test then else)")
      (begin . "(begin first second)")
      (or . "(or first second)")
      (letrec . "(letrec ((sym expr) ...) body)")
      (##letrec . "(##letrec path ((sym expr) ...) body)")
      (set! . "(set! sym expr)")
      (##intrinsic . "(##intrinsic \"VName\" min) or (##intrinsic \"VName\" min max/+)")
      (##basic-intrinsic . "(##basic-intrinsic \"VName\" nargs)")
      (##foreign.function . "(##foreign.function \"C\" decl ret name argtypes ...)")
      (##vcore.declare . "toplevel-only (##vcore.declare \"cname\" lambda)")
      (##foreign.declare . "toplevel-only (##foreign.declare \"decl\")")
      (import . "toplevel-only (import libspec)")
      (define . "toplevel-only (define sym expr)")))

  (define (reserved-symbol? x)
    (or (eqv? x 'define-library)
        (and (assv x reserved-shapes) #t)))

  (define (builtin? x) (and (lookup-intrinsic-name x) #t))

  (define (arity? x) (and (integer? x) (>= x 0)))

  (define (symbol-list? x)
    (cond ((null? x) #t)
          ((pair? x) (and (symbol? (car x)) (symbol-list? (cdr x))))
          (else #f)))

  (define (verify-expanded toplevel-forms)
    (define violations '())
    (define binders (make-hash-table eq? current-hash))
    (define (bad! msg form ctx)
      (set! violations (cons (list msg form ctx) violations)))

    (define (note-binder! sym ctx)
      (cond
        ((reserved-symbol? sym) (bad! "reserved symbol cannot be bound" sym ctx))
        ((builtin? sym) (bad! "builtin intrinsic cannot be bound" sym ctx))
        ((hash-table-ref binders sym (lambda () #f))
         (bad! "duplicate binder after alpha-conversion" sym ctx))
        (else (hash-table-set! binders sym #t))))

    (define (verify-formals formals ctx)
      (let loop ((f formals))
        (cond ((null? f) #t)
              ((symbol? f) (note-binder! f ctx))
              ((pair? f)
               (if (symbol? (car f))
                   (note-binder! (car f) ctx)
                   (bad! "non-symbol in lambda formals" formals ctx))
               (loop (cdr f)))
              (else (bad! "malformed lambda formals" formals ctx)))))

    (define (verify-clause clause ctx)
      (match clause
        ((formals body)
         (verify-formals formals ctx)
         (verify-expr body ctx))
        (else (bad! "malformed case-lambda clause, expected (formals body)" clause ctx))))

    (define (verify-clauses clauses ctx)
      (if (list? clauses)
          (for-each (lambda (c) (verify-clause c ctx)) clauses)
          (bad! "improper case-lambda clause list" clauses ctx)))

    (define (verify-bindings bindings ctx)
      (if (list? bindings)
          (for-each
            (lambda (b)
              (match b
                ((x val)
                 (if (symbol? x)
                     (note-binder! x ctx)
                     (bad! "letrec binding name is not a symbol" b ctx))
                 (verify-expr val ctx))
                (else (bad! "malformed letrec binding, expected (sym expr)" b ctx))))
            bindings)
          (bad! "improper letrec binding list" bindings ctx)))

    (define (verify-path path what ctx)
      (if (not (and (pair? path) (symbol-list? path)))
          (bad! what path ctx)))

    (define (verify-libspec spec ctx)
      (match spec
        (('only lib . syms)
         (verify-libspec lib ctx)
         (if (not (symbol-list? syms)) (bad! "malformed only import" spec ctx)))
        (('except lib . syms)
         (verify-libspec lib ctx)
         (if (not (symbol-list? syms)) (bad! "malformed except import" spec ctx)))
        (('prefix lib sym)
         (verify-libspec lib ctx)
         (if (not (symbol? sym)) (bad! "malformed prefix import" spec ctx)))
        (('rename lib . renames)
         (verify-libspec lib ctx)
         (if (not (and (list? renames)
                       (let loop ((rs renames))
                         (or (null? rs)
                             (and (match (car rs) ((a b) (and (symbol? a) (symbol? b))) (else #f))
                                  (loop (cdr rs)))))))
             (bad! "malformed rename import" spec ctx)))
        (else
          (cond
            ((string? spec)
             (bad! "string library names are deprecated, expected a proper list of symbols" spec ctx))
            ((not (and (pair? spec) (symbol-list? spec)))
             (bad! "malformed library name, expected a proper list of symbols" spec ctx))
            (else #f)))))

    (define (verify-expr expr ctx)
      (cond
        ((symbol? expr)
         (if (reserved-symbol? expr)
             (bad! "reserved symbol in expression position" expr ctx)))
        ((null? expr) (bad! "stray () in expression position" expr ctx))
        ((not (pair? expr)) #t)
        (else
          (match expr
            (('quote _) #t)
            (('lambda formals body)
             (verify-formals formals ctx)
             (verify-expr body ctx))
            (('case-lambda . clauses)
             (verify-clauses clauses ctx))
            (('##qualified-lambda name static? formals body)
             (verify-path name "malformed ##qualified-lambda name, expected a proper list of symbols" ctx)
             (if (not (boolean? static?)) (bad! "##qualified-lambda static? is not a boolean" expr ctx))
             (verify-formals formals ctx)
             (verify-expr body ctx))
            (('##qualified-case-lambda name static? . clauses)
             (verify-path name "malformed ##qualified-case-lambda name, expected a proper list of symbols" ctx)
             (if (not (boolean? static?)) (bad! "##qualified-case-lambda static? is not a boolean" expr ctx))
             (verify-clauses clauses ctx))
            (('if p x y)
             (verify-expr p ctx)
             (verify-expr x ctx)
             (verify-expr y ctx))
            (('begin x y)
             (verify-expr x ctx)
             (verify-expr y ctx))
            (('or x y)
             (verify-expr x ctx)
             (verify-expr y ctx))
            (('letrec bindings body)
             (verify-bindings bindings ctx)
             (verify-expr body ctx))
            (('##letrec path bindings body)
             (verify-path path "malformed ##letrec path, expected a proper list of symbols" ctx)
             (verify-bindings bindings ctx)
             (verify-expr body ctx))
            (('set! sym val)
             (cond
               ((not (symbol? sym)) (bad! "set! target is not a symbol" expr ctx))
               ((reserved-symbol? sym) (bad! "set! target is a reserved symbol" expr ctx))
               ((builtin? sym) (bad! "set! target is a builtin intrinsic" expr ctx))
               (else #f))
             (verify-expr val ctx))
            (('##intrinsic . rest)
             (match rest
               ((name min)
                (if (not (and (string? name) (arity? min)))
                    (bad! "malformed ##intrinsic, expected (##intrinsic \"VName\" min)" expr ctx)))
               ((name min max)
                (if (not (and (string? name) (arity? min)
                              (or (eqv? max '+) (and (arity? max) (>= max min)))))
                    (bad! "malformed ##intrinsic, expected (##intrinsic \"VName\" min max/+)" expr ctx)))
               (else (bad! "malformed ##intrinsic, expected 2 or 3 operands" expr ctx))))
            (('##basic-intrinsic . rest)
             (match rest
               ((name n)
                (if (not (and (string? name) (arity? n)))
                    (bad! "malformed ##basic-intrinsic, expected (##basic-intrinsic \"VName\" nargs)" expr ctx)))
               (else (bad! "malformed ##basic-intrinsic, expected exactly 2 operands" expr ctx))))
            (('##foreign.function . rest)
             (if (not (and (list? rest)
                           (>= (length rest) 4)
                           (string? (car rest))))
                 (bad! "malformed ##foreign.function, expected (##foreign.function \"C\" decl ret name argtypes ...)" expr ctx)))
            ((f . _)
             (cond
               ((eqv? f 'define-library)
                (bad! "define-library must be fully expanded away" expr ctx))
               ((assv f reserved-shapes) =>
                (lambda (shape)
                  (bad! (string-append "malformed special form, expected " (cdr shape)) expr ctx)))
               ((not (list? expr))
                (bad! "improper application" expr ctx))
               ((not (or (symbol? f) (pair? f)))
                (bad! "application operator is not a symbol or combination" expr ctx))
               (else
                 (if (and (pair? f) (memv (car f) '(quote set!)))
                     (bad! "quote or set! form in application operator position" expr ctx))
                 (for-each (lambda (e) (verify-expr e ctx)) expr))))))))

    (define (toplevel-ctx form n)
      (match form
        (('define x . _) `(toplevel-form ,n (define ,x)))
        (('##vcore.declare f . _) `(toplevel-form ,n (##vcore.declare ,f)))
        (else `(toplevel-form ,n))))

    (define (verify-toplevel form n)
      (define ctx (toplevel-ctx form n))
      (match form
        (('define x val)
         (cond
           ((not (symbol? x)) (bad! "toplevel define name is not a symbol" form ctx))
           ((reserved-symbol? x) (bad! "toplevel define of a reserved symbol" form ctx))
           ((builtin? x) (bad! "toplevel define of a builtin intrinsic" form ctx))
           (else #f))
         (verify-expr val ctx))
        (('import . libs)
         (cond
           ((not (list? libs)) (bad! "improper import" form ctx))
           ((null? libs) (bad! "empty import" form ctx))
           ((not (null? (cdr libs)))
            (bad! "n-ary import, expander must split into one import per libspec" form ctx)
            (for-each (lambda (l) (verify-libspec l ctx)) libs))
           (else (verify-libspec (car libs) ctx))))
        (('##vcore.declare str lam)
         (if (not (string? str)) (bad! "##vcore.declare name is not a string" form ctx))
         (cond
           ((and (pair? lam) (memv (car lam) '(lambda case-lambda ##qualified-lambda ##qualified-case-lambda)))
            (let ((before violations))
              (verify-expr lam ctx)
              ; free-variables requires structurally valid input
              (if (eq? before violations)
                  (for-each
                    (lambda (fv) (bad! "free variable in ##vcore.declare payload" (car fv) ctx))
                    (free-variables lam)))))
           ((and (pair? lam) (eqv? (car lam) '##vcore.function))
            (bad! "##vcore.function payload in ##vcore.declare is miscompiled by cps (see EXPAND_WRINKLES.md)" form ctx))
           (else (bad! "##vcore.declare payload is not a lambda or case-lambda" form ctx))))
        (('##foreign.declare str)
         (if (not (string? str)) (bad! "##foreign.declare payload is not a string" form ctx)))
        (expr (verify-expr expr ctx))))

    (let loop ((forms toplevel-forms) (n 0))
      (cond
        ((null? forms) #t)
        ((pair? forms)
         (verify-toplevel (car forms) n)
         (loop (cdr forms) (+ n 1)))
        (else (bad! "improper toplevel form list" forms '(toplevel)))))

    (let ((violations (reverse violations)))
      (if (not (null? violations))
          (begin
            (for-each
              (lambda (v)
                (format (current-error-port) "vsc: verify: ~A: " (car v))
                (write (cadr v) (current-error-port))
                (display " in " (current-error-port))
                (write (caddr v) (current-error-port))
                (newline (current-error-port)))
              violations)
            (compiler-error "verify: malformed forms in post-expansion IR" (length violations))))))
)
