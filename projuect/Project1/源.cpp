#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	
	int arr[30] = { 1 };
	int i, j;
	printf("1\n"); //第一行为1
	for (i = 1; i < 15; i++) //行数增加
	{
		for (j = i; j > 0; j--) //从最后元素往前推导
		{
			arr[j] =arr[j]+arr[j - 1];
		}

		for (j = 0; j <= i; j++) 
		{
			printf("%d ", arr[j]);
		}
		putchar('\n');
	}
}