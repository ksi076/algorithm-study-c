#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef struct {
	int key;
	int mom;
	int order;
}Person;

int main() {

	int N, cnt = 0;
	int max;
	scanf("%d", &N);
	Person* p;
	int *res;
	p = (Person*)malloc(sizeof(Person) * N);



	for (int i = 0; i < N; i++) {
		scanf("%d %d", &p[i].mom, &p[i].key);
		p[i].order = 0;
	}
	for (int i = 0; i < N; i++) {
		
		for (int j = 0; j < N; j++) {
			if (p[i].key < p[j].key && p[i].mom < p[j].mom) {
				cnt++;
			}
		}
		p[i].order = cnt + 1;
		cnt = 0;
	}



	for (int i = 0; i < N; i++) {
		printf("%d ", p[i].order);
	}
	free(p);
	return 0;
}