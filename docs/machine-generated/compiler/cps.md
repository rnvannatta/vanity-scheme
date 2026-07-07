# CPS & optimization — `cps.scm` + `optimize.scm`

> Shared vocabulary (atom/application discipline, `continuation`, `basic-block`, qualified
> lambdas), the post-CPS invariants, and the cross-pass checklist live in
> [overview.md](overview.md) — read that first. Downstream consumers of this stage's output
> are documented in [backend.md](backend.md).

## CPS conversion — `cps.scm` `to-cps`

Converts each toplevel form into continuation-passing style. Each toplevel expression
becomes a one-argument thunk `(lambda (%next) ...)` taking its continuation (the runtime
drives these in order; see backend.md "toplevels").

Rules of `iter2 expr cont` (where `cont` is always an atom — a symbol or a `continuation`
term):

- atom: `(cont atom)`, with lambdas in the atom recursively converted (gaining `%k`).
- combination `(f a b ...)`: arguments that are themselves applications are evaluated first,
  left to right, each named by wrapping: `(iter2 arg (continuation (%x) rest))`. Result:
  `(f-atom cont a-atom b-atom ...)` — **the continuation is spliced in as the first
  argument**.
- `(begin x y)`: `x`'s value is discarded via a begin continuation:
  `(iter2 x (continuation (iter2 y cont)))`.
- `(if p x y)`: `p` is reduced to a symbol (or constant, which folds). If `cont` is not
  already a symbol it is **let-bound first**:
  `((continuation (%k) (if p (iter2 x %k) (iter2 y %k))) cont)` — duplicating a non-trivial
  continuation into both arms caused exponential code growth (see the war-story comment in
  the source: 200k-line C files).
- `(or x y)` → `(if x x y)` once `x` is a symbol.
- `set!` / `define` are *not* special-cased: they go through the combination rule, yielding
  the three-operand CPS forms `(set! k y x)` / `(define k y x)` (continuation first, then
  the target variable — which is not evaluated — then the value atom). Later passes and
  `count-refs` pattern-match these shapes.
- let-style `((lambda args body) . vals)` stays a direct application (no `%k` on the
  operator lambda); `letrec` vals are converted as atoms.

These rules are what establish the **post-CPS invariants** listed in overview.md; every
pass from here on relies on them.

## Optimization — `cps.scm` `optimize`

`optimize` = `annotate-free-vars` → `optimize-impl` → `deannotate-free-vars`.

- **Annotation**: every binder gains a free-variable list —
  `(lambda args free body)`, `(continuation (x) free body)`, `(continuation free body)`,
  `(case-lambda (args free body) ...)`, and the qualified variants. `substitute` keeps these
  lists correct (unioning in the free vars of the substituted atom); they are what makes
  substitution O(reachable) instead of O(tree).
- **Bookkeeping**: `count-refs` builds `ref-table` (per-symbol reference counts) and
  `impure-table` (variables targeted by `set!`, plus the value symbols involved). The tables
  are updated *incrementally* as code is deleted or duplicated (`add-refs!`/`sub-refs!`);
  a mismatch trips "internal compiler error: negative variable refcount".
- **Let simplification** (`optimize-let` / `inline-let`), for
  `((continuation (y) f body) x)` and `((lambda (ys...) f body) xs...)` — per binding:
  - refcount 0 → binding dropped (safe: values are atoms, hence effect-free);
  - substitute `x` for `y` when `x` is a non-lambda atom (variable, literal, `quote`,
    intrinsic, FFI) at any refcount, or anything non-lambda at refcount 1 — provided neither
    `y` nor `x` is impure (`set!`-involved). **Lambda-family atoms are never substituted**;
    they stay let-bound and become closures. Eta conversion is deliberately disabled
    (`(letrec ((loop (lambda () (loop)))) (loop))` miscompile).
  - `((continuation body) . rest)`: values discarded, `rest` deleted with refcount fixup.
- **Constant-if folding**: `(if #t a b)` / `(if #f a b)` (arising from copy propagation)
  drop the dead arm with refcount fixup.
- **Basic-block fusion**: an application `(f k . xs)` whose operator is Basic-ABI
  (`is-basic-intrinsic?` symbol, `##basic-intrinsic`, or `##foreign.function`) becomes a
  register binding fused onto whatever `(k reg)` optimizes to — growing an existing
  `basic-block` by one, or starting a fresh `(basic-block 1 reg appl)`. Disabled when
  emitting bytecode (`inlining? = #f`): the interpreter has no basic ABI.

The pass must map atoms→atoms and applications→applications, and keep annotations accurate.

## Callsite qualification — `optimize.scm` `qualify-callsites` (-O1+)

Walks with `current-qualname` (the enclosing qualified function's name path, `'()` at
toplevel) and an alist of variables known to be bound to qualified functions.

- `scan-bindings` inspects let/`letrec` bindings: values that are already qualified register
  the variable; plain `lambda`/`case-lambda` values get **promoted** to
  `(##qualified-lambda (,@current-qualname ,var) #f ...)` if the variable is pure (never
  `set!`) in the body — and, for `letrec`, in all sibling values too. Alpha-uniqueness means
  the variable itself can serve as the name component.
- Callsites `(f k args...)` where `f` is a known qualified variable are rewritten to
  `(##qualified-call name static? f k args...)`.

This is what turns self-recursive named-let loops into direct C calls (see the `-E2 -O2`
dump of any named let: the loop lambda becomes `##qualified-lambda (##.loop.N)` and its
recursion a `##qualified-call`).
