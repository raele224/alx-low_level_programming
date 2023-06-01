section .data
	format db "Hello, Holberton", 0Ah  ; String format
	len equ $-format                  ; Length of the string

section .text
	global _start

_start:
	; Write the string to stdout using printf
	mov eax, 4                      ; System call number for write
	mov ebx, 1                      ; File descriptor for stdout
	mov ecx, format                 ; Address of the string
	mov edx, len                    ; Length of the string
	int 0x80                        ; Invoke the system call

	; Exit the program
	mov eax, 1                      ; System call number for exit
	xor ebx, ebx                    ; Exit status
	int 0x80                        ; Invoke the system call
