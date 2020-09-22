#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	for (int j = 0; j < 14; ++j)
	{
		for (int i = 0; i < j; ++i)
			printf("*");
		printf("\n");
	}
	for (int j = 13; j > 1;j--)
	{
		for (int i = 0; i < j;i++)
			printf("*");
		    printf("\n");

	}

	return 0;
}