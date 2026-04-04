#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int N1, N2;

	while (1) {
		scanf("%d %d", &N1, &N2);
		if (N1 == 0 && N2 == 0) break;
		if (N2 % N1 == 0) {
			printf("factor\n");
			continue;
		}
		else if (N1 % N2 == 0) {
			printf("multiple\n");
		}

		else if (N2 % N1 != 0 && N1 % N2 != 0) {
			printf("neither\n");
		}

	}

	return 0;

}
