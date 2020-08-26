section .text
	global ft_strlen

ft_strlen:
	mov rax, 0
	cmp byte[rdi + rax], 0
	JNE increment
	ret

increment:
	add rax, 1
	ret