#include <stdio.h>

int main() {
    int ayear, kyear= 0;
    scanf("%d", &ayear);
    kyear = ayear - (2541 - 1998);
    printf("%d", kyear);
    
    return 0;
}
