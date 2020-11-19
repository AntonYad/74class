#include<stdio.h>
#define MAX(a, b)  ( (a) > (b) ? (a) : (b) ) 
int main()
{
	int x, y, z1,z2;
	x = 5;
	y = 8;
	z1 = MAX(x++, y++);
	z2 = MAX(++x, ++y);
	printf("x=%d y=%d z1=%d z2=%d\n", x, y, z1,z2);
}