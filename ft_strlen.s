section .text
		global	_ft_strlen
_ft_strlen:
	xor rax,rax
start:
	inc rax					;rax++
	cmp BYTE [rdi + rax], 0	;index, 0
	JNE end					;go end si different de la cmp en haut
	jmp start				;revenir au debut
end:
	ret						;return (rax)
