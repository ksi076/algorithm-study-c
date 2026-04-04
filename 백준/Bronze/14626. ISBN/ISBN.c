#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[15];
	int st[13] = { 0 };
	int sum = 0;
	int m = 0;
	fgets(str, 15, stdin);
	int ires;
	str[strcspn(str, "\n")] = '\0';

	for (int i = 0; i < 13; i++) {
		st[i] = (int)str[i] - 48;
	}

	for (int i = 0; i < 13; i++) {

		if (st[i] < 0) {
			st[i] = 0;
			ires = i;
		}
		if (i % 2 == 0) st[i] *= 1;
		else st[i] *= 3;
		sum += st[i];
	}

	m = sum % 10;
	if (ires % 2 == 0) {
		for (int i = 0; i <= 9; i++) {
			if ((m + (i)) % 10 == 0) printf("%d", i);
		}
	}
	else {
		for (int i = 0; i <= 9; i++) {
			if ((m + (3 * i)) % 10 == 0) printf("%d", i);
		}
	}
	
	return 0;

}



