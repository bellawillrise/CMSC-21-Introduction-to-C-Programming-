#include <stdio.h>

int main(void){

   int i, j, k;
   i = 1;
   j = 2;

   /*The conditional expression i > j ? i : j returns the
   value of either i or j, depending on which one is larger.*/
   
   k = i > j ? i : j;
   printf("The value of k is %d. \n", k);

   k = (i >=0 ? i : 0) + j;
   printf("The value of k is now %d. \n", k);

   return 0;
}





