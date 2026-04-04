#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int V, A, B;
	scanf("%d %d %d", &A, &B, &V);
	int res;
	int a;

	res = V - A;
	a = (res % (A - B)) == 0 ? (res / (A - B)) + 1 : (res / (A - B)) + 2;

	printf("%d", a);

	return 0;

	
	
}
