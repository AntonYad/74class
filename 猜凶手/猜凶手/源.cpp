#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int murder[4] = { 0 }; //�����ĸ��˶�Ϊ��
    int i;
	for (i = 0; i < 4; i++) //�����ĸ����е�����
	{
		murder[i] = 1; //ͨ��i��ѭ����һһ�ж��ĸ�����
		if ((murder[0] != 1) +(murder[2] == 1) +(murder[3] == 1) +(murder[3] != 1) == 3)
		//A˵�������� ���񣩡�B˵����C ���ǣ���C˵����D ���ǣ���D˵��C�ں�˵����
		{
			break; //����
		}
		murder[i] = 0; //�������������forѭ�� Ѱ��1
	}

	putchar('A' + i); //��ӡ���ֵı��
	return 0;
}