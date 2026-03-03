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

int upper(int arr[], int size, int target) {
	
	int left = 0;
	int right = size;

	while (left < right) {
		int mid = (left + right) / 2;
		if (arr[mid] > target) {
			right = mid;
		}
		else left = mid + 1;		
	}
	return left;
}

int lower(int arr[], int size, int target) {
	int left = 0;
	int right = size;

	while (left < right) {
		int mid = (left + right) / 2;
		if (arr[mid] >= target) {
			right = mid;
		}
		else left = mid + 1;
	}
	return left;
}


int main() {
	int N, M, lo, ma;
	scanf("%d", &N);
	int* pa = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &pa[i]);
	}
	
	qsort(pa, N, sizeof(pa[0]), compare);

	scanf("%d", &M);
	int* pa2 = (int*)malloc(sizeof(int) * M);

	for (int i = 0; i < M; i++) {
		scanf("%d", &pa2[i]);
		lo = lower(pa, N, pa2[i]);
		ma = upper(pa, N, pa2[i]);
		pa2[i] = ma - lo;
	}

	
	for (int i = 0; i < M; i++) {
		printf("%d ", pa2[i]);
	}
	free(pa);
	free(pa2);
	return 0;
	
	

}