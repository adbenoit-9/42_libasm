section .text
	global ft_strdup
    extern malloc
    extern ft_strlen
    extern ft_strcpy

ft_strdup:
    xor rax, rax
    xor r8, r8
    mov r8, rdi
    call ft_strlen
    mov rdi, rax
    INC rdi
    call malloc
    mov rdi, rax
    mov rsi, r8
    call ft_strcpy
    ret
