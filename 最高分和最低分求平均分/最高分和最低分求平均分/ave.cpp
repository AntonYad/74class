#include <stdio.h>
int main()
{
	int a[7];
	for (int i = 0; i<7; i++)
		scanf_s("%d ", &a[i]);
	for (int i = 0; i<6; i++)
	{
		if (a[i]>a[i + 1])
		{
			int temp;
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
	for (int i = 0; i<5; i++)
	{
		if (a[i]<a[i + 1])
		{
			int temp;
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
	printf("%.2f\n", (a[0] + a[1] + a[2] + a[3] + a[4]) / 5.f);
	return 0;
}