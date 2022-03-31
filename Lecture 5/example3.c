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

	do{
		do{
			printf("%d %d", row, column);
			column++;
			printf("\n");
		}while (column <= 3);

		row++;
		column = 1;
	
	}while (row <= 3);

	return 0;
}


