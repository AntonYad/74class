#include<stdio.h>
int main()
{
	double wight, height;
	double BMI;
	scanf("%lf %lf", &wight, &height);
	BMI = wight / pow(height, 2);
	if (BMI <= 23.9&&BMI >= 18.5)
	{
		printf("Normal");
	}
	else
	{
		printf("Abnormal");
	}
	return 0;
}