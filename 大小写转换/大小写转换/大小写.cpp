#include<stdio.h>
int main()
{
	char a;
	while (scanf("%c\n", &a) != EOF)
	{
		printf("%c\n", a + 32);
	}
	return 0;
}
