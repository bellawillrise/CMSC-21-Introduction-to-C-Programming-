/**

1 1 1 1 1
1 1 1 2 2
1 1 3 3 3
1 4 4 4 4
5 5 5 5 5

**/

#include <stdio.h>

int main(void)
{
	int row = 1, column = 1, ones, one;

	while (row <= 5){

		ones = 5 - row;
		one = 1;

		while(one <= ones){
			printf("1 ");
			one++;
		}

		while (column <= row){
			printf("%d ", row);
			column++;
		}

		row++;
		column = 1;
		printf("\n");
	}

	int i =10, j = 1, k = -5;

	printf("%d", !i);

	return 0;
}


