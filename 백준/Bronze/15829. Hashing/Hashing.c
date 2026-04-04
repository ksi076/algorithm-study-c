#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


long long gob(long long n, int c) {
	
	int M = 1234567891;
	long long num = 1;
	for (int i = 0; i < c; i++) {
		num = (num * n) % M;
	}
	return num;
}


int main() {

	int r = 31, M = 1234567891;
	int L;
	long long sum = 0;

	scanf("%d", &L);
	getchar();
	char* pa;
	long long* num;
	pa = (char*)malloc(L+1);
	memset(pa, 0, L+1);
	num = (long long*)malloc(sizeof(long long) * L);
	memset(num, 0, sizeof(long long) * L);

	fgets(pa, L+1, stdin);
	pa[(strcspn(pa, "\n"))] = '\0';

	for (int i = 0; i < L; i++) {
		num[i] = (long long)pa[i] - 96;
	}

	for (int i = 0; i < L; i++) {
		sum = (sum + (num[i] * gob(r, i)) % M) % M;
	}


	printf("%lld", sum);
	free(pa);
	free(num);

	return 0;

}

	
