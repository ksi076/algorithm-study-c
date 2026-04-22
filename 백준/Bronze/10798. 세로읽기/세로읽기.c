#define _CRT_SECURE_NO_WARNINGS
#import <stdio.h>
#import <stdlib.h>
#import <string.h>
#import <math.h>

int main() {
    char str[6][16];
    int j = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%s", str[i]);
    }

    while (j<15) {

        for (int i = 0; i < 5; i++) {
            if (j >= strlen(str[i])) continue;
            printf("%c", str[i][j]);
        }
        j++;
    }



    return 0;
}