#include<stdio.h>
#include<string.h>
int main()
{
 //int a[] = { 1, 2, 3, 4 };

 //printf("%d\n", sizeof(a));

 //printf("%d\n", sizeof(a + 0));

 //printf("%d\n", sizeof(*a));

 //printf("%d\n", sizeof(a + 1));

 //printf("%d\n", sizeof(a[1]));

 //printf("%d\n", sizeof(&a));

 //printf("%d\n", sizeof(*&a));

 //printf("%d\n", sizeof(&a + 1));

 //printf("%d\n", sizeof(&a[0]));

 //printf("%d\n", sizeof(&a[0] + 1));
 
// char *p = "abcdef";
//
// printf("%d\n", sizeof(p));
//
// printf("%d\n", sizeof(p + 1));
//
// printf("%d\n", sizeof(*p));
//
// printf("%d\n", sizeof(p[0]));
//
// printf("%d\n", sizeof(&p));
//
// printf("%d\n", sizeof(&p + 1));
//
// printf("%d\n", sizeof(&p[0] + 1));
// 
// printf("%d\n", strlen(p));
//
// printf("%d\n", strlen(p + 1));
//
//// printf("%d\n", strlen(*p));
//
//// printf("%d\n", strlen(p[0]));
//
//// printf("%d\n", strlen(&p));
//
//// printf("%d\n", strlen(&p + 1));
//
// printf("%d\n", strlen(&p[0] + 1));
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a));

	printf("%d\n", sizeof(a[0][0]));

	printf("%d\n", sizeof(a[0]));

	printf("%d\n", sizeof(a[0] + 1));

	printf("%d\n", sizeof(*(a[0] + 1)));

	printf("%d\n", sizeof(a + 1));

	printf("%d\n", sizeof(*(a + 1)));

	printf("%d\n", sizeof(&a[0] + 1));

	printf("%d\n", sizeof(*(&a[0] + 1)));

	printf("%d\n", sizeof(*a));

	printf("%d\n", sizeof(a[3]));


 return 0;
}
