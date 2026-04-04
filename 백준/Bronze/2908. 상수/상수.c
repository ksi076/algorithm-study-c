#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	A = (A / 100) + (((A % 100) / 10) * 10) + (((A % 100) % 10) * 100);
	B = (B / 100) + (((B % 100) / 10) * 10) + (((B % 100) % 10) * 100);

	(A >= B) ? printf("%d", A)  : printf("%d", B);
	
	
	return 0;

}
