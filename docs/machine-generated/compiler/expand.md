# Legacy expansion — `expand.scm` + `alpha-convert.scm`

> Shared vocabulary, the core-language output grammar, and the cross-pass invariants live in
> [overview.md](overview.md) — read that first. `expand.scm` is under a **feature
> moratorium** — bugfixes only; new expansion features go to the hygienic expander
> ([hygienic.md](hygienic.md)).

`expand-toplevel` takes one toplevel datum and returns a **list** of core-language toplevel
forms (grammar in overview.md). Macro expansion here is non-hygienic pattern matching;
`gensym` is used defensively where capture would be embarrassing.

Concepts worth knowing:

- **`primitive-letrec?`**: a `letrec[*]` binding can be allocated directly if its value is a
  lambda/literal/intrinsic, or a combination that neither contains lambdas nor references
  the letrec's own variables. Non-primitive bindings are lowered to `#f`-init + `set!`
  (letrec*) or `#f`-init + temporaries in an inner let (letrec). So the `letrec` reaching
  CPS is always the primitive kind.
- **Internal defines** (`expand-body`): a body's `define`s/`define-values` are collected and
  rewritten into a single `letrec*`; `define-constant`s become an enclosing let of the
  (checked-constant, never-`set!`) values.
- **Library expansion** (`expand-library`): `(define-library (a b) ...)` becomes
  `(##vcore.declare "_V20a_V0b" (lambda () ...))`. The thunk imports its dependencies with
  the `VMultiImport` intrinsic (receiving each imported variable as a lambda parameter),
  binds all library defines in `(##letrec (a b) ...)`, runs stray toplevel expressions, and
  returns a quasiquoted alist `((export-name . value) ...)`. At runtime,
  `(import (a b))` at program toplevel CPSes into
  `(##vcore.multidefine (##vcore.load-library "_V20a_V0b"))`: run the thunk once (memoized),
  then define every alist entry as a global.
- **Qualification of library defines** happens *here*, not in the optimizer: each library
  `define` of a lambda whose variable is never `set!` becomes
  `(##qualified-lambda (a b name) #t args body)` — statically named *and* static-env.
- Free-variable analysis of the whole library body checks that every free variable is
  either imported or exported — unbound names are a compile error listing the context.
- `cond-expand` / `(features)` are evaluated at expansion time against the feature list from
  the CLI (`-D`, platform). FFI: `(##foreign-import "h")` runs the bison/flex parser
  (`ffi.scm`) and expands to `define-constant`s of `##foreign.function` atoms plus a lifted
  `##foreign.declare`.

## `alpha-convert.scm` (legacy path only)

Renames every locally bound variable to a fresh gensym (`##.name.N`), so **all local names
are globally unique**. Toplevel defines are *not* renamed (globals are looked up by string
at runtime). This uniqueness is load-bearing: the optimizer's substitution and
`qualify-callsites`' name generation both assume no shadowing anywhere.
