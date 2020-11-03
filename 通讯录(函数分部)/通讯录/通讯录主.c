#include"通讯录.h"
void menu()
{
	printf("*************************\n");
	printf("******1.Add**************\n"); //添加联系人信息
	printf("******2.Del**************\n"); //删除指定联系人信息
	printf("******3.Search***********\n"); //查找指定联系人信息
	printf("******4.Modify***********\n"); //修改指定联系人信息
	printf("******5.Show*************\n"); //显示所有联系人信息
	printf("******6.Clear************\n"); //清空所有联系人
	printf("******7.Sort*************\n");//以名字排序所有联系人
	printf("******8.Exit*************\n");//退出
}
enum Election
{
	Add = 1,
	Del,
	Search,
	Modify,
	Show,
	Clear,
	Sort,
	Exit,
};
int main()
{
	 Contact con;
	 Book data[MAX];
	int sz = 0;
	int input=0;
    InitContact(&con);
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			Add_contact(&con);
			break;
		case Del:
			Del_contact(&con);
			break;
		case Search:
		    Search_contact(&con);
			break;
		case Modify:
			Modify_contact(&con);
			break;
		case Show:
			Show_contact(&con);
			break;
		case Clear:
			Clear_contact(&con);
			break;
		case Sort:
			Sort_contact(&con);
			break;
		case Exit:
			printf("退出");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}
