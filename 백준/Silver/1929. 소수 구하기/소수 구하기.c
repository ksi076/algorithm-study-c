#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int M, N, cnt = 0;
	scanf("%d %d", &M, &N);

	for (int i = M; i <= N; i++) {
		if (i == 1) continue;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				cnt++;
				break;
			}
		}
		if (cnt == 0) printf("%d\n", i);
		cnt = 0;
	}
	return 0;
}