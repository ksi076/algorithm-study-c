#include <stdio.h>

int main() {
    int A, B, C, money = 0;
    scanf("%d %d %d", &A, &B, &C);
    if((A==B) && (B==C)) {
        money += 10000 + (1000 * A);                        
    }
    else if((A==B) || (B==C) || (A==C)) {
        if(A==B) money += 1000 + (A * 100);
        else if(B==C) money += 1000 + (B * 100);
        else money += 1000 + (A * 100);
    }
    else {
        if(A>B && A>C) money = (A * 100);
        else if(B>A && B>C) money = (B * 100);
        else money = (C * 100);
    }
    printf("%d", money);
    return 0;
    
}