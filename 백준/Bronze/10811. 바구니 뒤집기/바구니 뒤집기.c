#include <stdlib.h>
#include <stdio.h>



int main() {
    int N, M, i, j, c,temp;
    int* pa;
    scanf("%d %d", &N, &M);
    pa = (int*)malloc(sizeof(int) * N);
    memset(pa, 0, sizeof(int) * N);

    for (int a = 0; a < N; a++) {
        pa[a] = a + 1;
    }

    for (int a = 0; a < M; a++) {
        scanf("%d %d", &i, &j);
        c = i-1;
        for (int b = j-1; b > c; b--) {
            temp = pa[c];
            pa[c] = pa[b];
            pa[b] = temp;
            c++;
        }
    }
    
    for (int a = 0; a < N; a++) {
        printf("%d ", pa[a]);
    }

    free(pa);

    return 0;
}