#define _CRT_SECURE_NO_WARNINGS 1
#define N 100
#include<stdio.h>
#include<stdlib.h>
void TR(int * Q, int m)
{
	int front = 0,rear = N, i = 0;
	while (front != rear)
	{
		front = (front + 1) % (N + 1);
		i = (i + 1) % m;
		if (!i)
		{
			printf("%d已出圈", Q[front]);
		}
		else
		{
			rear = (rear + 1) % (N + 1);
			Q[rear] = Q[front];
		}
	}
}
int main()
{
	int *Q;
	int m;
	Q = (int *)malloc((N + 1)*sizeof(int));
	for (int i = 1; i < N + 1; i++)
	{
		Q[i] = i;
	}
	printf("输入间隔层");
	scanf("%d",&m);
	TR(Q, m);
	return 0;
}