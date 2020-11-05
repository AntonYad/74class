#include<stdio.h>
int main()
{
		int i = 0;
		int	ret = 0;
		int pos = 0;
		int arr[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4 };
		int sz = sizeof(arr) / sizeof(arr[0]);
		int num1 = 0;
		int num2 = 0;
		for (i = 0; i < sz; i++)
		{
			ret ^= arr[i];
		}
		//找ret二进制中为1的一位
		for (i = 0; i < 32; i++)
		{
			if (((ret >> 1) & 1) == 1)
			{
				pos = i;
				break;
			}
		}
		//分组
		for (i = 0; i < sz; i++)
		{
			if (((arr[i] >> pos) & 1) == 1)

			{
				num1 ^= arr[i];
			}
		}
		num2 = num1^ret;
		printf("num1 = %d   num2 = %d\n", num1, num2);
		system("pause");
	return 0;
  }