#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int count = 0;
	int Sn = 0;
	int t = 0;
	scanf("%d%d", &a, &count);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		t = t * 10 + a;
		Sn += t;
	}
	printf("%d\n", Sn);
	return 0;
}