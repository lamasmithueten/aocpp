	.file	"day1.c++"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.globl	_Z8isNumberPcS_Pi
	.type	_Z8isNumberPcS_Pi, @function
_Z8isNumberPcS_Pi:
.LFB2113:
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
	jne	.L4
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
.L4:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2113:
	.size	_Z8isNumberPcS_Pi, .-_Z8isNumberPcS_Pi
	.section	.rodata
.LC0:
	.string	"first: "
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
.LFB2114:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2114
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
	jmp	.L6
.L13:
	movl	$0, -592(%rbp)
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
	movb	$48, -602(%rbp)
	movb	$48, -601(%rbp)
	movl	$0, -600(%rbp)
	movl	$0, -588(%rbp)
	jmp	.L7
.L10:
	movl	-600(%rbp), %eax
	testl	%eax, %eax
	jne	.L8
	leaq	-600(%rbp), %rdx
	leaq	-602(%rbp), %rcx
	movq	-584(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_Z8isNumberPcS_Pi
	jmp	.L9
.L8:
	leaq	-600(%rbp), %rdx
	leaq	-601(%rbp), %rcx
	movq	-584(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_Z8isNumberPcS_Pi
.L9:
	addq	$1, -584(%rbp)
	addl	$1, -588(%rbp)
.L7:
	movl	-588(%rbp), %eax
	movslq	%eax, %rbx
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@PLT
	cmpq	%rax, %rbx
	setb	%al
	testb	%al, %al
	jne	.L10
	movq	$0, -584(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movzbl	-602(%rbp), %eax
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
	movzbl	-601(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movzbl	-601(%rbp), %eax
	cmpb	$48, %al
	jne	.L11
	movzbl	-602(%rbp), %eax
	movsbl	%al, %eax
	leal	-48(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%eax, -592(%rbp)
	jmp	.L12
.L11:
	movzbl	-602(%rbp), %eax
	movsbl	%al, %eax
	leal	-48(%rax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movzbl	-601(%rbp), %eax
	movsbl	%al, %eax
	addl	%edx, %eax
	subl	$48, %eax
	movl	%eax, -592(%rbp)
.L12:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movl	-592(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movl	-592(%rbp), %eax
	addl	%eax, -596(%rbp)
.L6:
	leaq	-544(%rbp), %rax
	addq	$256, %rax
	movq	%rax, %rdi
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv@PLT
	xorl	$1, %eax
	testb	%al, %al
	jne	.L13
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
	je	.L17
	jmp	.L19
.L18:
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
	je	.L16
	call	__stack_chk_fail@PLT
.L16:
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
.L19:
	call	__stack_chk_fail@PLT
.L17:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2114:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA2114:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2114-.LLSDACSB2114
.LLSDACSB2114:
	.uleb128 .LEHB0-.LFB2114
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB2114
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L18-.LFB2114
	.uleb128 0
	.uleb128 .LEHB2-.LFB2114
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE2114:
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
