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
	printf("ԭ�ַ����ǣ�%s\n", p);
	printf("��ת����ַ����ǣ�%s\n", string(p));
	return 0;
}