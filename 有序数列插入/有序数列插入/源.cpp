#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[55], n, i, x;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	for (i = n; i>0; i--)
	{
		if(a[i-1] >= x)
		{
		  a[i] = a[i - 1];
     	}
		else
		{
			a[i] = x;
		}
	}
	if (i == 0)
	{
		a[i ]=x;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d",a[i]);
	}
}