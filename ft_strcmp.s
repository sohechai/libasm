section .text
		global    ft_strcmp
ft_strcmp:
	mov rax, 0			;rax = 0
start:
	mov	cl, [rdi]            ;al = *dest
    mov	dl, [rsi]            ;bl = *src
    cmp	cl, dl                    ;al ? bl
    jg	greater                        ; al != bl
	jb	lower
    inc	rdi                        ; *rdi ++
    inc	rsi                        ; *rsi ++
	cmp	cl, 0                    ;al ? '\0'
    je	equal                        ; = '\o' -> end
    cmp	dl, 0                    ;bl ? '\0'
    je	equal                        ;= '\0' -> end
    jmp	start                    ; loop
greater:
	mov rax, 1
	ret
lower:
	mov rax, -1
	ret
equal:
	mov rax, 0
    ret