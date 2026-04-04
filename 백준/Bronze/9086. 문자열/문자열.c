#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int T,j = 0;
	char str;
	char* S;
	S = (char*)malloc(1001);
	memset(S, 0, 1001);
	scanf("%d", &T);
	getchar();

	for (int i = 0; i < T; i++) {
		fgets(S, 1001, stdin);
		S[strlen(S) - 1] = '\0';
		while (1) {
			if (S[j] == '\0') break;
			j++;
		}
		printf("%c%c\n", S[0], S[j - 1]);
		j = 0;
	}
	free(S);
	return 0;
}