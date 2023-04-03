.intel_syntax noprefix
.section .text
.globl VApply
.type VApply, @function
// Signature: void VApply(VFunc * func, VArgs * args);
// where VFunc is void(*)(VRuntime * runtime, VStaticEnv * statics, VDynamicEnv * dynamics, unsigned argc, ...)
// and the ... are all doubles. VArgs is just a struct containing the arguments to be applied in order
// Register usage:
// ax : loop variable for number of args, eventually number of floating point args
// di : 1st funcall arg 'runtime'
// si : 2nd funcall arg 'statics'
// dx : 3rd funcall arg 'dynamics'
// cx : 4th funcall arg 'argc'
// xmm0-7 : fp funcall args
// r10 : temporary for pointer to VArgs * args
// r11 : function pointer to call
// r12 : preserved register holds stack space used for variadic funcall
VApply:
	// func 
	mov r11, rdi
	// args 
	mov r10, rsi
	// sys arg 1, runtime 
	mov rdi, QWORD PTR [r10+0]
	// sys arg 2, statics 
	mov rsi, QWORD PTR [r10+8]
	// sys arg 3, dynamics 
	mov rdx, QWORD PTR [r10+16]
	// sys arg 4, argc 
	mov eax, DWORD PTR [r10+24]
	mov ecx, eax
	// usr args
	cmp eax, 9
	jb few_arg

	push r12
	mov r12d, eax
	sub r12, 8
	test eax, 1
	jz even_args
	add r12, 1
	sub rsp, 8
even_args:
	shl r12, 3
many_arg:
	sub eax, 1
	push QWORD PTR [r10+32+8*rax]
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
	movsd xmm7, QWORD PTR [r10+88]
seven_arg:	
	movsd xmm6, QWORD PTR [r10+80]
six_arg:	
	movsd xmm5, QWORD PTR [r10+72]
five_arg:	
	movsd xmm4, QWORD PTR [r10+64]
four_arg:	
	movsd xmm3, QWORD PTR [r10+56]
three_arg:	
	movsd xmm2, QWORD PTR [r10+48]
two_arg:	
	movsd xmm1, QWORD PTR [r10+40]
one_arg:	
	movsd xmm0, QWORD PTR [r10+32]
no_arg:
	cmp rcx, 9
	jb tailcall
	call r11
	add rsp, r12
	pop r12
	ret
tailcall:
	jmp r11
.section .note.GNU-stack,"",@progbits
