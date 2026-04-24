#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[257];

    while (1) {
        fgets(str, sizeof(str), stdin);

        if (str[0] == '#') break;

        int cnt = 0;

        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}