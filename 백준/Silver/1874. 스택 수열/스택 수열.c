#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* target = (int*)malloc(sizeof(int) * n);
    int* stack = (int*)malloc(sizeof(int) * n);
    char* result = (char*)malloc(sizeof(char) * n * 2);

    for (int i = 0; i < n; i++) {
        scanf("%d", &target[i]);
    }

    int top = -1;
    int current = 1;
    int idx = 0;
    int possible = 1;

    for (int i = 0; i < n; i++) {
        int num = target[i];

        while (current <= num) {
            stack[++top] = current++;
            result[idx++] = '+';
        }

        if (stack[top] == num) {
            top--;
            result[idx++] = '-';
        }
        else {
            possible = 0;
            break;
        }
    }

    if (!possible) {
        printf("NO\n");
    }
    else {
        for (int i = 0; i < idx; i++) {
            printf("%c\n", result[i]);
        }
    }

    free(target);
    free(stack);
    free(result);

    return 0;
}