#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int S[20] = { 0 };
	int num, M;
	char tem[20];
	char op[12];
	scanf("%d", &M);
	getchar();

	while (M--) {
		fgets(tem, 12, stdin);
		
		sscanf(tem, "%s %d",op, &num);
		if ((strcmp(op, "all") == 0) || strcmp(op, "empty") == 0) num = 0;


		if (strcmp(op, "add") == 0) {
			if (S[num - 1] != 0) continue;
			S[num - 1] = num;
		}
		else if (strcmp(op, "check") == 0) {
			if (S[num - 1] != 0) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(op, "remove") == 0) {
			if (S[num - 1] == 0) continue;
			S[num - 1] = 0;
		}
		else if (strcmp(op, "toggle") == 0) {
			if (S[num - 1] != 0) {
				S[num - 1] = 0;
				continue;
			}
			S[num - 1] = num;
		}
		else if (strcmp(op, "all") == 0) {
			for (int i = 0; i < 20; i++) {
				S[i] = i + 1;
			}
		}
		else if (strcmp(op, "empty") == 0) {
			for (int i = 0; i < 20; i++) {
				S[i] = 0;
			}
		}
	}

	return 0;
}