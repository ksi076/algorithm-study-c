#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int N, M, count = 0, No, Nb[7] = { 0 };
	int sum = 0;

	scanf("%d", &N);
	N;
	for (int i = 1; i <= N ; i *= 10) {
		count++;
	}
	M = N - (count * 9);

	if (N <= 17) M = 0;

	while (M + sum < N) {
		No = M;
		for (int i = 0; i < count; i++) {
			Nb[i] = No % 10;
			No /= 10;
		}
		for (int i = 0; i < count; i++) {
			sum += Nb[i];
		}
		if (M + sum == N) {
			printf("%d", M);
			return 0;
		}
		sum = 0;
		M++;

	}

	printf("0");
	return 0;


}