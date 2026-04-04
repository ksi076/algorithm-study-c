#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int N, K;
	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) K--;
		if (K == 0) {
			printf("%d", i);
			break;
		}
	}
	if (K >= 1) printf("0");
	return 0;
}