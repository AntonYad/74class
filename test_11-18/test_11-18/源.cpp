//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i<10; i++)
//		printf("file:%s line:%d date:%s time:%s\n", __FILE__, __LINE__, __DATE__, __TIME__, arr[i]);
//	//printf("%d", __STDC__);
//	return 0;
//}
#include<stdio.h>
#define PRINTF printf("file:%s line:%d date:%s time:%s: %d\n",__FILE__,\
                                                                                                 __LINE__,\
																								 __DATE__, \
									                                                        	 __TIME__)
int main()
{

	PRINTF;
	return 0;
}