#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int N, count = 0, Ntem, Ntem2;
	int j = 0 , c = 0;
	
	while (1) {

	scanf("%d", &N);

	int* pa = (int*)malloc(sizeof(int) * N);
	memset(pa, 0, sizeof(int) * N);
	int* pa2 = (int*)malloc(sizeof(int) * N);
	memset(pa2, 0, sizeof(int) * N);



	if (N == 0) return 0;
	Ntem = N;
	Ntem2 = N;
	for (int i = 1; i <= N; i *= 10) {
		count++;
	}

	

	for (int i = 0; i < count; i++) {
		pa[i] = Ntem % 10;
		Ntem /= 10;
	}



	for (int i = count - 1; i >= 0 ; i--) {
		pa2[i] = pa[j];

			j++;
	}
	


	for (int i = 0; i < count; i++) {
		if (pa[i] == pa2[i]) c++;
	}



	if (c == count) printf("yes\n");
		

	
	else if (c != count) printf("no\n");

	
	free(pa);
	free(pa2);
	count = 0;
	j = 0;
	c = 0;
	}
	return 0;
}
	
