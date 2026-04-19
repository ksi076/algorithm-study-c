#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	int s, e;
	int* num = (int*)malloc(sizeof(int) * (N+1));
	int* sum = (int*)malloc(sizeof(int) * (N + 1));
	memset(sum, 0, sizeof(int) * (N + 1));

	for (int i = 1; i <= N; i++) {
		scanf("%d ", &num[i]);
		sum[i] += (num[i] + sum[i-1]);

	}


	
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &s, &e);
		printf("%d\n", sum[e] - sum[s - 1]);
		
	}

	free(sum);
	free(num);
	return 0;

}