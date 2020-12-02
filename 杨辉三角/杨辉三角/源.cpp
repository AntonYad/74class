#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[40][40];
	int i, j;
	for (i = 0; i<n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 1; i<n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}