#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int dp[50001];

    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i] = i;  

        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    printf("%d\n", dp[n]);

    return 0;
}