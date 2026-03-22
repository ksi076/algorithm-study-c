#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char d[500001][21];
char b[500001][21];

int compare(const void* a, const void* b) {
    return strcmp((char*)a, (char*)b);
}

int binary_search(char arr[][21], int size, char target[]) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(arr[mid], target);

        if (cmp == 0) return mid;
        else if (cmp < 0) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int N, M, tem, cnt = 0;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%s", d[i]);
    }

    for (int i = 0; i < M; i++) {
        scanf("%s", b[i]);
    }

    qsort(d, N, sizeof(d[0]), compare);
    qsort(b, M, sizeof(b[0]), compare);

    for (int i = 0; i < N; i++) {
        tem = binary_search(b, M, d[i]);
        if (tem != -1) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    for (int i = 0; i < N; i++) {
        tem = binary_search(b, M, d[i]);
        if (tem != -1) {
            printf("%s\n", d[i]);
        }
    }

    return 0;
}