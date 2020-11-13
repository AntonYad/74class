#include <stdio.h>
int main()
{
	int a[15][15];
	int i, j;
	int n, m;
	scanf("%d%d", &n, &m);
	for (i = 0; i<n; i++){
		for (j = 0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i<n; i++){
		for (j = 0; j<m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}