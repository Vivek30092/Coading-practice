.model small 
.stack 100h

.data

    result db 0
    
.code
main:
    ; Initialize data segment
    mov ax, @data
    mov ds, ax
    
    ; Load the first number into register
    mov ax,0xAA11
    
    ; Add the second number to AL
    add ax,0x1122
    
    
    mov cx,ax
    
    
    mov ax,0xAA11
    sub ax,0x1122
    mov cx,ax
    
    
     mov ax,0xAA11
     mov bx,0x1122
    mul bx
    mov cx,ax
    
    ; Terminate the program
    mov ah, 4Ch
    int 21h
    
 end main