#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char str[81];
	int T, count = 0,j = 0, sum = 0;

	scanf("%d", &T);
	getchar();
	
	for (int i = 0; i < T; i++) {
		fgets(str, 81, stdin);
		str[(strcspn(str, "\n"))] = '\0';
		
		while (1) {
			if (str[j] == '\0') break;
			if (str[j] == 'O') {
					count++;
					sum += count;
				}
			
			else if (str[j] == 'X') count = 0;
			j++;
		}
		printf("%d\n", sum);
		sum = 0;
		count = 0;
		j = 0;
	}
	return 0;
}



 
