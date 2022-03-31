/**prints 
1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3
**/

#include <stdio.h>

int main(void){
	
	int row = 1, column = 1;

	while (row <= 3){
		while (column <= 3){
			printf("%d %d", row, column);
			column++;
			printf("\n");
		}
		row++;
		column = 1;
	}

	return 0;
}

