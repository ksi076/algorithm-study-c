#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int N, num, count = 0;
	int* n;
	int j = 0;
	int soc = 0;
	scanf("%d", &N);
	n = (int*)malloc(sizeof(N) * N); 
	memset(n, sizeof(N) * N, 0);

	for (int i = 0; i < N; i++) {
		scanf("%d", &n[i]);	
	}

	
	for (int i = 0; i < N; i++) {
		for (int k = 1; k <= n[i]; k++) {
			if (n[i] % k == 0) count++;
				
			}
		if (count == 2) soc++;
		count = 0;
		}
			
	printf("%d", soc);
	free(n);
	return 0;
	
}


