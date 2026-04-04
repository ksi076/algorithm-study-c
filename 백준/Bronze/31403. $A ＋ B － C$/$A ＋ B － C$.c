#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





int main() {
	int A, B, C,c = 1;



	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	
	
	printf("%d\n", A + B - C);
	
	for (int i = 10; i<=B; i *= 10) {
		c += 1;	
	}
	A = A * pow(10,c);
	printf("%d\n", A + B - C);

	return 0;
} 

