; naskfunc
; TAB=4

;FORMAT ."WCOFF"					; ��?�����I�͎�
[BITS 32]						; 32��


; �����?�����I�M��

;FILE ."naskfunc.asm"			; ���������M��

		GLOBAL	_io_hlt			; ��������ܓI������


; ??����

[SECTION .text]		; ��?�������ʗ�?���Ďʒ���

_io_hlt:	; void io_hlt(void);
		HLT
		RET
