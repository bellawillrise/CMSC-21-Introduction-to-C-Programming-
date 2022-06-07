#include <stdio.h>

int main(){
	/* A valid initialization*/

	int num[3][3]={{5,1,5},
	               {4,6,3},
	               {2,8,7}
	};


	/*

	The above initialization is equivalent to:
	int num[3][3]={{5,1,5},{4,6,3},{2,8,7}};
	int num[3][3]={5,1,5,4,6,3,2,8,7};

	*/

	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}



	/* 
	an example of initialization where the 
	initializer is not large enough to fill a 
	multidimensional array
	*/

	int a[3][3] = {
		{5, 1, 5},
		{4, 6, 3}
	};

	printf("Rows with no initialized values will be \nfilled with zeros. Example:\n");

	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	/*Jagged arrays*/

	int b[3][3]={
		{5,1,5},
	    {4},
	    {2}
	};

	printf("The unfilled elements in a row are initialized to 0. \n");

	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	printf("Designated initalizers of C99\n");

	int c[3][3] = {
		[0][0]=1,
		[1][1]=1
	};

	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

}