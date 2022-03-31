/*

Write a program that sums a series of integers.
Enter integers (0 to terminate): 8 23 71 5 0
The sum is: 107

*/

#include <stdio.h>

int main(void){

	int n, sum = 0;

	while(n != 0){
		printf("Enter a number: \n");
		scanf("%d", &n);
		sum += n;
	}

	printf("The sum is: %d \n", sum);



	return 0;
}