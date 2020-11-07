#include<stdio.h>
int main()
{
	int n, h, m, x;
	scanf("%d %d %d", &n, &h, &m);
	x = n - m / h;
	if (m%h != 0)
		x = x - 1;
	printf("%d", x);
	return 0;
}