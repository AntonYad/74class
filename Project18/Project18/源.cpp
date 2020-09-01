#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
int main()
{
	    int a;
		int b;
		printf("请输入两个数字");
		scanf("%d%d", &a,&b);
	swap(a, b);
	printf("a=%d b=%d", a, b);

	return 0;
}