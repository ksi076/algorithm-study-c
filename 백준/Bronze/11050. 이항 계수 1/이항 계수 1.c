#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	int Nsum = 1, Ksum = 1, Nksum = 1;

	for (int i = 1; i <= N; i++) {
		Nsum *= i;
	}
	for (int i = 1; i <= K; i++) {
		Ksum *= i;
	}
	for (int i = 1; i <= (N - K); i++) {
		Nksum *= i;
	}

	Nsum = Nsum / (Ksum * Nksum);
	printf("%d", Nsum);
	return 0;
}
