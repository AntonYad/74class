#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("%d%d", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d%d", a, b);
	return 0;
}