#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int year(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int y = 0;
	for (y = 1000, y <= 2000, y++)
	{
		if (year(y) == 1)
		{
			printf("%d", y);
		}
	}
	return 0;
}