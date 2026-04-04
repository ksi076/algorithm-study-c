#include <stdlib.h>
#include <stdio.h>



int main() {
    int N, M, temp = 0;
    int* pa;
    scanf("%d %d", &N, &M);
    pa = (int*)malloc(sizeof(int) * N);
    memset(pa, 0, sizeof(int) * N);
    int i, j;

    for (int b = 0; b < N; b++) {
        pa[b] = b+1;
    }

    for (int a = 0; a < M; a++) {
        scanf("%d %d", &i, &j);
        temp = pa[i-1];
        pa[i-1] = pa[j-1];
        pa[j-1] = temp;        
    }
    for (int a = 0; a < N; a++) {
        printf("%d ", pa[a]);
    }
    free(pa);
    return 0;
}