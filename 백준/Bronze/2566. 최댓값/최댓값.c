#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int num[9][9] = {0}, max = 0, mi = 0, mj = 0;

	for (int i = 0; i < 9; i++) {
        printf("\n");
		for (int j = 0; j < 9; j++) {
			scanf("%d", &num[i][j]);
			if (num[i][j] > max) {
				max = num[i][j];
				mi = i;
				mj = j;
			}
		}
	}

		printf("%d\n", max);
		printf("%d %d", mi + 1, mj + 1);

		return 0;
}
