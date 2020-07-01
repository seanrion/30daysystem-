; naskfunc
; TAB=4

;FORMAT ."WCOFF"					; 目?文件的模式
[BITS 32]						; 32位


; 制作目?文件的信息

;FILE ."naskfunc.asm"			; 源文件名信息

		GLOBAL	_io_hlt			; 程序中包含的函数名


; ??函数

[SECTION .text]		; 目?文件中写了?些再写程序

_io_hlt:	; void io_hlt(void);
		HLT
		RET
