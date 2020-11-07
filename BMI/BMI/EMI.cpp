#include<stdio.h>
#include<math.h>
int main()
{
	float hight, weight;
	float BMI;
	scanf("%f %f", &weight, &hight);
	BMI = weight / pow((hight / 100), 2);
	printf("%.2f\n", BMI);
	return 0;
}