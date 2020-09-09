section .text
	global ft_atoi_base
    extern ft_strlen

ft_atoi_base:
    xor rax, rax
    xor rcx, rcx
    xor r10, r10
    mov rcx, rdi
    mov rdi, rsi
    call ft_strlen
    cmp rax, 0
    je ft_err
    cmp rax, 1
    je ft_err
    call check_base
    ret

ft_err:
    mov rax, 0
    ret

incr1:
    inc r10 

check_base:
    xor r11, r11
    cmp byte[rdi + r10], 43
    je ft_err
    cmp byte[rdi + r10], 45
    je ft_err
    cmp r10, 0
    jne check_base_bis
    call incr1
    ret

incr:
    inc r11 

check_base_bis:
    cmp byte[rdi + r10], 0
    je convert
    cmp r11, r10
    je incr1
    mov al, byte[rdi + r10]
    cmp al, byte[rdi + r11]
    je ft_err
    cmp r11, r10
    jne incr

convert:
    mov rax, 0
    mov r10, 0
    mov r11, 0
    cmp byte[rcx + r10], 0
    jne comp
    ret

incr2:
    inc r11

comp:
    xor r13, r13
    xor r14, r14
    mov al, byte[rcx + r10]
    cmp al, byte[rdi + r11]
    jne incr2
    cmp al, 0
    jne nb
    add rax, r14
    ret

nb:
    ret
    add r14, r11 
    inc r13
    cmp r13, 9
    jne nb
