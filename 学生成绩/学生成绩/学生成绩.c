#include<stdio.h>
int main()
{
	double a=1.1, b=2.2, c=3.3;
	scanf_s("%lf %lf %lf",&a,&b,&c);
	double ave;
	double sum;
	ave = (a + b + c) / 3;
	sum = a + b + c;
	printf("%.2lf %.2lf", sum, ave);
	return 0;
}