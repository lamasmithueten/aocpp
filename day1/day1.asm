	.file	"day1.c++"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.section	.text._ZNKSt5ctypeIcE8do_widenEc,"axG",@progbits,_ZNKSt5ctypeIcE8do_widenEc,comdat
	.align 2
	.p2align 4
	.weak	_ZNKSt5ctypeIcE8do_widenEc
	.type	_ZNKSt5ctypeIcE8do_widenEc, @function
_ZNKSt5ctypeIcE8do_widenEc:
.LFB1756:
	.cfi_startproc
	movl	%esi, %eax
	ret
	.cfi_endproc
.LFE1756:
	.size	_ZNKSt5ctypeIcE8do_widenEc, .-_ZNKSt5ctypeIcE8do_widenEc
	.text
	.p2align 4
	.globl	_Z8isNumberPcS_Pi
	.type	_Z8isNumberPcS_Pi, @function
_Z8isNumberPcS_Pi:
.LFB2134:
	.cfi_startproc
	movzbl	(%rdi), %eax
	leal	-48(%rax), %ecx
	cmpb	$9, %cl
	ja	.L4
	movb	%al, (%rsi)
	addl	$1, (%rdx)
	ret
	.p2align 4,,10
	.p2align 3
.L4:
	cmpb	$111, %al
	je	.L19
	cmpb	$116, %al
	je	.L20
	cmpb	$102, %al
	jne	.L11
	movzbl	1(%rdi), %eax
	cmpb	$111, %al
	je	.L21
	cmpb	$105, %al
	je	.L22
.L3:
	ret
	.p2align 4,,10
	.p2align 3
.L19:
	cmpb	$110, 1(%rdi)
	jne	.L3
	cmpb	$101, 2(%rdi)
	jne	.L3
	movb	$49, (%rsi)
	addl	$1, (%rdx)
	ret
	.p2align 4,,10
	.p2align 3
.L20:
	movzbl	1(%rdi), %eax
	cmpb	$119, %al
	je	.L23
	cmpb	$104, %al
	jne	.L3
	cmpb	$114, 2(%rdi)
	jne	.L3
	cmpb	$101, 3(%rdi)
	jne	.L3
	cmpb	$101, 4(%rdi)
	jne	.L3
	movb	$51, (%rsi)
	addl	$1, (%rdx)
	ret
	.p2align 4,,10
	.p2align 3
.L22:
	cmpb	$118, 2(%rdi)
	jne	.L3
	cmpb	$101, 3(%rdi)
	jne	.L3
	movb	$53, (%rsi)
	addl	$1, (%rdx)
	ret
	.p2align 4,,10
	.p2align 3
.L11:
	cmpb	$115, %al
	jne	.L15
	movzbl	1(%rdi), %eax
	cmpb	$105, %al
	je	.L16
	cmpb	$101, %al
	jne	.L3
	cmpb	$118, 2(%rdi)
	jne	.L3
	cmpb	$101, 3(%rdi)
	jne	.L3
	cmpb	$110, 4(%rdi)
	jne	.L3
	movb	$55, (%rsi)
	addl	$1, (%rdx)
	ret
	.p2align 4,,10
	.p2align 3
.L15:
	cmpb	$101, %al
	je	.L24
	cmpb	$110, %al
	jne	.L3
	cmpb	$105, 1(%rdi)
	jne	.L3
	cmpb	$110, 2(%rdi)
	jne	.L3
	cmpb	$101, 3(%rdi)
	jne	.L3
	movb	$57, (%rsi)
	addl	$1, (%rdx)
	ret
	.p2align 4,,10
	.p2align 3
.L24:
	cmpb	$105, 1(%rdi)
	jne	.L3
	cmpb	$103, 2(%rdi)
	jne	.L3
	cmpb	$104, 3(%rdi)
	jne	.L3
	cmpb	$116, 4(%rdi)
	jne	.L3
	movb	$56, (%rsi)
	addl	$1, (%rdx)
	ret
	.p2align 4,,10
	.p2align 3
.L23:
	cmpb	$111, 2(%rdi)
	jne	.L3
	movb	$50, (%rsi)
	addl	$1, (%rdx)
	ret
	.p2align 4,,10
	.p2align 3
