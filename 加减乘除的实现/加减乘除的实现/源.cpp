#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>   
void menu()   //�˵�����   
{
	printf("--------------------\n");
	printf("    ���������ѡ�� \n");
	printf("        1.+       \n");
	printf("        2.-       \n");
	printf("        3.*       \n");
	printf("        4./       \n");
	printf("--------------------\n");
}
float main()
{
	float i = 0;
	float j = 0;
	float num = 0;    //�����������nun
	int select = 0;   //ѡ���ѡ������select
	do
	{
		menu();    //��ӡ���˵�����
		scanf("%d", &select);   //�������ѡ��
		printf("���������ֵ:");
		scanf("%f%f", &i, &j);    //����Ҫ�������ֵ
		switch (select)
		{
		case 1://ʵ�ּӷ�����
			printf("%f+%f=%f\n", i, j, num = i + j);
			break;
		case 2: //ʵ�ּ�������
			printf("%f-%f=%f\n", i, j, num = i - j);
			break;
		case 3:// ʵ�ֳ˷�����
			printf("%f*%f=%f\n", i, j, num = i*j);
			break;
		case 4:  //ʵ�ֳ�������
			printf("%f/%f=%f\n", i, j, num = i / j);
			break;
		default:
			printf("�������룬����������");
			break;
		}

	} while (select);
	return 0;
}