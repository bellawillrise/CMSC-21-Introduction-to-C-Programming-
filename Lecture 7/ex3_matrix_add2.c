/* Code to add elements of two matrices*/

#include <stdio.h>

#define ROWS 2
#define COLUMNS 2

int main(void){

	int matrix1[ROWS][COLUMNS] = {
		{1, 5},
		{3, 6}
	};
	int matrix2[ROWS][COLUMNS] = {
		{3, 4},
		{2, 1}
	};

	int sum[ROWS][COLUMNS];

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			sum[row][col] = matrix1[row][col] + matrix2[row][col];
		}
	}

	/* printing */

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			printf("%d ",matrix1[row][col]);
		}
		printf("\n");
	}

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			printf("%d ",matrix2[row][col]);
		}
		printf("\n");
	}

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			printf("%d ",sum[row][col]);
		}
		printf("\n");
	}



	return 0;
}