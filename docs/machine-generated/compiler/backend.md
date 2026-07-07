# Backend — `lower.scm`, `transpile.scm`, `bytecode.scm`

> Shared vocabulary (atom/application discipline, `continuation`, `basic-block`, qualified
> lambdas, static environments), the post-CPS invariants, and the cross-pass checklist live
> in [overview.md](overview.md) — read that first. The IR arriving here is produced by the
> passes in [cps.md](cps.md).

## Lowering — `lower.scm`

### `bruijn-ify`

Replaces every bound-variable reference with `(bruijn name up right)`: walk `up` environment
frames out, take slot `right`. `name` survives only for readability/debug. Frames are pushed
by: lambda formals (the continuation parameter is just formal 0), `(continuation (x) ...)`
(a 1-slot frame), `letrec`/`##letrec` bindings, and `basic-block` regs. A begin continuation
`(continuation body)` pushes **no frame** — its arity is emitted as `#f`. Symbols not found
in any frame are left as symbols = globals/intrinsics. Variadic lambdas become
`(n + body)` (n required args, rest-list in slot n). With `-g`, each binder carries a
debug-info structure of unmangled names; otherwise `#f`.

### `to-functions`

Closure conversion into "procedure soup". Every lambda/continuation/case-lambda is hoisted
into a flat function table entry:

```
(name check-args? debug-info (n body))        ; fixed arity
(name check-args? debug-info (n + body))      ; variadic
(name check-args? debug-info (n1 body1) (n2 body2) ...)  ; case-lambda
(name check-args? debug-info (#f body))       ; begin continuation
```

Names: `<parent>_V0lambdaN` / `<parent>_V0kN` gensyms, or the deterministic `_V50...` for
qualified lambdas. `check-args?` is `#f` for operator-position (let) lambdas whose arity is
statically satisfied. In the tree, each hoisted function is replaced by `(close name)`
(capture current frame as env) or `(close name path)` (env is static environment `path`).

Also gathered: `static-environments` (paths of `##letrec`s), `qualified-functions` (for
`V_DECLARE_FUNC` prototypes), FFI shims, intrinsics, and the **literal table**. Literal
lifting (`lift-literal`, interned via `hush.scm` compile-time hashing): immediates
(numbers, chars, booleans, `'()`, void) stay inline; strings/pairs/vectors/typevectors get
static C storage referenced as `(##string sym)` / `(##pair sym)` / etc.; symbol literals
become weak-linked interned VWORD globals; intrinsics *passed as values* get static closure
cells (`_V40Name`) so they never allocate. Returns
`(static-environments literal-table foreign-functions intrinsics functions
qualified-functions declares toplevels)` — the exact argument list of `printout2` /
`to-bytecode`.

## Transpilation — `transpile.scm` `printout2`

Emits one C translation unit against the macros in `vruntime.h`. Everything has a native
variant and a `VANITY_PURE_C` (emscripten) variant — native uses real varargs calls and the
C stack as nursery; pure-C uses `V_BEGIN_FUNC*` macros, an env-struct calling convention,
`VAlloca`, and `V_BOUNCE*` trampolines instead of deep stacks.

- **Function shape** (native): `void name(VRuntime* runtime, VEnv* statics, int argc,
  VWORD _var0, ...)`. `statics` is the captured lexical chain; `bruijn` up=0 resolves to the
  C parameters directly, up=1 to `statics->vars[i]`, up=2 `statics->up->vars[i]`, etc.
- **`closes?`**: a frame (`self`, a stack `VEnv`) is materialized only if the body creates
  closures / letrecs / basic-blocks / `set!` / `define`; otherwise args stay in registers.
- **Begin continuations** have no frame, so their function does
  `self = statics; statics = self->up;` — the frame they "see" as locals is the frame of
  whoever created them.
- **Calls never return.** Ordinary calls go through `VCallFuncWithGC` (known C function) or
  `VCallDecodedWithGC` (decode closure, check stack, maybe GC, jump). `##qualified-call`
  emits the fast path inline: bind args to locals, `if (VStackOverflow(runtime))
  VGarbageCollect2Closure(...) else _V50name(runtime, env, argc, args...)`, with the env
  from `_V60path` when `static?`.
- **`basic-block`** prints as one frame plus straight-line
  `self->vars[i] = _VBasic_Name(runtime, NULL, ...);` assignments ending in the tail
  application.
- **case-lambda dispatch**: each clause is its own function `_V20CaseN_name`; the entry
  point is hand-emitted asm that compares `argc` and jumps to the right clause (a chain of
  `cmp`/`je`/`jge`), falling through to an arity-error function. Pure-C uses plain `if`s.
- **`set!`/`define`**: local `set!` calls `VSetEnvVar2(k, up, right, val)`; global `set!`
  `VSetGlobalVar2`; `define` `VDefineGlobalVar2` — all CPS calls taking the continuation.
- **Literals**: static structs; a `__attribute__((constructor))` DllMain interns symbol
  literals first (other literals may embed pointers to them), then patches pair/vector
  contents, then registers debug info. Symbols and intrinsic cells are `VWEAK` so duplicate
  definitions across translation units merge.
- **Toplevels**: each program-toplevel expression becomes `static void toplevelN(...,
  VWORD _k)`, collected into `VanityToplevels[]`; `main` runs `VExecute` on each in order
  (each toplevel is one Cheney longjmp episode), then exits. A file with any toplevel
  expressions/defines generates a `main` — hence "shared library has toplevel expressions"
  errors when building `--shared`.

## Bytecode path — `bytecode.scm`

`-E`/`-t`-equivalent for the interpreter: same pipeline with `lifting-literals? = #f` and no
basic-block fusion, then `bytecode.scm` `to-bytecode` serializes the function soup to
`.vasm`, executed by `runtime/vbytecode.c` (`eval-vasm`). `vanity` (the REPL/interpreter)
runs this identical pipeline in-process per form.
