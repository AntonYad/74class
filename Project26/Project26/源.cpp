#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
char * string(char *p)
{
	int n = 0;
	char temp;
	char *q;
	q = p;
	while (*p != 0)
	{
		n++;
		p++;
	}

	if (n > 1)
	{
		temp = q[0];
		q[0] = q[n - 1];
		q[n - 1] = '\0';
		string(q + 1);
		q[n - 1] = temp;
	}
	return q;
}

int main()
{
	char p[] = "dandanwa";
	printf("原字符串是：%s\n", p);
	printf("翻转后的字符串是：%s\n", string(p));
	return 0;
}