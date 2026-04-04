#include <stdio.h>
#include <string.h>

int main() {
    char s1[12];        
    char s2[12];
    char s3[12];
    char s4[12];
    char s5[12];
    char *pa[5] = {s1,s2,s3,s4,s5};

    strcpy(s1, "|\\_/|");
    strcpy(s2, "|q p|   /}");
    strcpy(s3, "( 0 )\"\"\"\\");
    strcpy(s4, "|\"^\"`    |");
    strcpy(s5,"||_/=\\\\__|");

    for(int i = 0; i < 5; i++) {
        printf("%s\n", pa[i]);
    }    
}