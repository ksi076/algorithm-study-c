#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





int main() {
	int A, B, C, mul, count = 1, tem;
	int num[10] = { 0 };
	scanf("%d", &A);
	scanf("%d",&B);
	scanf("%d", &C);
	mul = A * B * C;
	

	for (int i = 10; i <= mul; i *= 10) count++;
		
	
	while (1) {

		for (int i = 0; i < count; i++) {
			tem = mul % 10;
			for (int j = 0; j < 10; j++) {
				if (tem == j) num[j]++;
			}
			mul /= 10;
		}
		if (mul <= 0) break;

	}

	


	for (int i = 0; i < 10; i++) printf("%d\n", num[i]);
	

	return 0;
} 
 
