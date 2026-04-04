#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int num[6] = { 0 };
	int res[6] = { 0 };
	for (int i = 0; i < 6; i++) {
		scanf("%d", &num[i]);
	}


	for (int i = 0; i < 2; i++) {
		if (num[i] == 1) res[i] = 0;
		else if (num[i] > 1) res[i] = 1 - num[i];
		else if (num[i] < 1) res[i] = 1 - num[i];
	}

	for (int i = 2; i < 5; i++) {
		if (num[i] == 2) res[i] = 0;
		else if (num[i] > 2) res[i] = 2 - num[i];
		else if (num[i] < 2) res[i] = 2-num[i];
	}
	if (num[5] == 8) res[5] = 0;
	else if (num[5] > 8) res[5] = 8 - num[5];
	else if (num[5] < 8) res[5] = 8 - num[5];

	for (int i = 0; i < 6; i++) {
		printf("%d ", res[i]);
	}


	
	return 0;
}


