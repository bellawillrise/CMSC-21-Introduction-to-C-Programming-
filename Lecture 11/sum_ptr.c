#include <stdio.h>

const int MAX = 3;

void main(){

   int arr[] = {10, 100, 200};
   int i, sum = 0;
   int *ptr;
   
 	printf("\n\n Pointer : Sum of all elements in an array :\n"); 


   ptr = arr;
 
   for (i = 0; i < MAX; i++) {
      sum = sum + *ptr++;
   }
 
   printf(" The sum of array is : %d\n\n", sum);
}





