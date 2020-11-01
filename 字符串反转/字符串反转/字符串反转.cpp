#include<stdio.h>
#include<string.h>
void RotateSTR(char* str, int k)
{
	int len = strlen(str);
	k %= len;
	while (k--)
	{
		int i = 1;
		char tmp = str[0];
		for (; i < len; ++i)
		{
			str[i - 1] = str[i];
		}
		str[len - 1] = tmp;
	}
}

int main()
{
	char a[] = "abcdef";
	RotateSTR(a, 2);
	printf("%s\n", a);

	return 0;
}