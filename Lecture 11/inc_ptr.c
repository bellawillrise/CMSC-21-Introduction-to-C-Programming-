#include <stdio.h>

const int MAX = 3;

int main () {

   int  arr[] = {10, 100, 200};
   int  i, *ptr;

   ptr = arr;
	
   for ( i = 0; i < MAX; i++) {

      printf("Address of arr[%d] = %x\n", i, ptr );
      printf("Value of arr[%d] = %d\n", i, *ptr++ );

   }
	
   return 0;
}


