/** Calculating for the Absolute Value of the Number **/

#include <stdio.h>

int main(){
	int num;

	printf("Enter a number: \n");
	scanf("%d", &num);

	/** set a condition to determine whether the number entered (num) is positive or negative **/

	if(num < 0){
		num = -num;
		printf("The number is negative. \n");
	}else{
		printf("The number is positive.\n");
	}

	printf("The absolute value of a number is %d \n", num);
}