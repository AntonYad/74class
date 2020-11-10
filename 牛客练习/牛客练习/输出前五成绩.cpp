#include <stdio.h>
int main()
{
	int num, t;
	scanf("%d", &num);
	int a[num];
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &(a[i]));
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (a[i] > a[j])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
	return 0;
}