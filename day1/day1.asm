	.file	"day1.c++"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.globl	_Z8isNumberPcS_Pi
	.type	_Z8isNumberPcS_Pi, @function
_Z8isNumberPcS_Pi:
.LFB4453:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$49, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$50, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$51, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$52, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$53, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$54, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$55, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$56, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$57, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$48, %al
	jne	.L3
.L2:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %edx
	movq	-16(%rbp), %rax
	movb	%dl, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L4
.L3:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$111, %al
	jne	.L5
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$110, %al
	jne	.L5
	movq	-8(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	cmpb	$101, %al
	jne	.L5
	movq	-16(%rbp), %rax
	movb	$49, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L4
.L5:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$116, %al
	jne	.L6
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$119, %al
	jne	.L6
	movq	-8(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	cmpb	$111, %al
	jne	.L6
	movq	-16(%rbp), %rax
	movb	$50, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L4
.L6:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$116, %al
	jne	.L7
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$104, %al
	jne	.L7
	movq	-8(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	cmpb	$114, %al
	jne	.L7
	movq	-8(%rbp), %rax
	addq	$3, %rax
	movzbl	(%rax), %eax
	cmpb	$101, %al
	jne	.L7
	movq	-8(%rbp), %rax
	addq	$4, %rax
	movzbl	(%rax), %eax
	cmpb	$101, %al
	jne	.L7
	movq	-16(%rbp), %rax
	movb	$51, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L4
.L7:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$102, %al
	jne	.L8
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$111, %al
	jne	.L8
	movq	-8(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	cmpb	$117, %al
	jne	.L8
	movq	-8(%rbp), %rax
	addq	$3, %rax
	movzbl	(%rax), %eax
	cmpb	$114, %al
	jne	.L8
	movq	-16(%rbp), %rax
	movb	$52, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L4
.L8:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$102, %al
	jne	.L9
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$105, %al
	jne	.L9
	movq	-8(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	cmpb	$118, %al
	jne	.L9
	movq	-8(%rbp), %rax
	addq	$3, %rax
	movzbl	(%rax), %eax
	cmpb	$101, %al
	jne	.L9
	movq	-16(%rbp), %rax
	movb	$53, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L4
.L9:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$115, %al
	jne	.L10
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$105, %al
	jne	.L10
	movq	-8(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	cmpb	$120, %al
	jne	.L10
	movq	-16(%rbp), %rax
	movb	$54, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L4
.L10:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$115, %al
	jne	.L11
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$101, %al
	jne	.L11
	movq	-8(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	cmpb	$118, %al
	jne	.L11
	movq	-8(%rbp), %rax
	addq	$3, %rax
	movzbl	(%rax), %eax
	cmpb	$101, %al
	jne	.L11
	movq	-8(%rbp), %rax
	addq	$4, %rax
	movzbl	(%rax), %eax
	cmpb	$110, %al
	jne	.L11
	movq	-16(%rbp), %rax
	movb	$55, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L4
.L11:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$101, %al
	jne	.L12
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$105, %al
	jne	.L12
	movq	-8(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	cmpb	$103, %al
	jne	.L12
	movq	-8(%rbp), %rax
	addq	$3, %rax
	movzbl	(%rax), %eax
	cmpb	$104, %al
	jne	.L12
	movq	-8(%rbp), %rax
	addq	$4, %rax
	movzbl	(%rax), %eax
	cmpb	$116, %al
	jne	.L12
	movq	-16(%rbp), %rax
	movb	$56, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L4
.L12:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	$110, %al
	jne	.L13
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	cmpb	$105, %al
	jne	.L13
	movq	-8(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	cmpb	$110, %al
	jne	.L13
	movq	-8(%rbp), %rax
	addq	$3, %rax
	movzbl	(%rax), %eax
	cmpb	$101, %al
	jne	.L13
	movq	-16(%rbp), %rax
	movb	$57, (%rax)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	jmp	.L13
.L4:
.L13:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4453:
	.size	_Z8isNumberPcS_Pi, .-_Z8isNumberPcS_Pi
	.section	.rodata
.LC0:
	.string	". first: "
.LC1:
	.string	" last:"
.LC2:
	.string	"\n"
.LC3:
	.string	"result: "
	.text
	.globl	main
	.type	main, @function
main:
.LFB4454:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA4454
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$616, %rsp
	.cfi_offset 3, -24
	movl	%edi, -612(%rbp)
	movq	%rsi, -624(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-624(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rcx
	leaq	-544(%rbp), %rax
	movl	$8, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode@PLT
.LEHE0:
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@PLT
	movl	$0, -596(%rbp)
	movl	$0, -592(%rbp)
	jmp	.L15
.L22:
	leaq	-576(%rbp), %rdx
	leaq	-544(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB1:
	call	_ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv@PLT
	movq	%rax, -584(%rbp)
	movb	$48, -606(%rbp)
	movb	$48, -605(%rbp)
	movl	$0, -604(%rbp)
	movl	$0, -588(%rbp)
	jmp	.L16
.L19:
	movl	-604(%rbp), %eax
	testl	%eax, %eax
	jne	.L17
	leaq	-604(%rbp), %rdx
	leaq	-606(%rbp), %rcx
	movq	-584(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_Z8isNumberPcS_Pi
	jmp	.L18
.L17:
	leaq	-604(%rbp), %rdx
	leaq	-605(%rbp), %rcx
	movq	-584(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_Z8isNumberPcS_Pi
.L18:
	addq	$1, -584(%rbp)
	addl	$1, -588(%rbp)
.L16:
	movl	-588(%rbp), %eax
	movslq	%eax, %rbx
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@PLT
	cmpq	%rax, %rbx
	setb	%al
	testb	%al, %al
	jne	.L19
	movq	$0, -584(%rbp)
	addl	$1, -592(%rbp)
	movl	-592(%rbp), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movzbl	-606(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movzbl	-605(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movzbl	-605(%rbp), %eax
	cmpb	$48, %al
	jne	.L20
	movzbl	-606(%rbp), %eax
	movsbl	%al, %eax
	leal	-48(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%eax, -600(%rbp)
	jmp	.L21
.L20:
	movzbl	-606(%rbp), %eax
	movsbl	%al, %eax
	leal	-48(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movzbl	-605(%rbp), %eax
	movsbl	%al, %eax
	addl	%edx, %eax
	subl	$48, %eax
	movl	%eax, -600(%rbp)
.L21:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movl	-600(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movl	-600(%rbp), %eax
	addl	%eax, -596(%rbp)
.L15:
	leaq	-544(%rbp), %rax
	addq	$256, %rax
	movq	%rax, %rdi
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv@PLT
	xorl	$1, %eax
	testb	%al, %al
	jne	.L22
	movl	-596(%rbp), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
.LEHE1:
	movl	$0, %ebx
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev@PLT
	movl	%ebx, %eax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L26
	jmp	.L28
.L27:
	movq	%rax, %rbx
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L25
	call	__stack_chk_fail@PLT
.L25:
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
.L28:
	call	__stack_chk_fail@PLT
.L26:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4454:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA4454:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE4454-.LLSDACSB4454
.LLSDACSB4454:
	.uleb128 .LEHB0-.LFB4454
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB4454
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L27-.LFB4454
	.uleb128 0
	.uleb128 .LEHB2-.LFB4454
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE4454:
	.text
	.size	main, .-main
	.section	.rodata
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.ident	"GCC: (GNU) 13.2.1 20230801"
	.section	.note.GNU-stack,"",@progbits
