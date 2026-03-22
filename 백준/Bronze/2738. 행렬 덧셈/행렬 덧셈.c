#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int N, M, swi = 0;
	scanf("%d %d", &N, &M);

	int NM[100][100] = {0};
	int NM2[100][100] = {0};
	int sum[100][100] = { 0 };


	for (int k = 0; k < 2; k++) {
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (swi == 0) scanf("%d", &NM[i][j]);
				else scanf("%d", &NM2[i][j]);
			}
		}
		swi = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			sum[i][j] = NM[i][j] + NM2[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}


}