#include<stdio.h>
#define N 100
int main()
{
	int n;
	int a[N];
	int i, j;
	int count = 0;
	while (scanf_s("%d", &n) != EOF)
	{
		for (i = 2; i <= n; i++)
		{
			a[i] = i;
		}
		for (i = 2; i <= n; i++)
		{
			for (j = i + 1; j <= n; j++)
			{
				if (j%i == 0)
				{
					a[j] = 0;
				}
			}
		}
		for (i = 2; i <= n; i++)
		{
			if (a[i] != 0)
			{
				printf("%d ", a[i]);
			}
			else
				count++;
		}
		printf("\n%d\n", count);
	}
	return 0;
}
