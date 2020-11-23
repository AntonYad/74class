#include<stdio.h>
#define MAX(X,Y)   ((X)>(Y)?(X):(Y))
int max(int  x,int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 10, b = 20;
	//ºê
	int max = MAX(a, b);
	printf("%d\n", max);
	//º¯Êý
	max = MAX(a, b);
	printf("%d\n", max);
	return 0;
}