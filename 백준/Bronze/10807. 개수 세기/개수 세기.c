#include <stdio.h>

int main() {
    int N, v, num[100], c = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &v);
    for (int i = 0; i < N; i++) {
        if (v == num[i]) c++;
    }
    printf("%d", c);
    return 0;
}