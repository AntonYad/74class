#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, math, max = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &math);
		if (math>max)
		{
			max = math;
		}
	}
	printf("%d", max);
	return 0;
}