#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int counter(int m, int n)
{
	int T = m^n;
	int count = 0;
	while (T)
	{
		T = T&(T - 1);
		count++;
	}
	return count;
}


int main()
{
	int m, n;
	while (scanf("%d %d", &m, &n) == 2)
	{
		printf("%d\n", counter(m, n));
	}
	return 0;
}