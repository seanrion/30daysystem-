#include "apilib.h"

void HariMain(void)
{
	static char s[12] = {"HELLO WORLD" };
		/* ���p�̃C���n�j�z�w�g�̕����R�[�h+���s+0 */
	api_putstr0(s);
	api_end();
}
