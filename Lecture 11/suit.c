#include <stdio.h>
 
const int MAX = 4;
 
int main () {

   char *suit[] = {
      "Hearts",
      "Diamonds",
      "Clubs",
      "Spades"
   };
   
   int i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Suits [%d] = %s\n", i, suit[i] );
   }
   
   return 0;
}
