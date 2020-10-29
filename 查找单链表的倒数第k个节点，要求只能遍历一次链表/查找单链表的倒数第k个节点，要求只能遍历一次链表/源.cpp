#define _CRT_SECURE_NO_WARNINGS 1
typedef int DataType;
#define NULL 0
#include<stdio.h>
#include<windows.h>
#include<assert.h>

typedef struct Node
{
	DataType data;
	struct Node*next;
}Node, *LinkList;
void InitList(LinkList *L)
{
	L = (Node)malloc(sizeof(Node));
	if (*L == NULL){
		printf(“申请内存空间失败”);
	}
	(*L)->next = NULL;
	(*L)->data = NULL;
}
LinkList BuyNode(DataType data)
{
	LinkList NewNode = NULL;
	NewNode = (LinkList)malloc(sizeof(Node));
	if (NewNode == NULL){
		printf(“为节点创建空间失败”);
	}
	NewNode->data = data;
	NewNode->next = NULL;
	return NewNode;
}
void PrintList(LinkList L)
{
	LinkList Cur = L;
	if (L == NULL){
		printf(“NULL”);
	}
	while (Cur)
	{
		printf(“%d—>”, Cur->data);
		Cur = Cur->next;
	}
	printf(“NULL\n”);
}
void PushBack(LinkList* L, DataType data)
{
	assert(L);
	LinkList Cur = *L;
	if (Cur == NULL){
		Cur = BuyNode(data);
	}
	while (Cur->next)
	{
		Cur = Cur->next;
	}
	Cur->next = BuyNode(data);
}
LinkList FindLastKNode(LinkList L, int k)
{
	LinkList Fast = L;
	LinkList Slow = L;

	if (L == NULL || k <= 0)
		return NULL;
	while (k--){
		if (Fast == NULL){
			return NULL;
		}
		Fast = Fast->next;
	}
	while (Fast){
		Fast = Fast->next;
		Slow = Slow->next;
	}
	return Slow;
}
test3()
{
	LinkList L = NULL;
	InitList(&L);
	PushBack(&L, 2);
	PushBack(&L, 4);
	PushBack(&L, 6);
	LinkList S = FindLastKNode(L, 2);
	printf(“%d”, S->data);
}
int main()
{
	test3();
	system(“pause”);
	return 0;
}