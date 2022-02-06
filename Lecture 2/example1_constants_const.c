#include <stdio.h>


int main(void){

	const int  LENGTH = 10;
	const int  WIDTH = 5;
	const char NEWLINE = '\n';
	
	int area;
	
	area = LENGTH*WIDTH;
	printf("The area of a rectangle w/ length = %d and width = %d is %d. %c", LENGTH, WIDTH, area, NEWLINE);
	return 0;
}


