#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int DigitSum(int n)
{
	if (n < 9)
		return n;
	else
		return n % 10 + DigitSum(n / 10);
}
int main()
{
	int num = 1729;
	printf("%d\n", DigitSum(num));
	system("pause");
	return 0;
}