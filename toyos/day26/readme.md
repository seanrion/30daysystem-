这次久违的踩到了坑。

在进行增加命令行窗口的实验中，我增加到第三个的时候就炸了，bochs死机。经过我反复调试，发现这次死机是因为把命令行的栈定位到了0xa0000附近的地址，而0xa0000是VGA模式下的显存的地址，于是数据没有写到栈里面，因此就挂掉了。

我琢磨了一下啊，发现0x400000前的那段内存放弃算了，坑太多了，而且内存也不是很多。

接下来还有4天的实验