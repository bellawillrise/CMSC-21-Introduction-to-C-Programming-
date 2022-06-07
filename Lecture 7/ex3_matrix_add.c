/* Code to add elements of two matrices*/

#include <stdio.h>

#define ROWS 2
#define COLUMNS 2

int main(void){

	int matrix1[ROWS][COLUMNS];
	int matrix2[ROWS][COLUMNS];
	int sum[ROWS][COLUMNS];

	/* We prompt the user to enter the elements of the matrix 1*/

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			printf("Enter element for matrix1[%d][%d]: ", row, col);
			scanf("%d", &matrix1[row][col]);
		}
	}

	/* We prompt the user to enter the elements of the matrix 2*/

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			printf("Enter element for matrix2[%d][%d]: ", row, col);
			scanf("%d", &matrix2[row][col]);
		}
	}

	/*We add the elements of matrix 1 and matrix 2, and save it to matrix sum*/

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			sum[row][col] = matrix1[row][col] + matrix2[row][col];
		}
	}

	/* printing of elements of matrix 1*/

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			printf("%d ",matrix1[row][col]);
		}
		printf("\n");
	}

	/* printing of elements of matrix 2*/

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			printf("%d ",matrix2[row][col]);
		}
		printf("\n");
	}

	/* printing of elements the summed matrix*/

	for (int row = 0; row < ROWS ; row++){
		for (int col = 0; col < COLUMNS ; col++ ){
			printf("%d ",sum[row][col]);
		}
		printf("\n");
	}



	return 0;
}