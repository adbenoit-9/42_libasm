section .text
	global ft_strdup
    extern malloc
    extern ft_strlen
    extern ft_strcpy

ft_strdup:
    xor rax, rax
    xor rcx, rcx
    mov rcx, [rdi]
    call ft_strlen
    mov rdi, rax
    call malloc
    mov rdi, [rax]
    mov rsi, [rcx]
    call ft_strcpy
    ret
