#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[5] = { 0, 1, 2, 3, 4 };
	int *p = arr;
	for (int i = 0; i < 5; i++)
		printf("%d ", *(p + i));
	return 0;
}