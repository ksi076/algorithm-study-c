#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int N1, N2, i = 1, j = 1, exi = 0, best = 0;
  scanf("%d %d", &N1, &N2);

while (i < N1 + 1 && i < N2 + 1) {
	if ((N1 % i) == 0 && (N2 % i) == 0) {
		best = i;
	}
	i++;
}

  i = 1;
printf("%d\n", best);

while (exi != 1) {

	for (int j = 1; j <= i; j++) {
		if (N1 * i == N2 * j) {
			printf("%d\n", N1 * i);
			exi++;
			break;
		}
		else if (N1 * j == N2 * i) {
			printf("%d\n", N1 * j);
			exi++;
			break;
		}
	}
	i++;
}

return 0;


}