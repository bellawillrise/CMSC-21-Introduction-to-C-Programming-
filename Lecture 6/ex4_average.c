/* Reverses a series of numbers */

#include <stdio.h>

#define n_students 5

int main(void){
   float grades[n_students], average, sum;
   int i;

   printf("Enter scores in one line: ");
   scanf("%f %f %f %f %f", &grades[0], &grades[1],&grades[2],&grades[3],&grades[4]);

   sum = grades[0] + grades[1] + grades[2] + grades[3] + grades[4];

   average = sum / n_students;

   printf("%.2f\n", average);

   return 0;
}


