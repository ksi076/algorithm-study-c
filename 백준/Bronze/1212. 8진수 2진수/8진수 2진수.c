#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int swi = 0;
    char num[333400];
    int swif = 0;

    scanf("%s", num);

    int len = strlen(num);

    if (len == 1 && num[0] == '0') {
        printf("0");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        int tem[3] = { 0 };
        int N = num[i] - '0';

        while (N > 0) {
            if (N >= 4) {
                N -= 4;
                tem[0] = 1;
            }
            else if (N >= 2) {
                N -= 2;
                tem[1] = 1;
            }
            else {
                N -= 1;
                tem[2] = 1;
            }
        }

        for (int j = 0; j < 3; j++) {
            if (tem[j] == 1 && swif == 0) {
                swi = 1;
            }

            if (swi == 1 || swif == 1) {
                printf("%d", tem[j]);
            }
        }

        swif = 1;
        swi = 0;
    }

    return 0;
}