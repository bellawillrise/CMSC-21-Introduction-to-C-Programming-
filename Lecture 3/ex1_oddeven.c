/** Code to determine whether a number is odd or even**/

#include <stdio.h>

int main(){

	int num;

	printf("Enter a number: \n");
	scanf("%d", &num);

	/** Check whether the number is divisible by 2.  **/

	if(num % 2 == 0){
		printf("The number is even. \n");
	}else{
		printf("The number is odd. \n");
	}


	return 0;
}