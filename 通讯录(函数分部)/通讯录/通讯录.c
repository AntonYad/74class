#include"通讯录.h"
void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
void Add_contact(Contact *pc)
{
	if (pc->sz == MAX)
	{
		printf("没有空间\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入性别:");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入年龄:");
		scanf("%d", pc->data[pc->sz].age);
		printf("请输入电话:");
		scanf("%s", pc->data[pc->sz].tel);
		printf("请输入地址:");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("添加成功");
	}
}
void Show_contact(Contact *pc)
{
	int i = 0;
	printf("%s,%s,%s,%s,%s", "名字", "性别","年龄","电话","地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%s,%s,%d,%s,%s", pc->data[i].name, pc->data[i].sex, pc->data[i].age, pc->data[i].tel, pc->data[i].addr);
	}
}
int found_name(Contact *pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入名字:");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;//找到，返回
		}		
	}
	return -1;
}
void Del_contact(Contact*pc)
{
	if (pc->sz == 0)
	{
		printf("无人");
	}
	else
	{
		int pt=found_name(pc);
		if (pt == -1)
		{
			printf("无此人\n");
		}
		else
		{
			int j;
			for (j = pt; j <pc->sz-1 ; j++)
			{
				pc->data[j] = pc->data[j + 1];				
			}
			pc->sz--;
			printf("删除成功\n");
		}
	}
}
void Search_contact(Contact*pc)
{
	char name[MAX_NAME];
	printf("输入查找名字");
	scanf("%s",name);
	int pt=found_name(pc);
	if (pt == -1)
	{
		printf("无此人\n");
	}
	else
	{
		printf("%s,%s,%d,%s,%s", pc->data[pt].name, pc->data[pt].sex, pc->data[pt].age, pc->data[pt].tel, pc->data[pt].addr);
	}
}
void Modify_contact(Contact*pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入修改名字");
	scanf("%s",name);
	int pt = found_name(pc);
	if (pt == -1)
	{
		printf("无此人");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", pc->data[pt].name);
		printf("请输入性别:");
		scanf("%s", pc->data[pt].sex);
		printf("请输入年龄:");
		scanf("%s", pc->data[pt].age);
		printf("请输入电话:");
		scanf("%s", pc->data[pt].tel);
		printf("请输入地址:");
		scanf("%s", pc->data[pt].addr);
	}
}
void Sort_contact(Contact* pc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0);
			{
				Book tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}
	}
}
void Clear_contact(Contact * pc)
{
	InitContact(pc);
}