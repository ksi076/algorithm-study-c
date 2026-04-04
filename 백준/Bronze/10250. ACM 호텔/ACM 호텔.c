#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int H,W,N,T;
	int z = 1;
	int cur = 101;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);

		while (1) {
			
			N--;
			if (N <= 0) break;
			z++;
			cur += 100;
			if (z > H) {
				cur = (cur - (100 * (H))) + 1;
				z = 1;
			}

			
		}
		printf("%d\n", cur);
        cur = 101;
        z = 1;




	}

	

	

	
	

		return 0;

}



