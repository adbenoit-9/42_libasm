section .text
	global ft_strcpy

ft_strcpy:
    XOR rcx, rcx
    XOR rax, rax
    JMP cmp
	RET
    

copy:
    MOV al, byte[rsi + rcx]
    MOV byte[rdi + rcx], al
	INC rcx

cmp:
	CMP byte[rsi + rcx], 0
	JNE copy
    MOV byte[rdi + rcx], 0
    MOV rax, rdi
    RET

