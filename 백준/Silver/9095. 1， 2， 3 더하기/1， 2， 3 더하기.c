#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int N, T;
	scanf("%d", &T);
	


	for (int i = 1; i <= T; i++) {
		scanf("%d", &N);
		int* pa = (int*)malloc(sizeof(int) * (N + 1));
		memset(pa, 0, sizeof(int) * (N + 1));
		pa[1] = 1;
		pa[2] = 2;
		pa[3] = 4;
		for (int i = 4; i <= N; i++) {
			pa[i] = pa[i-3]+ pa[i-2] + pa[i-1];
		}
		printf("%d\n", pa[N]);
		free(pa);

	}

	return 0;


}