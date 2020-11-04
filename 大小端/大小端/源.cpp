#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
union Un
{
	int i;
	char c;
};
int main()
{
	union Un u;
		u.i = 1;

		if (u.i == 0x01)
	{
		printf("min\n");
	}
	else
	{
		printf("max\n");
	}
	return 0;
}