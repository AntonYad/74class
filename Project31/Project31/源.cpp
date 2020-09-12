#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[] = { 0, 1, 2, 3, 4 };
	int arr2[] = { 4, 3, 2, 1, 0 };
	int arr3[5] = {};
	int i;
	for ( i = 0; i<sizeof(arr2) / sizeof(arr1[0]); i++)
		arr3[i] = arr1[i];
	    arr1[i]= arr2[i];
	    arr2[i]= arr3[i];
	for (i = 0; i<sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i<sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}