第一个是要增加一个alloca的函数，但是在我这边却是提醒缺少___chkstk_ms，我想这应该跟编译器有关，不过也就是改个名字而已，换上个新名字，程序照样跑动了。

作者加了个日文字库，我就增加了个中文字库，使用hzk16的库，跟着作者的程序就行，不过最后跑应用程序的时候发现显示的字符为空，想了一下，再用objdump看了应用程序的段，发现比之前的程序多了个data段，我之前在console中复制段只是从文件中一股脑全部复制过去的，只有第一个数据段是把文件偏移和段的虚拟地址对齐了，后面几个段都没有对齐，所以我又修改了一下console.c中的cmd_app函数。改成根据PE中的信息来分配段的了。

最后成功显示出中文字符。