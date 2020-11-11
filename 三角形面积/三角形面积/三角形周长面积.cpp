#include<stdio.h>
#include<math.h>
int main()
{
	float p;
	float a, b, c;
	scanf_s("%f %f %f", &a, &b, &c);
	float circumference, area;
	circumference = a + b + c;
	p = circumference / 2;
	area = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("circumference=%.2f area=%.2f", circumference, area);
	return 0;
}