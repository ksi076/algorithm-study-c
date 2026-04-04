#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char str[101];
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = (int)str[i] - 32;
		}
		else str[i] = (int)str[i] + 32;
		printf("%c", str[i]);
	}

	
}