	.text
.globl _main
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	movl $0,%eax
	movl %eax,t_0000001
	movl $0,%eax
	movl %eax,t_0000002
	movl	t_0000001, %eax
  	addl	t_0000002, %eax
	movl    %eax, t_0000001
	movl	t_0000001, %eax
  	imull	$1, %eax
	movl    %eax, t_0000001
	movl $0,%eax
	movl %eax,t_0000003
	movl $1,%eax
	movl %eax,t_0000004
	movl	t_0000003, %eax
  	addl	t_0000004, %eax
	movl    %eax, t_0000003
	movl	t_0000003, %eax
  	imull	$1, %eax
	movl    %eax, t_0000003
	movl	arr[t_0000001], %eax
  	addl	arr[t_0000003], %eax
	movl    %eax, t_0000005
	movl $0,%eax
	movl %eax,t_0000006
	movl $2,%eax
	movl %eax,t_0000007
	movl	t_0000006, %eax
  	addl	t_0000007, %eax
	movl    %eax, t_0000006
	movl	t_0000006, %eax
  	imull	$1, %eax
	movl    %eax, t_0000006
	movl	t_0000005, %eax
  	addl	arr[t_0000006], %eax
	movl    %eax, t_0000008
L_0000009:
	movl a,%edx
	movl $0,%eax
	cmpl %eax,%edx
	setne %al
	movzbl %al,%eax
	movl %eax,t_00000010
	movl $0,%eax
	movl b,%edx
	movl $0,%eax
	cmpl %eax,%edx
	setg %al
	movzbl %al,%eax
	movl %eax,t_00000011
	movl $0,%eax
	movl t_00000010,%eax
	testl %eax,%eax
	je L_00000021
	movl t_00000011,%eax
	testl %eax,%eax
	je L_00000021
	movl $1,%eax
	jmp L_00000022
	L_00000021:
	movl $1,%eax
	L_00000022:
	movl %eax,t_00000012
	movl $0,%eax
	movl t_00000012,%eax
	testl %eax,%eax
	je L_00000013
	movl a,%edx
	movl b,%eax
	cmpl %eax,%edx
	setge %al
	movzbl %al,%eax
	movl %eax,t_00000014
	movl $0,%eax
	movl t_00000014,%eax
	testl %eax,%eax
	je L_00000015
	movl	a, %eax
 movl	NULL, %ecx 
 cltd
 idivl %ecx
 movl %eax, a
	movl	b, %eax
  	imull	a, %eax
	movl    %eax, b
L_00000015:
	movl b,%edx
	movl $0,%eax
	cmpl %eax,%edx
	sete %al
	movzbl %al,%eax
	movl %eax,t_00000017
	movl $0,%eax
	movl a,%edx
	movl b,%eax
	cmpl %eax,%edx
	setl %al
	movzbl %al,%eax
	movl %eax,t_00000018
	movl $0,%eax
	movl t_00000017,%eax
	testl %eax,%eax
	jne L_00000023
	movl t_00000018,%eax
	testl %eax,%eax
	je L_00000024
	L_00000023:
	movl $1,%eax
	jmp L_00000025
	L_00000024:
	movl $0,%eax
	L_00000025:
	movl %eax,t_00000019
	movl $0,%eax
	movl t_00000019,%eax
	testl %eax,%eax
	je L_00000020
	movl	b, %eax
 movl	NULL, %ecx 
 cltd
 idivl %ecx
 movl %eax, b
	movl $0,%eax
	movl %eax,a
L_00000020:
L_00000016:
	movl	b, %eax
  	addl	$1, %eax
	movl    %eax, b
jmp L_0000009
L_00000013:


	movl	result, %eax
	movl	%eax, 4(%esp)
	movl	$printtext1, %eax
	movl	%eax, (%esp)
	call	_printf

	movl	size, %eax
	movl	%eax, 4(%esp)
	movl	$printtext2, %eax
	movl	%eax, (%esp)
	call	_printf

	movl	$printtext3, %eax
	movl	%eax, (%esp)
	movl	$0, %ecx
print_a:
	cmpl	%ecx, size
	jz 	exit
	movl	a(,%ecx,4), %eax
	movl	%eax, 4(%esp)
	movl	%ecx, temp_count
	call	_printf
	movl	temp_count, %ecx
	addl	$1, %ecx
	jmp 	print_a
exit:


	movl %ebp, %esp
	popl %ebp
	ret
.data
	printtext1: .ascii "result = %d\n\0"
 	printtext2: .ascii "size = %d\n\0"
 	printtext3: .ascii "%d, \0"
 	temp_count: .long 0
	argc: .long 0
	argv: .long 0
	arr: .long  10, 15, 25 
	assignedVar: .long 10
	var: .long 2
	a: .long 10
	b: .long 15
	t_0000001: .long 0
	t_0000002: .long 0
	t_0000003: .long 0
	t_0000004: .long 0
	t_0000005: .long 0
	t_0000006: .long 0
	t_0000007: .long 0
	t_0000008: .long 0
	t_0000009: .long 0
	t_00000010: .long 0
	t_00000011: .long 0
	t_00000012: .long 0
	t_00000013: .long 0
	t_00000014: .long 0
	t_00000015: .long 0
	t_00000016: .long 0
	t_00000017: .long 0
	t_00000018: .long 0
	t_00000019: .long 0
	t_00000020: .long 0
	t_00000021: .long 0
	t_00000022: .long 0
	t_00000023: .long 0
	t_00000024: .long 0
	t_00000025: .long 0
