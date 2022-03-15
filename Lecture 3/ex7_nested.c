#include <stdio.h>

int main (void){
	int num1, num2, num3;

	printf("Enter the three numbers to be tested (separated by spaces): ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1>num2)
		if(num1>num3)
			printf("The largest number is num1 = %d.\n", num1);
		else
			printf("The largest number is num3 = %d.\n", num3);
	else
		if(num2>num3)
			printf("The largest number is num2 = %d.\n", num2);
		else
			printf("The largest number is num3 = %d.\n", num3);


	return 0;
}

