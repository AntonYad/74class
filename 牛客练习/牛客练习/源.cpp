#include<stdio.h>
int main()
{
	int a, b, c;
	int sum;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	sum = sum / 3;
	if (sum >= 60)
	{
		printf("NO");
	}
	else if (sum<60)
		printf("YES");
	return 0;
}