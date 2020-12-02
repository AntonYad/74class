#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(){
	int n, i = 0;
	int yushu;
	int ljz[10];
	scanf("%d", &n);
	do{
		yushu = n % 6;
		n /= 6;
		ljz[i] = yushu;
		i++;
	} while (n != 0);
	for (int j = i - 1; j >= 0; j--){
		printf("%d", ljz[j]);
	}
	return 0;
}