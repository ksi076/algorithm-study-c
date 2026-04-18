#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char board[51][51];

int min(int a, int b) {
    return (a < b) ? a : b;
}

int check(int x, int y) {
    int countW = 0; 
    int countB = 0; 

    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if ((i + j) % 2 == 0) {
                if (board[i][j] != 'W') countW++;
                if (board[i][j] != 'B') countB++;
            }
            else {
                if (board[i][j] != 'B') countW++;
                if (board[i][j] != 'W') countB++;
            }
        }
    }

    return min(countW, countB);
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%s", board[i]);
    }

    int result = 64;

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int repaint = check(i, j);
            result = min(result, repaint);
        }
    }

    printf("%d\n", result);

    return 0;
}