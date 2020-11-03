#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define MAX_NAME 40
#define MAX_SEX 5
#define MAX_ADDR 80
#define MAX_TEL 20
#define MAX 1000
typedef struct Book
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	short  age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}Book;
typedef struct Contact
{
	Book data[MAX];
	int sz;
}Contact;
void InitContact(Contact* pc);
void Add_contact(Contact* pc);//添加
void Show_contact(Contact* pc);//展示
void Del_contact(Contact* pc);//删除
void Search_contact(Contact* pc);//查找
void Modify_contact(Contact* pc);//修改
void Sort_contact(Contact* pc);//排序
void Clear_contact(Contact* pc);//清空

