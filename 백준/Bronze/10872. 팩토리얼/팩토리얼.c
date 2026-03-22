#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int N;
	long long sum = 1;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		sum *= i;
	}
	printf("%lld", sum);
}