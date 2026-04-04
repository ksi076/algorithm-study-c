#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

	char str[9];
	char str2[9];
	char str3[9];
	char* pa[3] = { str,str2,str3 };
	char num[9] = { 0 };

	int jres = 0, result = 0;
	int k = 0;
	int count = 0;


	scanf("%s", str);
	getchar();
	scanf("%s", str2);
	getchar();
	scanf("%s", str3);


	for (int j = 0; j < 3; j++) {


		if (pa[j][0] >= '0' && pa[j][0] <= '9') {
			strcpy(num, pa[j]);
			jres = j;
			break;

		}
	}



	result = atoi(num);




	if (jres == 0) {
		result += 3;
	}
	else if (jres == 1) {
		result += 2;

	}
	else if (jres == 2) {
		result += 1;
	}

	if (result % 3 == 0 && result % 5 == 0) printf("FizzBuzz");
	else if (result % 3 == 0 && result % 5 != 0) printf("Fizz");
	else if (result % 3 != 0 && result % 5 == 0) printf("Buzz");
	else if (result % 3 != 0 && result % 5 != 0) printf("%d", result);

	return 0;


}



