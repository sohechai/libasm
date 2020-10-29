section .text
		global	_ft_strlen
_ft_strlen:
	xor rax,rax
start:
	cmp BYTE [rdi + rax], 0	;index, 0
	je	end					;go end si different de la cmp en haut
	inc rax					;rax++
	jmp start				;revenir au debut
end:
	ret						;return (rax)
