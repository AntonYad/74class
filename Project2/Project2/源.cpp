#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Maxsize 50
typedef struct SqList{
	int* data;
	int length;
};
// ---------------------------- 初始化-----------------------------
bool InitList(struct SqList* L)
{
	L->data = (int*)malloc(sizeof(int)*(Maxsize / 2));
	int i = 0;
	for (i = 0; i<Maxsize / 2; i++)
	{
		L->data[i] = rand() % 100;
	}
	L->length = Maxsize / 2;
	return true;
}

void  Reverse(struct SqList* L)
{
	int temp = 0;
	int i = 0;
	for (i = 0; i<(L->length) / 2; i++)
	{
		// L->data[i]=i;
		temp = L->data[i];
		L->data[i] = L->data[(L->length) - i - 1];
		L->data[(L->length) - i - 1] = temp;
	}
}



void print(struct SqList *L)
{
	int j = L->length;
	int i = 0;
	for (i = 0; i<j; i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
}
int main()
{
	//-------------------初始化顺序表--------------------

	struct SqList L;
	if (InitList(&L) == true)
	{
		printf("顺序表初始化成功！\n");
	}
	print(&L);
	printf("\n\n");

	Reverse(&L);
	print(&L);
	printf("\n\n");
}
