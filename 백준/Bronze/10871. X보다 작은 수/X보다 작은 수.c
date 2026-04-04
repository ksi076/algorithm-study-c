#include <stdio.h>


int main() {
    int N, x, A[10000];
    scanf("%d %d", &N, &x);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++) {
        if (A[i] < x) printf("%d ", A[i]);
    }
    return 0;
}