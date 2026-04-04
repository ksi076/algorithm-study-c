#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);
    for(int i = 0; i < 45; i++) {
        M--;
        if(M < 0) {
            M=59;
            H--;
        }
        if(H<0) H=23;
       
    }    
    printf("%d %d", H , M);
}

