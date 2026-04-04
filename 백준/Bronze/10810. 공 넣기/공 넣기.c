#include <stdlib.h>
#include <stdio.h>



int main() {
    int N, M;
    int* pa;
    scanf("%d %d", &N, &M);
    pa = (int*)malloc(sizeof(int) * N);
    memset(pa, 0, sizeof(int) * N);
    int i, j, k;
    for (int a = 0; a < M; a++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int b = i-1; b < j; b++) {
            pa[b] = k;            
        }
    }
    for (int a = 0; a < N; a++) {
        printf("%d ", pa[a]);
    }
    free(pa);
    return 0;
}