#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
int my_atoi(const char*str)
{
	assert(str != NULL);
	while (*str == ' ')// �����ո�
	{
		str++;
	}
	int flag = 1;// ����λ 
	if (*str == '-')
	{
		flag = -1;  //���Ƿ��Ǹ���
		str++;  //str++ �жϺ�����ַ��Ƿ�������
	}

	else if (*str == '+')
		str++;  // str++ �жϺ�����ַ��Ƿ�������
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