#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 150

typedef struct {
	int priorty;
	int index;
}Doc;



typedef struct {
	Doc data[MAX];
	int front;
	int rear;
	int count;
}Queue;

int init(Queue* q) {
	q->front = 0;
	q->rear = 0;
	q->count = 0;
	return 0;
}

int empty(Queue* q) {
	if (q->rear == q->front) return 1;
	return 0;
}

int full(Queue* q) {
	if (((q->rear + 1) % MAX) == q->front) return 1;
	return 0;
}

int push(Queue* q, int value, int in) {
	if (full(q) == 1) return -1;
	q->data[q->rear].priorty = value;
	q->data[q->rear].index = in;
	q->rear = (q->rear + 1) % MAX;

	
	return 0;
}

int pop(Queue* q) {
	if (empty(q) == 1) return -1;
	int value = q->data[q->front].priorty;
	q->front = (q->front + 1) % MAX;
	return value;
}
int popin(Queue* q) {
	if (empty(q) == 1) return -1;
	int index = q->data[q->front].index;
	return index;
}



int front_value(Queue* q) {
	if (empty(q) == 1) return 0;
	return q->data[q->front].priorty;
}
int frontin_value(Queue* q) {
	if (empty(q) == 1) return 0;
	return q->data[q->front].index;
}

int back_value(Queue* q) {
	if (empty(q) == 1) return 0;
	return q->data[(q->rear - 1 + MAX) % MAX].priorty;
}

int compare(const void* a, const void* b) {
	int* n1 = (int*)a;
	int* n2 = (int*)b;

	if (*n1 < *n2) return 1;
	else if (*n1 == *n2) return 0;
	else return -1;
}





int main() {
	Queue q;
	init(&q);
	int N, M, T, num, cnt =0, k = 0, tem, temin;
	scanf("%d", &T);

	while (T--) {
		scanf("%d %d", &N, &M);
		int* pa = (int*)malloc(sizeof(int) * N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &num);
			push(&q, num, i);
			pa[i] = num;
		}

		qsort(pa, N, sizeof(pa[0]), compare);

		while (1) {


			while (front_value(&q) != pa[k]) {
				temin = popin(&q);
				tem = pop(&q);
				push(&q, tem, temin);
			}

			if (frontin_value(&q) == M) {
				printf("%d\n", cnt + 1);
				break;
			}
			pop(&q);
			k++;
			cnt++;

		}


		
		free(pa);
		
		cnt = 0;
		init(&q);
		k = 0;

	}


	return 0;


}
