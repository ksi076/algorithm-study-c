#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {
	int num[8];
	int j = 1, no = 0, i = 0;
	int count = 0;

	for (i = 0; i < 8; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 8; i++) {
		if (num[i] == j) count++;
			j++;
	}
	if (count == 8) printf("ascending");
	else no++;

	j = 8;
	count = 0;
	for (i = 0; i < 8; i++) {
		if (num[i] == j) count++;
		j--;
	}
	if (count == 8) printf("descending");
	else no++;

	if (no == 2) printf("mixed");

	

	return 0;
}
	




