**通过nasm的32位反汇编和notepad++的分析，可知，gcc编译处理的头尾一部分有很大的冗余信息。**

```
nasm -b 32 -o 0x0000 [filename]
```

**示例代码有错，经过不断调试和objdump等命令以及反汇编，可知在经过移动内存后可以直接跳入0x280000**



**对有数据段的程序在链接过程中要指定各个段预备装入内存中的地址，代码段使用数据段的数据是通过绝对地址使用而非相对偏移**