#include <stdio.h>

int main(void)
{
	int row = 0, column = 0;

	while (row < 6){
		while (column < row){
			printf("%d ", column+1);
			column++;
		}
		row++;
		column = 0;
		printf("\n");
	}

	return 0;
}



