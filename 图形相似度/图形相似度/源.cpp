#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n, i, j, tmp = 0;
	int str[100][100];
	int a[100][100];
	double sum;
	scanf("%d%d", &m, &n);
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &str[i][j]);
		}
	}
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
			if (a[i][j] == str[i][j])
			{
				tmp++;
			}
		}
	}
	sum = 100.0*tmp / (m*n);
	printf("%.2f\n", sum);
	return 0;
}