#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare(const void* a, const void* b) {
	int* num1 = (int*)a;
	int* num2 = (int*)b;

	if (*num1 > *num2) return 1;
	else if (*num1 == *num2) return 0;
	else return -1;
}





int main() {
	int N, sum = 0, cnt[8001] = { 0 }, max = 0, index = 0, swi = 0;
	int range = 0, middle = 0, cnt399 = 0;
	double sumf = 0, middlef = 0;
	scanf("%d", &N);
	int* pa = (int*)malloc(sizeof(int) * N);


	for (int i = 0; i < N; i++) {
		scanf("%d", &pa[i]);
		sum += pa[i];
		if (pa[i] <= 0) {
			cnt[pa[i] + 4000]++;
		}
		else {
			cnt[pa[i] + 4000]++;
		}
		
	}
	
	max = cnt[0];
	for (int i = 0; i < 8001; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			index = i;
		}
	}
	
	for (int i = index+1; i < 8001; i++) {
		if (max == cnt[i]) {
			index = i;
			break;
		}
	}


	sumf =(double)sum / (double)N;
	sum = round(sumf);
	
	qsort(pa, N, sizeof(pa[0]), compare);
	
	
	middlef = (double)N / 2.0;
	middle = round(middlef) - 1;
	range = pa[N - 1] - pa[0];
	
	if (N == 1) middle = 0;

	printf("%d\n", sum);	
	printf("%d\n", pa[middle]);	
	if (index > 4000) { printf("%d\n", index - 4000); }
	else { printf("%d\n", index - 4000); }
	printf("%d\n", range);
	free(pa);
	return 0;
}