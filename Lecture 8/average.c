/* Computer pairwise averages of three numbers */

#include <stdio.h>

double computeAverage(double, double);

int main(void){

   double x, y, z;

   printf("Enter three numbers: ");
   scanf("%lf%lf%lf", &x, &y, &z);

   printf("Average of %g and %g: %g\n", x, y, computeAverage(x, y));
   printf("Average of %g and %g: %g\n", y, z, computeAverage(y, z));
   printf("Average of %g and %g: %g\n", x, z, computeAverage(x, z));

   return 0;

}

double computeAverage(double a, double b){

	double average = (a + b) / 2;
	return average;

}


