/**

1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

**/

#include <stdio.h>

int main(void){
	
	int row, column;

	for (row =0 ; row < 5; row++){
		for (column = 0 ; column < 5; column++){
			printf("%d ", row+1);
		}
		printf("\n");
	}

	return 0;
}


