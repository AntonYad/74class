#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void menu()
{
    printf("******************************\n");
	printf("******      1. play     ******\n");
	printf("******      0. exit     ******\n");
	printf("******************************\n");
}

void game()
{

	int guess = 0;
	int ret = rand()%100+1;
printf("%d\n", ret);
	2. while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{		printf("��С��\n");
	}
		else
	{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}