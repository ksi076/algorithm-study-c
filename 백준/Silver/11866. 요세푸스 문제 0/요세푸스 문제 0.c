#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {
	int N, j = 0, item = 0;
	int k, cnt = 0;
	scanf("%d %d", &N, &k);
	int* pa = (int*)malloc(sizeof(int) * N);
	int* res = (int*)malloc(sizeof(int) * N);

	for (int i = 1; i <= N; i++) {
		pa[i-1] = i;
	}
	
	while (1) {
		for (int i = item; cnt < k; i++) {
			i = i % (N);
			if (pa[i] == 0) continue;
			cnt++;
			item = i;
		}
		res[j] = pa[item];
		pa[item] = 0;
		j++;
		cnt = 0;
		if(j == N) break;
	}


	printf("<");
	for (int i = 0; i < N-1; i++) {
		printf("%d, ", res[i]);
	}
	printf("%d>", res[N - 1]);
	free(pa);
	free(res);
	return 0;
	

}