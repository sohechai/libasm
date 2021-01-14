section .text
		global	ft_strcpy
ft_strcpy:
	mov rax, 0
start:
	mov dl,BYTE[rax + rsi]		;al = rsi = src
	mov BYTE[rax + rdi],dl		;al = rdi = dest
	cmp dl,0					;al ? '\0'
	je	end						; = '\0' -> end
	inc	rax						;else rax ++
	jmp start					;loop

end:
	mov rax, rdi
	ret