#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int compare(const void* a, const void* b) {
	int* n1 = (int*)a;
	int* n2 = (int*)b;

	if (*n1 > *n2) return 1;
	else if (*n1 == *n2) return 0;
	else return -1;
}



int main() {
	
	int N, sum = 0, csum = 0;
	scanf("%d", &N);

	int* cost = (int*)malloc(sizeof(int) * N);
	

	
	for (int i = 0; i < N; i++) {
		scanf("%d", &cost[i]);
		
	}
	qsort(cost, N, sizeof(cost[0]), compare);

	for (int i = 0; i < N; i++) {
		sum += cost[i];
		csum += sum;
	}

	printf("%d", csum);

	free(cost);
	return 0;

}