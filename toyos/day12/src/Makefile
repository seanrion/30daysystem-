OUT = ../
INC = ../../win32
OBJ = bootpack.o naskfunc.o int.o dsctbl.o graphic.o hankaku.o fifo.o keyboard.o mouse.o memory.o sheet.o timer.o
.PHONY:all 
all: asmhead.sys end ipl10.img 
	objcopy -O binary end.exe end.sys
	copy /b asmhead.sys+end.sys ..\com.sys 
ipl10.img:ipl10.asm
	nasm -o $(OUT)ipl10.img $<
asmhead.sys:asmhead.asm
	nasm -o asmhead.sys asmhead.asm
end:$(OBJ)
	gcc -O3 -nostdinc -nostdlib -e _HariMain -T $(OUT)linker.script -o $@ $^ -I$(INC) -L$(INC) -l:golibc.lib 
hankaku.o:hankaku.txt
	.\txt2asm\txt2asm.exe hankaku.txt hankaku.asm _hankaku
	nasm -f elf32 hankaku.asm
naskfunc.o:naskfunc.asm
	nasm -f elf32 $<
%.o:%.c
	gcc -m32 -c $< -o $@
