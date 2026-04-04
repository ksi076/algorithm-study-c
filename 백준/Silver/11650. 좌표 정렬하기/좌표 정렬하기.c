#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int compare(const void* a, const void* b) {

	
	int* p1 = (int*)a;
	int* p2 = (int*)b;

	if (p1[0] > p2[0]) return 1;
	if (p1[0] < p2[0]) return -1;
	if (p1[0] == p2[0]) {
		if (p1[1] > p2[1]) return 1;
		else if (p1[1] < p2[1]) return -1;
	}
}

int main() {
	int xy[100000][2];
	int N;
	scanf("%d", &N);

	

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &xy[i][0], &xy[i][1]);
	}
	

	qsort(xy, N, sizeof(xy[0]), compare);

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", xy[i][0], xy[i][1]);
	}


	return 0;

}