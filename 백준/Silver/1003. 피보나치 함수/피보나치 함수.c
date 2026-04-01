#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {

	int T;
	int N;
	int* zero = (int*)malloc(sizeof(int) * 41);
	int* one = (int*)malloc(sizeof(int) * 41);
	memset(zero, 0, sizeof(int) * 41);
	memset(one, 0, sizeof(int) * 41);
	scanf("%d", &T);
	zero[0] = 1;
	zero[1] = 0;

	one[0] = 0;
	one[1] = 1;

	for (int i = 2; i < 41; i++) {
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}


	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		
		printf("%d %d\n", zero[N], one[N]);
	}

	free(zero);
	free(one);
	return 0;
}