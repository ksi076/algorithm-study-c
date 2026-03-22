#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	long long N, M, dif;
	scanf("%lld %lld", &N, &M);
	dif = N - M;
	if (dif < 0) dif *= -1;
	printf("%lld", dif);
}