# Hygienic expansion — `hygienic/` (`--hygiene`, in progress)

> Shared vocabulary, the core-language output grammar, and the cross-pass invariants live in
> [overview.md](overview.md) — read that first. This is the designated home for **new**
> expansion features; the legacy expander ([expand.md](expand.md)) is bugfix-only and will
> eventually be replaced by this one.

Sets-of-scopes expander (SRFI-72-flavored). Replaces both `expand.scm` *and*
`alpha-convert` — its output is alpha-converted by construction.

- **Syntax objects** (`types.scm`): a record of `data` (symbol, pair, vector, or literal)
  and a scope *set*. The set doubles as a pending lazy flip: `flip-scope` just xors a scope
  into the top node's set, and `propogate-flips` pushes sets one level down on access
  (`syntax-car` etc.), giving O(1) marking of macro output.
- **Scopes** are records holding a bindings alist (identifier → *binding*, a `generate-symbol`
  gensym). Each binder form (`lambda`, `letrec*`, `let-syntax`, body scope) makes one fresh
  scope, flips it onto the binder's ids and body, and records bindings in the scope.
- **Resolution** (`resolve-identifier`): among bindings with the same symbol whose scope set
  is a *subset* of the use site's, pick the one with the most scopes; if any candidate is
  not a subset of the winner, error "ambiguous id". Unresolved identifiers are allowed at
  toplevel (free = global); inside `##vcore.declare` they are an error (`free-vars-allowed`).
- **Hygiene by flipping** (`apply-transformer`): flip a fresh intro scope onto the macro
  input, run the transformer, flip the same scope onto the output. Syntax that traveled
  through unchanged is flipped twice (mark cancels); syntax the macro introduced is flipped
  once (marked). This is why flip, not add, is the primitive.
- **Transformers** are one-argument procedures (form → form). `(define-syntax (m a b) ...)`
  sugar wraps the body in an arity-checking lambda. They are evaluated at expansion time by
  the tiny interpreter in `hygienic/eval.scm` against `macro-expand-env`, whose `car`/`cdr`/
  `map`/... are syntax-object-aware.
- **`##global-quasisyntax`** (expanded by the *legacy* expander's `expand-global-syntax`,
  since the hygienic expander is itself compiled by `vsc`): quasiquote whose literal symbols
  become `(global-identifier 'sym)` — identifiers carrying only the global scope. It is the
  bootstrap tool the hygienic expander uses to synthesize syntax.
- `expand-syntax` returns the same core-language toplevel list as the legacy path, with
  locals already unique gensyms. Still missing (header comment): `define-library`, `import`
  of macros, FFI forms, `cond-expand`, qualified lambdas / `##letrec` — so today only plain
  programs work under `--hygiene`.
