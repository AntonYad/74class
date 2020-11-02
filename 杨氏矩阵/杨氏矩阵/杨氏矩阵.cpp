#include<stdio.h>
int yangshiMartix(int (*p)[4], int m, int n, int x)
{
	int i = 0;
	int j = n-1;
	while (j >= 0 && i < m)
	{
		if (p[i][j] < x)
		{
			i++;
		}
		else if (p[i][j]>x)
		{
			--j;
		}
		else 
		{ 
			return 1; 
		}
	}
	return 0;
}
int main()
{
	int a[4][4] = { { 1, 3, 5, 7 },
	                { 2, 4, 6, 10 },
	                { 11, 14, 15, 27 },
	                { 12, 24, 26, 28 } };

	if (yangshiMartix(a, 4, 4, 14))
	{
		printf("It has been found!\n");
	}
	else
	{
		printf("It hasn't been found!\n");
	}
	return 0;
}