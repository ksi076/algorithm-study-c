#include <stdio.h>

int main() {
    char ary[10] = {'\\',' ',' ',' ',' ','/','\\'};
    char ary2[10] = {' ',')',' ',' ','(',' ','\'',')'}; //백준 고양이
    char ary3[10] = {'(',' ',' ','/',' ',' ',')'};
    char ary4[10] = {' ','\\','(','_','_',')','|'};

    char *pa[4] = {ary, ary2, ary3, ary4};
    for(int i = 0; i < 4; i++) {
        while(*(pa[i]) != '\0') {
            printf("%c", *pa[i]++);
        }           
        printf("\n");
    }
    return 0;
}