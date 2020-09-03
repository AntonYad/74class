#define _CRT_SECURE_NO_WARNINGS 1
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n* factorial(n - 1);
//

int factorial(int n)
{
	int i = 1, sum = 1;
	while (i <= n)
	{
		sum =sum*i;
		i++;
	}
	return sum;
}