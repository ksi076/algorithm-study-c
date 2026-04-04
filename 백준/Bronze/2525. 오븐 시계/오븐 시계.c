#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    for(int i = 0; i < C; i++) {
        B++;
        if(B == 60) {
            B = 0;
            if(A == 23) A = -1;
            A++;            
        }       
    }

    printf("%d %d",A, B);
}