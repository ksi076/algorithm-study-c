#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int T,k,n,sum = 0;
	int hu[15][15] = { 0 };
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &k);
		scanf("%d", &n);

		for (int i = 1; i <= n; i++) {
			hu[0][i] = i;
		}


		for (int i = 1; i < 15; i++) {
			for (int j = 1; j < 15; j++) {
				sum += hu[i - 1][j];
				hu[i][j] = sum;
			}
			sum = 0;
		}


		printf("%d\n", hu[k][n]);

	}
	return 0;
}
