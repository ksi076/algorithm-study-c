#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	
	int N, sum = 0;
	char* n;
	
	scanf("%d", &N);
	n = (char*)malloc(sizeof(char) * N);
	memset(n, 0, sizeof(char) * N);

	for (int i = 0; i < N; i++) {
		scanf(" %c", &n[i]);
		sum += ((int)n[i]) - 48;
	}
	
	
	printf("%d", sum);
	free(n);
	return 0;
}