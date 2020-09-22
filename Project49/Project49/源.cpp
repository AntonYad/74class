#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int money = 20;
	int total = 20;
	int empty = 20;
	while (empty>1)
	{
		total =total+empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", total);

	return 0;
}