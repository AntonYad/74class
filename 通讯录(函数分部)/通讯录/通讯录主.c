#include"ͨѶ¼.h"
void menu()
{
	printf("*************************\n");
	printf("******1.Add**************\n"); //�����ϵ����Ϣ
	printf("******2.Del**************\n"); //ɾ��ָ����ϵ����Ϣ
	printf("******3.Search***********\n"); //����ָ����ϵ����Ϣ
	printf("******4.Modify***********\n"); //�޸�ָ����ϵ����Ϣ
	printf("******5.Show*************\n"); //��ʾ������ϵ����Ϣ
	printf("******6.Clear************\n"); //���������ϵ��
	printf("******7.Sort*************\n");//����������������ϵ��
	printf("******8.Exit*************\n");//�˳�
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
		printf("�����룺");
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
			printf("�˳�");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}
