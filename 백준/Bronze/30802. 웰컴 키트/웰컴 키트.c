#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	
	long long N;			
	int res[6] = { 0 };
	int T, P;

	int count = 0;
	int sp, sp2;

	scanf("%lld", &N);
	for (int i = 0; i < 6; i++) {
		scanf("%d", &res[i]);
	}
	scanf("%d %d", &T, &P);		//T -> 티셔츠 묶음   P -> 펜 묶음

	sp = N / P;
	sp2 = N % P;

	for (int j = 0; j < 6; j++) {

		if ((res[j] % T) != 0) {
			count += ((res[j] / T) + 1);
			
		}
		else if(res[j] % T == 0) {
			count += (res[j] / T);
			
		}
	}
  
	printf("%d\n", count);
	printf("%d %d", sp, sp2);



	return 0;
}



