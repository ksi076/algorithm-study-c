#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char str[21];
	int T, j = 0;
	scanf("%d", &T);
	int R;
	

	
	for (int i = 0; i < T; i++) {
		scanf("%d", &R);
		getchar();
		fgets(str, 21, stdin);
		str[strcspn(str, "\n")] = '\0';
		while (1) {

			if (str[j] == '\0') {
				j = 0;
				break;
			}

			for (int i = 0; i < R; i++) {
				printf("%c", str[j]);
			}
			
			j++;
		}
		printf("\n");
	}
	return 0;
}
