#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char clo[21];
    char psy[21];
} per;

int main() {
    per* P;
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        P = (per*)malloc(sizeof(per) * N);

        int count[31] = { 0 };
        char mir[31][21] = { 0 };
        int kindCount = 0;  

        for (int i = 0; i < N; i++) {
            scanf("%s %s", P[i].clo, P[i].psy);
        }

        for (int i = 0; i < N; i++) {
            int tem = -1;

            
            for (int j = 0; j < kindCount; j++) {
                if (strcmp(mir[j], P[i].psy) == 0) {
                    tem = j;
                    break;
                }
            }

            
            if (tem == -1) {
                strcpy(mir[kindCount], P[i].psy);
                count[kindCount] = 1;
                kindCount++;
            }
        
            else {
                count[tem]++;
            }
        }

        int result = 1;
        for (int i = 0; i < kindCount; i++) {
            result *= (count[i] + 1);
        }

        printf("%d\n", result - 1);

        free(P);
    }

    return 0;
}