.L21:
	cmpb	$117, 2(%rdi)
	jne	.L3
	cmpb	$114, 3(%rdi)
	jne	.L3
	movb	$52, (%rsi)
	addl	$1, (%rdx)
	ret
	.p2align 4,,10
	.p2align 3
.L16:
	cmpb	$120, 2(%rdi)
	jne	.L3
	movb	$54, (%rsi)
	addl	$1, (%rdx)
	ret
	.cfi_endproc
.LFE2134:
	.size	_Z8isNumberPcS_Pi, .-_Z8isNumberPcS_Pi
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"\n"
	.section	.text.unlikely,"ax",@progbits
.LCOLDB1:
	.section	.text.startup,"ax",@progbits
.LHOTB1:
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB2135:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2135
	pushq	%r14
	.cfi_def_cfa_offset 16
	.cfi_offset 14, -16
	movl	$8, %edx
	pushq	%r13
	.cfi_def_cfa_offset 24
	.cfi_offset 13, -24
	pushq	%r12
	.cfi_def_cfa_offset 32
	.cfi_offset 12, -32
	pushq	%rbp
	.cfi_def_cfa_offset 40
	.cfi_offset 6, -40
	xorl	%ebp, %ebp
	pushq	%rbx
	.cfi_def_cfa_offset 48
	.cfi_offset 3, -48
	subq	$560, %rsp
	.cfi_def_cfa_offset 608
	movq	8(%rsi), %rsi
	movq	%fs:40, %rax
	movq	%rax, 552(%rsp)
	xorl	%eax, %eax
	leaq	32(%rsp), %r12
	movq	%r12, %rdi
.LEHB0:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode@PLT
.LEHE0:
	leaq	16(%rsp), %rax
	movb	$0, 16(%rsp)
	movq	%rax, (%rsp)
	movq	$0, 8(%rsp)
	testb	$2, 320(%rsp)
	jne	.L65
	leaq	_ZNKSt5ctypeIcE8do_widenEc(%rip), %r13
	.p2align 4,,10
	.p2align 3
.L61:
	movq	32(%rsp), %rax
	movq	-24(%rax), %rax
	movq	272(%rsp,%rax), %r14
	testq	%r14, %r14
	je	.L86
	cmpb	$0, 56(%r14)
	je	.L29
	movsbl	67(%r14), %edx
.L30:
	movq	%rsp, %rbx
	movq	%r12, %rdi
	movq	%rbx, %rsi
.LEHB1:
	call	_ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EES4_@PLT
	movq	8(%rsp), %rsi
	movq	(%rsp), %rax
	testq	%rsi, %rsi
	je	.L60
	addq	%rax, %rsi
	xorl	%edx, %edx
	movl	$48, %r9d
	movl	$48, %edi
	jmp	.L58
	.p2align 4,,10
	.p2align 3
.L91:
	cmpb	$9, %r8b
	jbe	.L67
	cmpb	$111, %cl
	je	.L87
	cmpb	$116, %cl
	jne	.L35
	movzbl	1(%rax), %ecx
	cmpb	$119, %cl
	je	.L88
	cmpb	$104, %cl
	je	.L89
	.p2align 4,,10
	.p2align 3
.L33:
	addq	$1, %rax
	cmpq	%rsi, %rax
	je	.L90
.L58:
	movzbl	(%rax), %ecx
	leal	-48(%rcx), %r8d
	testl	%edx, %edx
	je	.L91
	cmpb	$9, %r8b
	ja	.L45
	addq	$1, %rax
	addl	$1, %edx
	movl	%ecx, %r9d
	cmpq	%rsi, %rax
	jne	.L58
.L90:
	subl	$48, %edi
	cmpb	$48, %r9b
	je	.L92
	leal	(%rdi,%rdi,4), %edx
	movsbl	%r9b, %eax
	leal	-48(%rax,%rdx,2), %eax
	addl	%eax, %ebp
.L60:
	testb	$2, 320(%rsp)
	je	.L61
