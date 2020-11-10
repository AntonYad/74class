
#include<stdio.h>
#include<math.h>
int main()

{
	float r;
	double p = 3.1415926;
	double v;
	scanf("%f", &r);
	v = 4.0 / 3 * p*pow(r, 3);
	printf("%.3f", v);
	return 0;
}