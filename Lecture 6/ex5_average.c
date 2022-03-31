/* Reverses a series of numbers */

#include <stdio.h>

#define n_students 5

int main(void){
   float grades[n_students], average, sum;
   int i;
   
   for(i = 0; i < n_students; i++){
      printf("Enter grade for Student %d: ", i+1);
      scanf("%f", &grades[i]);
   }

   for(i = 0; i < n_students; i++){
      sum += grades[i];
      printf("at point i = %d, grades[%d] = %.2f, sum = %.2f\n", i+1, i, grades[i], sum);
   }

   average = sum / n_students;

   printf("%.2f\n", average);

   return 0;
}

