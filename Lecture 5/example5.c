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
	
	int row, column = 1;

	for (row =1 ; row <= 3; row++){
		while (column <= 3){
			printf("%d %d", row, column);
			column++;
			printf("\n");
		}
		column = 1;
	}

	return 0;
}

