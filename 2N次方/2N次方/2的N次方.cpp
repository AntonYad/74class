#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		printf("%.0lf\n", pow(2, n));
	}
	return 0;
}