#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int N, M, max, sum = 0, best = 0;
	scanf("%d %d", &N, &M);
	int num[100] = { 0 };

	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}


	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				if ((num[i] + num[j] + num[k]) <= M && (num[i] + num[j] + num[k]) > best) {
					best = (num[i] + num[j] + num[k]);

				}
			}
		}
	}

	printf("%d", best);
	return 0;
}
