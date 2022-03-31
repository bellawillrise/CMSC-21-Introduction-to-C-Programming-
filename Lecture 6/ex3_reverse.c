/* Reverses a series of numbers */

#include <stdio.h>

#define N 10

int main(void){
   int a[N], i;

   printf("Enter %d numbers: \n", N);

   for (i = 0; i < N; i++) {
      printf("a[%d] = ", i);
      scanf("%d", &a[i]);
   }

   printf("In reverse order: \n");

   for (i = N - 1; i >= 0; i--) {
      printf("a[%d] = %d \n", i, a[i]);

   }

   printf("\n");

   return 0;
}

