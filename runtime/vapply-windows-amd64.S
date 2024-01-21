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
// Signature: void VSysApply(VFunc * func, VEnvironment * environ);
// where VFunc is void(*)(VRuntime * runtime, VStaticEnv * statics, unsigned argc, ...)
// and the ... are all uint64s. VEnvironment is just a struct containing the arguments to be applied in order
// Well not so fast: VEnvironment is { TAG, argc, runtime, statics, argv... }
// Register usage
// ax : loop variable for number of args, greater than 1 if uses stack
// cx : 1st funcall arg 'runtime'
// dx : 2nd funcall arg 'statics'
// r8 : 3rd funcall arg 'argc'
// r9 : 1st user funcall arg

// r10 : temporary for pointer to VEnvironment * environ, then after unpacking, pointer to argv
// r11 : function pointer to call
// r12 : preserved register holds stack space used for variadic funcall
VSysApply:
	// func 
	mov r11, rcx
	// environ 
	mov r10, rdx
	// sys arg 1, runtime 
	mov rcx, QWORD PTR [r10+8]
	// sys arg 2, statics 
	mov rdx, QWORD PTR [r10+16]
	// sys arg 3, argc 
	mov r8d, DWORD PTR [r10+4]
	mov eax, r8d
  lea r10, QWORD PTR [r10+rax*8+24]
	// usr args
	cmp eax, 2
	jb few_arg

	push r12
	mov r12d, eax
	sub r12d, 1
	test r12d, 1
  // if we have an even number of args on stack, we are good
  // otherwise we need to pad because we have to push
  // r12 & return addr and need to maintain 16 byte align
	jz even_args
	add r12, 1
  push rax
even_args:
	shl r12, 3
many_arg:
	sub eax, 1
  sub r10, 8
	push QWORD PTR [r10]
	cmp eax, 1
	jne many_arg
  // indicating that we are using the stack by storing 2 in here
  mov eax, 2
few_arg:
	test eax, eax
	jz no_arg
one_arg:	
  sub r10, 8
  mov r9,  QWORD PTR [r10]
no_arg:
  cmp eax, 2
  jb tailcall

  sub rsp, 32
	call r11
  add rsp, 32
	add rsp, r12
	pop r12
	ret
tailcall:
	jmp r11

.globl VSetJmp
// Need to write all the preserved registers to the storage, then return 0
VSetJmp:
  mov rax, [rsp]
  mov QWORD PTR [rcx+ 0], rax
  mov QWORD PTR [rcx+ 8], rsp

  mov QWORD PTR [rcx+16], rbx
  mov QWORD PTR [rcx+24], rbp

  mov QWORD PTR [rcx+32], rdi
  mov QWORD PTR [rcx+40], rsi

  mov QWORD PTR [rcx+48], r12
  mov QWORD PTR [rcx+56], r13
  mov QWORD PTR [rcx+64], r14
  mov QWORD PTR [rcx+72], r15

  movups XMMWORD PTR [rcx+ 80], xmm6
  movups XMMWORD PTR [rcx+ 96], xmm7
  movups XMMWORD PTR [rcx+112], xmm8
  movups XMMWORD PTR [rcx+128], xmm9
  movups XMMWORD PTR [rcx+144], xmm10
  movups XMMWORD PTR [rcx+160], xmm11
  movups XMMWORD PTR [rcx+176], xmm12
  movups XMMWORD PTR [rcx+192], xmm13
  movups XMMWORD PTR [rcx+208], xmm14
  movups XMMWORD PTR [rcx+224], xmm15

  xor eax, eax
  ret

.globl VLongJmp
VLongJmp:
  mov rsp, QWORD PTR [rcx+ 8]

  mov rbx, QWORD PTR [rcx+16]
  mov rbp, QWORD PTR [rcx+24]

  mov rdi, QWORD PTR [rcx+32]
  mov rsi, QWORD PTR [rcx+40]

  mov r12, QWORD PTR [rcx+48]
  mov r13, QWORD PTR [rcx+56]
  mov r14, QWORD PTR [rcx+64]
  mov r15, QWORD PTR [rcx+72]

  movups xmm6, XMMWORD PTR [rcx+ 80]
  movups xmm7, XMMWORD PTR [rcx+ 96]
  movups xmm8, XMMWORD PTR [rcx+112]
  movups xmm9, XMMWORD PTR [rcx+128]
  movups xmm10, XMMWORD PTR [rcx+144]
  movups xmm11, XMMWORD PTR [rcx+160]
  movups xmm12, XMMWORD PTR [rcx+176]
  movups xmm13, XMMWORD PTR [rcx+192]
  movups xmm14, XMMWORD PTR [rcx+208]
  movups xmm15, XMMWORD PTR [rcx+224]

  mov rax, QWORD PTR [rcx+0]
  mov [rsp], rax

  mov rax, rdx
  ret
