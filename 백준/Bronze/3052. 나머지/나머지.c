#include <stdio.h>

int main() {
    int A, B[10], count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &A);
        B[i] = A % 42;
    }
    for (int i = 0; i < 42; i++) {
        for (int j = 0; j < 10; j++) {
            if (B[j] == i) {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}