#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>






typedef struct {
	char name[21];
	int num;
}pokemon;

int compare(const void* a, const void* b) {
	pokemon* str = (pokemon*)a;
	pokemon* str2 = (pokemon*)b;
	return strcmp(str->name, str2->name);
}



pokemon P[100001];
pokemon sort[100001];


int binary_search(pokemon arr[], int size, char target[]) {
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = (left + right) / 2;
		int cmp = strcmp(arr[mid].name, target);

		if (cmp == 0) return arr[mid].num;
		else if (cmp < 0) left = mid + 1;
		else right = mid - 1;
	}
	return -1;


}

int main() {
	
	int N,M;
	char test[21];
	scanf("%d %d", &N, &M);
	


	for (int i = 0; i < N; i++) {
		
		scanf("%s", P[i].name);
		strcpy(sort[i].name, P[i].name);
		P[i].num = i + 1;
		sort[i].num = i + 1;

	}

	qsort(sort, N, sizeof(sort[0]), compare);
	for (int i = 0; i < M; i++) {
		scanf("%s", test);
		if (atoi(test) != 0) {
			printf("%s\n", P[atoi(test)-1].name);
		}
		else {
			printf("%d\n", binary_search(sort, N, test));
			
			
		}
		
	}
	


	return 0;

}