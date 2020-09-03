#define _CRT_SECURE_NO_WARNINGS 1
#incude <stdio.h>
//int Strlen(const char*str)
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char *p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}
int Strlen(char str[])
{
	int size = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;

	}
	return size;
}