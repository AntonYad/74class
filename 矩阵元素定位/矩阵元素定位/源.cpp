#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, m;
	int x, y;
	scanf("%d%d", &n, &m);
	int i, j, a[15][15];
	for (i = 0; i<n; i++){
		for (j = 0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d%d", &x, &y);
	printf("%d\n", a[x - 1][y - 1]);
	return 0;
}