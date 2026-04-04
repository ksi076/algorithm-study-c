#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char str;
	char* S;
	int count = 0, i = 0;
	S = (char*)malloc(1000001);
	memset(S, 0, 1000001);

	fgets(S, 1000001, stdin);
	S[strcspn(S, "\n")] = '\0';


	while (1) {
		if (S[i] == '\0') {
			if (S[0] != ' ') count++;
			break;
		}

		if (S[i] == ' ') {
			
			if (S[i + 1] != ' ' && S[i+1] != '\0') count++;
		}
		


		i++;
	}
	printf("%d", count);
	free(S);
	return 0;
}
