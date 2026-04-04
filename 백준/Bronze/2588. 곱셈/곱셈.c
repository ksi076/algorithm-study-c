#include <stdio.h>

int main() {
    int A,B;
    int a,b,c;
    scanf("%d",&A);
    scanf("%d",&B);
    a = (B / 100);
    b = ((B / 10) % 10);
    c = (B % 10);

    printf("%d\n", c * A);
    printf("%d\n", b * A);
    printf("%d\n", a * A);
    printf("%d\n", (c * A) + ((b * A) * 10) + ((a * A) * 100));
}