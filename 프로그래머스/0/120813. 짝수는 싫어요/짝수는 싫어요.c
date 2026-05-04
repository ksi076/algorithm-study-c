#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (n+1));
    memset(answer, 0, sizeof(int) * (n+1));
    int i = 1, j = 0;
    while(i < n+1) {
        if(i % 2 != 0) {
            answer[j] = i;
            j++;
        }
        i++;
    }
    return answer;
}