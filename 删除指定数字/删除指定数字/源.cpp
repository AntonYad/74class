#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int i, a[50];
	for (i = 0; i<N; i++)
		scanf("%d", &a[i]);
	int x;
	scanf("%d", &x);
	for (i = N; i >= 0; i--)
	{
		if (a[i] == x)
		{
			a[i] = 0;
		}
	}
	for (i = 0; i<N; i++)
	if (a[i] != 0){
		printf("%d ", a[i]);
	}
	return 0;
}