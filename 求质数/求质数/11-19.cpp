#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 100; i <= 999; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i%j == 0 && i != j)
			{
				break;
			}
			else if (i == j)
			{
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}