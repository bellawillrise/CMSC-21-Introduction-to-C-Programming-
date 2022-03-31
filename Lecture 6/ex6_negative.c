/* Finds the negative numbers in an array */

#include <stdio.h>

int main(void){
   int N, i;

   printf("Enter N: ", N);
   scanf("%d", &N);

   int a[N];

   for (i = 0; i < N; i++) {
      printf("a[%d] = ", i);
      scanf("%d", &a[i]);
   }

   printf("Negative numbers: \n");

   for (i = 0; i < N; i++) {
      if (a[i] < 0){
         printf("a[%d] = %d is a negative number. \n", i, a[i]);
      }
   }

   int b[15] = { [4] = 48, [9] = 7, [2] = 29};

   for (i = 0; i < 15; i++) {
      printf("b[%d] = %d \n", i, b[i]);
   }

   return 0;
}


