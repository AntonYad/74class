#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()

{
	int arr[] = { 8, 6, 4, 2 };
	int i;
	int j;
	int t;
	int sz= sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
		for (j = 0; j < sz - 1 - i; j++)
			if (arr[j]>arr[j + 1])
			{
		t = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = t;
			}
		for (i = 0; i < 4; i++)
			
				printf("%d", arr[i]);
	return 0;
}