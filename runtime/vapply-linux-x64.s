.intel_syntax noprefix
.section .text
.globl VSysApply
.type VSysApply, @function
// Signature: void VSysApply(VFunc * func, VEnvironment * environ);
// where VFunc is void(*)(VRuntime * runtime, VStaticEnv * statics, VContEnv * returns, VDynamicEnv * dynamics, unsigned argc, ...)
// and the ... are all doubles. VEnvironment is just a struct containing the arguments to be applied in order
// Well not so fast: VEnvironment is { TAG, argc, runtime, statics, returns, dynamics, argv... }
// Register usage:
// ax : loop variable for number of args, eventually number of floating point args
// di : 1st funcall arg 'runtime'
// si : 2nd funcall arg 'statics'
// dx : 3rd funcall arg 'argc'
// r9 : temporary for whether we have to use stack space to make the call
// xmm0-7 : fp funcall args
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
  xor r9, r9
	cmp eax, 9
	jb few_arg
  mov r9, 1

	push r12
	mov r12d, eax
	sub r12, 8
	test eax, 1
  // if we have an even number of args, we are good
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
	cmp eax, 8
	jne many_arg
  // I guess in principle you could do a computed jump?
  // hard to write in assembly though?
  // but without that, the assumption is that most procs
  // have few args
few_arg:
	test eax, eax
	jz no_arg
	cmp eax, 1
	je one_arg
	cmp eax, 2
	je two_arg
	cmp eax, 3
	je three_arg
	cmp eax, 4
	je four_arg
	cmp eax, 5
	je five_arg
	cmp eax, 6
	je six_arg
	cmp eax, 7
	je seven_arg  
	movsd xmm7, QWORD PTR [r10+56]
seven_arg:	
	movsd xmm6, QWORD PTR [r10+48]
six_arg:	
	movsd xmm5, QWORD PTR [r10+40]
five_arg:	
	movsd xmm4, QWORD PTR [r10+32]
four_arg:	
	movsd xmm3, QWORD PTR [r10+24]
three_arg:	
	movsd xmm2, QWORD PTR [r10+16]
two_arg:	
	movsd xmm1, QWORD PTR [r10+8]
one_arg:	
	movsd xmm0, QWORD PTR [r10]
no_arg:
	test r9, r9
	jz tailcall
	call r11
	add rsp, r12
	pop r12
	ret
tailcall:
	jmp r11
.section .note.GNU-stack,"",@progbits
