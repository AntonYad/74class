#include<stdio.h>
int main()
{
	float price;
	int mon, day, dis;
	float money;
	scanf("%f %d %d %d", &price, &mon, &day, &dis);
	if (mon == 11 && day == 11)
	{
		if (dis == 1)
		{
			money = price * 0.7 - 50;
		}
		else
		{
			money = price * 0.7;
		}
	}
	if (mon == 12 && day == 12)
	{
		if (dis == 1)
		{
			money = price * 0.8 - 50;
		}
		else
		{
			money = price * 0.8;
		}
	}
	if (money <= 0.0)
		printf("0.00");
	else
		printf("%.2f", money);
	return 0;
}