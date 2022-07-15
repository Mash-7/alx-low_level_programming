section .text
global maini
extern printf

main:
push rbp

mov rdi,fmt
mov rsi,msg
mov rax,0
call printf

pop rbh

mov rax,0
ret

section .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0
