#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1, 3, 3, 4, 4, 5, 6, 6, 7, 8 }, i, j;
	for (j = 0, i = 1; i < 10; ++i)
		if (arr[j] != arr[i])
			arr[++j] = arr[i];
	j++;
	for (i = 0; i < j; i++)
		printf("%d ", arr[i]);
	return 0;
}