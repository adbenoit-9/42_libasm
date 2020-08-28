section .text
	global ft_strlen

ft_strlen:
	MOV rax, 0
	JMP cmp
	RET

incr:
	INC rax

cmp:
	CMP byte[rdi + rax], 0
	JNE incr
	RET