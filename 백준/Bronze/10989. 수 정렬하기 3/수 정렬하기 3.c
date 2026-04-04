#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




int main() {
	int N, number;
	scanf("%d", &N);
	int num[10001] = { 0, };

	
	for (int i = 1; i <= N; i++) {
		scanf("%d", &number);
		num[number]++;
	}


	for (int k = 1; k <= 10000; k++) {
		if (num[k] != 0) {
			for (int l = 0; l < num[k]; l++) {
					printf("%d\n", k);
				}
			}
		}

	return 0;

}
