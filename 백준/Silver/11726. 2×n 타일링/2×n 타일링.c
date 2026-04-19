#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int N;
	scanf("%d", &N);
	int cnt[1001] = { 0 };
	cnt[1] = 1;
	cnt[2] = 2;
	for (int i = 3; i <= 1001; i++) {
		cnt[i] = ((cnt[i - 1] + cnt[i - 2]) % 10007);
	}
	printf("%d", cnt[N]);
}