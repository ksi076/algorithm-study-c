#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {

	int count = 0, i = 0,cnt = 0;
	char str[102];
	char rever[102];
	char stra[102];


	scanf("%s", str);
	while (str[i] != '\0') {
		count++;
		i++;
	}

	for (int j = 0; j < count; j++) {
		stra[j] = str[j];
	}
	i = 0;

	for (int j = count - 1; j >= 0; j--) {
		rever[i] = str[j];
		i++;
	}


	for (int i = 0; i < count; i++) {
		if (rever[i] == str[i]) cnt++;
	}

	(count == cnt) ? printf("1") : printf("0");



	return 0;



}
