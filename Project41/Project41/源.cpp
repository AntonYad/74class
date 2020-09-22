#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MaxSize 100
typedef int ElemType;
typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;

int Delst(SqList *, ElemType, ElemType);
void print(SqList *);

int main(int argc, char* argv[])
{
	int s=0, t=0;
	SqList SL;
	SL.length = 10;
	int flag;
	for (int i = 0; i<SL.length; i++){
		SL.data[i] = 2 * i + 1;
	}

	print(&SL);
	flag = Delst(&SL, s, t);
	print(&SL);

	if (flag == 0){
		printf("构造空的顺序表成功\n");
	}
	else{
		printf("空或不合理\n");
	}
	return 0;
}

int Delst(SqList *L, ElemType s, ElemType t)
{
	int i, k = 0;
	if (s>t){
		printf("空或不合理\n");
		return -1;
	}
	for (i = 0; i<L->length; i++){
		if (L->data[i]<s){
			k++;
		}
		if (L->data[i]>t){
			L->data[k++] = L->data[i];
		}
	}
	L->length = k;
	return 0;
}
void print(SqList *L)
{
	for (int i = 0; i<L->length; i++){
		printf("%d\t", L->data[i]);
	}
	printf("\n");
}