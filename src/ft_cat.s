%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4
%define READ				3
%define BUFFSIZE			4096

global _ft_cat
section .bss
buffer:    resb BUFFSIZE

section .text
_ft_cat:
	; READ
	mov r10, rdi
	lea rsi, [rel buffer]
	mov rdx, BUFFSIZE
	mov rax, MACH_SYSCALL(READ)
	syscall
	jc end
	test rax, rax
	jle end

	; WRITE
	lea rsi, [rel buffer]
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	mov rdi, r10
	call _ft_cat
	ret

end:
	ret
