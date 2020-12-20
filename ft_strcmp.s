section .text
        global    ft_strcmp
ft_strcmp:
    mov rax, 0                    ;rax = 0
start:
    mov    al, BYTE[rdi]            ;al = *dest
    mov    bl, BYTE[rsi]            ;bl = *src
    cmp    al, 0                    ;al ? '\0'
    je    end                        ; = '\o' -> end
    cmp    bl, 0                    ;bl ? '\0'
    je    end                        ;= '\0' -> end
    cmp    al, bl                    ;al ? bl
    jne    end                        ; al != bl
    inc    rdi                        ; *rdi ++
    inc    rsi                        ; *rsi ++
    jmp start                    ; loop

end:
    sub rax, rbx                ;rax - rbx = (ascii int that we obtain at the moment we decide to call end : 2 different char, or end of one string )
    ret