#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int graph[101][101];
int visited[101];
int cnt = 0;
int N, pair;

void dfs(int v) {
    visited[v] = 1;

    for (int i = 1; i <= N; i++) {
        if (graph[v][i] == 1 && visited[i] == 0) {
            cnt++;
            dfs(i);
        }
    }
}

int main() {
    scanf("%d", &N);
    scanf("%d", &pair);

    for (int i = 0; i < pair; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    dfs(1);

    printf("%d\n", cnt);
    return 0;
}