#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N, m[55], flag1 = 0, flag2 = 0, i;
	scanf("%d", &N);
	for (i = 0; i<N; i++)
	{
		scanf("%d", &m[i]);
		if (i>0)
		{
			if (m[i]<m[i - 1])
			{
				flag1 = 1;
			}
			if (m[i]>m[i - 1])
			{
				flag2 = 1;
			}
		}
	}
	if (flag1&&flag2)
	{
		printf("unsorted\n");
	}
	else
	{
		printf("sorted\n");
	}
	return 0;
}