#include "apilib.h"

void HariMain(void)
{
	static char s[12] = {"HELLO WORLD" };
		/* 半角のイロハニホヘトの文字コード+改行+0 */
	api_putstr0(s);
	api_end();
}
