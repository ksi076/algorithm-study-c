#include <stdio.h>
#include <stdlib.h>


int main() {
    int N,min,max;
    int* num;

    scanf("%d", &N);
    num = (int*)malloc(sizeof(int) * N);
    if (num == NULL) {
        return 0;
    }
    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
   
    min = num[0];
    for (int i = 0; i < N; i++) {
        if (min > num[i]) min = num[i];
    }
    max = num[0];
    for (int i = 0; i < N; i++) {
        if (max < num[i]) max = num[i];
    }
    printf("%d %d\n", min, max);
    
    free(num);
    return 0;


}