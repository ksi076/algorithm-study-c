#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
	int start;
	int end;
}time;


int compare(const void *a, const void* b) {
	time* n1 = (time *)a;
	time* n2 = (time *)b;

	if (n1->end > n2->end) return 1;
	else if (n1->end < n2->end) return - 1;
	else {
		if (n1->start > n2->start) return 1;
		else if (n1->start < n2->start) return -1;
		else return 0;
	}
}

int main() {
	time* T;
	int N;
	scanf("%d", &N);
	if (N == 1) {
		printf("1");
		free(T);
		return 0;
	}
	T = (time*)malloc(sizeof(time) * N);
	int cur = 0, cnt = 0;

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &T[i].start, &T[i].end);
	}

	qsort(T, N, sizeof(time), compare);

	cur = 0;
	for (int i = 0; i < N; i++) {
		
		if (cur <= T[i].start) {
			cnt++;
			cur = T[i].end;
		}
		else continue;
	}
	printf("%d", cnt);
	free(T);
	return 0;

}