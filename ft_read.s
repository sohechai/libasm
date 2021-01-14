global	ft_read
section .text
extern __errno_location
ft_read:
	mov		rax, 0				; rax = 0
	syscall						; system call
	cmp		rax, 0				; cmp rax ? 0
	jl		error				; if rax < 0 -> error
	ret							; else return rax
error:
	neg		rax					; rax *= -1
	mov		rdi, rax			; rdi = rax
	call	__errno_location	; call errno function
	mov		[rax], rdi			; *rax = rdi
	mov		rax, -1				; rax = -1
	ret							; return