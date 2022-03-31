/**
prints "1 2 3 4 5" 3x using nested loops
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
**/

#include <stdio.h>

int main(void)
{
	int row = 0, column = 0;

	while (row < 5){
		while (column < 5){
			printf("%d ", column+1);
			column++;
		}
		row++;
		column = 0;
		printf("\n");
	}

	return 0;
}

