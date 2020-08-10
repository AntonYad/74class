#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int a, int b)
{
	int z;
	if (a >b){
		z = a
			;
	}
	else{
		z = b
			;
	}
	return z;
}
int main()
{
	int c = 0, h = 0,z=0;
	printf("请输入两个数字:");
	scanf("%d,%d", &c,&h);
	z = max(c, h);
	printf("z=%d\n", z);
	return 0;
}
