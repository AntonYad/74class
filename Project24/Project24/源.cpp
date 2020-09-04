#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
int power(int n, int k)
{
	if (k <= 0)
		return 1;
	else
		return n*power(n, k - 1);
}
int main()
{
	int n = 3;
	int k = 2;
	scanf("%d%d", &n, &k);
	int ret = power(n, k);
	printf("%d\n", ret);
	return 0;
}