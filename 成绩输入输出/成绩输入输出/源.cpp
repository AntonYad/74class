#include <stdio.h>
int main(){
	float score[5][6];
	int i, j;
	for (i = 0; i<5; i++){
		for (j = 0; j<5; j++){
			scanf("%f", &score[i][j]);
		}
	}

	for (i = 0; i<5; i++){
		score[i][5] = 0;
		for (j = 0; j<5; j++){
			score[i][5] += score[i][j];
		}
	}

	for (i = 0; i<5; i++){
		for (j = 0; j<6; j++){
			printf("%.1f ", score[i][j]);
		}
		printf("\n");
	}
	return 0;
}