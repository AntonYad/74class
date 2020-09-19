#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int counter(int n, int j, int i)
{
	if (i == 0)
		return 0;

	if (i % 2 == 1)
		{
		i = i >> 1;
		return 1 + counter(n, j, i);
		}
		else
		{
			i = i >> 1;
		return 0 + counter(n, j, i);

		}
}
int main()
{
	printf("请输入两个数字");
	scanf（"%d%d", &a, &b）；
	    int i = a^b;
	printf("%d", counter(a, b, i));
		return 0;
}