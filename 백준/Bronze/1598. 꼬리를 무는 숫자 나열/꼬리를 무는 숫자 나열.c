#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int N1, N2;
    scanf("%d %d", &N1, &N2);

    int r1 = (N1 - 1) / 4;
    int c1 = (N1 - 1) % 4;

    int r2 = (N2 - 1) / 4;
    int c2 = (N2 - 1) % 4;

    printf("%d", abs(r1 - r2) + abs(c1 - c2));

    return 0;
}