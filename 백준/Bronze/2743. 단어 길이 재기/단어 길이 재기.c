#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str;
	char* S;
	int i = 0, count = 0;
	S = (char*)malloc(101);
	memset(S, 0, 101);
	fgets(S, 101, stdin);
	
	S[strcspn(S, "\n")] = '\0';

	while (1) {
		if (S[i] == '\0') break;
		count++;
		i++;
	}

	printf("%d", count);
	free(S);
	return 0;

}