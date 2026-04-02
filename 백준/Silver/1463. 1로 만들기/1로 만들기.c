#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int minre(int a, int b) {
	return ((a > b) ?  b : a);
}


int main() {
	int N;
	scanf("%d", &N);

	int* pa = (int*)malloc(sizeof(int) * (N+1));
	memset(pa, 0, sizeof(int) * (N + 1));

	pa[0] = 0;
	pa[1] = 0;

	

	for (int i = 2; i <= N; i++) {
		pa[i] = pa[i - 1] + 1;
		

	//	if (i % 2 == 0 && i % 3 == 0) pa[i] = minre(pa[i / 2], pa[i / 3]);
		if (i % 2 == 0) pa[i] = minre(pa[i], (pa[i / 2] + 1));
		if (i % 3 == 0) pa[i] = minre(pa[i], (pa[i / 3] + 1));

	}

	printf("%d", pa[N]);
	free(pa);
	return 0;

}