#include <stdlib.h>
#include <stdio.h>



int main() {
    int N,max;
    int* s;
    double avg = 0,sum = 0;
    scanf("%d", &N);
    s = (int*)malloc(sizeof(int) * N);

    memset(s, 0, sizeof(int) * N);
    
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &s[i]);
    }
    max = s[0];
    for (int i = 1; i < N; i++) {
        if (max < s[i]) max = s[i];
    }
    for (int i = 0; i < N; i++) {
        sum += ((((double)s[i] / max)) * 100);
    }
    
    avg = sum / N;
    printf("%lf", avg);

    free(s);

    return 0;
}