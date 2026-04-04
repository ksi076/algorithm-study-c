
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	long long a, b, c;

	while (1) {

		scanf("%lld %lld %lld", &a, &b, &c);
		
		if (a == 0 && b == 0 && c == 0) break;

		((a * a) + (b*b) ==  c * c || (a * a) + (c * c) == b * b  || (c * c) + (b * b) == a * a) ? printf("right\n") : printf("wrong\n");

		


	}

	return 0;
}
	