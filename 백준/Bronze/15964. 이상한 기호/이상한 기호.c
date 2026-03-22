#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	long long num;

	num = (A + B) * (A - B);

	printf("%lld", num);

	
}