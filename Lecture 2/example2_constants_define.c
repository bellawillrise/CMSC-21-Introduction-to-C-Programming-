#include <stdio.h>

#define LENGTH 5
#define WIDTH 10
#define NEWLINE '\n'


int main(void)
{
	int area;
	
	area = LENGTH*WIDTH;
	printf("The area of a rectangle w/ length = %d and width = %d is %d. %c", LENGTH, WIDTH, area, NEWLINE);
	return 0;
}