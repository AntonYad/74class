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
void Add_contact(Contact* pc);//���
void Show_contact(Contact* pc);//չʾ
void Del_contact(Contact* pc);//ɾ��
void Search_contact(Contact* pc);//����
void Modify_contact(Contact* pc);//�޸�
void Sort_contact(Contact* pc);//����
void Clear_contact(Contact* pc);//���

