#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int N;
	int cnt = 0;
	scanf("%d", &N);
	for (int i = N; i >= 1; i--) {
		if (i % 5 == 0 && i % 25 != 0 && i % 125 != 0) cnt++;
		else if (i % 25 == 0 && i % 125 != 0) cnt += 2;
		else if (i % 125 == 0) cnt += 3;


	}
	printf("%d", cnt);
}