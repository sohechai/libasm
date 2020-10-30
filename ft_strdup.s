section .text
	global ft_strdup
	extern ft_strlen
	extern ft_strcpy
	extern malloc

ft_strdup:
	call	ft_strlen		; ft strlen(str)
	push	rdi				; save rdi pile
	add		rax, 1			; rax += 1
	mov		rdi, rax		; rdi = rax
	call	malloc			; malloc (rax)
	pop		rdi				;comeback rdi
	cmp		rax, 0			; rax == 0
	je		end				; if rax == 0 -> end
	mov		rsi, rdi		; rsi = rdi
	mov		rdi, rax		; rdi = rax
	call	ft_strcpy		; cpy rsi, rdi
	ret						;return
end:
	ret						;return