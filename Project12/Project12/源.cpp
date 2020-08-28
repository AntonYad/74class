#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum=0;
	int i;
	for (i = 0; i <= 100; i++)
		if (i % 9 == 0)
			sum++;
	    if (i / 10 == 9)
		    sum++;
		printf("ÓÐ%d¸ö9",sum);
	return 0;
}