#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int i, j, k, t;

	while (scanf("%d", &k) != EOF)
	{
		for (i = 0; i <= k; i++)
		{
			for (j = i; j <= k; j++)
			{
				printf("* ");
			}
			for (t = 0; t < i; t++)
			{
				putchar(' ');
			}
			putchar('\n');
		}
		for (i = 1; i <= k; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("* ");
			}
			for (t = k; t > i; t--)
			{
				putchar(' ');
			}
			putchar('\n');
		}
	}

	return 0;
}