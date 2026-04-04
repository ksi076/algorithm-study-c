#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





int main() {
	int a, b, c, d, e;
	int res;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	res = (a*a + b*b + c*c + d*d + e*e) % 10;
	printf("%d", res);
	
	

	return 0;
} 

