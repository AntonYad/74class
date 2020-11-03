#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>   
void menu()   //菜单界面   
{
	printf("--------------------\n");
	printf("    请输入你的选择 \n");
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
	float num = 0;    //计算结果存放在nun
	int select = 0;   //选择的选项存放在select
	do
	{
		menu();    //打印出菜单界面
		scanf("%d", &select);   //输入你的选项
		printf("请输入计算值:");
		scanf("%f%f", &i, &j);    //输入要计算的数值
		switch (select)
		{
		case 1://实现加法功能
			printf("%f+%f=%f\n", i, j, num = i + j);
			break;
		case 2: //实现减法功能
			printf("%f-%f=%f\n", i, j, num = i - j);
			break;
		case 3:// 实现乘法功能
			printf("%f*%f=%f\n", i, j, num = i*j);
			break;
		case 4:  //实现除法功能
			printf("%f/%f=%f\n", i, j, num = i / j);
			break;
		default:
			printf("错误输入，请重新输入");
			break;
		}

	} while (select);
	return 0;
}