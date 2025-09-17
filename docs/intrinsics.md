# Vanity's Intrinsics System

Vanity has 3 levels of intrinsic in increasing complexity:

1. `##foreign-function`: A shimmed C function. Decodes lightweight scheme objects to C. Incapable of allocating scheme objects.
2. `##basic-intrinsic`: A simple and fast intrinsic that can deal with scheme objects. Incapable of allocating scheme objects.
3. `##intrinsic`: A full continuation passing style intrinsic. Heavier, but can allocate scheme objects.

## Foreign functions

There are two ways to import foreign functions.

`(##foreign-import aheader)`: Parses the C header and create's definitions for all functions and enums. Given the following header `foo.h`:

```
#pragma once
enum { STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO };
int putc(char);
```

`(##foreign-import "foo.h")` expands to

```
(begin
  (define-constant STDIN_FILENO 0)
  (define-constant STDOUT_FILENO 1)
  (define-constant STDERR_FILENO 2)
  (define-constant putc (##foreign.function "C" "int putc(char)")))
```

There are only 3 includes available to headers imported this way: stddef.h, stdint.h, and stdbool.h. The define-constant just means the object is readonly, in static memory, and marked as inline across modules.

`(##foreign-function "C" cdecl)`: Parses the C declaration, creating shim functions and evaluating to a closure of the shim function.

So given our putc example, `(define-constant putc (##foreign.function "C" "int putc(char)"))`, it generates this shim:

```
static V_BEGIN_FUNC_BASIC(_V40_putc_shim, _var0)
 return VEncodeInt(putc(VCheckedDecodeChar(runtime, _var0, "putc")));
V_END_FUNC
static VClosure _V40_putc_closure = { .obj.tag = VCLOSURE, .func = _V40_putc_shim, .env = NULL };
```

So foreign functions generate basic intrinsics, but more on basic intrinsics later. Let's talk about the correspondance with Scheme and C types.

* char: A scheme character. Vanity is ascii so no domain errors can occur.
* signed char, unsigned char, int, etc: A scheme int, which is 32 bit. Bounds checking is performed and an error is raised if the int can't fit both from scheme to C and from C to scheme in the case of a function returning a 64 bit int. Casting occures between signed and unsigned equivalents.
* float, double: A scheme double. Lossy casting happens in the case of floats. Since vanity uses nan boxing, any nan payloads are destroyed.
* void\*: A so-called void foreign pointer, which is just a scheme word encoding an unmanaged pointer devoid of type information. Or any scheme object which is arraylike in nature but mutable. So strings, f32vectors, etc.
* char\*: A scheme string. All scheme strings are null terminated, so this passes without creating copies.*
* const void\*, const char\*: Can also accept symbols.
* int\*, signed char\*, float\*: A SRFI-4 typevector. vanity supports the following typevectors: s8, u8, s16, u16, s32, f32, f64
* int[static 4], float[static 3]: A SRFI-4 typevector of at least that many elements.
* struct tag \*: A pointer to a struct. Currently just type erased to void, but be warned it won't be forever.

Note all pointers accept void foreign pointers, and returning a pointer of any sort does not encode it to a scheme object, but to a void pointer. The intent of the foreign function shim is to be lightweight and avoid making decisions on lifetimes of C objects. That's why all encoding is just some type checking, bounds checking, bit manipulations, and at most some pointer arithmetic.  If you wish to return a string and have it be a scheme string, you need to use the `##intrinsic` mechanism and perform the scheme allocation.

Explanation of foreign void pointers. imagine you import the following header.
```
#include <stddef.h>
void * malloc(size_t);
void free(void*);
int puts(char const*);
char *strcpy(char*, const char*);
```
In scheme we can do
```
(##foreign-import "example.h")
(define buf (malloc 20))
(strcpy buf "Hello,")
(puts buf)
(puts "World!)
(free buf)
```

The type of buf is that void foreign-pointer. We can pass it to strcpy because void can be cast to any C pointer, and we can also pass a scheme string. Foreign pointers are unmanaged so we have to free them ourselves, or set up a finalizer. But it's recommended to run finalize manually anyway if you use a finalizer.

Also as noted above, strcpy returns a foreign-pointer. C functions returning random pointers is ond reason why foreign pointers are unmanaged and wwhy char* isn't copied into a scheme string magically.

Another example:
```
(define recv (##foreign-function "C" "int recv(int sock, void * buf, size_t len, int flags)"))
(define msg (make-string 1500 #\null))
(define bytes (recv mysock msg 1500 0))
(unless (< bytes 0) (displayln msg))
```

