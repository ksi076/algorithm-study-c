#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str;
	char* S;
	int i = 0, sum = 0, alpha = 65;
	

	S = (char*)malloc(16);
	memset(S, 0, 16);
	
	fgets(S, 16, stdin);
	S[strcspn(S, "\n")] = '\0';

	while (1) {
		if (S[i] == '\0') break;
		while (1) {
			if (S[i] == 'S') {
				sum += 8;
				break;
			}
			if (S[i] == 'Z') {
				sum += 10;
				break;
			}
			if (S[i] == 'T' || S[i] == 'U' || S[i] == 'V') {
				sum += 9;
				break;
			}
			if (S[i] == 'W' || S[i] == 'X' || S[i] == 'Y') {
				sum += 10;
				break;
			}


			if (S[i] == (char)alpha) {
				if ((alpha - 65) % 3 == 0) {
					if (alpha - 65 == 0) {
						sum += 3;
						alpha = 65;
						break;
					}
					sum += 2;
					for (int j = 65; j <= alpha; j = j + 3) { sum += 1; }
					alpha = 65;
					break;
				}
				else if ((alpha - 66) % 3 == 0) {
					if (alpha - 66 == 0) {
						sum += 3;
						alpha = 65;
						break;
					}
					sum += 2;
					for (int j = 66; j <= alpha; j = j + 3) { sum += 1; }
					alpha = 65;
					break;
				}
				else if ((alpha - 67) % 3 == 0) {
					if (alpha - 67 == 0) {
						sum += 3;
						alpha = 65;
						break;
					}
					sum += 2;
					for (int j = 67; j <= alpha; j = j + 3) { sum += 1; }
					alpha = 65;
					break;
				}
			}
			alpha++;

		}
		i++;
	}
	

	
	printf("%d", sum);
	free(S);
	return 0;

}

