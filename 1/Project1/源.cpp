#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	
	int arr[30] = { 1 };
	int i, j;
	printf("1\n"); //��һ��Ϊ1
	for (i = 1; i < 15; i++) //��������
	{
		for (j = i; j > 0; j--) //�����Ԫ����ǰ�Ƶ�
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