#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


	char str;
	char* s;
	char al[27];
	int save[26], j = 0;
	s = (char*)malloc(101);
	memset(s, 0, 101);

	for (int i = 0; i < 26; i++) {
		save[i] = -1;
	}


	fgets(s, 101, stdin);
	s[strcspn(s, "\n")] = '\0';
	for (int i = 0; i < 26; i++) {
		al[i] = (char)(97 + i);
	}

	for (int i = 0; i < 26; i++) {
		while (1) {
			if (al[i] == s[j]) {
				save[i] = j;
				j = 0;
				break;
			}

			if (s[j] == '\0') {
				j = 0;
				break;
			}
			j++;

		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", save[i]);
	}


	return 0;
}