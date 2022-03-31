/*

Write a code using while loop that computes the sum of first n positive integers.

sum = 1+ 2 + 3 + … + n

Examples:
If n = 6, 	1+2+3+4+5+6,       sum = 21
If n = 19, 	1+2+….+18+19 ,    sum = 190


*/

#include <stdio.h>

int main(void){

	int n, sum = 0;
	int i = 1; //loop control variable

	printf("Enter a number: \n");
	scanf("%d", &n);

	while(i <= n){
		sum += i; //sum = sum + i;
		printf("The sum = %d at iteration %d\n", sum, i);
		i++;
	}

	return 0;
}