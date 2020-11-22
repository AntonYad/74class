#include<stdio.h>
int main()
{
	long n, m, max, min, temp, ZD;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		max = n>m ? n : m;
		min = n>m ? m : n;
		while (min)
		{
			temp = max%min;
			max = min;
			min = temp;
		}
		temp = max;
		ZD = n*m / temp;
	}
	printf("%ld", ZD + temp);
}