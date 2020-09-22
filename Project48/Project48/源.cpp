#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void diamond(int n)
{
	int i;
	for (i = 0; i < n; i++){
		int j = 0;
		for (i = 0; j < n - 1 - i; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++){
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n - 1; i++){
		int j = 0;
		for (; j <= i; j++){
			printf(" ");
		}
		for (j = 0; j <2 * n - 3 - 2 * i; j++){
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	diamond(7);
}