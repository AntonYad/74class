#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, i, n[50], sum = 0;
	scanf("%d", &m);
	for (i = 0; i<m; i++)
	{
		scanf("%d", &n[i]);
		sum = sum + n[i];
	}
	printf("%d", sum);
	return 0;
}