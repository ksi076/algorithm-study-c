#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare(const void* a, const void* b) {
	int* n1 = (int*)a;
	int* n2 = (int*)b;
	if (*n1 < *n2) return 1;
	else if (*n1 == *n2) return 0;
	else return -1;
}

int main() {
	int N, K, j = 0, cnt = 0;
	scanf("%d %d", &N, &K);
	
	int* pa = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {	
		scanf("%d", &pa[i]);
	}
	qsort(pa, N, sizeof(pa[0]), compare);

	while (K != 0) {
		if (K < pa[j]) j++;
		else if (K >= pa[j]) {
			K -= pa[j];
			cnt++;
			continue;
		}
	}

	printf("%d", cnt);
	free(pa);


	

	return 0;
}