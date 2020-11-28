#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m[10], positive = 0, negative = 0;
	for (int i = 0; i<10; i++)
		scanf("%d", &m[i]);
	for (int i = 0; i<10; i++)
	{
		if (m[i] >= 0)
		{
			positive++;
		}
		else
			negative++;
	}
	printf("positive:%d\nnegative:%d", positive, negative);
	return 0;
}