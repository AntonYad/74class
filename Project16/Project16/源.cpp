#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_prime(int n)
{
	int i = 0;
	for (i = 2,i <= sqrt(n), i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i;
	for (i = 101; i <= 200;i+=2)
		if (is_prime(i) == 1)
		{
		printf("%d", i);
		}

	return 0;
}