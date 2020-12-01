#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, m;
	int a[15][15];
	int max = 0;
	int i, j, i1, j1;
	scanf("%d%d", &n, &m);
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			scanf("%d", &a[i][j]);
			if (i == 0 && j == 0)
			{
				max = a[i][j];
				i1 = i + 1;
				j1 = j + 1;
			}
			else if (a[i][j]>max)
			{
				max = a[i][j];
				i1 = i + 1;
				j1 = j + 1;
			}
		}
	}
	printf("%d %d", i1, j1);
	return 0;
}