## Basic Intrinsics

A basic intrinsic conforms to Vanity's Basic Procedure ABI: where (define (foo a b) ...) has the ABI: `VWORD _VBasic_foo(VRuntime * runtime, VEnv * env, VWORD a, VWORD b)`. They're passed the runtime, so they can do more advanced things with their arguments, and can raise scheme errors on contract violation: for example passing an out of bounds to a vector-ref. Since intrinsics don't close over any variables, env is NULL.

The first limitation of the basic ABI and thus basic intrinsics is they cannot allocate any scheme objects, and the second is that the basic ABI is not variadic (some variadic functions like + are decomposed into basic functions via unclean means that aren't user-exposed yet).

The basic ABI is used when a known-basic procedure is called directly. For example `(+ 1 2 3 4)` makes a basic call, but `(apply + xs)` would make a more expensive continuation-passing-style call. The main advantages of the basic ABI are that the number of args is known by the callee, and more importantly basic calls avoid creating continuation garbage, particularly when called in bulk, such as (+ (* x x) (* y y)), all 3 procedures being basic mean no continuations are generated.

An example basic intrinsic is (##basic-intrinsic "VF64VectorRef" 2), where 2 is the number of arguments (which are the f64vector and the index). It causes the following declaration to be made, which expans into both the basic function declaration and the cps version's declaration:

```
V_DECLARE_FUNC_BASIC(VF64VectorRef, _var0, _var1)
```

Here's an example basic intrinsic, bound to scheme with `(##basic-intrinsic "myinttochar" 1):

```
V_BEGIN_FUNC_BASIC(myinttochr, _i)
  int i = VCheckedDecodeInt(runtime, _i, "myinttochr");
  if(i < 0 || i > 255) VErrorC("myinttochr: input out of bounds ~A", _i);
  unsigned char uc = i;
  return VEncodeChar(uc);
V_END_FUNC
```

That implements the basic function, as well as the cps function wrapper around the basic function. Vantiy structure definitions as well as low level routines for working with them are inside of `vruntime.h`. It is a messy file, and will probably change or get cleaned up a bit while vanity is still in an alpha state.

## Full Continuation Passing Style Intrinsics

There's 3 cases for a cps intrinsic: variadic functions (eg +), allocating functions (eg vector), and flow control trickery that wants a continuation (eg call/cc). Here's its syntax:

1. `(##intrinsic "VGensym" 2)`: a 2 arg function, the two args are the continuation and the label.
2. `(##intrinsic "VF64Vector" 1 +)`: a 1 or more arg function, the continuation and the N doubles to make the f64vector.
3. `(##intrinsic "VCopyVector" 2 4)`: a 2 to 4 arg function, the continuation, the vector, and optionally the start and the end of the copy region.

Note that the continuation is counted in the intrinsic arg count, but is invisible in standard usage. For example, gensym is used as `((##intrinsic "VGensym" 2) "var")`

The CPS ABI for the above gensym is:

```
V_DECLARE_FUNC(VGensym, _k, _label);
// which expands to this on x86
void VGensym(VRuntime * runtime, VEnv * env, int argc, _k, _label);
// and this on wasm
void VGensym(VRuntime * runtime, VEnv * env, VEnv * args);
```

The ABI differing on different platforms (different meaning wasm; I'm confident arm could use the good abi) is why intrinsics are so macro-heavy. Anyway here's a simple example of an allocating cps intrinsic:

```
V_BEGIN_FUNC(VFunction, k, name)
  VBlob * blob = VCheckedDecodeString(runtime, name, "function");
  const char * str = blob->buf;
  void * ptr = dlsym(RTLD_DEFAULT, str);
  if(!ptr)
    VErrorC(runtime, "function: failed to dlsym function ~A (is the library it's in loaded or linked?)", name);
  VClosure func = VMakeClosure((VFunc)ptr, NULL);
  V_BOUNCE(k, runtime, VEncodeClosure(&func));
V_END_FUNC
```

The thing to note is no matter the ABI, continuation passing style functions don't return. They instead call other functions, and if they were to conceptually return, they instead call their continuation with the return value. The macro V_BOUNCE handles doing garbage collection, making the call, and providing a trampoline if necessary (oh wasm you rascal). Returning from a continuation passing style function will cause sparks to fly.

Also note that we 'allocated' that closure by just having it be a stack variable. That's why we can't return. This style of runtime is called Cheney-on-the-MTA. There's guaranteed to be at least half a meg of space on the stack for allocations. Large allocations like very large bytevectors do need to go to the vanity heap, and there are macros for handling large allocations like that in vruntime.h.
