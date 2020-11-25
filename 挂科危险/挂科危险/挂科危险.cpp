#include<stdio.h>
int main()
{
	int source;
	scanf("%d", &source);
	if (source >= 10)
	{
		printf("Danger++");
	}
	else if (source >= 4 && source <= 9)
	{
		printf("Danger");
	}
	else if (source >= 0 && source <= 3)
	{
		printf("Good");
	}
	return 0;
}