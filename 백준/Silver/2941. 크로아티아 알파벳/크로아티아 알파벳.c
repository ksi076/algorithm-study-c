#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	char str[104];
	int i = 0, cnt = 0, count = 0, swi = 2;
	scanf("%s", str);

	while (str[i] != '\0') {
		i++;
		cnt++;
	}

	
	for (int i = 0; i < cnt; i++) {

		if (str[i] == '\0') break;

		if (str[i] == 'c') {
			if (str[i + 1] == '=' || str[i + 1] == '-') i += 1;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-') i += 1;
			else if (str[i + 1] == 'z' && str[i + 2] == '=') i += 2;
		}
		else if (str[i] == 'l' || str[i] == 'n') {
			if (str[i + 1] == 'j') i += 1;
		}
		else if (str[i] == 's' || str[i] == 'z') {
			if (str[i + 1] == '=') i += 1;
		}



		count++;
	}




		

	printf("%d", count);

	return 0;

}
