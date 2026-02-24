#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 200

typedef struct {
	char data[MAX];
	int top;
}Stack;

int init(Stack* s) {
	s->top = -1;
	return 0;
}
int empty(Stack* s) {
	if (s->top == -1) return 1;
	return 0;
}
int full(Stack* s) {
	if (s->top == MAX - 1) return 1;
	return 0;
}

int push(Stack* s, char value) {
	if (full(s) == 1) return -1;
	return s->data[++(s->top)] = value;
}

int pop(Stack* s) {
	if (empty(s) == 1) return -1;
	return s->data[(s->top)--];
}

int peek(Stack* s) {
	if (empty(s) == 1) return -1;
	return s->data[s->top];
}

int size(Stack* s) {
	if (empty(s) == 1) return 0;
	return s->top + 1;
}


int main() {
	Stack s;
	init(&s);
	char str[51];
	int j = 0;
	int N, cnt = 0;
	scanf("%d", &N);
	while (N--) {
		scanf("%s", str);
		while (str[j] != '\0') {
			if (str[j] == '(') {
				push(&s, '(');
			}
			if (str[j] == ')') {
				if (empty(&s) != 1) {
					pop(&s);
				}
				else cnt++;
			}		
			j++;
		}
		if (size(&s) == 0 && cnt == 0) printf("YES\n");
		else printf("NO\n");
		j = 0;
		cnt = 0;
		init(&s);
	}

}