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
	
	int row, column;

	for (row =1 ; row <= 3; row++){
		for (column =1 ; column <= 3; column++){
			printf("%d %d", row, column);
			printf("\n");
		}
		column = 1;
	}

	return 0;
}

