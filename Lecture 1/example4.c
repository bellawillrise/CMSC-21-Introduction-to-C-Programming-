#include <stdio.h>

int main(void){

	int length, width, area;

	printf("Enter length:");
	scanf("%d", &length);

	printf("Enter width:");
	scanf("%d", &width);

	area = length*width;
	

	printf("The area of a rectangle w/ length = %d and width = %d is %d.", length, width, area);

}