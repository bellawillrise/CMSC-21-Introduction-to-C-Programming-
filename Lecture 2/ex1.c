#include <stdio.h>

int main(void)
{
   int i, j, k;

   i = 5; j = 3;
   printf("a) %d %d\n", i / j, i % j);

   i = 2; j = 3;
   printf("b) %d\n", (i + 10) % j);

   i = 7; j = 8; k = 9;
   printf("c) %d\n", (i + 10) % k / j);

   i = 1; j = 2; k = 3;
   printf("d) %d\n", (i + 5) % (j + 2) / k);

   return 0;
}