今天做api，这可是史诗级的进步，操作系统的api就意味着应用程序的诞生与繁荣。

不过今天头几个实验做的显示字符的api有点简陋，而且还要手动计算在内存中的地址，这我是没想到的。不过用objdump看一眼就行，然后在我汇编应用程序的时候，我不小心踩到了坑，忘记用nasm把应用汇编成32位的了，以致于没有办法进行32位的call，触发了cpu的保护机制，使得bochs又停机了，不过我对这事是有经验的了，用bochs调试一下，就找到了问题，很快就解决了。

然后就是，把api写到中断里，这点让我回想起了学汇编的时候，当时编写汇编程序确实都是用的中断来实现某个功能的。

之后的应用程序自由命名，就是搜寻目录下同名的应用程序然后跳转，这个就是命令行的妙处。

压轴实验还给中断程序添上了功能号，确实有点dos系统内味儿了，而最后第二个应用为什么没有显示出字符，凭我的汇编经验来看，是没有指定用哪个段地址，所以读取msg时就直接用了DS数据段作为基地址，因此得到了错误的地址，看了看明天的一些内容，好像我的推测是对的。

今天虽然踩了一些小坑，但是总体上还是顺利的。而且今天做到了day20，已经完成了三分之二的进度了，不过距离一个月结束也没几天了，之前落下了的，明天得多追赶一些，争取在31号前做完全部内容。