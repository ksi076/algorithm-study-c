#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
	char name[21];
	char pwd[21];
}Site;


int compare(const void* a, const void* b) {
	Site* str1 = (Site*)a;
	Site* str2 = (Site*)b;

	return strcmp(str1->name, str2->name);
}

int binary_search(Site arr[], int size, char target[]) {
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = (left + right) / 2;
		int cmp = strcmp(arr[mid].name, target);

		if (cmp == 0) return mid;
		else if (cmp > 0) right = mid - 1;
		else left = mid + 1;

	}
	return -1;

}


int main() {
	Site *S;
	int N, M, num;
	char target[21];
	scanf("%d %d", &N, &M);
	S = (Site*)malloc(sizeof(Site) * N);

	for (int i = 0; i < N; i++) {
		scanf("%s %s", S[i].name, S[i].pwd);
		
	}


	qsort(S, N, sizeof(S[0]), compare);

	for (int i = 0; i < M; i++) {
		scanf("%s", target);

		num = binary_search(S, N, target);
		if (num != -1) printf("%s\n", S[num].pwd);
	}


	free(S);
	return 0;
	
	

}