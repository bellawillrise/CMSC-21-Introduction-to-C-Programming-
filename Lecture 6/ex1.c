/* Returns the average of a set of grades */

#include <stdio.h>

int main(void)
{
   float grade, sum = 0, average;
   int num_students, count = 0;

   printf("Enter number of students: \n");
   scanf("%d", &num_students);
   
   while (count < num_students){
      printf("Enter grade of student %d :", count + 1);
      scanf("%f", &grade);
      sum += grade;
      count++;
   }

   average = sum / num_students;

   printf("The average is: %f\n", average);

   return 0;
}



