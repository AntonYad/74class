#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 50
int main(void)
{
	int i, j, k, t, n, a[N + 1];

	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	getchar();
	scanf("%d", &j);
	for (i = 0; i < n; i++)
	{
		if (j <= a[i])
		{
			for (k = n - 1; k >= i; k--)
			{
				a[k + 1] = a[k];
			}
			a[i] = j;
			break;
		}
	}
	if (i == n)
	{
		a[i] = j;
	}
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}