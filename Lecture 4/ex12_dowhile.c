/* Returns the average of a series of numbers */

#include <stdio.h>

int main(void)
{
   float n, sum = 0, count = 0, average;

   printf("This program sums a series of integers.\n");
   printf("Enter integers (0 to terminate): ");

   scanf("%d", &n);
   do{
      sum += n;
      scanf("%d", &n);
      count++;
   }while (n != 0);

   average = sum / count;

   printf("The average is: %d\n", average);

   return 0;
}



