#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int T;
	scanf("%d", &T);
	long long P[101] = { 0 };

	for (int i = 0; i < 3; i++) {
		P[i] = 1;
	}

	for (int i = 3; i <= 4; i++) {
		P[i] = 2;
	}

	P[5] = 3;
	P[6] = 4;
	P[7] = 5;
	P[8] = 7;
	P[9] = 9;


	for (int i = 10; i <= 100; i++) {
		P[i] = P[i - 1] + P[i - 5];
	}

	while (T--) {

		int N;
		scanf("%d", &N);
	
		printf("%lld\n", P[N-1]);

	}
	return 0;
}