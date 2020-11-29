#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, min = 1000, max = 0;
	scanf("%d", &n);
	int i, j, m[100];
	for (i = 0; i<n; i++)
	{
		scanf("%d", &m[i]);
		if (m[i]>max) max = m[i];
		if (m[i]<min) min = m[i];
	}
	int sum = max - min;
	printf("%d", sum);
	return 0;
}