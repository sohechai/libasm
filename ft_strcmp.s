section .text
		global	ft_strcmp
ft_strcmp:
	mov rax, 0					;rax = 0
start:
	mov	al, BYTE[rdi]			;al = *dest
	mov	bl, BYTE[rsi]			;b = *src
	cmp	al, 0					;al ? '\0'
	je	end						; = '\o' -> end
	cmp	bl, 0					;bl ? '\0'
	je	end						;= '\0' -> end
	cmp	al, bl					; al ? bl
	jb	neg
	ja	pos						; al > bl -> sub
	inc	rdi						; *rdi ++
	inc	rsi						; *rsi ++
	jmp start					; loop
pos:
	mov rax, 1					;rax = 1
	jmp	end						;-> end
neg:
	mov	rax, -1					; rax = -1
	jmp	end						;-> end
end:
	ret							; return rax