#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    int N;
    long long M;
    scanf("%d %lld", &N, &M);

    int tree[1000000];
    int max_h = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &tree[i]);
        if (tree[i] > max_h) max_h = tree[i];
    }

    long long left = 0;
    long long right = max_h;
    long long answer = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long sum = 0;

        for (int i = 0; i < N; i++) {
            if (tree[i] > mid) {
                sum += (tree[i] - mid);
            }
        }

        if (sum >= M) {
            answer = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    printf("%lld\n", answer);
    return 0;
}