#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
int my_atoi(const char*str)
{
	assert(str != NULL);
	while (*str == ' ')// 跳过空格
	{
		str++;
	}
	int flag = 1;// 符号位 
	if (*str == '-')
	{
		flag = -1;  //看是否是负数
		str++;  //str++ 判断后面的字符是否是数字
	}

	else if (*str == '+')
		str++;  // str++ 判断后面的字符是否是数字
	long long res = 0;
	while (*str != '\0')
	{

		res = res * 10 + (*str - '0');

		return flag*res;
	}
}
	int main()
   {
	char*str = "-6";
	int res1 = atoi(str);
	printf("%d\n", res1);
	printf("%d\n", my_atoi(str));
	return 0;
   }