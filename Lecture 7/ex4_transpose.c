/* Code to add elements of two matrices*/

#include <stdio.h>

#define ROWS 2
#define COLUMNS 3

int main(void){

	int orig[ROWS][COLUMNS] = {
		{1, 5, 2},
		{3, 6, 4}
	};

	int transpose[COLUMNS][ROWS];

	printf("Original Matrix\n");
	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			printf("%d ",orig[row][col]);
			transpose[col][row] = orig[row][col];
		}
		printf("\n");
	}

	/* Transposed form */
	printf("Transposed Matrix\n");
	for (int col = 0; col < COLUMNS ; col++){
		for (int row = 0; row < ROWS ; row++){
			printf("%d ",transpose[col][row]);
		}
		printf("\n");
	}

	return 0;
}