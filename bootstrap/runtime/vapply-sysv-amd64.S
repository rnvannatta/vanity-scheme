// Copyright 2023-2024 Richard N Van Natta
//
// This file is part of the Vanity Scheme Runtime.
//
// The Vanity Scheme Runtime is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 2.1 of the License, or (at your option) any later version.
// 
// The Vanity Scheme Runtime is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with the Vanity Scheme Runtime.
//
// If not, see <https://www.gnu.org/licenses/>.
//
// This work is published with additional permission, the Vanity Scheme
// Runtime Library Exceptions, which should have been included with the
// Vanity Scheme Compiler.
//
// If not, visit <https://github.com/rnvannatta>

.intel_syntax noprefix
.section .text
.globl VSysApply
.type VSysApply, @function
// Signature: void VSysApply(VFunc * func, VEnvironment * environ);
// where VFunc is void(*)(VRuntime * runtime, VStaticEnv * statics, unsigned argc, ...)
// and the ... are all uint64s. VEnvironment is just a struct containing the arguments to be applied in order
// Well not so fast: VEnvironment is { TAG, argc, runtime, statics, argv... }
// Register usage:
// ax : loop variable for number of args, greater than 3 if uses stack
// di : 1st funcall arg 'runtime'
// si : 2nd funcall arg 'statics'
// dx : 3rd funcall arg 'argc'

// cx : 1st user funcall arg
// r8 : 2nd user funcall arg
// r9 : 3rd user funcall arg

// r10 : temporary for pointer to VEnvironment * environ, then after unpacking, pointer to argv
// r11 : function pointer to call
// r12 : preserved register holds stack space used for variadic funcall
VSysApply:
	// func 
	mov r11, rdi
	// environ 
	mov r10, rsi
	// sys arg 1, runtime 
	mov rdi, QWORD PTR [r10+8]
	// sys arg 2, statics 
	mov rsi, QWORD PTR [r10+16]
	// sys arg 3, argc 
	mov edx, DWORD PTR [r10+4]
	mov eax, edx
  lea r10, QWORD PTR [r10+24]
	// usr args
	cmp eax, 4
	jb few_arg

	push r12
	mov r12d, eax
	sub r12d, 3
	test r12d, 1
  // if we have an even number of args on stack, we are good
  // otherwise we need to pad because we have to push
  // r12 & return addr and need to maintain 16 byte align
	jz even_args
	add r12, 1
	sub rsp, 8
even_args:
	shl r12, 3
many_arg:
	sub eax, 1
	push QWORD PTR [r10+8*rax]
	cmp eax, 3
	jne many_arg
  // indicating that we are using the stack by storing 4 in here
  mov eax, 4
few_arg:
	test eax, eax
	jz no_arg
	cmp eax, 1
	je one_arg
	cmp eax, 2
	je two_arg
three_arg:
  mov r9, QWORD PTR [r10+16]
two_arg:	
  mov r8, QWORD PTR [r10+8]
one_arg:	
  mov rcx,  QWORD PTR [r10]
no_arg:
  cmp eax, 4
  jb tailcall

  // calling variadic function, need to clear ax to avoid fp dumps
  xor eax, eax
	call r11
	add rsp, r12
	pop r12
	ret
tailcall:
  xor eax, eax
	jmp r11


.section .note.GNU-stack,"",@progbits
