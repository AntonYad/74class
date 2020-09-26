#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int murder[4] = { 0 }; //定义四个人都为假
    int i;
	for (i = 0; i < 4; i++) //假设四个人中的凶手
	{
		murder[i] = 1; //通过i的循环来一一判断四个凶手
		if ((murder[0] != 1) +(murder[2] == 1) +(murder[3] == 1) +(murder[3] != 1) == 3)
		//A说：不是我 （否）。B说：是C （是）。C说：是D （是）。D说：C在胡说（否）
		{
			break; //满足
		}
		murder[i] = 0; //不满足继续进行for循环 寻找1
	}

	putchar('A' + i); //打印凶手的编号
	return 0;
}