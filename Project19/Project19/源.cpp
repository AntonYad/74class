#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int muit(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d * %d = %d  ", j, i, i * j);
		}
		printf("\n");
	}
}

int main() {
	int n;
	printf("��������Ҫ��ӡ�ĳ˷�����:");
	scanf("%d", &n);
	muit(n);
	system("pause");
	return 0;
}