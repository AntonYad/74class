#include <stdio.h>
int main()
{
	int i, n;
	float a[100], min, max, avg = 0;	//max表示最高分，min表示最低分，avg表示平均分
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf("%f", &a[i]);
	}
	max = min = a[0];
	for (i = 0; i<n; i++)
	{
		if (min >= a[i])
		{
			min = a[i];
		}
		if (max <= a[i])
		{
			max = a[i];
		}
		avg = avg + a[i];
	}
	avg /= n;
	printf("%.2f %.2f %.2f", max, min, avg);
}