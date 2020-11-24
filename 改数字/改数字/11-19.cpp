#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100];
	gets(a);
	int len = strlen(a);
	for (int i = 0; i<len; i++)
	{
		if (a[i] % 2 == 0)
		{
			a[i] = '0';
		}
		else
		{
			a[i] = '1';
		}
	}
	printf("%d", atoi(a));
	return 0;
}