#include <stdlib.h>
#include <stdio.h>



int main() {
    int n;
    int* num;
    num = (int*)malloc(sizeof(int) * 30);
    memset(num, 0, sizeof(int) * 30);

    for (int i = 0; i < 28; i++) {
        scanf("%d", &n);
        num[n-1] = n;       
    }
    for (int i = 0; i < 30; i++) {
        if(num[i] == 0) printf("%d\n", i+1);
    }
    free(num);
    return 0;
}