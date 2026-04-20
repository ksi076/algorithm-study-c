#define _CRT_SECURE_NO_WARNINGS
#import <stdio.h>
#import <stdlib.h>
#import <string.h>
#import <math.h>

int main() {
    int N;
    scanf("%d", &N);

    int *dp = (int *)malloc(sizeof(int) * (N+1));
    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 5;
    for (int i = 4; i <= N; i++) {
        dp[i] = ((dp[i-1] + (2 * dp[i-2])) % 10007);
    }
    printf("%d\n", dp[N]);
}