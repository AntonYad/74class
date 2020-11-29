#include<stdio.h>
int main()
{
	int f0 = 0, f1 = 1,f2;
	int N = 0;
  scanf_s("%d", &N) ;
	while (1)
	{
		f2 = f1 + f0;
		if (N <= f2)
		{
			if (f2 - N < N - f1)
			{
				printf("%d", f2 - N);
			}
			else
			{
				printf("%d", N - f1);
			}
			break;
		}
		f0 = f1;
		f1 = f2;
	}
	return 0;
}