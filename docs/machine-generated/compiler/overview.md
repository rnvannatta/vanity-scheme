# Compiler overview

A concept-level guide to the `vsc` pipeline: the shared vocabulary (`continuation`,
`##qualified-lambda`, `basic-block`, ...), the IR contracts between stages, and the
invariants every pass must preserve. Driver: `src/vanity/compiler/frontend.scm`
(`RUN COMPILE` section). Debugging: `-E0` dumps post-expand, `-E1` post-CPS, `-E2`
post-optimize, `-t` emits C; `--verify` validates the post-expand IR against the
core-language grammar (authoritative statement in `verify.scm`'s header comment).

Pipeline:

```
read → expand (expand.scm | hygienic/) → alpha-convert (legacy path only)
     → to-cps (cps.scm) → optimize (cps.scm) → qualify-callsites (optimize.scm, -O1+)
     → bruijn-ify → to-functions (lower.scm)
     → printout2 (transpile.scm) | to-bytecode (bytecode.scm)
```

## Where to read next

This file holds the cross-pass material: vocabulary, IR grammars, and invariants.
Per-stage detail lives in the sibling docs — before editing a pass, read the doc for the
file you are touching:

| Editing (in `src/vanity/compiler/`)       | Read first                                                    |
| ----------------------------------------- | ------------------------------------------------------------- |
| `expand.scm`, `alpha-convert.scm`         | [expand.md](expand.md) — legacy expander (bugfix-only)         |
| `hygienic/`                               | [hygienic.md](hygienic.md) — scope-sets expander (`--hygiene`) |
| `cps.scm`, `optimize.scm`                 | [cps.md](cps.md) — CPS conversion, optimizer, callsite qualification |
| `lower.scm`, `transpile.scm`, `bytecode.scm` | [backend.md](backend.md) — lowering, C emission, bytecode   |

Every pass handles three toplevel wrappers specially and recurses only into their payload:
`(##foreign.declare str)` (passed through verbatim), `(##vcore.declare "Cname" lambda)`
(library thunks), and plain expressions.

## Core vocabulary

**Atom vs application.** From CPS conversion onward, every expression is exactly one of:

- *atoms* — things that evaluate without calling anything: variables, literals, `(quote x)`,
  `lambda` / `case-lambda` / `##qualified-lambda` / `##qualified-case-lambda`, `continuation`,
  `(##intrinsic "VName" ...)`, `(##basic-intrinsic "VName" n)`, `(##foreign.function ...)`.
- *applications* — one call in tail position: `(f-atom k-atom arg-atom ...)`, plus the
  "special applications" `if`, `letrec`, `##letrec`, and (post-optimize) `basic-block`,
  whose leaves are applications.

The load-bearing invariant (stated at `cps.scm` `optimize-impl`): **atoms map to atoms,
applications map to applications; applications apply atoms to atoms — an application never
appears in argument position.** Nested calls are always named through a `continuation`.

**`continuation`** is a lambda-like binder introduced by CPS conversion, in two forms:

- `(continuation (x) body)` — receives exactly one value. Unlike `lambda` it is never
  variadic and has no surface syntax, but it **is** user-proddable: `call/cc` reifies the
  current continuation as a procedure, so continuations *do* carry the runtime arity check —
  `(call/cc (lambda (k) (k)))` reports a clean "not enough arguments" diagnostic rather than
  reading garbage.
- `(continuation body)` — a *begin continuation*: discards the value(s) it is called with.
  Crucially it contributes **no environment frame** (see bruijn-ify), and at codegen its
  function body does `self = statics; statics = self->up;` since it has no frame of its own.

A continuation in operator position with a symbol head, e.g. `(k x)`, is just an ordinary
application: "return `x` to continuation `k`".

The `lambda`/`continuation` split is largely **vestigial** — the compiler originally had a
hard separation and refinement eroded it. Today a `continuation` behaves like a one-formal
`lambda` everywhere it matters (runtime representation, arity check, frames, closure
conversion); the remaining real differences are the frameless `(continuation body)` form,
`_V0kN` codegen naming, and that eta-conversion would only ever be safe on continuations.
Don't infer deeper semantics from the passes carrying separate `continuation` match clauses;
the clauses are duplicated shape-handling, not a second sort of procedure.

**`lambda` is uniform; a `let` is a beta-redex.** There is deliberately no `let` node and no
magic continuation formal: `((lambda args body) vals ...)` *is* the let, and a procedure's
continuation is an ordinary first formal — the runtime treats it exactly like any other
argument (this uniformity is what makes `call/cc` reification, `apply`, and GC argument
saving work on continuations with no special cases). Do not ask "is this lambda's first
formal a continuation?" as if it were a property of the lambda; it is a property of what the
callsites pass. CPS conversion just avoids manufacturing chaff: an atom-position lambda will
be *called* with a continuation first, so it gets a fresh `%k` formal; an operator-position
lambda's continuation already flows into its body through the conversion, so `iter-let`
prepends nothing. One useful derived fact: an operator-position lambda's sole callsite is
statically known, so codegen skips its arity check (`check-args? = #f`) — the only place the
check is ever skipped, and still valid when the binding survives to codegen because the
value is a lambda the inliner won't touch (e.g. `(let ((x (lambda (x) (x)))) (x x))` — an
infinite loop, don't run it). Everything else, hoisted `continuation`s included, keeps the
check.

**Qualified lambdas.** `(##qualified-lambda name static? args body)` is a lambda with a
*well-known name*: `name` is a list-of-symbols path, e.g. `(vanity core map)` for a library
export or `(##.loop.2)` for a local loop promoted by `qualify-callsites`. Its C function gets
the deterministic name `_V50...` (instead of a per-compile `_V0lambdaN` gensym), which is what
makes direct callsite calls possible. `static?` says the closure's environment is a *static
environment* — the library's toplevel `##letrec` frame, stored in a C global (`_V60...`) — so
callers don't need a closure at all to reach its environment. `static?` is `#t` only for
library-toplevel defines; locally promoted lambdas are qualified but not static.
`##qualified-case-lambda` is the same for `case-lambda`: `(##qualified-case-lambda name
static? (args body) ...)`; a single-clause one degrades to `##qualified-lambda` in lowering.

**`(##qualified-call name static? f k args ...)`** marks a callsite whose operator is known
to be the qualified function `name` (`f` is kept for the env-extraction fallback). Codegen
calls `_V50name` directly as a C function with real arguments — no closure decode, no
indirect jump, no varargs — after an explicit stack-overflow/GC check.

**`basic-block`** (created by `optimize`): `(basic-block cost (reg1 (bi args...)) (reg2 ...)
... application)`. A run of direct calls to Basic-ABI functions (`##basic-intrinsic`s,
`##foreign.function` shims, or `##vcore.*` symbols that `is-basic-intrinsic?` approves)
fused into straight-line C: each `regN = _VBasic_Name(runtime, NULL, ...);` binds
sequentially (later applies may use earlier regs, like `let*`), all regs live in one env
frame, and zero continuation garbage is allocated. Basic calls cannot allocate Scheme
objects or call back into Scheme, which is why no GC point is needed inside. `cost` counts
fused calls; at 4095 the chain is deliberately broken with an empty-let (`((lambda () ...))`)
to reintroduce a GC point, bounding stack/nursery growth.

**Static environments / `##letrec`.** `(##letrec path bindings body)` is a `letrec` whose
frame is also published as the static environment for library `path`: codegen stores the
frame pointer in the global `VEnv * _V60path` and registers it via `VRegisterStaticEnv`.
Library bodies expand to a `##letrec` of all their defines; that frame is what
`static? = #t` qualified functions and calls reference.

**Name mangling** (`variables.scm` header): `_V0` variable, `_V10` system (`##`-prefixed)
symbol, `_V20` library, `_V30` FFI shim, `_V40` intrinsic value cell, `_V50` qualified
function, `_V60` static environment, `_VW` interned (weak-linked) literal. Alpha-converted
locals look like `##.name.N` in dumps and mangle from there.

**`##inline`** — `(##inline f args...)` atoms meant to print as inline C from `vinlines.h`.
Currently dormant: `lookup-inline-name` always returns `#f` and nothing generates the nodes;
the traversal cases in every pass are kept for when it comes back.

## Core-language grammar (expansion output = CPS input)

This grammar is enforceable: `vsc --verify` (and `vanity --verify`) validates the
post-expansion IR against the authoritative rule list at the top of
`src/vanity/compiler/verify.scm`, catching the wrong-arity special forms that
otherwise silently degrade into applications; known expander deviations live in
`EXPAND_WRINKLES.md`. Both expanders — `expand-toplevel` (legacy) and `expand-syntax` (hygienic) — take one
toplevel datum and return a **list** of core-language toplevel forms:

- toplevel forms: `(define x val)`, `(import lib)`, `(##vcore.declare "_V20..." lambda)`,
  `(##foreign.declare "C text")`, or a plain expression.
- expressions: `lambda` / `case-lambda` (+ qualified variants), `quote`,
  **binary** `(begin x y)`, 3-armed `(if p x y)`, **binary** `(or x y)`, `letrec`,
  `(##letrec path ...)`, `(set! y x)`, intrinsic/FFI atoms, applications. Everything else —
  `let[*][rec*]`, `and`, `cond`, `case`, `do`, `when`, `named let`, `match`, `do-loop`,
  `cut/cute`, `parameterize`, `guard`, `let-values`, `delay`, quasiquote, records — is
  desugared away. `let` becomes a direct lambda application; `and` becomes `if`; `or` stays
  a special form so its value can be reused without double-evaluation (CPS turns
  `(or x y)` into a bound `(if p p y)`).

After the front end (expansion + alpha-conversion on the legacy path; the hygienic expander
is alpha-converted by construction), **all local names are globally unique** gensyms
(`##.name.N`); toplevel defines are *not* renamed (globals are looked up by string at
runtime). This uniqueness is load-bearing: the optimizer's substitution and
`qualify-callsites`' name generation both assume no shadowing anywhere.

## Post-CPS invariants

What every pass after `to-cps` relies on:

1. Every expression is an atom or an application; application operands are all atoms.
2. Every `lambda`/`continuation` body is exactly **one** application (everything is a tail
   call; nothing returns).
3. Every atom-position lambda's first parameter is its continuation; every call to it passes
   a continuation atom first. Continuations are called with exactly one value.
4. `if` tests are atoms; `if` branches, `letrec` bodies, and `basic-block` tails are
   applications.
5. All locals are globally unique symbols; free symbols are globals (or `##vcore.*`
   intrinsic names, recognized via `lookup-intrinsic-name`).

## Cross-pass invariant checklist

When editing any middle-end pass, preserve:

1. Atom/application discipline (§Core vocabulary) — including inside new special forms.
2. One application per lambda/continuation body; continuation-first argument order.
3. Global uniqueness of local names (don't invent binders without `gensym`).
4. Free-variable annotations and ref-table consistency inside `optimize-impl` (any code you
   delete or duplicate must go through `sub-refs!`/`add-refs!`).
5. `basic-block` entries may only be Basic-ABI calls (no allocation, no Scheme calls) and
   the cost cap must keep GC points reachable.
6. Purity (`variable-pure?`) before qualifying or substituting anything a `set!` touches.
7. Every new traversal must handle the full binder menagerie: both `continuation` forms,
   both qualified forms, `##letrec`, `basic-block`, and the `(set!/define k y x)` triples.
