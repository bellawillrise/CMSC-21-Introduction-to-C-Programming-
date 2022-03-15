#include <stdio.h>

int main(void){

	int y = 1;
	int x = 0;
	int result;

	if (y != 0)
		if (x != 0)
			result = x / y;
	else
		printf("Error: y is equal to 0 \n");

	return 0;
}

