#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *S;
    int i;

    S = (char *)malloc(1001);
    memset(S, 0, 1001);
 
  
    fgets(S, 1001, stdin);

    scanf("%d", &i);
    printf("%c", S[i-1]);

    free(S);
    return 0;
}

