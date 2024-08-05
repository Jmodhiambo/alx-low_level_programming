section .data
    msg db "Hello, Holberton", 0xA, 0    ; The string to print with newline and null terminator

section .text
    global _start          ; Define the entry point (must be _start for assembly)
    extern printf          ; Declare the external printf function

_start:
    ; Call printf
    mov rdi, msg           ; First argument: pointer to the message
    xor rax, rax           ; Clear rax to indicate no floating-point arguments
    call printf            ; Call the printf function

    ; Exit the program
    mov rax, 60            ; System call number for sys_exit
    xor rdi, rdi           ; Exit code 0
    syscall                ; Invoke the system call

section .note.GNU-stack
    db 0

