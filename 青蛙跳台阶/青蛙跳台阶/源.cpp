#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fibo(char n)
{
	if (n == 1 || n == 2)
	      return n;
	else
		return fibo(n - 1) + fibo(n - 2);
}
int main()
{
	int m;
		printf("请输入跳的台阶数");
	    scanf("%d", &m);
		printf("%d",fibo(m));
		return 0;
}