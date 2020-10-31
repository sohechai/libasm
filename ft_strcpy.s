section .text
		global	ft_strcpy
ft_strcpy:
	mov rax, 0					;rax = 0
start:
	mov bl,BYTE[rax + rsi]		;bl = rsi = src
	mov BYTE[rax + rdi],bl		;bl = rdi = dest
	cmp bl,0					;bl ? '\0'
	je	end						; = '\0' -> end
	inc	rax						;else rax ++
	jmp start					; loop
end:
	mov rax, rdi				;rax = rdi
	ret