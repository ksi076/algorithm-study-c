#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int compare(const void* a, const void* b) {
   int* pa = (int*)a;
   int* pa2 = (int*)b;

   return *pa - *pa2;
}


int main() {
   float score = 0;
   float res;
   int N, cnt = 0, sumr;
   float de;
   scanf("%d", &N);

   if (N == 0) {
      printf("0");
      return 0;
   }
   float sum = 0;
   int* pa = (int*)malloc(sizeof(int) * N);

   for (int i = 0; i < N; i++) {
      scanf("%d", &pa[i]);
   }
   qsort(pa, N, sizeof(pa[0]), compare);
   de = N * 0.15;
   de = round(de);



   for (int i = (int)de; i < N - (int)de; i++) {
      cnt++;
      sum += pa[i];
   }

   
   sum /= cnt;
   sum = round(sum);
   sumr = (int)sum;
   printf("%d", sumr);

   free(pa);
   return 0;
}



