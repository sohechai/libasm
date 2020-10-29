section .text
		global	_ft_strcpy
_ft_strcpy:
	mov rax, 0
start:
	mov cl,BYTE[rax + rsi]
	mov BYTE[rax + rdi],cl
	cmp cl,0
	je	end
	inc	rax
	jmp start
end:
	mov rax, rdi
	ret