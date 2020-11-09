#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	float tmp;
	while (scanf("%f %f %f", &a, &b, &c) != EOF)
	{
		if (a == 0)
		{
			printf("Not quadratic equation");
		}
		else
		{
			tmp = b*b - 4 * c*a;
			if (tmp == 0)
			{
				printf("x1=x2=%.2f\n", -b / (2 * a));
			}
			if (tmp>0)
			{
				printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(tmp)) / (2 * a), (-b + sqrt(tmp)) / (2 * a));

			}
			if (tmp<0)
			{
				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / (2 * a), sqrt(-tmp) / (2 * a), -b / (2 * a), sqrt(-tmp) / (2 * a));

			}
		}
	}
	return 0;