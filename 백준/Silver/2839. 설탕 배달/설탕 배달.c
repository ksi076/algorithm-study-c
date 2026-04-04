#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int N, Ntem, i = 0, count = 0;
	scanf("%d", &N);

	if (N == 4 || N == 7) {
		printf("-1");
		return 0;
	}

    if (N == 3) {
      printf("1");
      return 0;
    }
	
	
	Ntem = N;
	

	if (N % 5 == 0) printf("%d", N / 5);
	else if (N % 5 == 1) {
		for (int j = Ntem; j > 6; j -= 5) {
			count++;
		}
		
		count += 2;
		printf("%d", count);
		return 0;
	}
	else if (N % 5 == 2) {
		for (int j = Ntem; j > 12; j -= 5) {
			count++;
		}
		count += 4;
		printf("%d", count);
		return 0;
	}

	else if (N % 5 == 3) {
		for (int j = Ntem; j > 8; j -= 5) {
			count++;
		}
		count += 2;
		printf("%d", count);

	}
	else if (N % 5 == 4) {
		for (int j = Ntem; j > 9; j -= 5) {
			count++;
		}
		count += 3;
		printf("%d", count);
	}


	return 0;

}