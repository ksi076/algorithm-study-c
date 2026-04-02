#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int maxre(int a, int b) {
	
	return (a > b) ? a : b;
}


int main() {
	int N, sum;
	scanf("%d", &N);
	int* num = (int*)malloc(sizeof(int) * (N + 1));

	memset(num, 0, sizeof(int) * (N + 1));
	int* dp = (int*)malloc(sizeof(int) * (N + 1));
	memset(dp, 0, sizeof(int) * (N + 1));


	for (int i = 1; i <= N; i++) {
		scanf("%d", &num[i]);
	}

	if (N == 1) {
		printf("%d", num[1]);
		free(num);
		free(dp);
		return 0;
	}

	dp[1] = num[1];
	dp[2] = num[1] + num[2];

	for (int i = 3; i <= N; i++) {
		dp[i] = maxre((dp[i - 2] + num[i]), (dp[i - 3] + num[i-1] + num[i]));
	}

	printf("%d", dp[N]);

	free(num);
	free(dp);

	return 0;
}


