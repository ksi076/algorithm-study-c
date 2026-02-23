#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



typedef struct {
	int front;
	int rear;
}Queue;

int data[1000000];

int init(Queue* q) {
	q->front = 0;
	q->rear = -1;
	return 0;
}

int empty(Queue* q) {
	if (q->front > q->rear) return 1;
	return 0;
}

int full(Queue* q) {
	if (q->rear == 9999999) return 1;
	return 0;
}

int push(Queue* q, int value) {
	if (full(q) == 1) return -1;
	return data[++(q->rear)] = value;
}

int pop(Queue* q) {
	if (empty(q) == 1) return -1;
	return data[(q->front)++];
}

int front_value(Queue* q) {
	if (empty(q) == 1) return -1;
	return data[q->front];
}

int back_value(Queue* q) {
	if (empty(q) == 1) return -1;
	return data[q->rear];
}

int size(Queue* q) {
	if (empty(q) == 1) return 1;
	return q->rear + 1 - q->front;
}



int main() {
	Queue q;
	init(&q);
	int N;
	int tem;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		push(&q,i);
	}

	while (size(&q) > 1) {
		pop(&q);
		tem = front_value(&q);
		pop(&q);
		push(&q, tem);
	}

	printf("%d", front_value(&q));
}