.L26:
	movl	%ebp, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdi
	movl	$1, %edx
	leaq	.LC0(%rip), %rsi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movq	%rbx, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv@PLT
	movq	%r12, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev@PLT
	movq	552(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L84
	addq	$560, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 48
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 40
	popq	%rbp
	.cfi_def_cfa_offset 32
	popq	%r12
	.cfi_def_cfa_offset 24
	popq	%r13
	.cfi_def_cfa_offset 16
	popq	%r14
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L67:
	.cfi_restore_state
	movsbl	%cl, %edi
	movl	$1, %edx
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L45:
	cmpb	$111, %cl
	je	.L93
	cmpb	$116, %cl
	jne	.L47
	movzbl	1(%rax), %ecx
	cmpb	$119, %cl
	je	.L94
	cmpb	$104, %cl
	jne	.L33
	cmpb	$114, 2(%rax)
	jne	.L33
	cmpb	$101, 3(%rax)
	jne	.L33
	cmpb	$101, 4(%rax)
	jne	.L33
	addl	$1, %edx
	movl	$51, %r9d
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L35:
	cmpb	$102, %cl
	jne	.L37
	movzbl	1(%rax), %ecx
	cmpb	$111, %cl
	je	.L95
	cmpb	$105, %cl
	jne	.L33
	cmpb	$118, 2(%rax)
	jne	.L33
	xorl	%edx, %edx
	movl	$53, %ecx
	cmpb	$101, 3(%rax)
	cmove	%ecx, %edi
	sete	%dl
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L47:
	cmpb	$102, %cl
	jne	.L51
	movzbl	1(%rax), %ecx
	cmpb	$111, %cl
	je	.L52
	cmpb	$105, %cl
	jne	.L33
	cmpb	$118, 2(%rax)
	jne	.L33
	cmpb	$101, 3(%rax)
	jne	.L33
	addl	$1, %edx
	movl	$53, %r9d
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L93:
	cmpb	$110, 1(%rax)
	jne	.L33
	cmpb	$101, 2(%rax)
	jne	.L33
	addl	$1, %edx
	movl	$49, %r9d
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L87:
	cmpb	$110, 1(%rax)
	jne	.L33
	xorl	%edx, %edx
	movl	$49, %ecx
	cmpb	$101, 2(%rax)
	cmove	%ecx, %edi
	sete	%dl
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L37:
	cmpb	$115, %cl
	jne	.L41
	movzbl	1(%rax), %ecx
	cmpb	$105, %cl
	je	.L42
	cmpb	$101, %cl
	jne	.L33
	cmpb	$118, 2(%rax)
	jne	.L33
	cmpb	$101, 3(%rax)
	jne	.L33
	xorl	%edx, %edx
	movl	$55, %ecx
	cmpb	$110, 4(%rax)
	cmove	%ecx, %edi
	sete	%dl
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L41:
	cmpb	$101, %cl
	je	.L96
	cmpb	$110, %cl
	jne	.L33
	cmpb	$105, 1(%rax)
	jne	.L33
	cmpb	$110, 2(%rax)
	jne	.L33
	xorl	%edx, %edx
	movl	$57, %ecx
	cmpb	$101, 3(%rax)
	cmove	%ecx, %edi
	sete	%dl
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L96:
	cmpb	$105, 1(%rax)
	jne	.L33
	cmpb	$103, 2(%rax)
	jne	.L33
	cmpb	$104, 3(%rax)
	jne	.L33
	xorl	%edx, %edx
	movl	$56, %ecx
	cmpb	$116, 4(%rax)
	cmove	%ecx, %edi
	sete	%dl
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L29:
	movq	%r14, %rdi
	movq	%rsp, %rbx
	call	_ZNKSt5ctypeIcE13_M_widen_initEv@PLT
	movq	(%r14), %rax
	movl	$10, %edx
	movq	48(%rax), %rax
	cmpq	%r13, %rax
	je	.L30
	movl	$10, %esi
	movq	%r14, %rdi
	call	*%rax
	movsbl	%al, %edx
	jmp	.L30
	.p2align 4,,10
	.p2align 3
.L51:
	cmpb	$115, %cl
	jne	.L54
	movzbl	1(%rax), %ecx
	cmpb	$105, %cl
	je	.L55
	cmpb	$101, %cl
	jne	.L33
	cmpb	$118, 2(%rax)
	jne	.L33
	cmpb	$101, 3(%rax)
	jne	.L33
	cmpb	$110, 4(%rax)
	jne	.L33
	addl	$1, %edx
	movl	$55, %r9d
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L54:
	cmpb	$101, %cl
	je	.L97
	cmpb	$110, %cl
	jne	.L33
	cmpb	$105, 1(%rax)
	jne	.L33
	cmpb	$110, 2(%rax)
	jne	.L33
	cmpb	$101, 3(%rax)
	jne	.L33
	addl	$1, %edx
	movl	$57, %r9d
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L97:
	cmpb	$105, 1(%rax)
	jne	.L33
	cmpb	$103, 2(%rax)
	jne	.L33
	cmpb	$104, 3(%rax)
	jne	.L33
	cmpb	$116, 4(%rax)
	jne	.L33
	addl	$1, %edx
	movl	$56, %r9d
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L94:
	cmpb	$111, 2(%rax)
	jne	.L33
	addl	$1, %edx
	movl	$50, %r9d
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L88:
	xorl	%edx, %edx
	movl	$50, %ecx
	cmpb	$111, 2(%rax)
	cmove	%ecx, %edi
	sete	%dl
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L92:
	leal	(%rdi,%rdi,4), %eax
	leal	(%rdi,%rax,2), %eax
	addl	%eax, %ebp
	testb	$2, 320(%rsp)
	je	.L61
	jmp	.L26
	.p2align 4,,10
	.p2align 3
.L89:
	cmpb	$114, 2(%rax)
	jne	.L33
	cmpb	$101, 3(%rax)
	jne	.L33
	xorl	%edx, %edx
	movl	$51, %ecx
	cmpb	$101, 4(%rax)
	cmove	%ecx, %edi
	sete	%dl
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L95:
	cmpb	$117, 2(%rax)
	jne	.L33
	xorl	%edx, %edx
	movl	$52, %ecx
	cmpb	$114, 3(%rax)
	cmove	%ecx, %edi
	sete	%dl
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L42:
	xorl	%edx, %edx
	movl	$54, %ecx
	cmpb	$120, 2(%rax)
	cmove	%ecx, %edi
	sete	%dl
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L55:
	cmpb	$120, 2(%rax)
	jne	.L33
	addl	$1, %edx
	movl	$54, %r9d
	jmp	.L33
	.p2align 4,,10
	.p2align 3
.L52:
	cmpb	$117, 2(%rax)
	jne	.L33
	cmpb	$114, 3(%rax)
	jne	.L33
	addl	$1, %edx
	movl	$52, %r9d
	jmp	.L33
.L65:
	movq	%rsp, %rbx
	jmp	.L26
.L86:
	movq	552(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L84
	movq	%rsp, %rbx
	call	_ZSt16__throw_bad_castv@PLT
.LEHE1:
.L84:
	call	__stack_chk_fail@PLT
.L77:
	movq	%rax, %rbp
	jmp	.L62
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA2135:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2135-.LLSDACSB2135
.LLSDACSB2135:
	.uleb128 .LEHB0-.LFB2135
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB2135
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L77-.LFB2135
	.uleb128 0
.LLSDACSE2135:
	.section	.text.startup
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC2135
	.type	main.cold, @function
main.cold:
.LFSB2135:
.L62:
	.cfi_def_cfa_offset 608
	.cfi_offset 3, -48
	.cfi_offset 6, -40
	.cfi_offset 12, -32
	.cfi_offset 13, -24
	.cfi_offset 14, -16
	movq	%rbx, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv@PLT
	movq	%r12, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev@PLT
	movq	552(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L98
	movq	%rbp, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
.L98:
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE2135:
	.section	.gcc_except_table
.LLSDAC2135:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSEC2135-.LLSDACSBC2135
.LLSDACSBC2135:
	.uleb128 .LEHB2-.LCOLDB1
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSEC2135:
	.section	.text.unlikely
	.section	.text.startup
	.size	main, .-main
	.section	.text.unlikely
	.size	main.cold, .-main.cold
.LCOLDE1:
	.section	.text.startup
.LHOTE1:
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
