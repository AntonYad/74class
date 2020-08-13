#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a, b, c, y;
	scanf("%d%d%d",&a,&b,&c);
	if (a < b)
	{    y = a;
	     a = b;
	     b = y;
	}
		 if (a < c)
		 {
			 y= a;
			 a = c;
			 c = y;
		 }
		 if (b < c)
		 {
			 y= b;
			 b = c;
			 c = y;
		 }
		 printf("a=%d,b=%d,c=%d\n", a, b, c);
		 
	  
	return 0;}




	