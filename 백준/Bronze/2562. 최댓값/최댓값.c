#include <stdio.h>



int main() {
    int N[9], in, max, c = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &N[i]);
    }
    max = N[0];
    for (int i = 0; i < 9; i++) {
        if (max < N[i]) {
            max = N[i];
                in = i;
                c++;
        }
    }
    if (c == 0) in = 0;
    printf("%d\n", max);
    printf("%d\n", in+1);

    return 0;
}