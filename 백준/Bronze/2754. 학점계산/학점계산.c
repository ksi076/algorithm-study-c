#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char str[4];
	scanf("%s", str);
	if (str[0] == 'A') {
		if (str[1] == '+') printf("%.1f", 4.3);
		if (str[1] == '0') printf("%.1f", 4.0);
		if (str[1] == '-') printf("%.1f", 3.7);
	}

	else if (str[0] == 'B') {
		if (str[1] == '+') printf("%.1f", 3.3);
		if (str[1] == '0') printf("%.1f", 3.0);
		if (str[1] == '-') printf("%.1f", 2.7);
	}
	else if (str[0] == 'C') {
		if (str[1] == '+') printf("%.1f", 2.3);
		if (str[1] == '0') printf("%.1f", 2.0);
		if (str[1] == '-') printf("%.1f", 1.7);
	}
	else if (str[0] == 'D') {
		if (str[1] == '+') printf("%.1f", 1.3);
		if (str[1] == '0') printf("%.1f", 1.0);
		if (str[1] == '-') printf("%.1f", 0.7);
	}
	else printf("%.1f", 0.0);
	return 0;
}